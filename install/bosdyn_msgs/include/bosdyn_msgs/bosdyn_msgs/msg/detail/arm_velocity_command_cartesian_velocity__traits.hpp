// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandCartesianVelocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CARTESIAN_VELOCITY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CARTESIAN_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_velocity_command_cartesian_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'velocity_in_frame_name'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmVelocityCommandCartesianVelocity & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_name
  {
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
    out << ", ";
  }

  // member: velocity_in_frame_name
  {
    out << "velocity_in_frame_name: ";
    to_flow_style_yaml(msg.velocity_in_frame_name, out);
    out << ", ";
  }

  // member: velocity_in_frame_name_is_set
  {
    out << "velocity_in_frame_name_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_in_frame_name_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVelocityCommandCartesianVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
    out << "\n";
  }

  // member: velocity_in_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_in_frame_name:\n";
    to_block_style_yaml(msg.velocity_in_frame_name, out, indentation + 2);
  }

  // member: velocity_in_frame_name_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_in_frame_name_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_in_frame_name_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVelocityCommandCartesianVelocity & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity>()
{
  return "bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity>()
{
  return "bosdyn_msgs/msg/ArmVelocityCommandCartesianVelocity";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CARTESIAN_VELOCITY__TRAITS_HPP_
