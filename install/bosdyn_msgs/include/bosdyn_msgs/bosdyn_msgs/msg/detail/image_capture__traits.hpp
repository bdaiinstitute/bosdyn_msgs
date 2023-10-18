// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ImageCapture.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/image_capture__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'acquisition_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__traits.hpp"
// Member 'image'
#include "bosdyn_msgs/msg/detail/image__traits.hpp"
// Member 'capture_params'
#include "bosdyn_msgs/msg/detail/capture_parameters__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageCapture & msg,
  std::ostream & out)
{
  out << "{";
  // member: acquisition_time
  {
    out << "acquisition_time: ";
    to_flow_style_yaml(msg.acquisition_time, out);
    out << ", ";
  }

  // member: acquisition_time_is_set
  {
    out << "acquisition_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_time_is_set, out);
    out << ", ";
  }

  // member: transforms_snapshot
  {
    out << "transforms_snapshot: ";
    to_flow_style_yaml(msg.transforms_snapshot, out);
    out << ", ";
  }

  // member: transforms_snapshot_is_set
  {
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
    out << ", ";
  }

  // member: frame_name_image_sensor
  {
    out << "frame_name_image_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_image_sensor, out);
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: image_is_set
  {
    out << "image_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.image_is_set, out);
    out << ", ";
  }

  // member: capture_params
  {
    out << "capture_params: ";
    to_flow_style_yaml(msg.capture_params, out);
    out << ", ";
  }

  // member: capture_params_is_set
  {
    out << "capture_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.capture_params_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageCapture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: acquisition_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_time:\n";
    to_block_style_yaml(msg.acquisition_time, out, indentation + 2);
  }

  // member: acquisition_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_time_is_set, out);
    out << "\n";
  }

  // member: transforms_snapshot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot:\n";
    to_block_style_yaml(msg.transforms_snapshot, out, indentation + 2);
  }

  // member: transforms_snapshot_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
    out << "\n";
  }

  // member: frame_name_image_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name_image_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_image_sensor, out);
    out << "\n";
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: image_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.image_is_set, out);
    out << "\n";
  }

  // member: capture_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capture_params:\n";
    to_block_style_yaml(msg.capture_params, out, indentation + 2);
  }

  // member: capture_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capture_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.capture_params_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageCapture & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ImageCapture & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ImageCapture & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ImageCapture>()
{
  return "bosdyn_msgs::msg::ImageCapture";
}

template<>
inline const char * name<bosdyn_msgs::msg::ImageCapture>()
{
  return "bosdyn_msgs/msg/ImageCapture";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ImageCapture>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ImageCapture>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ImageCapture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE__TRAITS_HPP_
