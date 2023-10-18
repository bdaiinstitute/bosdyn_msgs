// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmJointMoveCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_joint_move_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory'
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmJointMoveCommandRequest & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmJointMoveCommandRequest & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmJointMoveCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmJointMoveCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmJointMoveCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmJointMoveCommandRequest>()
{
  return "bosdyn_msgs::msg::ArmJointMoveCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmJointMoveCommandRequest>()
{
  return "bosdyn_msgs/msg/ArmJointMoveCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmJointMoveCommandRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmJointTrajectory>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmJointMoveCommandRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmJointTrajectory>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmJointMoveCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_REQUEST__TRAITS_HPP_
