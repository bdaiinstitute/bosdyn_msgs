// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StraightStaircaseLanding.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_LANDING__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_LANDING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/straight_staircase_landing__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stairs_tform_landing_center'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StraightStaircaseLanding & msg,
  std::ostream & out)
{
  out << "{";
  // member: stairs_tform_landing_center
  {
    out << "stairs_tform_landing_center: ";
    to_flow_style_yaml(msg.stairs_tform_landing_center, out);
    out << ", ";
  }

  // member: stairs_tform_landing_center_is_set
  {
    out << "stairs_tform_landing_center_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.stairs_tform_landing_center_is_set, out);
    out << ", ";
  }

  // member: landing_extent_x
  {
    out << "landing_extent_x: ";
    rosidl_generator_traits::value_to_yaml(msg.landing_extent_x, out);
    out << ", ";
  }

  // member: landing_extent_y
  {
    out << "landing_extent_y: ";
    rosidl_generator_traits::value_to_yaml(msg.landing_extent_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StraightStaircaseLanding & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stairs_tform_landing_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stairs_tform_landing_center:\n";
    to_block_style_yaml(msg.stairs_tform_landing_center, out, indentation + 2);
  }

  // member: stairs_tform_landing_center_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stairs_tform_landing_center_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.stairs_tform_landing_center_is_set, out);
    out << "\n";
  }

  // member: landing_extent_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landing_extent_x: ";
    rosidl_generator_traits::value_to_yaml(msg.landing_extent_x, out);
    out << "\n";
  }

  // member: landing_extent_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landing_extent_y: ";
    rosidl_generator_traits::value_to_yaml(msg.landing_extent_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StraightStaircaseLanding & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StraightStaircaseLanding & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StraightStaircaseLanding & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StraightStaircaseLanding>()
{
  return "bosdyn_msgs::msg::StraightStaircaseLanding";
}

template<>
inline const char * name<bosdyn_msgs::msg::StraightStaircaseLanding>()
{
  return "bosdyn_msgs/msg/StraightStaircaseLanding";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StraightStaircaseLanding>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StraightStaircaseLanding>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::StraightStaircaseLanding>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_LANDING__TRAITS_HPP_
