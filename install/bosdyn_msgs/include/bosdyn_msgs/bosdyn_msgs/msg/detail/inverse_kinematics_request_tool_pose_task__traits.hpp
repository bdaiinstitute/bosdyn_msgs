// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestToolPoseTask.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_POSE_TASK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_POSE_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_tool_pose_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'task_tform_desired_tool'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InverseKinematicsRequestToolPoseTask & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_tform_desired_tool
  {
    out << "task_tform_desired_tool: ";
    to_flow_style_yaml(msg.task_tform_desired_tool, out);
    out << ", ";
  }

  // member: task_tform_desired_tool_is_set
  {
    out << "task_tform_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.task_tform_desired_tool_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematicsRequestToolPoseTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_tform_desired_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_tform_desired_tool:\n";
    to_block_style_yaml(msg.task_tform_desired_tool, out, indentation + 2);
  }

  // member: task_tform_desired_tool_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_tform_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.task_tform_desired_tool_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematicsRequestToolPoseTask & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bosdyn_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bosdyn_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask>()
{
  return "bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask";
}

template<>
inline const char * name<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask>()
{
  return "bosdyn_msgs/msg/InverseKinematicsRequestToolPoseTask";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_POSE_TASK__TRAITS_HPP_
