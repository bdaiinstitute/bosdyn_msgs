// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmCartesianCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'wrist_tform_tool'
// Member 'root_tform_task'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'pose_trajectory_in_task'
#include "bosdyn_msgs/msg/detail/se3_trajectory__traits.hpp"
// Member 'joint_configuration'
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request_one_of_joint_configuration__traits.hpp"
// Member 'x_axis'
// Member 'y_axis'
// Member 'z_axis'
// Member 'rx_axis'
// Member 'ry_axis'
// Member 'rz_axis'
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request_axis_mode__traits.hpp"
// Member 'wrench_trajectory_in_task'
#include "bosdyn_msgs/msg/detail/wrench_trajectory__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmCartesianCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: root_frame_name
  {
    out << "root_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_frame_name, out);
    out << ", ";
  }

  // member: wrist_tform_tool
  {
    out << "wrist_tform_tool: ";
    to_flow_style_yaml(msg.wrist_tform_tool, out);
    out << ", ";
  }

  // member: wrist_tform_tool_is_set
  {
    out << "wrist_tform_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_tform_tool_is_set, out);
    out << ", ";
  }

  // member: root_tform_task
  {
    out << "root_tform_task: ";
    to_flow_style_yaml(msg.root_tform_task, out);
    out << ", ";
  }

  // member: root_tform_task_is_set
  {
    out << "root_tform_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_tform_task_is_set, out);
    out << ", ";
  }

  // member: pose_trajectory_in_task
  {
    out << "pose_trajectory_in_task: ";
    to_flow_style_yaml(msg.pose_trajectory_in_task, out);
    out << ", ";
  }

  // member: pose_trajectory_in_task_is_set
  {
    out << "pose_trajectory_in_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_trajectory_in_task_is_set, out);
    out << ", ";
  }

  // member: maximum_acceleration
  {
    out << "maximum_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration, out);
    out << ", ";
  }

  // member: maximum_acceleration_is_set
  {
    out << "maximum_acceleration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration_is_set, out);
    out << ", ";
  }

  // member: max_linear_velocity
  {
    out << "max_linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_velocity, out);
    out << ", ";
  }

  // member: max_linear_velocity_is_set
  {
    out << "max_linear_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_velocity_is_set, out);
    out << ", ";
  }

  // member: max_angular_velocity
  {
    out << "max_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_velocity, out);
    out << ", ";
  }

  // member: max_angular_velocity_is_set
  {
    out << "max_angular_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_velocity_is_set, out);
    out << ", ";
  }

  // member: max_pos_tracking_error
  {
    out << "max_pos_tracking_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_pos_tracking_error, out);
    out << ", ";
  }

  // member: max_pos_tracking_error_is_set
  {
    out << "max_pos_tracking_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_pos_tracking_error_is_set, out);
    out << ", ";
  }

  // member: max_rot_tracking_error
  {
    out << "max_rot_tracking_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rot_tracking_error, out);
    out << ", ";
  }

  // member: max_rot_tracking_error_is_set
  {
    out << "max_rot_tracking_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rot_tracking_error_is_set, out);
    out << ", ";
  }

  // member: joint_configuration
  {
    out << "joint_configuration: ";
    to_flow_style_yaml(msg.joint_configuration, out);
    out << ", ";
  }

  // member: x_axis
  {
    out << "x_axis: ";
    to_flow_style_yaml(msg.x_axis, out);
    out << ", ";
  }

  // member: y_axis
  {
    out << "y_axis: ";
    to_flow_style_yaml(msg.y_axis, out);
    out << ", ";
  }

  // member: z_axis
  {
    out << "z_axis: ";
    to_flow_style_yaml(msg.z_axis, out);
    out << ", ";
  }

  // member: rx_axis
  {
    out << "rx_axis: ";
    to_flow_style_yaml(msg.rx_axis, out);
    out << ", ";
  }

  // member: ry_axis
  {
    out << "ry_axis: ";
    to_flow_style_yaml(msg.ry_axis, out);
    out << ", ";
  }

  // member: rz_axis
  {
    out << "rz_axis: ";
    to_flow_style_yaml(msg.rz_axis, out);
    out << ", ";
  }

  // member: wrench_trajectory_in_task
  {
    out << "wrench_trajectory_in_task: ";
    to_flow_style_yaml(msg.wrench_trajectory_in_task, out);
    out << ", ";
  }

  // member: wrench_trajectory_in_task_is_set
  {
    out << "wrench_trajectory_in_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.wrench_trajectory_in_task_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmCartesianCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: root_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_frame_name, out);
    out << "\n";
  }

  // member: wrist_tform_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_tform_tool:\n";
    to_block_style_yaml(msg.wrist_tform_tool, out, indentation + 2);
  }

  // member: wrist_tform_tool_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_tform_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_tform_tool_is_set, out);
    out << "\n";
  }

  // member: root_tform_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_tform_task:\n";
    to_block_style_yaml(msg.root_tform_task, out, indentation + 2);
  }

  // member: root_tform_task_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_tform_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_tform_task_is_set, out);
    out << "\n";
  }

  // member: pose_trajectory_in_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_trajectory_in_task:\n";
    to_block_style_yaml(msg.pose_trajectory_in_task, out, indentation + 2);
  }

  // member: pose_trajectory_in_task_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_trajectory_in_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_trajectory_in_task_is_set, out);
    out << "\n";
  }

  // member: maximum_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration, out);
    out << "\n";
  }

  // member: maximum_acceleration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_acceleration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration_is_set, out);
    out << "\n";
  }

  // member: max_linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_velocity, out);
    out << "\n";
  }

  // member: max_linear_velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_linear_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_velocity_is_set, out);
    out << "\n";
  }

  // member: max_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_velocity, out);
    out << "\n";
  }

  // member: max_angular_velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angular_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_velocity_is_set, out);
    out << "\n";
  }

  // member: max_pos_tracking_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_pos_tracking_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_pos_tracking_error, out);
    out << "\n";
  }

  // member: max_pos_tracking_error_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_pos_tracking_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_pos_tracking_error_is_set, out);
    out << "\n";
  }

  // member: max_rot_tracking_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_rot_tracking_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rot_tracking_error, out);
    out << "\n";
  }

  // member: max_rot_tracking_error_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_rot_tracking_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rot_tracking_error_is_set, out);
    out << "\n";
  }

  // member: joint_configuration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_configuration:\n";
    to_block_style_yaml(msg.joint_configuration, out, indentation + 2);
  }

  // member: x_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_axis:\n";
    to_block_style_yaml(msg.x_axis, out, indentation + 2);
  }

  // member: y_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_axis:\n";
    to_block_style_yaml(msg.y_axis, out, indentation + 2);
  }

  // member: z_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_axis:\n";
    to_block_style_yaml(msg.z_axis, out, indentation + 2);
  }

  // member: rx_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_axis:\n";
    to_block_style_yaml(msg.rx_axis, out, indentation + 2);
  }

  // member: ry_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ry_axis:\n";
    to_block_style_yaml(msg.ry_axis, out, indentation + 2);
  }

  // member: rz_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rz_axis:\n";
    to_block_style_yaml(msg.rz_axis, out, indentation + 2);
  }

  // member: wrench_trajectory_in_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrench_trajectory_in_task:\n";
    to_block_style_yaml(msg.wrench_trajectory_in_task, out, indentation + 2);
  }

  // member: wrench_trajectory_in_task_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrench_trajectory_in_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.wrench_trajectory_in_task_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmCartesianCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmCartesianCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmCartesianCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmCartesianCommandRequest>()
{
  return "bosdyn_msgs::msg::ArmCartesianCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmCartesianCommandRequest>()
{
  return "bosdyn_msgs/msg/ArmCartesianCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmCartesianCommandRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmCartesianCommandRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmCartesianCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST__TRAITS_HPP_
