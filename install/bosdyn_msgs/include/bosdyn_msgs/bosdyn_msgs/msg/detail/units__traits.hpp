// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Units.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UNITS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UNITS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/units__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'units'
#include "bosdyn_msgs/msg/detail/units_one_of_units__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Units & msg,
  std::ostream & out)
{
  out << "{";
  // member: units
  {
    out << "units: ";
    to_flow_style_yaml(msg.units, out);
    out << ", ";
  }

  // member: is_relative
  {
    out << "is_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.is_relative, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Units & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "units:\n";
    to_block_style_yaml(msg.units, out, indentation + 2);
  }

  // member: is_relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.is_relative, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Units & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Units & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Units & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Units>()
{
  return "bosdyn_msgs::msg::Units";
}

template<>
inline const char * name<bosdyn_msgs::msg::Units>()
{
  return "bosdyn_msgs/msg/Units";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Units>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::UnitsOneOfUnits>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Units>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::UnitsOneOfUnits>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::Units>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__UNITS__TRAITS_HPP_
