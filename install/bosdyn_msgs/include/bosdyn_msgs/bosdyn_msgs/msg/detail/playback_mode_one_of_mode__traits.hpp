// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PlaybackModeOneOfMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONE_OF_MODE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONE_OF_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/playback_mode_one_of_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'once'
#include "bosdyn_msgs/msg/detail/playback_mode_once__traits.hpp"
// Member 'periodic'
#include "bosdyn_msgs/msg/detail/playback_mode_periodic__traits.hpp"
// Member 'continuous'
#include "bosdyn_msgs/msg/detail/playback_mode_continuous__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlaybackModeOneOfMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: once
  {
    out << "once: ";
    to_flow_style_yaml(msg.once, out);
    out << ", ";
  }

  // member: periodic
  {
    out << "periodic: ";
    to_flow_style_yaml(msg.periodic, out);
    out << ", ";
  }

  // member: continuous
  {
    out << "continuous: ";
    to_flow_style_yaml(msg.continuous, out);
    out << ", ";
  }

  // member: mode_choice
  {
    out << "mode_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaybackModeOneOfMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: once
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "once:\n";
    to_block_style_yaml(msg.once, out, indentation + 2);
  }

  // member: periodic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "periodic:\n";
    to_block_style_yaml(msg.periodic, out, indentation + 2);
  }

  // member: continuous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "continuous:\n";
    to_block_style_yaml(msg.continuous, out, indentation + 2);
  }

  // member: mode_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaybackModeOneOfMode & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PlaybackModeOneOfMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PlaybackModeOneOfMode & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PlaybackModeOneOfMode>()
{
  return "bosdyn_msgs::msg::PlaybackModeOneOfMode";
}

template<>
inline const char * name<bosdyn_msgs::msg::PlaybackModeOneOfMode>()
{
  return "bosdyn_msgs/msg/PlaybackModeOneOfMode";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PlaybackModeOneOfMode>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::PlaybackModeContinuous>::value && has_fixed_size<bosdyn_msgs::msg::PlaybackModeOnce>::value && has_fixed_size<bosdyn_msgs::msg::PlaybackModePeriodic>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PlaybackModeOneOfMode>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::PlaybackModeContinuous>::value && has_bounded_size<bosdyn_msgs::msg::PlaybackModeOnce>::value && has_bounded_size<bosdyn_msgs::msg::PlaybackModePeriodic>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::PlaybackModeOneOfMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONE_OF_MODE__TRAITS_HPP_
