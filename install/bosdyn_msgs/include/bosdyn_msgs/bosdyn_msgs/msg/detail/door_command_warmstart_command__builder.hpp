// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandWarmstartCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_WARMSTART_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_WARMSTART_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/door_command_warmstart_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorCommandWarmstartCommand_handle_type
{
public:
  explicit Init_DoorCommandWarmstartCommand_handle_type(::bosdyn_msgs::msg::DoorCommandWarmstartCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DoorCommandWarmstartCommand handle_type(::bosdyn_msgs::msg::DoorCommandWarmstartCommand::_handle_type_type arg)
  {
    msg_.handle_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandWarmstartCommand msg_;
};

class Init_DoorCommandWarmstartCommand_swing_direction
{
public:
  explicit Init_DoorCommandWarmstartCommand_swing_direction(::bosdyn_msgs::msg::DoorCommandWarmstartCommand & msg)
  : msg_(msg)
  {}
  Init_DoorCommandWarmstartCommand_handle_type swing_direction(::bosdyn_msgs::msg::DoorCommandWarmstartCommand::_swing_direction_type arg)
  {
    msg_.swing_direction = std::move(arg);
    return Init_DoorCommandWarmstartCommand_handle_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandWarmstartCommand msg_;
};

class Init_DoorCommandWarmstartCommand_hinge_side
{
public:
  Init_DoorCommandWarmstartCommand_hinge_side()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorCommandWarmstartCommand_swing_direction hinge_side(::bosdyn_msgs::msg::DoorCommandWarmstartCommand::_hinge_side_type arg)
  {
    msg_.hinge_side = std::move(arg);
    return Init_DoorCommandWarmstartCommand_swing_direction(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandWarmstartCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DoorCommandWarmstartCommand>()
{
  return bosdyn_msgs::msg::builder::Init_DoorCommandWarmstartCommand_hinge_side();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_WARMSTART_COMMAND__BUILDER_HPP_
