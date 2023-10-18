// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SE3Velocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE3_VELOCITY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE3_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/se3_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SE3Velocity_angular_is_set
{
public:
  explicit Init_SE3Velocity_angular_is_set(::bosdyn_msgs::msg::SE3Velocity & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SE3Velocity angular_is_set(::bosdyn_msgs::msg::SE3Velocity::_angular_is_set_type arg)
  {
    msg_.angular_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3Velocity msg_;
};

class Init_SE3Velocity_angular
{
public:
  explicit Init_SE3Velocity_angular(::bosdyn_msgs::msg::SE3Velocity & msg)
  : msg_(msg)
  {}
  Init_SE3Velocity_angular_is_set angular(::bosdyn_msgs::msg::SE3Velocity::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return Init_SE3Velocity_angular_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3Velocity msg_;
};

class Init_SE3Velocity_linear_is_set
{
public:
  explicit Init_SE3Velocity_linear_is_set(::bosdyn_msgs::msg::SE3Velocity & msg)
  : msg_(msg)
  {}
  Init_SE3Velocity_angular linear_is_set(::bosdyn_msgs::msg::SE3Velocity::_linear_is_set_type arg)
  {
    msg_.linear_is_set = std::move(arg);
    return Init_SE3Velocity_angular(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3Velocity msg_;
};

class Init_SE3Velocity_linear
{
public:
  Init_SE3Velocity_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SE3Velocity_linear_is_set linear(::bosdyn_msgs::msg::SE3Velocity::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_SE3Velocity_linear_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3Velocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SE3Velocity>()
{
  return bosdyn_msgs::msg::builder::Init_SE3Velocity_linear();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE3_VELOCITY__BUILDER_HPP_
