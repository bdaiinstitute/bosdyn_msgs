# Copyright (c) 2024 Boston Dynamics AI Institute LLC. All rights reserved

MAKEFILE_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

SHELL:=/bin/bash
.SHELLFLAGS:=-e -c

OS_NAME:=ubuntu
OS_VERSION:=jammy
DISTRO:=humble

ARCH ?= unknown
VERSION ?= unknown

NUM_JOBS ?= $(or $(subst -j,,$(filter -j%,$(subst -j ,-j$(shell nproc),$(MAKEFLAGS) ))),1)

DEFAULT_ROSDEP_PATH:=/etc/ros/rosdep

TOOLING_DIR:=$(MAKEFILE_DIR)/.tooling
SCRIPTS_DIR:=$(TOOLING_DIR)/scripts
DOCKER_DIR:=$(TOOLING_DIR)/docker
PIP_DIR:=$(TOOLING_DIR)/pip

SOURCE_DIR:=$(shell pwd)
BUILD_DIR:=$(SOURCE_DIR)/.build

all: amd64 arm64

.NOTPARALLEL: all

amd64: ros-$(DISTRO)-bosdyn_msgs-$(OS_VERSION)_amd64.run

arm64: ros-$(DISTRO)-bosdyn_msgs-$(OS_VERSION)_arm64.run

native: ALIAS ?= ros-$(DISTRO)-bosdyn_msgs_$(VERSION)-$(OS_VERSION)_$(ARCH).run
native: ros-$(DISTRO)-bosdyn_msgs-$(OS_VERSION).run

ros-$(DISTRO)-%-$(OS_VERSION)_amd64.run: FORCE
	docker build -t amd64-bundler-image --platform linux/amd64 -f $(DOCKER_DIR)/amd64/Dockerfile $(MAKEFILE_DIR)
	docker run --rm -v $(MAKEFILE_DIR):/workspace:cached -w /workspace --platform linux/amd64 $$(tty -s && echo "-it") amd64-bundler-image \
		make ros-$(DISTRO)-$*-$(OS_VERSION).run ALIAS=ros-$(DISTRO)-$*_$(VERSION)-$(OS_VERSION)_amd64.run VERSION=$(VERSION) ARCH=amd64 NUM_JOBS=$(NUM_JOBS)

ros-$(DISTRO)-%-$(OS_VERSION)_arm64.run: FORCE  # extremely slow in QEMU
	docker build -t arm64-bundler-image --platform linux/arm64/v8 -f $(DOCKER_DIR)/arm64/Dockerfile $(MAKEFILE_DIR)
	docker run --rm -v $(MAKEFILE_DIR):/workspace:cached -w /workspace --platform linux/arm64/v8 $$(tty -s && echo "-it") arm64-bundler-image \
		make ros-$(DISTRO)-$*-$(OS_VERSION).run ALIAS=ros-$(DISTRO)-$*_$(VERSION)-$(OS_VERSION)_arm64.run VERSION=$(VERSION) ARCH=arm64 NUM_JOBS=$(NUM_JOBS)

