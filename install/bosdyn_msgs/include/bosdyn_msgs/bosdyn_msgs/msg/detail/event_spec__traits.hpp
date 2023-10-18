// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/EventSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENT_SPEC__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EVENT_SPEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/event_spec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'log_preserve_hint'
#include "bosdyn_msgs/msg/detail/event_log_preserve_hint__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EventSpec & msg,
  std::ostream & out)
{
  out << "{";
  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: level_is_set
  {
    out << "level_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.level_is_set, out);
    out << ", ";
  }

  // member: log_preserve_hint
  {
    out << "log_preserve_hint: ";
    to_flow_style_yaml(msg.log_preserve_hint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EventSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: level_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.level_is_set, out);
    out << "\n";
  }

  // member: log_preserve_hint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "log_preserve_hint:\n";
    to_block_style_yaml(msg.log_preserve_hint, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EventSpec & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::EventSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::EventSpec & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::EventSpec>()
{
  return "bosdyn_msgs::msg::EventSpec";
}

template<>
inline const char * name<bosdyn_msgs::msg::EventSpec>()
{
  return "bosdyn_msgs/msg/EventSpec";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::EventSpec>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::EventSpec>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::EventSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENT_SPEC__TRAITS_HPP_
