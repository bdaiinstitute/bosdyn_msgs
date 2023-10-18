// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TargetOneOfTarget.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/target_one_of_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetOneOfTarget_target_choice
{
public:
  explicit Init_TargetOneOfTarget_target_choice(::bosdyn_msgs::msg::TargetOneOfTarget & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TargetOneOfTarget target_choice(::bosdyn_msgs::msg::TargetOneOfTarget::_target_choice_type arg)
  {
    msg_.target_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetOneOfTarget msg_;
};

class Init_TargetOneOfTarget_navigate_route
{
public:
  explicit Init_TargetOneOfTarget_navigate_route(::bosdyn_msgs::msg::TargetOneOfTarget & msg)
  : msg_(msg)
  {}
  Init_TargetOneOfTarget_target_choice navigate_route(::bosdyn_msgs::msg::TargetOneOfTarget::_navigate_route_type arg)
  {
    msg_.navigate_route = std::move(arg);
    return Init_TargetOneOfTarget_target_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetOneOfTarget msg_;
};

class Init_TargetOneOfTarget_navigate_to
{
public:
  Init_TargetOneOfTarget_navigate_to()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetOneOfTarget_navigate_route navigate_to(::bosdyn_msgs::msg::TargetOneOfTarget::_navigate_to_type arg)
  {
    msg_.navigate_to = std::move(arg);
    return Init_TargetOneOfTarget_navigate_route(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetOneOfTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TargetOneOfTarget>()
{
  return bosdyn_msgs::msg::builder::Init_TargetOneOfTarget_navigate_to();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__BUILDER_HPP_
