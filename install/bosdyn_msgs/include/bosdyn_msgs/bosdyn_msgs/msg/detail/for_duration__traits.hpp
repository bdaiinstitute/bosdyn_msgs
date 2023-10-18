// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ForDuration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOR_DURATION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOR_DURATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/for_duration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'child'
// Member 'timeout_child'
#include "bosdyn_msgs/msg/detail/node__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ForDuration & msg,
  std::ostream & out)
{
  out << "{";
  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
    out << ", ";
  }

  // member: duration_is_set
  {
    out << "duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_is_set, out);
    out << ", ";
  }

  // member: child
  {
    out << "child: ";
    to_flow_style_yaml(msg.child, out);
    out << ", ";
  }

  // member: child_is_set
  {
    out << "child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_is_set, out);
    out << ", ";
  }

  // member: time_remaining_name
  {
    out << "time_remaining_name: ";
    rosidl_generator_traits::value_to_yaml(msg.time_remaining_name, out);
    out << ", ";
  }

  // member: timeout_child
  {
    out << "timeout_child: ";
    to_flow_style_yaml(msg.timeout_child, out);
    out << ", ";
  }

  // member: timeout_child_is_set
  {
    out << "timeout_child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_child_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ForDuration & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }

  // member: duration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_is_set, out);
    out << "\n";
  }

  // member: child
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child:\n";
    to_block_style_yaml(msg.child, out, indentation + 2);
  }

  // member: child_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_is_set, out);
    out << "\n";
  }

  // member: time_remaining_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_remaining_name: ";
    rosidl_generator_traits::value_to_yaml(msg.time_remaining_name, out);
    out << "\n";
  }

  // member: timeout_child
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_child:\n";
    to_block_style_yaml(msg.timeout_child, out, indentation + 2);
  }

  // member: timeout_child_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_child_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ForDuration & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ForDuration & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ForDuration & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ForDuration>()
{
  return "bosdyn_msgs::msg::ForDuration";
}

template<>
inline const char * name<bosdyn_msgs::msg::ForDuration>()
{
  return "bosdyn_msgs/msg/ForDuration";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ForDuration>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ForDuration>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ForDuration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOR_DURATION__TRAITS_HPP_
