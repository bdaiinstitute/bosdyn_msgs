// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CameraSphericalLimits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_SPHERICAL_LIMITS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_SPHERICAL_LIMITS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/camera_spherical_limits__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'min_angle'
// Member 'max_angle'
#include "bosdyn_msgs/msg/detail/vec2__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraSphericalLimits & msg,
  std::ostream & out)
{
  out << "{";
  // member: min_angle
  {
    out << "min_angle: ";
    to_flow_style_yaml(msg.min_angle, out);
    out << ", ";
  }

  // member: min_angle_is_set
  {
    out << "min_angle_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.min_angle_is_set, out);
    out << ", ";
  }

  // member: max_angle
  {
    out << "max_angle: ";
    to_flow_style_yaml(msg.max_angle, out);
    out << ", ";
  }

  // member: max_angle_is_set
  {
    out << "max_angle_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angle_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSphericalLimits & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: min_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_angle:\n";
    to_block_style_yaml(msg.min_angle, out, indentation + 2);
  }

  // member: min_angle_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_angle_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.min_angle_is_set, out);
    out << "\n";
  }

  // member: max_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angle:\n";
    to_block_style_yaml(msg.max_angle, out, indentation + 2);
  }

  // member: max_angle_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angle_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angle_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSphericalLimits & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CameraSphericalLimits & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CameraSphericalLimits & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CameraSphericalLimits>()
{
  return "bosdyn_msgs::msg::CameraSphericalLimits";
}

template<>
inline const char * name<bosdyn_msgs::msg::CameraSphericalLimits>()
{
  return "bosdyn_msgs/msg/CameraSphericalLimits";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CameraSphericalLimits>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Vec2>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CameraSphericalLimits>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Vec2>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::CameraSphericalLimits>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_SPHERICAL_LIMITS__TRAITS_HPP_
