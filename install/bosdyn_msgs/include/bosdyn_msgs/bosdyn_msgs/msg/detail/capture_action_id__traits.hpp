// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CaptureActionId.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAPTURE_ACTION_ID__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAPTURE_ACTION_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/capture_action_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CaptureActionId & msg,
  std::ostream & out)
{
  out << "{";
  // member: action_name
  {
    out << "action_name: ";
    rosidl_generator_traits::value_to_yaml(msg.action_name, out);
    out << ", ";
  }

  // member: group_name
  {
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_is_set
  {
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureActionId & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_name: ";
    rosidl_generator_traits::value_to_yaml(msg.action_name, out);
    out << "\n";
  }

  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureActionId & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CaptureActionId & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CaptureActionId & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CaptureActionId>()
{
  return "bosdyn_msgs::msg::CaptureActionId";
}

template<>
inline const char * name<bosdyn_msgs::msg::CaptureActionId>()
{
  return "bosdyn_msgs/msg/CaptureActionId";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CaptureActionId>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CaptureActionId>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::CaptureActionId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAPTURE_ACTION_ID__TRAITS_HPP_
