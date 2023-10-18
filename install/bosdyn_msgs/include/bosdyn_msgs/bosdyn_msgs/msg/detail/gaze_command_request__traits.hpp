// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GazeCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/gaze_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_trajectory_in_frame1'
#include "bosdyn_msgs/msg/detail/vec3_trajectory__traits.hpp"
// Member 'tool_trajectory_in_frame2'
#include "bosdyn_msgs/msg/detail/se3_trajectory__traits.hpp"
// Member 'wrist_tform_tool'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GazeCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_trajectory_in_frame1
  {
    out << "target_trajectory_in_frame1: ";
    to_flow_style_yaml(msg.target_trajectory_in_frame1, out);
    out << ", ";
  }

  // member: target_trajectory_in_frame1_is_set
  {
    out << "target_trajectory_in_frame1_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_trajectory_in_frame1_is_set, out);
    out << ", ";
  }

  // member: frame1_name
  {
    out << "frame1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame1_name, out);
    out << ", ";
  }

  // member: tool_trajectory_in_frame2
  {
    out << "tool_trajectory_in_frame2: ";
    to_flow_style_yaml(msg.tool_trajectory_in_frame2, out);
    out << ", ";
  }

  // member: tool_trajectory_in_frame2_is_set
  {
    out << "tool_trajectory_in_frame2_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_trajectory_in_frame2_is_set, out);
    out << ", ";
  }

  // member: frame2_name
  {
    out << "frame2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame2_name, out);
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

  // member: target_trajectory_initial_velocity
  {
    out << "target_trajectory_initial_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.target_trajectory_initial_velocity, out);
    out << ", ";
  }

  // member: target_trajectory_initial_velocity_is_set
  {
    out << "target_trajectory_initial_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_trajectory_initial_velocity_is_set, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GazeCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_trajectory_in_frame1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_trajectory_in_frame1:\n";
    to_block_style_yaml(msg.target_trajectory_in_frame1, out, indentation + 2);
  }

  // member: target_trajectory_in_frame1_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_trajectory_in_frame1_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_trajectory_in_frame1_is_set, out);
    out << "\n";
  }

  // member: frame1_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame1_name, out);
    out << "\n";
  }

  // member: tool_trajectory_in_frame2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_trajectory_in_frame2:\n";
    to_block_style_yaml(msg.tool_trajectory_in_frame2, out, indentation + 2);
  }

  // member: tool_trajectory_in_frame2_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_trajectory_in_frame2_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_trajectory_in_frame2_is_set, out);
    out << "\n";
  }

  // member: frame2_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame2_name, out);
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

  // member: target_trajectory_initial_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_trajectory_initial_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.target_trajectory_initial_velocity, out);
    out << "\n";
  }

  // member: target_trajectory_initial_velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_trajectory_initial_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_trajectory_initial_velocity_is_set, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GazeCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GazeCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GazeCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GazeCommandRequest>()
{
  return "bosdyn_msgs::msg::GazeCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::GazeCommandRequest>()
{
  return "bosdyn_msgs/msg/GazeCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GazeCommandRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GazeCommandRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::GazeCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_REQUEST__TRAITS_HPP_
