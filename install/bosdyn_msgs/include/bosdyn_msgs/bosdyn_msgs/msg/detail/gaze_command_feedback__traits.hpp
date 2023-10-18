// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GazeCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/gaze_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/gaze_command_feedback_status__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GazeCommandFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: gazing_at_target
  {
    out << "gazing_at_target: ";
    rosidl_generator_traits::value_to_yaml(msg.gazing_at_target, out);
    out << ", ";
  }

  // member: gaze_to_target_rotation_measured
  {
    out << "gaze_to_target_rotation_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.gaze_to_target_rotation_measured, out);
    out << ", ";
  }

  // member: hand_position_at_goal
  {
    out << "hand_position_at_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_position_at_goal, out);
    out << ", ";
  }

  // member: hand_distance_to_goal_measured
  {
    out << "hand_distance_to_goal_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_distance_to_goal_measured, out);
    out << ", ";
  }

  // member: hand_roll_at_goal
  {
    out << "hand_roll_at_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_roll_at_goal, out);
    out << ", ";
  }

  // member: hand_roll_to_target_roll_measured
  {
    out << "hand_roll_to_target_roll_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_roll_to_target_roll_measured, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GazeCommandFeedback & msg,
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

  // member: gazing_at_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gazing_at_target: ";
    rosidl_generator_traits::value_to_yaml(msg.gazing_at_target, out);
    out << "\n";
  }

  // member: gaze_to_target_rotation_measured
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gaze_to_target_rotation_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.gaze_to_target_rotation_measured, out);
    out << "\n";
  }

  // member: hand_position_at_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_position_at_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_position_at_goal, out);
    out << "\n";
  }

  // member: hand_distance_to_goal_measured
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_distance_to_goal_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_distance_to_goal_measured, out);
    out << "\n";
  }

  // member: hand_roll_at_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_roll_at_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_roll_at_goal, out);
    out << "\n";
  }

  // member: hand_roll_to_target_roll_measured
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_roll_to_target_roll_measured: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_roll_to_target_roll_measured, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GazeCommandFeedback & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GazeCommandFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GazeCommandFeedback & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GazeCommandFeedback>()
{
  return "bosdyn_msgs::msg::GazeCommandFeedback";
}

template<>
inline const char * name<bosdyn_msgs::msg::GazeCommandFeedback>()
{
  return "bosdyn_msgs/msg/GazeCommandFeedback";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GazeCommandFeedback>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::GazeCommandFeedbackStatus>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GazeCommandFeedback>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::GazeCommandFeedbackStatus>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::GazeCommandFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK__TRAITS_HPP_
