#!/usr/bin/env bash

ARCH=amd64
ROS_DISTRO=humble
BASEIMAGE=ros:humble-ros-base-jammy

# Set CWD to the root of the git repo
GIT_ROOT=$(git rev-parse --show-toplevel)
cd $GIT_ROOT

# 
docker build -t bosdyn_msgs:${ARCH}_${ROS_DISTRO} -f docker/common/Dockerfile \
	--build-arg ARCH=${ARCH} \
	--build-arg ROS_DISTRO=${ROS_DISTRO} \
	--build-arg BASEIMAGE=${BASEIMAGE}
mkdir -p output
docker run -t bosdyn_msgs:${ARCH}_${ROS_DISTRO} --volume output:/bosdyn_msgs/output .
