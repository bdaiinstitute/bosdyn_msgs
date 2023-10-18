// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmImpedanceCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_impedance_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'root_tform_task'
// Member 'wrist_tform_tool'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'task_tform_desired_tool'
#include "bosdyn_msgs/msg/detail/se3_trajectory__traits.hpp"
// Member 'feed_forward_wrench_at_tool_in_desired_tool'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"
// Member 'diagonal_stiffness_matrix'
// Member 'diagonal_damping_matrix'
#include "bosdyn_msgs/msg/detail/vector__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmImpedanceCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: root_frame_name
  {
    out << "root_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_frame_name, out);
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
    out << ", ";
  }

  // member: feed_forward_wrench_at_tool_in_desired_tool
  {
    out << "feed_forward_wrench_at_tool_in_desired_tool: ";
    to_flow_style_yaml(msg.feed_forward_wrench_at_tool_in_desired_tool, out);
    out << ", ";
  }

  // member: feed_forward_wrench_at_tool_in_desired_tool_is_set
  {
    out << "feed_forward_wrench_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.feed_forward_wrench_at_tool_in_desired_tool_is_set, out);
    out << ", ";
  }

  // member: diagonal_stiffness_matrix
  {
    out << "diagonal_stiffness_matrix: ";
    to_flow_style_yaml(msg.diagonal_stiffness_matrix, out);
    out << ", ";
  }

  // member: diagonal_stiffness_matrix_is_set
  {
    out << "diagonal_stiffness_matrix_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.diagonal_stiffness_matrix_is_set, out);
    out << ", ";
  }

  // member: diagonal_damping_matrix
  {
    out << "diagonal_damping_matrix: ";
    to_flow_style_yaml(msg.diagonal_damping_matrix, out);
    out << ", ";
  }

  // member: diagonal_damping_matrix_is_set
  {
    out << "diagonal_damping_matrix_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.diagonal_damping_matrix_is_set, out);
    out << ", ";
  }

  // member: max_force_mag
  {
    out << "max_force_mag: ";
    rosidl_generator_traits::value_to_yaml(msg.max_force_mag, out);
    out << ", ";
  }

  // member: max_force_mag_is_set
  {
    out << "max_force_mag_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_force_mag_is_set, out);
    out << ", ";
  }

  // member: max_torque_mag
  {
    out << "max_torque_mag: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque_mag, out);
    out << ", ";
  }

  // member: max_torque_mag_is_set
  {
    out << "max_torque_mag_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque_mag_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmImpedanceCommandRequest & msg,
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

  // member: feed_forward_wrench_at_tool_in_desired_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feed_forward_wrench_at_tool_in_desired_tool:\n";
    to_block_style_yaml(msg.feed_forward_wrench_at_tool_in_desired_tool, out, indentation + 2);
  }

  // member: feed_forward_wrench_at_tool_in_desired_tool_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feed_forward_wrench_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.feed_forward_wrench_at_tool_in_desired_tool_is_set, out);
    out << "\n";
  }

  // member: diagonal_stiffness_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diagonal_stiffness_matrix:\n";
    to_block_style_yaml(msg.diagonal_stiffness_matrix, out, indentation + 2);
  }

  // member: diagonal_stiffness_matrix_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diagonal_stiffness_matrix_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.diagonal_stiffness_matrix_is_set, out);
    out << "\n";
  }

  // member: diagonal_damping_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diagonal_damping_matrix:\n";
    to_block_style_yaml(msg.diagonal_damping_matrix, out, indentation + 2);
  }

  // member: diagonal_damping_matrix_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diagonal_damping_matrix_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.diagonal_damping_matrix_is_set, out);
    out << "\n";
  }

  // member: max_force_mag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_force_mag: ";
    rosidl_generator_traits::value_to_yaml(msg.max_force_mag, out);
    out << "\n";
  }

  // member: max_force_mag_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_force_mag_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_force_mag_is_set, out);
    out << "\n";
  }

  // member: max_torque_mag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque_mag: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque_mag, out);
    out << "\n";
  }

  // member: max_torque_mag_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque_mag_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque_mag_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmImpedanceCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmImpedanceCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmImpedanceCommandRequest>()
{
  return "bosdyn_msgs::msg::ArmImpedanceCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmImpedanceCommandRequest>()
{
  return "bosdyn_msgs/msg/ArmImpedanceCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmImpedanceCommandRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmImpedanceCommandRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmImpedanceCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_REQUEST__TRAITS_HPP_