ros-$(DISTRO)-%-$(OS_VERSION).run: FORCE
	mkdir -p $(BUILD_DIR)/$(ALIAS)/{bloom,rosdep} $(BUILD_DIR)/$(ALIAS)/out/{pip,apt,rosdep}
	rosdep update
	rosdep keys --from-paths $(SOURCE_DIR) | grep -e '-pip$$' > $(BUILD_DIR)/$(ALIAS)/rosdep/skip.txt
	[ -f $(SOURCE_DIR)/rosdep-skip.txt ] && cat < $(SOURCE_DIR)/rosdep-skip.txt >> $(BUILD_DIR)/$(ALIAS)/rosdep/skip.txt
	rosdep resolve $$(cat $(BUILD_DIR)/$(ALIAS)/rosdep/skip.txt | grep pip) | grep -v \# | tr ' ' '\n' > $(BUILD_DIR)/$(ALIAS)/out/pip/requirements.txt
	touch $(BUILD_DIR)/$(ALIAS)/out/pip/constraint.txt
	[ -f $(SOURCE_DIR)/pip-constraint.txt ] && cp -f $(SOURCE_DIR)/pip-constraint.txt $(BUILD_DIR)/$(ALIAS)/out/pip/constraint.txt
	if [ -s $(BUILD_DIR)/$(ALIAS)/out/pip/requirements.txt ]; then \
		pip install -c $(BUILD_DIR)/$(ALIAS)/out/pip/constraint.txt -r $(BUILD_DIR)/$(ALIAS)/out/pip/requirements.txt; \
	fi
	if [ -f $(SOURCE_DIR)/${ARCH}-dpkg.txt ]; then \
		cp -f $(SOURCE_DIR)/${ARCH}-dpkg.txt $(BUILD_DIR)/$(ALIAS)/out/apt/files.txt; \
		for url in $$(cat $(SOURCE_DIR)/${ARCH}-dpkg.txt); do wget -P /tmp $$url && sudo apt install -y /tmp/$$(basename $$url); done; \
	fi
	$(SCRIPTS_DIR)/rosdep2null -o $(BUILD_DIR)/$(ALIAS)/rosdep -v $(OS_NAME) \
		$$(colcon --log-base /dev/null list -t -n --packages-up-to $*) $$(cat $(BUILD_DIR)/$(ALIAS)/rosdep/skip.txt)
	ROSDEP_SOURCE_PATH=$(BUILD_DIR)/$(ALIAS)/rosdep/sources.list.d:$${ROSDEP_SOURCE_PATH:-$(DEFAULT_ROSDEP_PATH)/sources.list.d} rosdep update
	sudo apt update
	colcon --log-base /dev/null list -t --packages-up-to $* | tr -d '\r' | while read name path ignored; do \
		cp -rf $$path $(BUILD_DIR)/$(ALIAS)/bloom/.; \
		pushd $(BUILD_DIR)/$(ALIAS)/bloom/$$(basename $$path); \
		bloom-generate rosdebian --os-name $(OS_NAME) --os-version $(OS_VERSION) --ros-distro $(DISTRO); \
		sed -i 's/dh_auto_build$$/true  # no dh_auto_build, builds on install/g' debian/rules; \
		sed -i 's/dh_auto_install$$/dh_auto_install --parallel/g' debian/rules; \
		sudo apt-get build-dep -y .; \
		DEB_BUILD_OPTIONS="nocheck notest parallel=$(NUM_JOBS)" dpkg-buildpackage -b -us -uc; \
		popd; \
		sudo apt install -y $(BUILD_DIR)/$(ALIAS)/bloom/ros-$(DISTRO)-$${name//_/-}*.deb; \
	done
	sudo apt remove -y $$(ls $(BUILD_DIR)/$(ALIAS)/bloom/*.deb | xargs -I{} dpkg -f {} Package)
	cp $(BUILD_DIR)/$(ALIAS)/bloom/*deb $(BUILD_DIR)/$(ALIAS)/out/apt/.
	for path in $(BUILD_DIR)/$(ALIAS)/out/apt/*.deb; do \
		echo "./$$(basename $$path)"; \
	done > $(BUILD_DIR)/$(ALIAS)/out/apt/packages.txt
	$(SCRIPTS_DIR)/rosdep2null -o $(BUILD_DIR)/$(ALIAS)/out/rosdep -i $(DEFAULT_ROSDEP_PATH) -v $(OS_NAME) \
		-s $*-bundle $$(colcon --log-base /dev/null list -t -n --packages-up-to $*) $$(cat $(SOURCE_DIR)/rosdep-skip.txt 2>&- || true)
	cp $(SCRIPTS_DIR)/install-bundle $(BUILD_DIR)/$(ALIAS)/out/install
	chmod a+w $(BUILD_DIR) && chmod -R a+w $(BUILD_DIR)/$(ALIAS)
	makeself --keep-umask $(BUILD_DIR)/$(ALIAS)/out $(ALIAS) "$*-bundle installer" ./install
	chmod a+w $(ALIAS)

clean: FORCE
	if command -v rosdep &> /dev/null; then rosdep update; fi
	rm -rf $(BUILD_DIR)

.PHONY: FORCE
FORCE:
