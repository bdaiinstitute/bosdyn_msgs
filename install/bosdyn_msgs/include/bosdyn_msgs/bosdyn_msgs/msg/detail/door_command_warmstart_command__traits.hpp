// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandWarmstartCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_WARMSTART_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_WARMSTART_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/door_command_warmstart_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'hinge_side'
#include "bosdyn_msgs/msg/detail/door_command_hinge_side__traits.hpp"
// Member 'swing_direction'
#include "bosdyn_msgs/msg/detail/door_command_swing_direction__traits.hpp"
// Member 'handle_type'
#include "bosdyn_msgs/msg/detail/door_command_handle_type__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DoorCommandWarmstartCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: hinge_side
  {
    out << "hinge_side: ";
    to_flow_style_yaml(msg.hinge_side, out);
    out << ", ";
  }

  // member: swing_direction
  {
    out << "swing_direction: ";
    to_flow_style_yaml(msg.swing_direction, out);
    out << ", ";
  }

  // member: handle_type
  {
    out << "handle_type: ";
    to_flow_style_yaml(msg.handle_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoorCommandWarmstartCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hinge_side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hinge_side:\n";
    to_block_style_yaml(msg.hinge_side, out, indentation + 2);
  }

  // member: swing_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swing_direction:\n";
    to_block_style_yaml(msg.swing_direction, out, indentation + 2);
  }

  // member: handle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "handle_type:\n";
    to_block_style_yaml(msg.handle_type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoorCommandWarmstartCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DoorCommandWarmstartCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DoorCommandWarmstartCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DoorCommandWarmstartCommand>()
{
  return "bosdyn_msgs::msg::DoorCommandWarmstartCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::DoorCommandWarmstartCommand>()
{
  return "bosdyn_msgs/msg/DoorCommandWarmstartCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DoorCommandWarmstartCommand>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DoorCommandHandleType>::value && has_fixed_size<bosdyn_msgs::msg::DoorCommandHingeSide>::value && has_fixed_size<bosdyn_msgs::msg::DoorCommandSwingDirection>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DoorCommandWarmstartCommand>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DoorCommandHandleType>::value && has_bounded_size<bosdyn_msgs::msg::DoorCommandHingeSide>::value && has_bounded_size<bosdyn_msgs::msg::DoorCommandSwingDirection>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::DoorCommandWarmstartCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_WARMSTART_COMMAND__TRAITS_HPP_
