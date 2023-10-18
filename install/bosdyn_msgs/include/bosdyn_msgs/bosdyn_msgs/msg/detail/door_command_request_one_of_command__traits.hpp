// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/door_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'auto_grasp_command'
#include "bosdyn_msgs/msg/detail/door_command_auto_grasp_command__traits.hpp"
// Member 'warmstart_command'
#include "bosdyn_msgs/msg/detail/door_command_warmstart_command__traits.hpp"
// Member 'auto_push_command'
#include "bosdyn_msgs/msg/detail/door_command_auto_push_command__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DoorCommandRequestOneOfCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: auto_grasp_command
  {
    out << "auto_grasp_command: ";
    to_flow_style_yaml(msg.auto_grasp_command, out);
    out << ", ";
  }

  // member: warmstart_command
  {
    out << "warmstart_command: ";
    to_flow_style_yaml(msg.warmstart_command, out);
    out << ", ";
  }

  // member: auto_push_command
  {
    out << "auto_push_command: ";
    to_flow_style_yaml(msg.auto_push_command, out);
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
  const DoorCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: auto_grasp_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_grasp_command:\n";
    to_block_style_yaml(msg.auto_grasp_command, out, indentation + 2);
  }

  // member: warmstart_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warmstart_command:\n";
    to_block_style_yaml(msg.warmstart_command, out, indentation + 2);
  }

  // member: auto_push_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_push_command:\n";
    to_block_style_yaml(msg.auto_push_command, out, indentation + 2);
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

inline std::string to_yaml(const DoorCommandRequestOneOfCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DoorCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DoorCommandRequestOneOfCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs::msg::DoorCommandRequestOneOfCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs/msg/DoorCommandRequestOneOfCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DoorCommandAutoGraspCommand>::value && has_fixed_size<bosdyn_msgs::msg::DoorCommandAutoPushCommand>::value && has_fixed_size<bosdyn_msgs::msg::DoorCommandWarmstartCommand>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DoorCommandAutoGraspCommand>::value && has_bounded_size<bosdyn_msgs::msg::DoorCommandAutoPushCommand>::value && has_bounded_size<bosdyn_msgs::msg::DoorCommandWarmstartCommand>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
