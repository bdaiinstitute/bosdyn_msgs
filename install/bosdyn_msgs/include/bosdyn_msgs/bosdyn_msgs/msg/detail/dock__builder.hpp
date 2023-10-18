// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Dock.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/dock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Dock_prompt_duration_is_set
{
public:
  explicit Init_Dock_prompt_duration_is_set(::bosdyn_msgs::msg::Dock & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Dock prompt_duration_is_set(::bosdyn_msgs::msg::Dock::_prompt_duration_is_set_type arg)
  {
    msg_.prompt_duration_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Dock msg_;
};

class Init_Dock_prompt_duration
{
public:
  explicit Init_Dock_prompt_duration(::bosdyn_msgs::msg::Dock & msg)
  : msg_(msg)
  {}
  Init_Dock_prompt_duration_is_set prompt_duration(::bosdyn_msgs::msg::Dock::_prompt_duration_type arg)
  {
    msg_.prompt_duration = std::move(arg);
    return Init_Dock_prompt_duration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Dock msg_;
};

class Init_Dock_target_prep_pose_is_set
{
public:
  explicit Init_Dock_target_prep_pose_is_set(::bosdyn_msgs::msg::Dock & msg)
  : msg_(msg)
  {}
  Init_Dock_prompt_duration target_prep_pose_is_set(::bosdyn_msgs::msg::Dock::_target_prep_pose_is_set_type arg)
  {
    msg_.target_prep_pose_is_set = std::move(arg);
    return Init_Dock_prompt_duration(msg_);
  }

private:
  ::bosdyn_msgs::msg::Dock msg_;
};

class Init_Dock_target_prep_pose
{
public:
  explicit Init_Dock_target_prep_pose(::bosdyn_msgs::msg::Dock & msg)
  : msg_(msg)
  {}
  Init_Dock_target_prep_pose_is_set target_prep_pose(::bosdyn_msgs::msg::Dock::_target_prep_pose_type arg)
  {
    msg_.target_prep_pose = std::move(arg);
    return Init_Dock_target_prep_pose_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Dock msg_;
};

class Init_Dock_docked_waypoint_id
{
public:
  explicit Init_Dock_docked_waypoint_id(::bosdyn_msgs::msg::Dock & msg)
  : msg_(msg)
  {}
  Init_Dock_target_prep_pose docked_waypoint_id(::bosdyn_msgs::msg::Dock::_docked_waypoint_id_type arg)
  {
    msg_.docked_waypoint_id = std::move(arg);
    return Init_Dock_target_prep_pose(msg_);
  }

private:
  ::bosdyn_msgs::msg::Dock msg_;
};

class Init_Dock_dock_id
{
public:
  Init_Dock_dock_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dock_docked_waypoint_id dock_id(::bosdyn_msgs::msg::Dock::_dock_id_type arg)
  {
    msg_.dock_id = std::move(arg);
    return Init_Dock_docked_waypoint_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::Dock msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Dock>()
{
  return bosdyn_msgs::msg::builder::Init_Dock_dock_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK__BUILDER_HPP_
