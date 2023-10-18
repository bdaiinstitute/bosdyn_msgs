// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/FailureBehavior.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/failure_behavior__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'prompt_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'default_behavior'
#include "bosdyn_msgs/msg/detail/failure_behavior_one_of_default_behavior__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FailureBehavior & msg,
  std::ostream & out)
{
  out << "{";
  // member: retry_count
  {
    out << "retry_count: ";
    rosidl_generator_traits::value_to_yaml(msg.retry_count, out);
    out << ", ";
  }

  // member: prompt_duration
  {
    out << "prompt_duration: ";
    to_flow_style_yaml(msg.prompt_duration, out);
    out << ", ";
  }

  // member: prompt_duration_is_set
  {
    out << "prompt_duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt_duration_is_set, out);
    out << ", ";
  }

  // member: default_behavior
  {
    out << "default_behavior: ";
    to_flow_style_yaml(msg.default_behavior, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FailureBehavior & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: retry_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "retry_count: ";
    rosidl_generator_traits::value_to_yaml(msg.retry_count, out);
    out << "\n";
  }

  // member: prompt_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt_duration:\n";
    to_block_style_yaml(msg.prompt_duration, out, indentation + 2);
  }

  // member: prompt_duration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt_duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt_duration_is_set, out);
    out << "\n";
  }

  // member: default_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_behavior:\n";
    to_block_style_yaml(msg.default_behavior, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FailureBehavior & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::FailureBehavior & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::FailureBehavior & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::FailureBehavior>()
{
  return "bosdyn_msgs::msg::FailureBehavior";
}

template<>
inline const char * name<bosdyn_msgs::msg::FailureBehavior>()
{
  return "bosdyn_msgs/msg/FailureBehavior";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::FailureBehavior>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior>::value && has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::FailureBehavior>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior>::value && has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::FailureBehavior>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR__TRAITS_HPP_
