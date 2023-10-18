// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GripperCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/gripper_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperCommandFeedback_status
{
public:
  explicit Init_GripperCommandFeedback_status(::bosdyn_msgs::msg::GripperCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GripperCommandFeedback status(::bosdyn_msgs::msg::GripperCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCommandFeedback msg_;
};

class Init_GripperCommandFeedback_command
{
public:
  Init_GripperCommandFeedback_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommandFeedback_status command(::bosdyn_msgs::msg::GripperCommandFeedback::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_GripperCommandFeedback_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GripperCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_GripperCommandFeedback_command();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_FEEDBACK__BUILDER_HPP_
