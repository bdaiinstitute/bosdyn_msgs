// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'resolution'
#include "bosdyn_msgs/msg/detail/vec2__traits.hpp"
// Member 'base_tform_sensor'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'intrinsics'
#include "bosdyn_msgs/msg/detail/camera_one_of_intrinsics__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Camera & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: resolution
  {
    out << "resolution: ";
    to_flow_style_yaml(msg.resolution, out);
    out << ", ";
  }

  // member: resolution_is_set
  {
    out << "resolution_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution_is_set, out);
    out << ", ";
  }

  // member: base_frame_name
  {
    out << "base_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.base_frame_name, out);
    out << ", ";
  }

  // member: base_tform_sensor
  {
    out << "base_tform_sensor: ";
    to_flow_style_yaml(msg.base_tform_sensor, out);
    out << ", ";
  }

  // member: base_tform_sensor_is_set
  {
    out << "base_tform_sensor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.base_tform_sensor_is_set, out);
    out << ", ";
  }

  // member: intrinsics
  {
    out << "intrinsics: ";
    to_flow_style_yaml(msg.intrinsics, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Camera & msg,
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

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution:\n";
    to_block_style_yaml(msg.resolution, out, indentation + 2);
  }

  // member: resolution_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution_is_set, out);
    out << "\n";
  }

  // member: base_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.base_frame_name, out);
    out << "\n";
  }

  // member: base_tform_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_tform_sensor:\n";
    to_block_style_yaml(msg.base_tform_sensor, out, indentation + 2);
  }

  // member: base_tform_sensor_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_tform_sensor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.base_tform_sensor_is_set, out);
    out << "\n";
  }

  // member: intrinsics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intrinsics:\n";
    to_block_style_yaml(msg.intrinsics, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Camera & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Camera & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Camera & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Camera>()
{
  return "bosdyn_msgs::msg::Camera";
}

template<>
inline const char * name<bosdyn_msgs::msg::Camera>()
{
  return "bosdyn_msgs/msg/Camera";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Camera>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Camera>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Camera>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA__TRAITS_HPP_
