// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Params.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'max_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Params & msg,
  std::ostream & out)
{
  out << "{";
  // member: max_displacement
  {
    out << "max_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.max_displacement, out);
    out << ", ";
  }

  // member: max_duration
  {
    out << "max_duration: ";
    to_flow_style_yaml(msg.max_duration, out);
    out << ", ";
  }

  // member: max_duration_is_set
  {
    out << "max_duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_duration_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Params & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: max_displacement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.max_displacement, out);
    out << "\n";
  }

  // member: max_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_duration:\n";
    to_block_style_yaml(msg.max_duration, out, indentation + 2);
  }

  // member: max_duration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_duration_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Params & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Params & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Params & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Params>()
{
  return "bosdyn_msgs::msg::Params";
}

template<>
inline const char * name<bosdyn_msgs::msg::Params>()
{
  return "bosdyn_msgs/msg/Params";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Params>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Params>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::Params>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARAMS__TRAITS_HPP_
