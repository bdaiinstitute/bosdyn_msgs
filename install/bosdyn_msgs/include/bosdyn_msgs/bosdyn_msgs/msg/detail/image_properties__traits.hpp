// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ImageProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/image_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image_data'
#include "bosdyn_msgs/msg/detail/image_properties_one_of_image_data__traits.hpp"
// Member 'image_source'
#include "bosdyn_msgs/msg/detail/image_source__traits.hpp"
// Member 'image_capture'
#include "bosdyn_msgs/msg/detail/image_capture__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_source
  {
    out << "camera_source: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_source, out);
    out << ", ";
  }

  // member: image_data
  {
    out << "image_data: ";
    to_flow_style_yaml(msg.image_data, out);
    out << ", ";
  }

  // member: image_source
  {
    out << "image_source: ";
    to_flow_style_yaml(msg.image_source, out);
    out << ", ";
  }

  // member: image_source_is_set
  {
    out << "image_source_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.image_source_is_set, out);
    out << ", ";
  }

  // member: image_capture
  {
    out << "image_capture: ";
    to_flow_style_yaml(msg.image_capture, out);
    out << ", ";
  }

  // member: image_capture_is_set
  {
    out << "image_capture_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.image_capture_is_set, out);
    out << ", ";
  }

  // member: frame_name_image_coordinates
  {
    out << "frame_name_image_coordinates: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_image_coordinates, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_source: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_source, out);
    out << "\n";
  }

  // member: image_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_data:\n";
    to_block_style_yaml(msg.image_data, out, indentation + 2);
  }

  // member: image_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_source:\n";
    to_block_style_yaml(msg.image_source, out, indentation + 2);
  }

  // member: image_source_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_source_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.image_source_is_set, out);
    out << "\n";
  }

  // member: image_capture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_capture:\n";
    to_block_style_yaml(msg.image_capture, out, indentation + 2);
  }

  // member: image_capture_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_capture_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.image_capture_is_set, out);
    out << "\n";
  }

  // member: frame_name_image_coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name_image_coordinates: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_image_coordinates, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageProperties & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ImageProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ImageProperties & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ImageProperties>()
{
  return "bosdyn_msgs::msg::ImageProperties";
}

template<>
inline const char * name<bosdyn_msgs::msg::ImageProperties>()
{
  return "bosdyn_msgs/msg/ImageProperties";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ImageProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ImageProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ImageProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES__TRAITS_HPP_
