// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_velocity_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cylindrical_velocity'
#include "bosdyn_msgs/msg/detail/arm_velocity_command_cylindrical_velocity__traits.hpp"
// Member 'cartesian_velocity'
#include "bosdyn_msgs/msg/detail/arm_velocity_command_cartesian_velocity__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmVelocityCommandRequestOneOfCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: cylindrical_velocity
  {
    out << "cylindrical_velocity: ";
    to_flow_style_yaml(msg.cylindrical_velocity, out);
    out << ", ";
  }

  // member: cartesian_velocity
  {
    out << "cartesian_velocity: ";
    to_flow_style_yaml(msg.cartesian_velocity, out);
    out << ", ";
  }

  // member: command_choice
  {
    out << "command_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.command_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVelocityCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cylindrical_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cylindrical_velocity:\n";
    to_block_style_yaml(msg.cylindrical_velocity, out, indentation + 2);
  }

  // member: cartesian_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_velocity:\n";
    to_block_style_yaml(msg.cartesian_velocity, out, indentation + 2);
  }

  // member: command_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.command_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVelocityCommandRequestOneOfCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs/msg/ArmVelocityCommandRequestOneOfCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity>::value && has_fixed_size<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity>::value && has_bounded_size<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
