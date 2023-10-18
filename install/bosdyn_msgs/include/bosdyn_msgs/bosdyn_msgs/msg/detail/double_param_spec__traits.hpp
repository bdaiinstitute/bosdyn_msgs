// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DoubleParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOUBLE_PARAM_SPEC__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOUBLE_PARAM_SPEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/double_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'units'
#include "bosdyn_msgs/msg/detail/units__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DoubleParamSpec & msg,
  std::ostream & out)
{
  out << "{";
  // member: default_value
  {
    out << "default_value: ";
    rosidl_generator_traits::value_to_yaml(msg.default_value, out);
    out << ", ";
  }

  // member: default_value_is_set
  {
    out << "default_value_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.default_value_is_set, out);
    out << ", ";
  }

  // member: units
  {
    out << "units: ";
    to_flow_style_yaml(msg.units, out);
    out << ", ";
  }

  // member: units_is_set
  {
    out << "units_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.units_is_set, out);
    out << ", ";
  }

  // member: min_value
  {
    out << "min_value: ";
    rosidl_generator_traits::value_to_yaml(msg.min_value, out);
    out << ", ";
  }

  // member: min_value_is_set
  {
    out << "min_value_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.min_value_is_set, out);
    out << ", ";
  }

  // member: max_value
  {
    out << "max_value: ";
    rosidl_generator_traits::value_to_yaml(msg.max_value, out);
    out << ", ";
  }

  // member: max_value_is_set
  {
    out << "max_value_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_value_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoubleParamSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: default_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_value: ";
    rosidl_generator_traits::value_to_yaml(msg.default_value, out);
    out << "\n";
  }

  // member: default_value_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_value_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.default_value_is_set, out);
    out << "\n";
  }

  // member: units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "units:\n";
    to_block_style_yaml(msg.units, out, indentation + 2);
  }

  // member: units_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "units_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.units_is_set, out);
    out << "\n";
  }

  // member: min_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_value: ";
    rosidl_generator_traits::value_to_yaml(msg.min_value, out);
    out << "\n";
  }

  // member: min_value_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_value_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.min_value_is_set, out);
    out << "\n";
  }

  // member: max_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_value: ";
    rosidl_generator_traits::value_to_yaml(msg.max_value, out);
    out << "\n";
  }

  // member: max_value_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_value_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_value_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoubleParamSpec & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DoubleParamSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DoubleParamSpec & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DoubleParamSpec>()
{
  return "bosdyn_msgs::msg::DoubleParamSpec";
}

template<>
inline const char * name<bosdyn_msgs::msg::DoubleParamSpec>()
{
  return "bosdyn_msgs/msg/DoubleParamSpec";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DoubleParamSpec>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Units>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DoubleParamSpec>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Units>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::DoubleParamSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOUBLE_PARAM_SPEC__TRAITS_HPP_
