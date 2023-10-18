// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Vec2Value.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC2_VALUE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC2_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/vec2_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vec2Value & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: x_is_set
  {
    out << "x_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.x_is_set, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: y_is_set
  {
    out << "y_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.y_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Vec2Value & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: x_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.x_is_set, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: y_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.y_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Vec2Value & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Vec2Value & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Vec2Value & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Vec2Value>()
{
  return "bosdyn_msgs::msg::Vec2Value";
}

template<>
inline const char * name<bosdyn_msgs::msg::Vec2Value>()
{
  return "bosdyn_msgs/msg/Vec2Value";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Vec2Value>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Vec2Value>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::Vec2Value>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC2_VALUE__TRAITS_HPP_
