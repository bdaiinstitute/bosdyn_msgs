// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequestOneOfTaskSpeed.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_SPEED__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConstrainedManipulationCommandRequestOneOfTaskSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: tangential_speed
  {
    out << "tangential_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.tangential_speed, out);
    out << ", ";
  }

  // member: rotational_speed
  {
    out << "rotational_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rotational_speed, out);
    out << ", ";
  }

  // member: task_speed_choice
  {
    out << "task_speed_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.task_speed_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConstrainedManipulationCommandRequestOneOfTaskSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tangential_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tangential_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.tangential_speed, out);
    out << "\n";
  }

  // member: rotational_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotational_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rotational_speed, out);
    out << "\n";
  }

  // member: task_speed_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_speed_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.task_speed_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConstrainedManipulationCommandRequestOneOfTaskSpeed & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed>()
{
  return "bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed";
}

template<>
inline const char * name<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed>()
{
  return "bosdyn_msgs/msg/ConstrainedManipulationCommandRequestOneOfTaskSpeed";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_SPEED__TRAITS_HPP_
