// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PtzFocusState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_FOCUS_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_FOCUS_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/ptz_focus_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mode'
#include "bosdyn_msgs/msg/detail/ptz_focus_state_ptz_focus_mode__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PtzFocusState & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    to_flow_style_yaml(msg.mode, out);
    out << ", ";
  }

  // member: focus_position
  {
    out << "focus_position: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_position, out);
    out << ", ";
  }

  // member: focus_position_is_set
  {
    out << "focus_position_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_position_is_set, out);
    out << ", ";
  }

  // member: approx_distance
  {
    out << "approx_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.approx_distance, out);
    out << ", ";
  }

  // member: approx_distance_is_set
  {
    out << "approx_distance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.approx_distance_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PtzFocusState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode:\n";
    to_block_style_yaml(msg.mode, out, indentation + 2);
  }

  // member: focus_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_position: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_position, out);
    out << "\n";
  }

  // member: focus_position_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_position_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_position_is_set, out);
    out << "\n";
  }

  // member: approx_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "approx_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.approx_distance, out);
    out << "\n";
  }

  // member: approx_distance_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "approx_distance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.approx_distance_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PtzFocusState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PtzFocusState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PtzFocusState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PtzFocusState>()
{
  return "bosdyn_msgs::msg::PtzFocusState";
}

template<>
inline const char * name<bosdyn_msgs::msg::PtzFocusState>()
{
  return "bosdyn_msgs/msg/PtzFocusState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PtzFocusState>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::PtzFocusStatePtzFocusMode>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PtzFocusState>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::PtzFocusStatePtzFocusMode>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::PtzFocusState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_FOCUS_STATE__TRAITS_HPP_
