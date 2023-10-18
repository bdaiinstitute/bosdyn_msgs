// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Switch.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SWITCH__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SWITCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/switch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Switch_default_child_is_set
{
public:
  explicit Init_Switch_default_child_is_set(::bosdyn_msgs::msg::Switch & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Switch default_child_is_set(::bosdyn_msgs::msg::Switch::_default_child_is_set_type arg)
  {
    msg_.default_child_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Switch msg_;
};

class Init_Switch_default_child
{
public:
  explicit Init_Switch_default_child(::bosdyn_msgs::msg::Switch & msg)
  : msg_(msg)
  {}
  Init_Switch_default_child_is_set default_child(::bosdyn_msgs::msg::Switch::_default_child_type arg)
  {
    msg_.default_child = std::move(arg);
    return Init_Switch_default_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Switch msg_;
};

class Init_Switch_int_children
{
public:
  explicit Init_Switch_int_children(::bosdyn_msgs::msg::Switch & msg)
  : msg_(msg)
  {}
  Init_Switch_default_child int_children(::bosdyn_msgs::msg::Switch::_int_children_type arg)
  {
    msg_.int_children = std::move(arg);
    return Init_Switch_default_child(msg_);
  }

private:
  ::bosdyn_msgs::msg::Switch msg_;
};

class Init_Switch_always_restart
{
public:
  explicit Init_Switch_always_restart(::bosdyn_msgs::msg::Switch & msg)
  : msg_(msg)
  {}
  Init_Switch_int_children always_restart(::bosdyn_msgs::msg::Switch::_always_restart_type arg)
  {
    msg_.always_restart = std::move(arg);
    return Init_Switch_int_children(msg_);
  }

private:
  ::bosdyn_msgs::msg::Switch msg_;
};

class Init_Switch_pivot_value_is_set
{
public:
  explicit Init_Switch_pivot_value_is_set(::bosdyn_msgs::msg::Switch & msg)
  : msg_(msg)
  {}
  Init_Switch_always_restart pivot_value_is_set(::bosdyn_msgs::msg::Switch::_pivot_value_is_set_type arg)
  {
    msg_.pivot_value_is_set = std::move(arg);
    return Init_Switch_always_restart(msg_);
  }

private:
  ::bosdyn_msgs::msg::Switch msg_;
};

class Init_Switch_pivot_value
{
public:
  Init_Switch_pivot_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Switch_pivot_value_is_set pivot_value(::bosdyn_msgs::msg::Switch::_pivot_value_type arg)
  {
    msg_.pivot_value = std::move(arg);
    return Init_Switch_pivot_value_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Switch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Switch>()
{
  return bosdyn_msgs::msg::builder::Init_Switch_pivot_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SWITCH__BUILDER_HPP_
