// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BosdynRobotCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_ROBOT_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_ROBOT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bosdyn_robot_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BosdynRobotCommand_command_is_set
{
public:
  explicit Init_BosdynRobotCommand_command_is_set(::bosdyn_msgs::msg::BosdynRobotCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BosdynRobotCommand command_is_set(::bosdyn_msgs::msg::BosdynRobotCommand::_command_is_set_type arg)
  {
    msg_.command_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRobotCommand msg_;
};

class Init_BosdynRobotCommand_command
{
public:
  explicit Init_BosdynRobotCommand_command(::bosdyn_msgs::msg::BosdynRobotCommand & msg)
  : msg_(msg)
  {}
  Init_BosdynRobotCommand_command_is_set command(::bosdyn_msgs::msg::BosdynRobotCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_BosdynRobotCommand_command_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRobotCommand msg_;
};

class Init_BosdynRobotCommand_host
{
public:
  explicit Init_BosdynRobotCommand_host(::bosdyn_msgs::msg::BosdynRobotCommand & msg)
  : msg_(msg)
  {}
  Init_BosdynRobotCommand_command host(::bosdyn_msgs::msg::BosdynRobotCommand::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_BosdynRobotCommand_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRobotCommand msg_;
};

class Init_BosdynRobotCommand_service_name
{
public:
  Init_BosdynRobotCommand_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BosdynRobotCommand_host service_name(::bosdyn_msgs::msg::BosdynRobotCommand::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_BosdynRobotCommand_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRobotCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BosdynRobotCommand>()
{
  return bosdyn_msgs::msg::builder::Init_BosdynRobotCommand_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_ROBOT_COMMAND__BUILDER_HPP_
