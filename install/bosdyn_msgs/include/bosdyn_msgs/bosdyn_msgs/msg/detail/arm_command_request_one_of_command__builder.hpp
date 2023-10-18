// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmCommandRequestOneOfCommand_command_choice
{
public:
  explicit Init_ArmCommandRequestOneOfCommand_command_choice(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand command_choice(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand::_command_choice_type arg)
  {
    msg_.command_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand msg_;
};

class Init_ArmCommandRequestOneOfCommand_arm_impedance_command
{
public:
  explicit Init_ArmCommandRequestOneOfCommand_arm_impedance_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_ArmCommandRequestOneOfCommand_command_choice arm_impedance_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand::_arm_impedance_command_type arg)
  {
    msg_.arm_impedance_command = std::move(arg);
    return Init_ArmCommandRequestOneOfCommand_command_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand msg_;
};

class Init_ArmCommandRequestOneOfCommand_arm_drag_command
{
public:
  explicit Init_ArmCommandRequestOneOfCommand_arm_drag_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_ArmCommandRequestOneOfCommand_arm_impedance_command arm_drag_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand::_arm_drag_command_type arg)
  {
    msg_.arm_drag_command = std::move(arg);
    return Init_ArmCommandRequestOneOfCommand_arm_impedance_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand msg_;
};

class Init_ArmCommandRequestOneOfCommand_arm_stop_command
{
public:
  explicit Init_ArmCommandRequestOneOfCommand_arm_stop_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_ArmCommandRequestOneOfCommand_arm_drag_command arm_stop_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand::_arm_stop_command_type arg)
  {
    msg_.arm_stop_command = std::move(arg);
    return Init_ArmCommandRequestOneOfCommand_arm_drag_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand msg_;
};

class Init_ArmCommandRequestOneOfCommand_arm_gaze_command
{
public:
  explicit Init_ArmCommandRequestOneOfCommand_arm_gaze_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_ArmCommandRequestOneOfCommand_arm_stop_command arm_gaze_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand::_arm_gaze_command_type arg)
  {
    msg_.arm_gaze_command = std::move(arg);
    return Init_ArmCommandRequestOneOfCommand_arm_stop_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand msg_;
};

class Init_ArmCommandRequestOneOfCommand_arm_velocity_command
{
public:
  explicit Init_ArmCommandRequestOneOfCommand_arm_velocity_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_ArmCommandRequestOneOfCommand_arm_gaze_command arm_velocity_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand::_arm_velocity_command_type arg)
  {
    msg_.arm_velocity_command = std::move(arg);
    return Init_ArmCommandRequestOneOfCommand_arm_gaze_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand msg_;
};

class Init_ArmCommandRequestOneOfCommand_named_arm_position_command
{
public:
  explicit Init_ArmCommandRequestOneOfCommand_named_arm_position_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_ArmCommandRequestOneOfCommand_arm_velocity_command named_arm_position_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand::_named_arm_position_command_type arg)
  {
    msg_.named_arm_position_command = std::move(arg);
    return Init_ArmCommandRequestOneOfCommand_arm_velocity_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand msg_;
};

class Init_ArmCommandRequestOneOfCommand_arm_joint_move_command
{
public:
  explicit Init_ArmCommandRequestOneOfCommand_arm_joint_move_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand & msg)
  : msg_(msg)
  {}
  Init_ArmCommandRequestOneOfCommand_named_arm_position_command arm_joint_move_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand::_arm_joint_move_command_type arg)
  {
    msg_.arm_joint_move_command = std::move(arg);
    return Init_ArmCommandRequestOneOfCommand_named_arm_position_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand msg_;
};

class Init_ArmCommandRequestOneOfCommand_arm_cartesian_command
{
public:
  Init_ArmCommandRequestOneOfCommand_arm_cartesian_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCommandRequestOneOfCommand_arm_joint_move_command arm_cartesian_command(::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand::_arm_cartesian_command_type arg)
  {
    msg_.arm_cartesian_command = std::move(arg);
    return Init_ArmCommandRequestOneOfCommand_arm_joint_move_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmCommandRequestOneOfCommand>()
{
  return bosdyn_msgs::msg::builder::Init_ArmCommandRequestOneOfCommand_arm_cartesian_command();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST_ONE_OF_COMMAND__BUILDER_HPP_
