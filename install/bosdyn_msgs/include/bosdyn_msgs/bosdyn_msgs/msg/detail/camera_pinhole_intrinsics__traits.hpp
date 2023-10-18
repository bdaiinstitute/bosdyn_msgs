// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CameraPinholeIntrinsics.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_PINHOLE_INTRINSICS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_PINHOLE_INTRINSICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/camera_pinhole_intrinsics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'focal_length'
// Member 'center_point'
#include "bosdyn_msgs/msg/detail/vec2__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraPinholeIntrinsics & msg,
  std::ostream & out)
{
  out << "{";
  // member: focal_length
  {
    out << "focal_length: ";
    to_flow_style_yaml(msg.focal_length, out);
    out << ", ";
  }

  // member: focal_length_is_set
  {
    out << "focal_length_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focal_length_is_set, out);
    out << ", ";
  }

  // member: center_point
  {
    out << "center_point: ";
    to_flow_style_yaml(msg.center_point, out);
    out << ", ";
  }

  // member: center_point_is_set
  {
    out << "center_point_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.center_point_is_set, out);
    out << ", ";
  }

  // member: k1
  {
    out << "k1: ";
    rosidl_generator_traits::value_to_yaml(msg.k1, out);
    out << ", ";
  }

  // member: k2
  {
    out << "k2: ";
    rosidl_generator_traits::value_to_yaml(msg.k2, out);
    out << ", ";
  }

  // member: k3
  {
    out << "k3: ";
    rosidl_generator_traits::value_to_yaml(msg.k3, out);
    out << ", ";
  }

  // member: k4
  {
    out << "k4: ";
    rosidl_generator_traits::value_to_yaml(msg.k4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraPinholeIntrinsics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: focal_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focal_length:\n";
    to_block_style_yaml(msg.focal_length, out, indentation + 2);
  }

  // member: focal_length_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focal_length_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focal_length_is_set, out);
    out << "\n";
  }

  // member: center_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_point:\n";
    to_block_style_yaml(msg.center_point, out, indentation + 2);
  }

  // member: center_point_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_point_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.center_point_is_set, out);
    out << "\n";
  }

  // member: k1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k1: ";
    rosidl_generator_traits::value_to_yaml(msg.k1, out);
    out << "\n";
  }

  // member: k2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k2: ";
    rosidl_generator_traits::value_to_yaml(msg.k2, out);
    out << "\n";
  }

  // member: k3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k3: ";
    rosidl_generator_traits::value_to_yaml(msg.k3, out);
    out << "\n";
  }

  // member: k4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k4: ";
    rosidl_generator_traits::value_to_yaml(msg.k4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraPinholeIntrinsics & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CameraPinholeIntrinsics & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CameraPinholeIntrinsics & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CameraPinholeIntrinsics>()
{
  return "bosdyn_msgs::msg::CameraPinholeIntrinsics";
}

template<>
inline const char * name<bosdyn_msgs::msg::CameraPinholeIntrinsics>()
{
  return "bosdyn_msgs/msg/CameraPinholeIntrinsics";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CameraPinholeIntrinsics>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Vec2>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CameraPinholeIntrinsics>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Vec2>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::CameraPinholeIntrinsics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_PINHOLE_INTRINSICS__TRAITS_HPP_
