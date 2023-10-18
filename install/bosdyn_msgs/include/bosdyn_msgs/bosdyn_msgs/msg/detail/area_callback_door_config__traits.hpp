// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackDoorConfig.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DOOR_CONFIG__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DOOR_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/area_callback_door_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'forward_command'
// Member 'reverse_command'
#include "bosdyn_msgs/msg/detail/door_command_request__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AreaCallbackDoorConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: forward_command
  {
    out << "forward_command: ";
    to_flow_style_yaml(msg.forward_command, out);
    out << ", ";
  }

  // member: forward_command_is_set
  {
    out << "forward_command_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_command_is_set, out);
    out << ", ";
  }

  // member: reverse_command
  {
    out << "reverse_command: ";
    to_flow_style_yaml(msg.reverse_command, out);
    out << ", ";
  }

  // member: reverse_command_is_set
  {
    out << "reverse_command_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse_command_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AreaCallbackDoorConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: forward_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward_command:\n";
    to_block_style_yaml(msg.forward_command, out, indentation + 2);
  }

  // member: forward_command_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward_command_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_command_is_set, out);
    out << "\n";
  }

  // member: reverse_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse_command:\n";
    to_block_style_yaml(msg.reverse_command, out, indentation + 2);
  }

  // member: reverse_command_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse_command_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse_command_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AreaCallbackDoorConfig & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AreaCallbackDoorConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AreaCallbackDoorConfig & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AreaCallbackDoorConfig>()
{
  return "bosdyn_msgs::msg::AreaCallbackDoorConfig";
}

template<>
inline const char * name<bosdyn_msgs::msg::AreaCallbackDoorConfig>()
{
  return "bosdyn_msgs/msg/AreaCallbackDoorConfig";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AreaCallbackDoorConfig>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DoorCommandRequest>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AreaCallbackDoorConfig>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DoorCommandRequest>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::AreaCallbackDoorConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DOOR_CONFIG__TRAITS_HPP_
