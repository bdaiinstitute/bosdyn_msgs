// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ImageRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/image_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image_format'
#include "bosdyn_msgs/msg/detail/image_format__traits.hpp"
// Member 'pixel_format'
#include "bosdyn_msgs/msg/detail/image_pixel_format__traits.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: image_source_name
  {
    out << "image_source_name: ";
    rosidl_generator_traits::value_to_yaml(msg.image_source_name, out);
    out << ", ";
  }

  // member: quality_percent
  {
    out << "quality_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_percent, out);
    out << ", ";
  }

  // member: image_format
  {
    out << "image_format: ";
    to_flow_style_yaml(msg.image_format, out);
    out << ", ";
  }

  // member: resize_ratio
  {
    out << "resize_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.resize_ratio, out);
    out << ", ";
  }

  // member: pixel_format
  {
    out << "pixel_format: ";
    to_flow_style_yaml(msg.pixel_format, out);
    out << ", ";
  }

  // member: custom_params
  {
    out << "custom_params: ";
    to_flow_style_yaml(msg.custom_params, out);
    out << ", ";
  }

  // member: custom_params_is_set
  {
    out << "custom_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_params_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image_source_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_source_name: ";
    rosidl_generator_traits::value_to_yaml(msg.image_source_name, out);
    out << "\n";
  }

  // member: quality_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_percent, out);
    out << "\n";
  }

  // member: image_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_format:\n";
    to_block_style_yaml(msg.image_format, out, indentation + 2);
  }

  // member: resize_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resize_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.resize_ratio, out);
    out << "\n";
  }

  // member: pixel_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_format:\n";
    to_block_style_yaml(msg.pixel_format, out, indentation + 2);
  }

  // member: custom_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_params:\n";
    to_block_style_yaml(msg.custom_params, out, indentation + 2);
  }

  // member: custom_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_params_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ImageRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ImageRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ImageRequest>()
{
  return "bosdyn_msgs::msg::ImageRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ImageRequest>()
{
  return "bosdyn_msgs/msg/ImageRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ImageRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ImageRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ImageRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__TRAITS_HPP_
