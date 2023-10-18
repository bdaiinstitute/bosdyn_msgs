// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RayProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAY_PROPERTIES__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAY_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/ray_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ray'
#include "bosdyn_msgs/msg/detail/ray__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RayProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: ray
  {
    out << "ray: ";
    to_flow_style_yaml(msg.ray, out);
    out << ", ";
  }

  // member: ray_is_set
  {
    out << "ray_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_is_set, out);
    out << ", ";
  }

  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RayProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ray
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray:\n";
    to_block_style_yaml(msg.ray, out, indentation + 2);
  }

  // member: ray_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_is_set, out);
    out << "\n";
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RayProperties & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RayProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RayProperties & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RayProperties>()
{
  return "bosdyn_msgs::msg::RayProperties";
}

template<>
inline const char * name<bosdyn_msgs::msg::RayProperties>()
{
  return "bosdyn_msgs/msg/RayProperties";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RayProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RayProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RayProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAY_PROPERTIES__TRAITS_HPP_
