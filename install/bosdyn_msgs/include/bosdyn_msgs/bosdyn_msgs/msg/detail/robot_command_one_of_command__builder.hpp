// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotCommandOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_ONE_OF_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_ONE_OF_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_command_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotCommandOneOfCommand_command_choice
{
public:
  explicit Init_RobotCommandOneOfCommand_command_choice(::bosdyn_msgs::msg::RobotCommandOneOfCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotCommandOneOfCommand command_choice(::bosdyn_msgs::msg::RobotCommandOneOfCommand::_command_choice_type arg)
  {
    msg_.command_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandOneOfCommand msg_;
};

class Init_RobotCommandOneOfCommand_synchronized_command
{
public:
  explicit Init_RobotCommandOneOfCommand_synchronized_command(::bosdyn_msgs::msg::RobotCommandOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommandOneOfCommand_command_choice synchronized_command(::bosdyn_msgs::msg::RobotCommandOneOfCommand::_synchronized_command_type arg)
  {
    msg_.synchronized_command = std::move(arg);
    return Init_RobotCommandOneOfCommand_command_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandOneOfCommand msg_;
};

class Init_RobotCommandOneOfCommand_full_body_command
{
public:
  Init_RobotCommandOneOfCommand_full_body_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommandOneOfCommand_synchronized_command full_body_command(::bosdyn_msgs::msg::RobotCommandOneOfCommand::_full_body_command_type arg)
  {
    msg_.full_body_command = std::move(arg);
    return Init_RobotCommandOneOfCommand_synchronized_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandOneOfCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotCommandOneOfCommand>()
{
  return bosdyn_msgs::msg::builder::Init_RobotCommandOneOfCommand_full_body_command();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_ONE_OF_COMMAND__BUILDER_HPP_
