// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequestOneOfTaskTargetPosition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_TARGET_POSITION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_TARGET_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_target_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConstrainedManipulationCommandRequestOneOfTaskTargetPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_linear_position
  {
    out << "target_linear_position: ";
    rosidl_generator_traits::value_to_yaml(msg.target_linear_position, out);
    out << ", ";
  }

  // member: target_angle
  {
    out << "target_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.target_angle, out);
    out << ", ";
  }

  // member: task_target_position_choice
  {
    out << "task_target_position_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.task_target_position_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConstrainedManipulationCommandRequestOneOfTaskTargetPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_linear_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_linear_position: ";
    rosidl_generator_traits::value_to_yaml(msg.target_linear_position, out);
    out << "\n";
  }

  // member: target_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.target_angle, out);
    out << "\n";
  }

  // member: task_target_position_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_target_position_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.task_target_position_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConstrainedManipulationCommandRequestOneOfTaskTargetPosition & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition>()
{
  return "bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition";
}

template<>
inline const char * name<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition>()
{
  return "bosdyn_msgs/msg/ConstrainedManipulationCommandRequestOneOfTaskTargetPosition";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_TARGET_POSITION__TRAITS_HPP_
