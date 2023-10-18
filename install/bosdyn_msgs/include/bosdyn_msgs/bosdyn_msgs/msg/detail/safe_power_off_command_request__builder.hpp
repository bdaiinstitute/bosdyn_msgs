// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SafePowerOffCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/safe_power_off_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SafePowerOffCommandRequest_unsafe_action
{
public:
  Init_SafePowerOffCommandRequest_unsafe_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::SafePowerOffCommandRequest unsafe_action(::bosdyn_msgs::msg::SafePowerOffCommandRequest::_unsafe_action_type arg)
  {
    msg_.unsafe_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SafePowerOffCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SafePowerOffCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SafePowerOffCommandRequest_unsafe_action();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST__BUILDER_HPP_
