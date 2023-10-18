// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/UnitsOneOfUnits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/units_one_of_units__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'temp'
#include "bosdyn_msgs/msg/detail/temperature_enum__traits.hpp"
// Member 'press'
#include "bosdyn_msgs/msg/detail/pressure_enum__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UnitsOneOfUnits & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    to_flow_style_yaml(msg.temp, out);
    out << ", ";
  }

  // member: press
  {
    out << "press: ";
    to_flow_style_yaml(msg.press, out);
    out << ", ";
  }

  // member: units_choice
  {
    out << "units_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.units_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UnitsOneOfUnits & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp:\n";
    to_block_style_yaml(msg.temp, out, indentation + 2);
  }

  // member: press
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "press:\n";
    to_block_style_yaml(msg.press, out, indentation + 2);
  }

  // member: units_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "units_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.units_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UnitsOneOfUnits & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::UnitsOneOfUnits & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::UnitsOneOfUnits & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::UnitsOneOfUnits>()
{
  return "bosdyn_msgs::msg::UnitsOneOfUnits";
}

template<>
inline const char * name<bosdyn_msgs::msg::UnitsOneOfUnits>()
{
  return "bosdyn_msgs/msg/UnitsOneOfUnits";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::UnitsOneOfUnits>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::UnitsOneOfUnits>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::UnitsOneOfUnits>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__TRAITS_HPP_
