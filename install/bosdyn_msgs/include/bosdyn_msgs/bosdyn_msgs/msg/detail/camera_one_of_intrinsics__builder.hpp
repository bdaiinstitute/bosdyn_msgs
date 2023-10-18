// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CameraOneOfIntrinsics.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_ONE_OF_INTRINSICS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_ONE_OF_INTRINSICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/camera_one_of_intrinsics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraOneOfIntrinsics_intrinsics_choice
{
public:
  explicit Init_CameraOneOfIntrinsics_intrinsics_choice(::bosdyn_msgs::msg::CameraOneOfIntrinsics & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CameraOneOfIntrinsics intrinsics_choice(::bosdyn_msgs::msg::CameraOneOfIntrinsics::_intrinsics_choice_type arg)
  {
    msg_.intrinsics_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraOneOfIntrinsics msg_;
};

class Init_CameraOneOfIntrinsics_spherical
{
public:
  explicit Init_CameraOneOfIntrinsics_spherical(::bosdyn_msgs::msg::CameraOneOfIntrinsics & msg)
  : msg_(msg)
  {}
  Init_CameraOneOfIntrinsics_intrinsics_choice spherical(::bosdyn_msgs::msg::CameraOneOfIntrinsics::_spherical_type arg)
  {
    msg_.spherical = std::move(arg);
    return Init_CameraOneOfIntrinsics_intrinsics_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraOneOfIntrinsics msg_;
};

class Init_CameraOneOfIntrinsics_pinhole
{
public:
  Init_CameraOneOfIntrinsics_pinhole()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraOneOfIntrinsics_spherical pinhole(::bosdyn_msgs::msg::CameraOneOfIntrinsics::_pinhole_type arg)
  {
    msg_.pinhole = std::move(arg);
    return Init_CameraOneOfIntrinsics_spherical(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraOneOfIntrinsics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CameraOneOfIntrinsics>()
{
  return bosdyn_msgs::msg::builder::Init_CameraOneOfIntrinsics_pinhole();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_ONE_OF_INTRINSICS__BUILDER_HPP_
