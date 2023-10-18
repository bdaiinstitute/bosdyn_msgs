// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Camera_intrinsics
{
public:
  explicit Init_Camera_intrinsics(::bosdyn_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Camera intrinsics(::bosdyn_msgs::msg::Camera::_intrinsics_type arg)
  {
    msg_.intrinsics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Camera msg_;
};

class Init_Camera_base_tform_sensor_is_set
{
public:
  explicit Init_Camera_base_tform_sensor_is_set(::bosdyn_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_intrinsics base_tform_sensor_is_set(::bosdyn_msgs::msg::Camera::_base_tform_sensor_is_set_type arg)
  {
    msg_.base_tform_sensor_is_set = std::move(arg);
    return Init_Camera_intrinsics(msg_);
  }

private:
  ::bosdyn_msgs::msg::Camera msg_;
};

class Init_Camera_base_tform_sensor
{
public:
  explicit Init_Camera_base_tform_sensor(::bosdyn_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_base_tform_sensor_is_set base_tform_sensor(::bosdyn_msgs::msg::Camera::_base_tform_sensor_type arg)
  {
    msg_.base_tform_sensor = std::move(arg);
    return Init_Camera_base_tform_sensor_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Camera msg_;
};

class Init_Camera_base_frame_name
{
public:
  explicit Init_Camera_base_frame_name(::bosdyn_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_base_tform_sensor base_frame_name(::bosdyn_msgs::msg::Camera::_base_frame_name_type arg)
  {
    msg_.base_frame_name = std::move(arg);
    return Init_Camera_base_tform_sensor(msg_);
  }

private:
  ::bosdyn_msgs::msg::Camera msg_;
};

class Init_Camera_resolution_is_set
{
public:
  explicit Init_Camera_resolution_is_set(::bosdyn_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_base_frame_name resolution_is_set(::bosdyn_msgs::msg::Camera::_resolution_is_set_type arg)
  {
    msg_.resolution_is_set = std::move(arg);
    return Init_Camera_base_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::Camera msg_;
};

class Init_Camera_resolution
{
public:
  explicit Init_Camera_resolution(::bosdyn_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_resolution_is_set resolution(::bosdyn_msgs::msg::Camera::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_Camera_resolution_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Camera msg_;
};

class Init_Camera_name
{
public:
  Init_Camera_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Camera_resolution name(::bosdyn_msgs::msg::Camera::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Camera_resolution(msg_);
  }

private:
  ::bosdyn_msgs::msg::Camera msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Camera>()
{
  return bosdyn_msgs::msg::builder::Init_Camera_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_
