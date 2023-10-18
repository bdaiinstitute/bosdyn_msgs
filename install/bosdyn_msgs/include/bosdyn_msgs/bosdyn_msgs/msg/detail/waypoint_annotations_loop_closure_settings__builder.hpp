// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLoopClosureSettings.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOOP_CLOSURE_SETTINGS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOOP_CLOSURE_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/waypoint_annotations_loop_closure_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointAnnotationsLoopClosureSettings_max_odometry_path_length
{
public:
  explicit Init_WaypointAnnotationsLoopClosureSettings_max_odometry_path_length(::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings max_odometry_path_length(::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings::_max_odometry_path_length_type arg)
  {
    msg_.max_odometry_path_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings msg_;
};

class Init_WaypointAnnotationsLoopClosureSettings_max_edge_length
{
public:
  explicit Init_WaypointAnnotationsLoopClosureSettings_max_edge_length(::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotationsLoopClosureSettings_max_odometry_path_length max_edge_length(::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings::_max_edge_length_type arg)
  {
    msg_.max_edge_length = std::move(arg);
    return Init_WaypointAnnotationsLoopClosureSettings_max_odometry_path_length(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings msg_;
};

class Init_WaypointAnnotationsLoopClosureSettings_disable_collision_check
{
public:
  explicit Init_WaypointAnnotationsLoopClosureSettings_disable_collision_check(::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotationsLoopClosureSettings_max_edge_length disable_collision_check(::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings::_disable_collision_check_type arg)
  {
    msg_.disable_collision_check = std::move(arg);
    return Init_WaypointAnnotationsLoopClosureSettings_max_edge_length(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings msg_;
};

class Init_WaypointAnnotationsLoopClosureSettings_disable_loop_closure
{
public:
  Init_WaypointAnnotationsLoopClosureSettings_disable_loop_closure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointAnnotationsLoopClosureSettings_disable_collision_check disable_loop_closure(::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings::_disable_loop_closure_type arg)
  {
    msg_.disable_loop_closure = std::move(arg);
    return Init_WaypointAnnotationsLoopClosureSettings_disable_collision_check(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings>()
{
  return bosdyn_msgs::msg::builder::Init_WaypointAnnotationsLoopClosureSettings_disable_loop_closure();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOOP_CLOSURE_SETTINGS__BUILDER_HPP_
