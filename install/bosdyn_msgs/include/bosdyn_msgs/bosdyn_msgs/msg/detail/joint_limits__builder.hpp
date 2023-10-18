// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__JOINT_LIMITS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__JOINT_LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/joint_limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_JointLimits_hx
{
public:
  explicit Init_JointLimits_hx(::bosdyn_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::JointLimits hx(::bosdyn_msgs::msg::JointLimits::_hx_type arg)
  {
    msg_.hx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_hy
{
public:
  explicit Init_JointLimits_hy(::bosdyn_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_hx hy(::bosdyn_msgs::msg::JointLimits::_hy_type arg)
  {
    msg_.hy = std::move(arg);
    return Init_JointLimits_hx(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_label
{
public:
  Init_JointLimits_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointLimits_hy label(::bosdyn_msgs::msg::JointLimits::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_JointLimits_hy(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointLimits msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::JointLimits>()
{
  return bosdyn_msgs::msg::builder::Init_JointLimits_label();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__JOINT_LIMITS__BUILDER_HPP_
