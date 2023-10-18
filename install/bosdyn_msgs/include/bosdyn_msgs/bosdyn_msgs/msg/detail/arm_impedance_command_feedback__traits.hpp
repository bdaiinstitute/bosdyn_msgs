// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmImpedanceCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_impedance_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/arm_impedance_command_feedback_status__traits.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__traits.hpp"
// Member 'commanded_wrench_from_stiffness_at_tool_in_desired_tool'
// Member 'commanded_wrench_from_damping_at_tool_in_desired_tool'
// Member 'commanded_wrench_from_feed_forward_at_tool_in_desired_tool'
// Member 'total_commanded_wrench_at_tool_in_desired_tool'
// Member 'total_measured_wrench_at_tool_in_desired_tool'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmImpedanceCommandFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: transforms_snapshot
  {
    out << "transforms_snapshot: ";
    to_flow_style_yaml(msg.transforms_snapshot, out);
    out << ", ";
  }

  // member: transforms_snapshot_is_set
  {
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
    out << ", ";
  }

  // member: commanded_wrench_from_stiffness_at_tool_in_desired_tool
  {
    out << "commanded_wrench_from_stiffness_at_tool_in_desired_tool: ";
    to_flow_style_yaml(msg.commanded_wrench_from_stiffness_at_tool_in_desired_tool, out);
    out << ", ";
  }

  // member: commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set
  {
    out << "commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set, out);
    out << ", ";
  }

  // member: commanded_wrench_from_damping_at_tool_in_desired_tool
  {
    out << "commanded_wrench_from_damping_at_tool_in_desired_tool: ";
    to_flow_style_yaml(msg.commanded_wrench_from_damping_at_tool_in_desired_tool, out);
    out << ", ";
  }

  // member: commanded_wrench_from_damping_at_tool_in_desired_tool_is_set
  {
    out << "commanded_wrench_from_damping_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.commanded_wrench_from_damping_at_tool_in_desired_tool_is_set, out);
    out << ", ";
  }

  // member: commanded_wrench_from_feed_forward_at_tool_in_desired_tool
  {
    out << "commanded_wrench_from_feed_forward_at_tool_in_desired_tool: ";
    to_flow_style_yaml(msg.commanded_wrench_from_feed_forward_at_tool_in_desired_tool, out);
    out << ", ";
  }

  // member: commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set
  {
    out << "commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set, out);
    out << ", ";
  }

  // member: total_commanded_wrench_at_tool_in_desired_tool
  {
    out << "total_commanded_wrench_at_tool_in_desired_tool: ";
    to_flow_style_yaml(msg.total_commanded_wrench_at_tool_in_desired_tool, out);
    out << ", ";
  }

  // member: total_commanded_wrench_at_tool_in_desired_tool_is_set
  {
    out << "total_commanded_wrench_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.total_commanded_wrench_at_tool_in_desired_tool_is_set, out);
    out << ", ";
  }

  // member: total_measured_wrench_at_tool_in_desired_tool
  {
    out << "total_measured_wrench_at_tool_in_desired_tool: ";
    to_flow_style_yaml(msg.total_measured_wrench_at_tool_in_desired_tool, out);
    out << ", ";
  }

  // member: total_measured_wrench_at_tool_in_desired_tool_is_set
  {
    out << "total_measured_wrench_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.total_measured_wrench_at_tool_in_desired_tool_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmImpedanceCommandFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: transforms_snapshot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot:\n";
    to_block_style_yaml(msg.transforms_snapshot, out, indentation + 2);
  }

  // member: transforms_snapshot_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
    out << "\n";
  }

  // member: commanded_wrench_from_stiffness_at_tool_in_desired_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commanded_wrench_from_stiffness_at_tool_in_desired_tool:\n";
    to_block_style_yaml(msg.commanded_wrench_from_stiffness_at_tool_in_desired_tool, out, indentation + 2);
  }

  // member: commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set, out);
    out << "\n";
  }

  // member: commanded_wrench_from_damping_at_tool_in_desired_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commanded_wrench_from_damping_at_tool_in_desired_tool:\n";
    to_block_style_yaml(msg.commanded_wrench_from_damping_at_tool_in_desired_tool, out, indentation + 2);
  }

  // member: commanded_wrench_from_damping_at_tool_in_desired_tool_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commanded_wrench_from_damping_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.commanded_wrench_from_damping_at_tool_in_desired_tool_is_set, out);
    out << "\n";
  }

  // member: commanded_wrench_from_feed_forward_at_tool_in_desired_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commanded_wrench_from_feed_forward_at_tool_in_desired_tool:\n";
    to_block_style_yaml(msg.commanded_wrench_from_feed_forward_at_tool_in_desired_tool, out, indentation + 2);
  }

  // member: commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set, out);
    out << "\n";
  }

  // member: total_commanded_wrench_at_tool_in_desired_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_commanded_wrench_at_tool_in_desired_tool:\n";
    to_block_style_yaml(msg.total_commanded_wrench_at_tool_in_desired_tool, out, indentation + 2);
  }

  // member: total_commanded_wrench_at_tool_in_desired_tool_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_commanded_wrench_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.total_commanded_wrench_at_tool_in_desired_tool_is_set, out);
    out << "\n";
  }

  // member: total_measured_wrench_at_tool_in_desired_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_measured_wrench_at_tool_in_desired_tool:\n";
    to_block_style_yaml(msg.total_measured_wrench_at_tool_in_desired_tool, out, indentation + 2);
  }

  // member: total_measured_wrench_at_tool_in_desired_tool_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_measured_wrench_at_tool_in_desired_tool_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.total_measured_wrench_at_tool_in_desired_tool_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmImpedanceCommandFeedback & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmImpedanceCommandFeedback>()
{
  return "bosdyn_msgs::msg::ArmImpedanceCommandFeedback";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmImpedanceCommandFeedback>()
{
  return "bosdyn_msgs/msg/ArmImpedanceCommandFeedback";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmImpedanceCommandFeedback>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmImpedanceCommandFeedbackStatus>::value && has_fixed_size<bosdyn_msgs::msg::FrameTreeSnapshot>::value && has_fixed_size<geometry_msgs::msg::Wrench>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmImpedanceCommandFeedback>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmImpedanceCommandFeedbackStatus>::value && has_bounded_size<bosdyn_msgs::msg::FrameTreeSnapshot>::value && has_bounded_size<geometry_msgs::msg::Wrench>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmImpedanceCommandFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK__TRAITS_HPP_
