// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PoseBounds.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POSE_BOUNDS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POSE_BOUNDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/pose_bounds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseBounds_yaw_bounds
{
public:
  explicit Init_PoseBounds_yaw_bounds(::bosdyn_msgs::msg::PoseBounds & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PoseBounds yaw_bounds(::bosdyn_msgs::msg::PoseBounds::_yaw_bounds_type arg)
  {
    msg_.yaw_bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PoseBounds msg_;
};

class Init_PoseBounds_z_bounds
{
public:
  explicit Init_PoseBounds_z_bounds(::bosdyn_msgs::msg::PoseBounds & msg)
  : msg_(msg)
  {}
  Init_PoseBounds_yaw_bounds z_bounds(::bosdyn_msgs::msg::PoseBounds::_z_bounds_type arg)
  {
    msg_.z_bounds = std::move(arg);
    return Init_PoseBounds_yaw_bounds(msg_);
  }

private:
  ::bosdyn_msgs::msg::PoseBounds msg_;
};

class Init_PoseBounds_y_bounds
{
public:
  explicit Init_PoseBounds_y_bounds(::bosdyn_msgs::msg::PoseBounds & msg)
  : msg_(msg)
  {}
  Init_PoseBounds_z_bounds y_bounds(::bosdyn_msgs::msg::PoseBounds::_y_bounds_type arg)
  {
    msg_.y_bounds = std::move(arg);
    return Init_PoseBounds_z_bounds(msg_);
  }

private:
  ::bosdyn_msgs::msg::PoseBounds msg_;
};

class Init_PoseBounds_x_bounds
{
public:
  Init_PoseBounds_x_bounds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseBounds_y_bounds x_bounds(::bosdyn_msgs::msg::PoseBounds::_x_bounds_type arg)
  {
    msg_.x_bounds = std::move(arg);
    return Init_PoseBounds_y_bounds(msg_);
  }

private:
  ::bosdyn_msgs::msg::PoseBounds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PoseBounds>()
{
  return bosdyn_msgs::msg::builder::Init_PoseBounds_x_bounds();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POSE_BOUNDS__BUILDER_HPP_
