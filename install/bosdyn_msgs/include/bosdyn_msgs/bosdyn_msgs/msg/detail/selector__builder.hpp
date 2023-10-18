// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Selector.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SELECTOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SELECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/selector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Selector_children
{
public:
  explicit Init_Selector_children(::bosdyn_msgs::msg::Selector & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Selector children(::bosdyn_msgs::msg::Selector::_children_type arg)
  {
    msg_.children = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Selector msg_;
};

class Init_Selector_always_restart
{
public:
  Init_Selector_always_restart()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Selector_children always_restart(::bosdyn_msgs::msg::Selector::_always_restart_type arg)
  {
    msg_.always_restart = std::move(arg);
    return Init_Selector_children(msg_);
  }

private:
  ::bosdyn_msgs::msg::Selector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Selector>()
{
  return bosdyn_msgs::msg::builder::Init_Selector_always_restart();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SELECTOR__BUILDER_HPP_
