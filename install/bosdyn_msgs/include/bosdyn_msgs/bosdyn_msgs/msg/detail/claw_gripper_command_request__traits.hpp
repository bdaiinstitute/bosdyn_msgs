// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ClawGripperCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/claw_gripper_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory'
#include "bosdyn_msgs/msg/detail/scalar_trajectory__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClawGripperCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectory
  {
    out << "trajectory: ";
    to_flow_style_yaml(msg.trajectory, out);
    out << ", ";
  }

  // member: trajectory_is_set
  {
    out << "trajectory_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_is_set, out);
    out << ", ";
  }

  // member: maximum_open_close_velocity
  {
    out << "maximum_open_close_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_open_close_velocity, out);
    out << ", ";
  }

  // member: maximum_open_close_velocity_is_set
  {
    out << "maximum_open_close_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_open_close_velocity_is_set, out);
    out << ", ";
  }

  // member: maximum_open_close_acceleration
  {
    out << "maximum_open_close_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_open_close_acceleration, out);
    out << ", ";
  }

  // member: maximum_open_close_acceleration_is_set
  {
    out << "maximum_open_close_acceleration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_open_close_acceleration_is_set, out);
    out << ", ";
  }

  // member: maximum_torque
  {
    out << "maximum_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_torque, out);
    out << ", ";
  }

  // member: maximum_torque_is_set
  {
    out << "maximum_torque_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_torque_is_set, out);
    out << ", ";
  }

  // member: disable_force_on_contact
  {
    out << "disable_force_on_contact: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_force_on_contact, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClawGripperCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory:\n";
    to_block_style_yaml(msg.trajectory, out, indentation + 2);
  }

  // member: trajectory_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_is_set, out);
    out << "\n";
  }

  // member: maximum_open_close_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_open_close_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_open_close_velocity, out);
    out << "\n";
  }

  // member: maximum_open_close_velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_open_close_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_open_close_velocity_is_set, out);
    out << "\n";
  }

  // member: maximum_open_close_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_open_close_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_open_close_acceleration, out);
    out << "\n";
  }

  // member: maximum_open_close_acceleration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_open_close_acceleration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_open_close_acceleration_is_set, out);
    out << "\n";
  }

  // member: maximum_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_torque, out);
    out << "\n";
  }

  // member: maximum_torque_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_torque_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_torque_is_set, out);
    out << "\n";
  }

  // member: disable_force_on_contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_force_on_contact: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_force_on_contact, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClawGripperCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ClawGripperCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ClawGripperCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ClawGripperCommandRequest>()
{
  return "bosdyn_msgs::msg::ClawGripperCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ClawGripperCommandRequest>()
{
  return "bosdyn_msgs/msg/ClawGripperCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ClawGripperCommandRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ScalarTrajectory>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ClawGripperCommandRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ScalarTrajectory>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ClawGripperCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_REQUEST__TRAITS_HPP_
