// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_velocity_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'command'
#include "bosdyn_msgs/msg/detail/arm_velocity_command_request_one_of_command__traits.hpp"
// Member 'angular_velocity_of_hand_rt_odom_in_hand'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmVelocityCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    to_flow_style_yaml(msg.command, out);
    out << ", ";
  }

  // member: angular_velocity_of_hand_rt_odom_in_hand
  {
    out << "angular_velocity_of_hand_rt_odom_in_hand: ";
    to_flow_style_yaml(msg.angular_velocity_of_hand_rt_odom_in_hand, out);
    out << ", ";
  }

  // member: angular_velocity_of_hand_rt_odom_in_hand_is_set
  {
    out << "angular_velocity_of_hand_rt_odom_in_hand_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity_of_hand_rt_odom_in_hand_is_set, out);
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

  // member: end_time
  {
    out << "end_time: ";
    to_flow_style_yaml(msg.end_time, out);
    out << ", ";
  }

  // member: end_time_is_set
  {
    out << "end_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVelocityCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command:\n";
    to_block_style_yaml(msg.command, out, indentation + 2);
  }

  // member: angular_velocity_of_hand_rt_odom_in_hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_of_hand_rt_odom_in_hand:\n";
    to_block_style_yaml(msg.angular_velocity_of_hand_rt_odom_in_hand, out, indentation + 2);
  }

  // member: angular_velocity_of_hand_rt_odom_in_hand_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_of_hand_rt_odom_in_hand_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity_of_hand_rt_odom_in_hand_is_set, out);
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

  // member: end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time:\n";
    to_block_style_yaml(msg.end_time, out, indentation + 2);
  }

  // member: end_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVelocityCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmVelocityCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmVelocityCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmVelocityCommandRequest>()
{
  return "bosdyn_msgs::msg::ArmVelocityCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmVelocityCommandRequest>()
{
  return "bosdyn_msgs/msg/ArmVelocityCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmVelocityCommandRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand>::value && has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmVelocityCommandRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand>::value && has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmVelocityCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST__TRAITS_HPP_
