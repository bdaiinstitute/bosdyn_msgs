# Copyright (c) 2023 Boston Dynamics AI Institute LLC. All rights reserved.
cmake_minimum_required(VERSION 3.8)
project(bosdyn_spot_cam_api_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(bosdyn_api_msgs REQUIRED)
find_package(proto2ros REQUIRED)

find_package(bosdyn_cmake_module REQUIRED)

fetch_spot_sdk(spotsdk)
set(${PROJECT_NAME}_PROTO_DIR "${spotsdk_SOURCE_DIR}/protos")
file(GLOB ${PROJECT_NAME}_PROTOS "${${PROJECT_NAME}_PROTO_DIR}/bosdyn/api/spot_cam/*.proto")

proto2ros_vendor_package(${PROJECT_NAME}
  PROTOS ${${PROJECT_NAME}_PROTOS}
  IMPORT_DIRS ${${PROJECT_NAME}_PROTO_DIR}
  CONFIG_OVERLAYS config/overlay.yaml
  ROS_DEPENDENCIES bosdyn_api_msgs
)

ament_package()
