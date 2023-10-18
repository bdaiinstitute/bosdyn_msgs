// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StaircaseStep.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/staircase_step__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'north'
#include "bosdyn_msgs/msg/detail/vec2__traits.hpp"
// Member 'width'
#include "bosdyn_msgs/msg/detail/staircase_width__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StaircaseStep & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: point_is_set
  {
    out << "point_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.point_is_set, out);
    out << ", ";
  }

  // member: north
  {
    out << "north: ";
    to_flow_style_yaml(msg.north, out);
    out << ", ";
  }

  // member: north_is_set
  {
    out << "north_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.north_is_set, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    to_flow_style_yaml(msg.width, out);
    out << ", ";
  }

  // member: width_is_set
  {
    out << "width_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.width_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StaircaseStep & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: point_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.point_is_set, out);
    out << "\n";
  }

  // member: north
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "north:\n";
    to_block_style_yaml(msg.north, out, indentation + 2);
  }

  // member: north_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "north_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.north_is_set, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width:\n";
    to_block_style_yaml(msg.width, out, indentation + 2);
  }

  // member: width_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.width_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StaircaseStep & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StaircaseStep & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StaircaseStep & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StaircaseStep>()
{
  return "bosdyn_msgs::msg::StaircaseStep";
}

template<>
inline const char * name<bosdyn_msgs::msg::StaircaseStep>()
{
  return "bosdyn_msgs/msg/StaircaseStep";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StaircaseStep>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::StaircaseWidth>::value && has_fixed_size<bosdyn_msgs::msg::Vec2>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StaircaseStep>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::StaircaseWidth>::value && has_bounded_size<bosdyn_msgs::msg::Vec2>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::StaircaseStep>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__TRAITS_HPP_
