// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotCommandFeedbackOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_ONE_OF_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_ONE_OF_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_command_feedback_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotCommandFeedbackOneOfCommand_command_choice
{
public:
  explicit Init_RobotCommandFeedbackOneOfCommand_command_choice(::bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand command_choice(::bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand::_command_choice_type arg)
  {
    msg_.command_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand msg_;
};

class Init_RobotCommandFeedbackOneOfCommand_synchronized_feedback
{
public:
  explicit Init_RobotCommandFeedbackOneOfCommand_synchronized_feedback(::bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommandFeedbackOneOfCommand_command_choice synchronized_feedback(::bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand::_synchronized_feedback_type arg)
  {
    msg_.synchronized_feedback = std::move(arg);
    return Init_RobotCommandFeedbackOneOfCommand_command_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand msg_;
};

class Init_RobotCommandFeedbackOneOfCommand_full_body_feedback
{
public:
  Init_RobotCommandFeedbackOneOfCommand_full_body_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommandFeedbackOneOfCommand_synchronized_feedback full_body_feedback(::bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand::_full_body_feedback_type arg)
  {
    msg_.full_body_feedback = std::move(arg);
    return Init_RobotCommandFeedbackOneOfCommand_synchronized_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand>()
{
  return bosdyn_msgs::msg::builder::Init_RobotCommandFeedbackOneOfCommand_full_body_feedback();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_ONE_OF_COMMAND__BUILDER_HPP_
