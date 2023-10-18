// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PlaybackModePeriodic.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_PERIODIC__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_PERIODIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/playback_mode_periodic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'interval'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlaybackModePeriodic & msg,
  std::ostream & out)
{
  out << "{";
  // member: interval
  {
    out << "interval: ";
    to_flow_style_yaml(msg.interval, out);
    out << ", ";
  }

  // member: interval_is_set
  {
    out << "interval_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.interval_is_set, out);
    out << ", ";
  }

  // member: repetitions
  {
    out << "repetitions: ";
    rosidl_generator_traits::value_to_yaml(msg.repetitions, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaybackModePeriodic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interval:\n";
    to_block_style_yaml(msg.interval, out, indentation + 2);
  }

  // member: interval_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interval_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.interval_is_set, out);
    out << "\n";
  }

  // member: repetitions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "repetitions: ";
    rosidl_generator_traits::value_to_yaml(msg.repetitions, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaybackModePeriodic & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PlaybackModePeriodic & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PlaybackModePeriodic & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PlaybackModePeriodic>()
{
  return "bosdyn_msgs::msg::PlaybackModePeriodic";
}

template<>
inline const char * name<bosdyn_msgs::msg::PlaybackModePeriodic>()
{
  return "bosdyn_msgs/msg/PlaybackModePeriodic";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PlaybackModePeriodic>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PlaybackModePeriodic>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::PlaybackModePeriodic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_PERIODIC__TRAITS_HPP_
