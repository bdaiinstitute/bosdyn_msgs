// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SE2VelocityLimit.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_LIMIT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/se2_velocity_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SE2VelocityLimit_min_vel_is_set
{
public:
  explicit Init_SE2VelocityLimit_min_vel_is_set(::bosdyn_msgs::msg::SE2VelocityLimit & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SE2VelocityLimit min_vel_is_set(::bosdyn_msgs::msg::SE2VelocityLimit::_min_vel_is_set_type arg)
  {
    msg_.min_vel_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityLimit msg_;
};

class Init_SE2VelocityLimit_min_vel
{
public:
  explicit Init_SE2VelocityLimit_min_vel(::bosdyn_msgs::msg::SE2VelocityLimit & msg)
  : msg_(msg)
  {}
  Init_SE2VelocityLimit_min_vel_is_set min_vel(::bosdyn_msgs::msg::SE2VelocityLimit::_min_vel_type arg)
  {
    msg_.min_vel = std::move(arg);
    return Init_SE2VelocityLimit_min_vel_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityLimit msg_;
};

class Init_SE2VelocityLimit_max_vel_is_set
{
public:
  explicit Init_SE2VelocityLimit_max_vel_is_set(::bosdyn_msgs::msg::SE2VelocityLimit & msg)
  : msg_(msg)
  {}
  Init_SE2VelocityLimit_min_vel max_vel_is_set(::bosdyn_msgs::msg::SE2VelocityLimit::_max_vel_is_set_type arg)
  {
    msg_.max_vel_is_set = std::move(arg);
    return Init_SE2VelocityLimit_min_vel(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityLimit msg_;
};

class Init_SE2VelocityLimit_max_vel
{
public:
  Init_SE2VelocityLimit_max_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SE2VelocityLimit_max_vel_is_set max_vel(::bosdyn_msgs::msg::SE2VelocityLimit::_max_vel_type arg)
  {
    msg_.max_vel = std::move(arg);
    return Init_SE2VelocityLimit_max_vel_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityLimit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SE2VelocityLimit>()
{
  return bosdyn_msgs::msg::builder::Init_SE2VelocityLimit_max_vel();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_LIMIT__BUILDER_HPP_
