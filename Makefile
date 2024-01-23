# Copyright (c) 2024 Boston Dynamics AI Institute LLC. All rights reserved

MAKEFILE_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

SHELL:=/bin/bash
.SHELLFLAGS:=-e -c

OS_NAME:=ubuntu
OS_VERSION:=jammy
DISTRO:=humble

VERSION ?= unknown

NUM_JOBS ?= $(or $(subst -j,,$(filter -j%,$(subst -j ,-j$(shell nproc),$(MAKEFLAGS)))),1)

DEFAULT_ROSDEP_PATH:=/etc/ros/rosdep

TOOLING_DIR:=$(MAKEFILE_DIR)/.tooling
SCRIPTS_DIR:=$(TOOLING_DIR)/scripts
DOCKER_DIR:=$(TOOLING_DIR)/docker
PIP_DIR:=$(TOOLING_DIR)/pip

SOURCE_DIR:=$(shell pwd)
BUILD_DIR:=$(SOURCE_DIR)/.build

all: ros-$(DISTRO)-bosdyn_msgs-$(OS_VERSION)_amd64.run ros-$(DISTRO)-bosdyn_msgs-$(OS_VERSION)_arm64.run

.NOTPARALLEL: all

ros-$(DISTRO)-%-$(OS_VERSION)_amd64.run: FORCE
	docker build -t amd64-bundler-image --platform linux/amd64 -f $(DOCKER_DIR)/amd64/Dockerfile $(MAKEFILE_DIR)
	docker run --rm -v $(MAKEFILE_DIR):/workspace:cached -w /workspace --platform linux/amd64 -it amd64-bundler-image \
		make ros-$(DISTRO)-$*-$(OS_VERSION)_native.run AS=ros-$(DISTRO)-$*_$(VERSION)-$(OS_VERSION)_amd64.run NUM_JOBS=$(NUM_JOBS)

ros-$(DISTRO)-%-$(OS_VERSION)_arm64.run: FORCE  # extremely slow
	docker build -t arm64-bundler-image --platform linux/arm64/v8 -f $(DOCKER_DIR)/arm64/Dockerfile $(MAKEFILE_DIR)
	docker run --rm -v $(MAKEFILE_DIR):/workspace:cached -w /workspace --platform linux/arm64/v8 -it arm64-bundler-image \
		make ros-$(DISTRO)-$*-$(OS_VERSION)_native.run AS=ros-$(DISTRO)-$*_$(VERSION)-$(OS_VERSION)_arm64.run NUM_JOBS=$(NUM_JOBS)

ros-$(DISTRO)-%-$(OS_VERSION)_native.run: FORCE
	$(eval AS ?= ros-$(DISTRO)-$*_$(VERSION)-$(OS_VERSION)_native.run)
	mkdir -p $(BUILD_DIR)/$(AS)/{bloom,rosdep} $(BUILD_DIR)/$(AS)/out/{pip,apt,rosdep}
	rosdep update
	rosdep keys --from-paths $(SOURCE_DIR) | grep -e '-pip$$' > $(BUILD_DIR)/$(AS)/rosdep/skip.txt
	rosdep resolve $$(cat $(BUILD_DIR)/$(AS)/rosdep/skip.txt | grep pip) | grep -v \# | tr ' ' '\n' > $(BUILD_DIR)/$(AS)/out/pip/requirements.txt
	touch $(BUILD_DIR)/$(AS)/out/pip/constraint.txt
	[ -f $(SOURCE_DIR)/pip-constraint.txt ] && cp -f $(SOURCE_DIR)/pip-constraint.txt $(BUILD_DIR)/$(AS)/out/pip/constraint.txt
	if [ -s $(BUILD_DIR)/$(AS)/out/pip/requirements.txt ]; then \
		pip install -c $(BUILD_DIR)/$(AS)/out/pip/constraint.txt -r $(BUILD_DIR)/$(AS)/out/pip/requirements.txt; \
	fi
	$(SCRIPTS_DIR)/rosdep2null -o $(BUILD_DIR)/$(AS)/rosdep -v $(OS_NAME) \
		$$(colcon --log-base /dev/null list -t -n --packages-up-to $*) $$(cat $(BUILD_DIR)/$(AS)/rosdep/skip.txt)
	ROSDEP_SOURCE_PATH=$(BUILD_DIR)/$(AS)/rosdep/sources.list.d:$${ROSDEP_SOURCE_PATH:-$(DEFAULT_ROSDEP_PATH)/sources.list.d} rosdep update
	sudo apt update
	colcon --log-base /dev/null list -t --packages-up-to $* | tr -d '\r' | while read name path ignored; do \
		cp -rf $$path $(BUILD_DIR)/$(AS)/bloom/.; \
		pushd $(BUILD_DIR)/$(AS)/bloom/$$(basename $$path); \
		bloom-generate rosdebian --os-name $(OS_NAME) --os-version $(OS_VERSION) --ros-distro $(DISTRO); \
		sed -i 's/dh_auto_build$$/true  # no dh_auto_build, builds on install/g' debian/rules; \
		sed -i 's/dh_auto_install$$/dh_auto_install --parallel/g' debian/rules; \
		DEB_BUILD_OPTIONS="nocheck notest parallel=$(NUM_JOBS)" debian/rules binary; \
		popd; \
		sudo apt install -y $(BUILD_DIR)/$(AS)/bloom/ros-$(DISTRO)-$${name//_/-}*.deb; \
	done
	sudo apt remove -y $$(ls $(BUILD_DIR)/$(AS)/bloom/*.deb | xargs -I{} dpkg -f {} Package)
	cp $(BUILD_DIR)/$(AS)/bloom/*deb $(BUILD_DIR)/$(AS)/out/apt/.
	for path in $(BUILD_DIR)/$(AS)/out/apt/*.deb; do \
		echo "./$$(basename $$path)"; \
	done > $(BUILD_DIR)/$(AS)/out/apt/packages.txt
	$(SCRIPTS_DIR)/rosdep2null -o $(BUILD_DIR)/$(AS)/out/rosdep -i $(DEFAULT_ROSDEP_PATH) -v $(OS_NAME) \
		-s $*-bundle $$(colcon --log-base /dev/null list -t -n --packages-up-to $*)
	cp $(SCRIPTS_DIR)/install-bundle $(BUILD_DIR)/$(AS)/out/install
	chmod a+w $(BUILD_DIR) && chmod -R a+w $(BUILD_DIR)/$(AS)
	makeself $(BUILD_DIR)/$(AS)/out $(AS) "$*-bundle installer" ./install
	chmod a+w $(AS)

clean: FORCE
	if command -v rosdep &> /dev/null; then rosdep update; fi
	rm -rf $(BUILD_DIR)

.PHONY: FORCE
FORCE:
