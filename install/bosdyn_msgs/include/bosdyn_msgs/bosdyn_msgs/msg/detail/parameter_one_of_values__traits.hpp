// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ParameterOneOfValues.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/parameter_one_of_values__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParameterOneOfValues & msg,
  std::ostream & out)
{
  out << "{";
  // member: int_value
  {
    out << "int_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int_value, out);
    out << ", ";
  }

  // member: float_value
  {
    out << "float_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float_value, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
    out << ", ";
  }

  // member: string_value
  {
    out << "string_value: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value, out);
    out << ", ";
  }

  // member: bool_value
  {
    out << "bool_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bool_value, out);
    out << ", ";
  }

  // member: uint_value
  {
    out << "uint_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint_value, out);
    out << ", ";
  }

  // member: values_choice
  {
    out << "values_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.values_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParameterOneOfValues & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: int_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int_value, out);
    out << "\n";
  }

  // member: float_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float_value, out);
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

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }

  // member: string_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value, out);
    out << "\n";
  }

  // member: bool_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bool_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bool_value, out);
    out << "\n";
  }

  // member: uint_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint_value, out);
    out << "\n";
  }

  // member: values_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "values_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.values_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParameterOneOfValues & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ParameterOneOfValues & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ParameterOneOfValues & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ParameterOneOfValues>()
{
  return "bosdyn_msgs::msg::ParameterOneOfValues";
}

template<>
inline const char * name<bosdyn_msgs::msg::ParameterOneOfValues>()
{
  return "bosdyn_msgs/msg/ParameterOneOfValues";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ParameterOneOfValues>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ParameterOneOfValues>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ParameterOneOfValues>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__TRAITS_HPP_
