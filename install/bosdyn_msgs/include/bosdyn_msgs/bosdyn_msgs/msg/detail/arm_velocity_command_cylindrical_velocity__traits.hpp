// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandCylindricalVelocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_velocity_command_cylindrical_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'linear_velocity'
#include "bosdyn_msgs/msg/detail/cylindrical_coordinate__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmVelocityCommandCylindricalVelocity & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_velocity
  {
    out << "linear_velocity: ";
    to_flow_style_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: linear_velocity_is_set
  {
    out << "linear_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity_is_set, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVelocityCommandCylindricalVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity:\n";
    to_block_style_yaml(msg.linear_velocity, out, indentation + 2);
  }

  // member: linear_velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity_is_set, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVelocityCommandCylindricalVelocity & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity>()
{
  return "bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity>()
{
  return "bosdyn_msgs/msg/ArmVelocityCommandCylindricalVelocity";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::CylindricalCoordinate>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::CylindricalCoordinate>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__TRAITS_HPP_
