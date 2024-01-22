# Copyright (c) 2024 Boston Dynamics AI Institute LLC. All rights reserved.
cmake_minimum_required(VERSION 3.12)
project(bosdyn_cmake_module)

find_package(ament_cmake REQUIRED)

install(
  DIRECTORY cmake
  DESTINATION share/${PROJECT_NAME}
)

ament_package(CONFIG_EXTRAS "bosdyn_cmake_module-extras.cmake")
