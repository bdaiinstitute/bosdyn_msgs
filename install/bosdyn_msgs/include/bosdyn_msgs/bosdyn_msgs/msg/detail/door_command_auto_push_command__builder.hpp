// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandAutoPushCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_PUSH_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_PUSH_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/door_command_auto_push_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorCommandAutoPushCommand_hinge_side
{
public:
  explicit Init_DoorCommandAutoPushCommand_hinge_side(::bosdyn_msgs::msg::DoorCommandAutoPushCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DoorCommandAutoPushCommand hinge_side(::bosdyn_msgs::msg::DoorCommandAutoPushCommand::_hinge_side_type arg)
  {
    msg_.hinge_side = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoPushCommand msg_;
};

class Init_DoorCommandAutoPushCommand_push_point_in_frame_is_set
{
public:
  explicit Init_DoorCommandAutoPushCommand_push_point_in_frame_is_set(::bosdyn_msgs::msg::DoorCommandAutoPushCommand & msg)
  : msg_(msg)
  {}
  Init_DoorCommandAutoPushCommand_hinge_side push_point_in_frame_is_set(::bosdyn_msgs::msg::DoorCommandAutoPushCommand::_push_point_in_frame_is_set_type arg)
  {
    msg_.push_point_in_frame_is_set = std::move(arg);
    return Init_DoorCommandAutoPushCommand_hinge_side(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoPushCommand msg_;
};

class Init_DoorCommandAutoPushCommand_push_point_in_frame
{
public:
  explicit Init_DoorCommandAutoPushCommand_push_point_in_frame(::bosdyn_msgs::msg::DoorCommandAutoPushCommand & msg)
  : msg_(msg)
  {}
  Init_DoorCommandAutoPushCommand_push_point_in_frame_is_set push_point_in_frame(::bosdyn_msgs::msg::DoorCommandAutoPushCommand::_push_point_in_frame_type arg)
  {
    msg_.push_point_in_frame = std::move(arg);
    return Init_DoorCommandAutoPushCommand_push_point_in_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoPushCommand msg_;
};

class Init_DoorCommandAutoPushCommand_frame_name
{
public:
  Init_DoorCommandAutoPushCommand_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorCommandAutoPushCommand_push_point_in_frame frame_name(::bosdyn_msgs::msg::DoorCommandAutoPushCommand::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return Init_DoorCommandAutoPushCommand_push_point_in_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoPushCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DoorCommandAutoPushCommand>()
{
  return bosdyn_msgs::msg::builder::Init_DoorCommandAutoPushCommand_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_PUSH_COMMAND__BUILDER_HPP_
