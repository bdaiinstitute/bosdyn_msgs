// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GripperCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/gripper_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperCommandRequestOneOfCommand_command_choice
{
public:
  explicit Init_GripperCommandRequestOneOfCommand_command_choice(::bosdyn_msgs::msg::GripperCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GripperCommandRequestOneOfCommand command_choice(::bosdyn_msgs::msg::GripperCommandRequestOneOfCommand::_command_choice_type arg)
  {
    msg_.command_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCommandRequestOneOfCommand msg_;
};

class Init_GripperCommandRequestOneOfCommand_claw_gripper_command
{
public:
  Init_GripperCommandRequestOneOfCommand_claw_gripper_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommandRequestOneOfCommand_command_choice claw_gripper_command(::bosdyn_msgs::msg::GripperCommandRequestOneOfCommand::_claw_gripper_command_type arg)
  {
    msg_.claw_gripper_command = std::move(arg);
    return Init_GripperCommandRequestOneOfCommand_command_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCommandRequestOneOfCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GripperCommandRequestOneOfCommand>()
{
  return bosdyn_msgs::msg::builder::Init_GripperCommandRequestOneOfCommand_claw_gripper_command();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
