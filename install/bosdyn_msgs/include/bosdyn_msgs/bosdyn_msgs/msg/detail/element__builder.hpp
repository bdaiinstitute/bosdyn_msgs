// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Element.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ELEMENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ELEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/element__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Element_id
{
public:
  explicit Init_Element_id(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Element id(::bosdyn_msgs::msg::Element::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_action_duration_is_set
{
public:
  explicit Init_Element_action_duration_is_set(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_id action_duration_is_set(::bosdyn_msgs::msg::Element::_action_duration_is_set_type arg)
  {
    msg_.action_duration_is_set = std::move(arg);
    return Init_Element_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_action_duration
{
public:
  explicit Init_Element_action_duration(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_action_duration_is_set action_duration(::bosdyn_msgs::msg::Element::_action_duration_type arg)
  {
    msg_.action_duration = std::move(arg);
    return Init_Element_action_duration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_battery_monitor_is_set
{
public:
  explicit Init_Element_battery_monitor_is_set(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_action_duration battery_monitor_is_set(::bosdyn_msgs::msg::Element::_battery_monitor_is_set_type arg)
  {
    msg_.battery_monitor_is_set = std::move(arg);
    return Init_Element_action_duration(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_battery_monitor
{
public:
  explicit Init_Element_battery_monitor(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_battery_monitor_is_set battery_monitor(::bosdyn_msgs::msg::Element::_battery_monitor_type arg)
  {
    msg_.battery_monitor = std::move(arg);
    return Init_Element_battery_monitor_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_is_skipped
{
public:
  explicit Init_Element_is_skipped(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_battery_monitor is_skipped(::bosdyn_msgs::msg::Element::_is_skipped_type arg)
  {
    msg_.is_skipped = std::move(arg);
    return Init_Element_battery_monitor(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_action_failure_behavior_is_set
{
public:
  explicit Init_Element_action_failure_behavior_is_set(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_is_skipped action_failure_behavior_is_set(::bosdyn_msgs::msg::Element::_action_failure_behavior_is_set_type arg)
  {
    msg_.action_failure_behavior_is_set = std::move(arg);
    return Init_Element_is_skipped(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_action_failure_behavior
{
public:
  explicit Init_Element_action_failure_behavior(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_action_failure_behavior_is_set action_failure_behavior(::bosdyn_msgs::msg::Element::_action_failure_behavior_type arg)
  {
    msg_.action_failure_behavior = std::move(arg);
    return Init_Element_action_failure_behavior_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_action_wrapper_is_set
{
public:
  explicit Init_Element_action_wrapper_is_set(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_action_failure_behavior action_wrapper_is_set(::bosdyn_msgs::msg::Element::_action_wrapper_is_set_type arg)
  {
    msg_.action_wrapper_is_set = std::move(arg);
    return Init_Element_action_failure_behavior(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_action_wrapper
{
public:
  explicit Init_Element_action_wrapper(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_action_wrapper_is_set action_wrapper(::bosdyn_msgs::msg::Element::_action_wrapper_type arg)
  {
    msg_.action_wrapper = std::move(arg);
    return Init_Element_action_wrapper_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_action_is_set
{
public:
  explicit Init_Element_action_is_set(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_action_wrapper action_is_set(::bosdyn_msgs::msg::Element::_action_is_set_type arg)
  {
    msg_.action_is_set = std::move(arg);
    return Init_Element_action_wrapper(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_action
{
public:
  explicit Init_Element_action(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_action_is_set action(::bosdyn_msgs::msg::Element::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Element_action_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_target_failure_behavior_is_set
{
public:
  explicit Init_Element_target_failure_behavior_is_set(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_action target_failure_behavior_is_set(::bosdyn_msgs::msg::Element::_target_failure_behavior_is_set_type arg)
  {
    msg_.target_failure_behavior_is_set = std::move(arg);
    return Init_Element_action(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_target_failure_behavior
{
public:
  explicit Init_Element_target_failure_behavior(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_target_failure_behavior_is_set target_failure_behavior(::bosdyn_msgs::msg::Element::_target_failure_behavior_type arg)
  {
    msg_.target_failure_behavior = std::move(arg);
    return Init_Element_target_failure_behavior_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_target_is_set
{
public:
  explicit Init_Element_target_is_set(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_target_failure_behavior target_is_set(::bosdyn_msgs::msg::Element::_target_is_set_type arg)
  {
    msg_.target_is_set = std::move(arg);
    return Init_Element_target_failure_behavior(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_target
{
public:
  explicit Init_Element_target(::bosdyn_msgs::msg::Element & msg)
  : msg_(msg)
  {}
  Init_Element_target_is_set target(::bosdyn_msgs::msg::Element::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_Element_target_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

class Init_Element_name
{
public:
  Init_Element_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Element_target name(::bosdyn_msgs::msg::Element::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Element_target(msg_);
  }

private:
  ::bosdyn_msgs::msg::Element msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Element>()
{
  return bosdyn_msgs::msg::builder::Init_Element_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ELEMENT__BUILDER_HPP_
