// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandAutoGraspCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_GRASP_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_GRASP_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/door_command_auto_grasp_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorCommandAutoGraspCommand_swing_direction
{
public:
  explicit Init_DoorCommandAutoGraspCommand_swing_direction(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DoorCommandAutoGraspCommand swing_direction(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand::_swing_direction_type arg)
  {
    msg_.swing_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoGraspCommand msg_;
};

class Init_DoorCommandAutoGraspCommand_hinge_side
{
public:
  explicit Init_DoorCommandAutoGraspCommand_hinge_side(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand & msg)
  : msg_(msg)
  {}
  Init_DoorCommandAutoGraspCommand_swing_direction hinge_side(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand::_hinge_side_type arg)
  {
    msg_.hinge_side = std::move(arg);
    return Init_DoorCommandAutoGraspCommand_swing_direction(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoGraspCommand msg_;
};

class Init_DoorCommandAutoGraspCommand_search_ray_end_in_frame_is_set
{
public:
  explicit Init_DoorCommandAutoGraspCommand_search_ray_end_in_frame_is_set(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand & msg)
  : msg_(msg)
  {}
  Init_DoorCommandAutoGraspCommand_hinge_side search_ray_end_in_frame_is_set(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand::_search_ray_end_in_frame_is_set_type arg)
  {
    msg_.search_ray_end_in_frame_is_set = std::move(arg);
    return Init_DoorCommandAutoGraspCommand_hinge_side(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoGraspCommand msg_;
};

class Init_DoorCommandAutoGraspCommand_search_ray_end_in_frame
{
public:
  explicit Init_DoorCommandAutoGraspCommand_search_ray_end_in_frame(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand & msg)
  : msg_(msg)
  {}
  Init_DoorCommandAutoGraspCommand_search_ray_end_in_frame_is_set search_ray_end_in_frame(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand::_search_ray_end_in_frame_type arg)
  {
    msg_.search_ray_end_in_frame = std::move(arg);
    return Init_DoorCommandAutoGraspCommand_search_ray_end_in_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoGraspCommand msg_;
};

class Init_DoorCommandAutoGraspCommand_search_ray_start_in_frame_is_set
{
public:
  explicit Init_DoorCommandAutoGraspCommand_search_ray_start_in_frame_is_set(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand & msg)
  : msg_(msg)
  {}
  Init_DoorCommandAutoGraspCommand_search_ray_end_in_frame search_ray_start_in_frame_is_set(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand::_search_ray_start_in_frame_is_set_type arg)
  {
    msg_.search_ray_start_in_frame_is_set = std::move(arg);
    return Init_DoorCommandAutoGraspCommand_search_ray_end_in_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoGraspCommand msg_;
};

class Init_DoorCommandAutoGraspCommand_search_ray_start_in_frame
{
public:
  explicit Init_DoorCommandAutoGraspCommand_search_ray_start_in_frame(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand & msg)
  : msg_(msg)
  {}
  Init_DoorCommandAutoGraspCommand_search_ray_start_in_frame_is_set search_ray_start_in_frame(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand::_search_ray_start_in_frame_type arg)
  {
    msg_.search_ray_start_in_frame = std::move(arg);
    return Init_DoorCommandAutoGraspCommand_search_ray_start_in_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoGraspCommand msg_;
};

class Init_DoorCommandAutoGraspCommand_frame_name
{
public:
  Init_DoorCommandAutoGraspCommand_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorCommandAutoGraspCommand_search_ray_start_in_frame frame_name(::bosdyn_msgs::msg::DoorCommandAutoGraspCommand::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return Init_DoorCommandAutoGraspCommand_search_ray_start_in_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandAutoGraspCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DoorCommandAutoGraspCommand>()
{
  return bosdyn_msgs::msg::builder::Init_DoorCommandAutoGraspCommand_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_GRASP_COMMAND__BUILDER_HPP_
