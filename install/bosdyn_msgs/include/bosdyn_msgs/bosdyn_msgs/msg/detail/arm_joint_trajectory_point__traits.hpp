// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY_POINT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_joint_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "bosdyn_msgs/msg/detail/arm_joint_position__traits.hpp"
// Member 'velocity'
#include "bosdyn_msgs/msg/detail/arm_joint_velocity__traits.hpp"
// Member 'time_since_reference'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmJointTrajectoryPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: position_is_set
  {
    out << "position_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.position_is_set, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: velocity_is_set
  {
    out << "velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_is_set, out);
    out << ", ";
  }

  // member: time_since_reference
  {
    out << "time_since_reference: ";
    to_flow_style_yaml(msg.time_since_reference, out);
    out << ", ";
  }

  // member: time_since_reference_is_set
  {
    out << "time_since_reference_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_reference_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmJointTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: position_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.position_is_set, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_is_set, out);
    out << "\n";
  }

  // member: time_since_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_reference:\n";
    to_block_style_yaml(msg.time_since_reference, out, indentation + 2);
  }

  // member: time_since_reference_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_reference_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_reference_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmJointTrajectoryPoint & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmJointTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmJointTrajectoryPoint & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmJointTrajectoryPoint>()
{
  return "bosdyn_msgs::msg::ArmJointTrajectoryPoint";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmJointTrajectoryPoint>()
{
  return "bosdyn_msgs/msg/ArmJointTrajectoryPoint";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmJointTrajectoryPoint>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmJointPosition>::value && has_fixed_size<bosdyn_msgs::msg::ArmJointVelocity>::value && has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmJointTrajectoryPoint>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmJointPosition>::value && has_bounded_size<bosdyn_msgs::msg::ArmJointVelocity>::value && has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmJointTrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY_POINT__TRAITS_HPP_
