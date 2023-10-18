// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'arm_cartesian_command'
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request__traits.hpp"
// Member 'arm_joint_move_command'
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_request__traits.hpp"
// Member 'named_arm_position_command'
#include "bosdyn_msgs/msg/detail/named_arm_positions_command_request__traits.hpp"
// Member 'arm_velocity_command'
#include "bosdyn_msgs/msg/detail/arm_velocity_command_request__traits.hpp"
// Member 'arm_gaze_command'
#include "bosdyn_msgs/msg/detail/gaze_command_request__traits.hpp"
// Member 'arm_stop_command'
#include "bosdyn_msgs/msg/detail/arm_stop_command_request__traits.hpp"
// Member 'arm_drag_command'
#include "bosdyn_msgs/msg/detail/arm_drag_command_request__traits.hpp"
// Member 'arm_impedance_command'
#include "bosdyn_msgs/msg/detail/arm_impedance_command_request__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmCommandRequestOneOfCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_cartesian_command
  {
    out << "arm_cartesian_command: ";
    to_flow_style_yaml(msg.arm_cartesian_command, out);
    out << ", ";
  }

  // member: arm_joint_move_command
  {
    out << "arm_joint_move_command: ";
    to_flow_style_yaml(msg.arm_joint_move_command, out);
    out << ", ";
  }

  // member: named_arm_position_command
  {
    out << "named_arm_position_command: ";
    to_flow_style_yaml(msg.named_arm_position_command, out);
    out << ", ";
  }

  // member: arm_velocity_command
  {
    out << "arm_velocity_command: ";
    to_flow_style_yaml(msg.arm_velocity_command, out);
    out << ", ";
  }

  // member: arm_gaze_command
  {
    out << "arm_gaze_command: ";
    to_flow_style_yaml(msg.arm_gaze_command, out);
    out << ", ";
  }

  // member: arm_stop_command
  {
    out << "arm_stop_command: ";
    to_flow_style_yaml(msg.arm_stop_command, out);
    out << ", ";
  }

  // member: arm_drag_command
  {
    out << "arm_drag_command: ";
    to_flow_style_yaml(msg.arm_drag_command, out);
    out << ", ";
  }

  // member: arm_impedance_command
  {
    out << "arm_impedance_command: ";
    to_flow_style_yaml(msg.arm_impedance_command, out);
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
  const ArmCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arm_cartesian_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_cartesian_command:\n";
    to_block_style_yaml(msg.arm_cartesian_command, out, indentation + 2);
  }

  // member: arm_joint_move_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_joint_move_command:\n";
    to_block_style_yaml(msg.arm_joint_move_command, out, indentation + 2);
  }

  // member: named_arm_position_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "named_arm_position_command:\n";
    to_block_style_yaml(msg.named_arm_position_command, out, indentation + 2);
  }

  // member: arm_velocity_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_velocity_command:\n";
    to_block_style_yaml(msg.arm_velocity_command, out, indentation + 2);
  }

  // member: arm_gaze_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_gaze_command:\n";
    to_block_style_yaml(msg.arm_gaze_command, out, indentation + 2);
  }

  // member: arm_stop_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_stop_command:\n";
    to_block_style_yaml(msg.arm_stop_command, out, indentation + 2);
  }

  // member: arm_drag_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_drag_command:\n";
    to_block_style_yaml(msg.arm_drag_command, out, indentation + 2);
  }

  // member: arm_impedance_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_impedance_command:\n";
    to_block_style_yaml(msg.arm_impedance_command, out, indentation + 2);
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

inline std::string to_yaml(const ArmCommandRequestOneOfCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmCommandRequestOneOfCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs::msg::ArmCommandRequestOneOfCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs/msg/ArmCommandRequestOneOfCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmCartesianCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::ArmDragCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::ArmImpedanceCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::ArmJointMoveCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::ArmStopCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::ArmVelocityCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::GazeCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::NamedArmPositionsCommandRequest>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmCartesianCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::ArmDragCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::ArmImpedanceCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::ArmJointMoveCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::ArmStopCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::ArmVelocityCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::GazeCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::NamedArmPositionsCommandRequest>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
