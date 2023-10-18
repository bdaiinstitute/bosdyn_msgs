// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_velocity_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmVelocityCommandRequestOneOfCommand_command_choice
{
public:
  explicit Init_ArmVelocityCommandRequestOneOfCommand_command_choice(::bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand command_choice(::bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand::_command_choice_type arg)
  {
    msg_.command_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand msg_;
};

class Init_ArmVelocityCommandRequestOneOfCommand_cartesian_velocity
{
public:
  explicit Init_ArmVelocityCommandRequestOneOfCommand_cartesian_velocity(::bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_ArmVelocityCommandRequestOneOfCommand_command_choice cartesian_velocity(::bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand::_cartesian_velocity_type arg)
  {
    msg_.cartesian_velocity = std::move(arg);
    return Init_ArmVelocityCommandRequestOneOfCommand_command_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand msg_;
};

class Init_ArmVelocityCommandRequestOneOfCommand_cylindrical_velocity
{
public:
  Init_ArmVelocityCommandRequestOneOfCommand_cylindrical_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmVelocityCommandRequestOneOfCommand_cartesian_velocity cylindrical_velocity(::bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand::_cylindrical_velocity_type arg)
  {
    msg_.cylindrical_velocity = std::move(arg);
    return Init_ArmVelocityCommandRequestOneOfCommand_cartesian_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand>()
{
  return bosdyn_msgs::msg::builder::Init_ArmVelocityCommandRequestOneOfCommand_cylindrical_velocity();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
