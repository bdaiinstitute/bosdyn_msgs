# Copyright (c) 2023 Boston Dynamics AI Institute LLC. All rights reserved.
cmake_minimum_required(VERSION 3.12)
project(bosdyn_msgs)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
ament_python_install_package(${PROJECT_NAME})

ament_package()
