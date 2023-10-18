// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ClawGripperCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/claw_gripper_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ClawGripperCommandFeedback_status
{
public:
  Init_ClawGripperCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::ClawGripperCommandFeedback status(::bosdyn_msgs::msg::ClawGripperCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClawGripperCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ClawGripperCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_ClawGripperCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_FEEDBACK__BUILDER_HPP_
