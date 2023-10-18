// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PoseBounds.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POSE_BOUNDS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POSE_BOUNDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/pose_bounds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseBounds & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_bounds
  {
    out << "x_bounds: ";
    rosidl_generator_traits::value_to_yaml(msg.x_bounds, out);
    out << ", ";
  }

  // member: y_bounds
  {
    out << "y_bounds: ";
    rosidl_generator_traits::value_to_yaml(msg.y_bounds, out);
    out << ", ";
  }

  // member: z_bounds
  {
    out << "z_bounds: ";
    rosidl_generator_traits::value_to_yaml(msg.z_bounds, out);
    out << ", ";
  }

  // member: yaw_bounds
  {
    out << "yaw_bounds: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_bounds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseBounds & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_bounds: ";
    rosidl_generator_traits::value_to_yaml(msg.x_bounds, out);
    out << "\n";
  }

  // member: y_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_bounds: ";
    rosidl_generator_traits::value_to_yaml(msg.y_bounds, out);
    out << "\n";
  }

  // member: z_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_bounds: ";
    rosidl_generator_traits::value_to_yaml(msg.z_bounds, out);
    out << "\n";
  }

  // member: yaw_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_bounds: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_bounds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseBounds & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PoseBounds & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PoseBounds & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PoseBounds>()
{
  return "bosdyn_msgs::msg::PoseBounds";
}

template<>
inline const char * name<bosdyn_msgs::msg::PoseBounds>()
{
  return "bosdyn_msgs/msg/PoseBounds";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PoseBounds>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PoseBounds>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::PoseBounds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__POSE_BOUNDS__TRAITS_HPP_
