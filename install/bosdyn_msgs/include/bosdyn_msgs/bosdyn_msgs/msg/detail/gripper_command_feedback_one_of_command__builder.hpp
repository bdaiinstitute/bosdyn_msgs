// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GripperCommandFeedbackOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_FEEDBACK_ONE_OF_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_FEEDBACK_ONE_OF_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/gripper_command_feedback_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperCommandFeedbackOneOfCommand_command_choice
{
public:
  explicit Init_GripperCommandFeedbackOneOfCommand_command_choice(::bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand command_choice(::bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand::_command_choice_type arg)
  {
    msg_.command_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand msg_;
};

class Init_GripperCommandFeedbackOneOfCommand_claw_gripper_feedback
{
public:
  Init_GripperCommandFeedbackOneOfCommand_claw_gripper_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommandFeedbackOneOfCommand_command_choice claw_gripper_feedback(::bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand::_claw_gripper_feedback_type arg)
  {
    msg_.claw_gripper_feedback = std::move(arg);
    return Init_GripperCommandFeedbackOneOfCommand_command_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand>()
{
  return bosdyn_msgs::msg::builder::Init_GripperCommandFeedbackOneOfCommand_claw_gripper_feedback();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_FEEDBACK_ONE_OF_COMMAND__BUILDER_HPP_
