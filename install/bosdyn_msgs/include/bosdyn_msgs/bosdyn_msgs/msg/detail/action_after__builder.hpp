// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionAfter.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_after__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionAfter_after_is_set
{
public:
  explicit Init_ActionAfter_after_is_set(::bosdyn_msgs::msg::ActionAfter & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionAfter after_is_set(::bosdyn_msgs::msg::ActionAfter::_after_is_set_type arg)
  {
    msg_.after_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfter msg_;
};

class Init_ActionAfter_after
{
public:
  explicit Init_ActionAfter_after(::bosdyn_msgs::msg::ActionAfter & msg)
  : msg_(msg)
  {}
  Init_ActionAfter_after_is_set after(::bosdyn_msgs::msg::ActionAfter::_after_type arg)
  {
    msg_.after = std::move(arg);
    return Init_ActionAfter_after_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfter msg_;
};

class Init_ActionAfter_action
{
public:
  Init_ActionAfter_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionAfter_after action(::bosdyn_msgs::msg::ActionAfter::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_ActionAfter_after(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionAfter>()
{
  return bosdyn_msgs::msg::builder::Init_ActionAfter_action();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER__BUILDER_HPP_
