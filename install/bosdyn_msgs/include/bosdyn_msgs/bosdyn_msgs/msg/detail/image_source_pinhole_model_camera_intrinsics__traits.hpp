// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ImageSourcePinholeModelCameraIntrinsics.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL_CAMERA_INTRINSICS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL_CAMERA_INTRINSICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/image_source_pinhole_model_camera_intrinsics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'focal_length'
// Member 'principal_point'
// Member 'skew'
#include "bosdyn_msgs/msg/detail/vec2__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageSourcePinholeModelCameraIntrinsics & msg,
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

  // member: principal_point
  {
    out << "principal_point: ";
    to_flow_style_yaml(msg.principal_point, out);
    out << ", ";
  }

  // member: principal_point_is_set
  {
    out << "principal_point_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.principal_point_is_set, out);
    out << ", ";
  }

  // member: skew
  {
    out << "skew: ";
    to_flow_style_yaml(msg.skew, out);
    out << ", ";
  }

  // member: skew_is_set
  {
    out << "skew_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.skew_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageSourcePinholeModelCameraIntrinsics & msg,
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

  // member: principal_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "principal_point:\n";
    to_block_style_yaml(msg.principal_point, out, indentation + 2);
  }

  // member: principal_point_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "principal_point_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.principal_point_is_set, out);
    out << "\n";
  }

  // member: skew
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skew:\n";
    to_block_style_yaml(msg.skew, out, indentation + 2);
  }

  // member: skew_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skew_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.skew_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageSourcePinholeModelCameraIntrinsics & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics>()
{
  return "bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics";
}

template<>
inline const char * name<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics>()
{
  return "bosdyn_msgs/msg/ImageSourcePinholeModelCameraIntrinsics";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Vec2>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Vec2>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL_CAMERA_INTRINSICS__TRAITS_HPP_
