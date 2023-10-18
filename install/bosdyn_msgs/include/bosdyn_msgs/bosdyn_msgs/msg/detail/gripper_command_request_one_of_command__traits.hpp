// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GripperCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/gripper_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'claw_gripper_command'
#include "bosdyn_msgs/msg/detail/claw_gripper_command_request__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperCommandRequestOneOfCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: claw_gripper_command
  {
    out << "claw_gripper_command: ";
    to_flow_style_yaml(msg.claw_gripper_command, out);
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
  const GripperCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: claw_gripper_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "claw_gripper_command:\n";
    to_block_style_yaml(msg.claw_gripper_command, out, indentation + 2);
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

inline std::string to_yaml(const GripperCommandRequestOneOfCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GripperCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GripperCommandRequestOneOfCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs::msg::GripperCommandRequestOneOfCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs/msg/GripperCommandRequestOneOfCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ClawGripperCommandRequest>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ClawGripperCommandRequest>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
