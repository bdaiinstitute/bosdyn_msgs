// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandAutoPushCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_PUSH_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_PUSH_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/door_command_auto_push_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'push_point_in_frame'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'hinge_side'
#include "bosdyn_msgs/msg/detail/door_command_hinge_side__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DoorCommandAutoPushCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_name
  {
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
    out << ", ";
  }

  // member: push_point_in_frame
  {
    out << "push_point_in_frame: ";
    to_flow_style_yaml(msg.push_point_in_frame, out);
    out << ", ";
  }

  // member: push_point_in_frame_is_set
  {
    out << "push_point_in_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.push_point_in_frame_is_set, out);
    out << ", ";
  }

  // member: hinge_side
  {
    out << "hinge_side: ";
    to_flow_style_yaml(msg.hinge_side, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoorCommandAutoPushCommand & msg,
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

  // member: push_point_in_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "push_point_in_frame:\n";
    to_block_style_yaml(msg.push_point_in_frame, out, indentation + 2);
  }

  // member: push_point_in_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "push_point_in_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.push_point_in_frame_is_set, out);
    out << "\n";
  }

  // member: hinge_side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hinge_side:\n";
    to_block_style_yaml(msg.hinge_side, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoorCommandAutoPushCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DoorCommandAutoPushCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DoorCommandAutoPushCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DoorCommandAutoPushCommand>()
{
  return "bosdyn_msgs::msg::DoorCommandAutoPushCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::DoorCommandAutoPushCommand>()
{
  return "bosdyn_msgs/msg/DoorCommandAutoPushCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DoorCommandAutoPushCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DoorCommandAutoPushCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DoorCommandAutoPushCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_PUSH_COMMAND__TRAITS_HPP_
