// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SafePowerOffCommandRequestUnsafeAction.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST_UNSAFE_ACTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST_UNSAFE_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/safe_power_off_command_request_unsafe_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SafePowerOffCommandRequestUnsafeAction_value
{
public:
  Init_SafePowerOffCommandRequestUnsafeAction_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::SafePowerOffCommandRequestUnsafeAction value(::bosdyn_msgs::msg::SafePowerOffCommandRequestUnsafeAction::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SafePowerOffCommandRequestUnsafeAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SafePowerOffCommandRequestUnsafeAction>()
{
  return bosdyn_msgs::msg::builder::Init_SafePowerOffCommandRequestUnsafeAction_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST_UNSAFE_ACTION__BUILDER_HPP_
