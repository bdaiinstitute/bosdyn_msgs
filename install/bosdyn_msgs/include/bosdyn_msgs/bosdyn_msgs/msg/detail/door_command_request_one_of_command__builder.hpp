// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/door_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorCommandRequestOneOfCommand_command_choice
{
public:
  explicit Init_DoorCommandRequestOneOfCommand_command_choice(::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand command_choice(::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand::_command_choice_type arg)
  {
    msg_.command_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand msg_;
};

class Init_DoorCommandRequestOneOfCommand_auto_push_command
{
public:
  explicit Init_DoorCommandRequestOneOfCommand_auto_push_command(::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_DoorCommandRequestOneOfCommand_command_choice auto_push_command(::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand::_auto_push_command_type arg)
  {
    msg_.auto_push_command = std::move(arg);
    return Init_DoorCommandRequestOneOfCommand_command_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand msg_;
};

class Init_DoorCommandRequestOneOfCommand_warmstart_command
{
public:
  explicit Init_DoorCommandRequestOneOfCommand_warmstart_command(::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_DoorCommandRequestOneOfCommand_auto_push_command warmstart_command(::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand::_warmstart_command_type arg)
  {
    msg_.warmstart_command = std::move(arg);
    return Init_DoorCommandRequestOneOfCommand_auto_push_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand msg_;
};

class Init_DoorCommandRequestOneOfCommand_auto_grasp_command
{
public:
  Init_DoorCommandRequestOneOfCommand_auto_grasp_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorCommandRequestOneOfCommand_warmstart_command auto_grasp_command(::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand::_auto_grasp_command_type arg)
  {
    msg_.auto_grasp_command = std::move(arg);
    return Init_DoorCommandRequestOneOfCommand_warmstart_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DoorCommandRequestOneOfCommand>()
{
  return bosdyn_msgs::msg::builder::Init_DoorCommandRequestOneOfCommand_auto_grasp_command();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
