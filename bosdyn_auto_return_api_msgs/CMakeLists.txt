# Copyright (c) 2023 Boston Dynamics AI Institute LLC. All rights reserved.
cmake_minimum_required(VERSION 3.8)
project(bosdyn_auto_return_api_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(proto2ros REQUIRED)
find_package(bosdyn_api_msgs REQUIRED)

include(FetchContent)
FetchContent_Declare(
  spotsdk
  GIT_REPOSITORY https://github.com/boston-dynamics/spot-sdk.git
  GIT_TAG        6a03ae12056a74e65fd9715128e0c40762dfa7ba  # v3.3.2
)
FetchContent_Populate(spotsdk)

set(${PROJECT_NAME}_PROTO_DIR "${spotsdk_SOURCE_DIR}/protos")
file(GLOB ${PROJECT_NAME}_PROTOS
  "${${PROJECT_NAME}_PROTO_DIR}/bosdyn/api/auto_return/*.proto"
)

proto2ros_vendor_package(${PROJECT_NAME}
  PROTOS ${${PROJECT_NAME}_PROTOS}
  IMPORT_DIRS ${${PROJECT_NAME}_PROTO_DIR}
  CONFIG_OVERLAYS config/overlay.yaml
  ROS_DEPENDENCIES bosdyn_api_msgs
)

ament_package()
