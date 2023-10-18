// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetPtzFocusStateResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_FOCUS_STATE_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_FOCUS_STATE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_ptz_focus_state_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'focus_state'
#include "bosdyn_msgs/msg/detail/ptz_focus_state__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetPtzFocusStateResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: focus_state
  {
    out << "focus_state: ";
    to_flow_style_yaml(msg.focus_state, out);
    out << ", ";
  }

  // member: focus_state_is_set
  {
    out << "focus_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_state_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPtzFocusStateResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: focus_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_state:\n";
    to_block_style_yaml(msg.focus_state, out, indentation + 2);
  }

  // member: focus_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_state_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPtzFocusStateResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GetPtzFocusStateResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetPtzFocusStateResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetPtzFocusStateResponse>()
{
  return "bosdyn_msgs::msg::GetPtzFocusStateResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetPtzFocusStateResponse>()
{
  return "bosdyn_msgs/msg/GetPtzFocusStateResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetPtzFocusStateResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::PtzFocusState>::value && has_fixed_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetPtzFocusStateResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::PtzFocusState>::value && has_bounded_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::GetPtzFocusStateResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_PTZ_FOCUS_STATE_RESPONSE__TRAITS_HPP_
