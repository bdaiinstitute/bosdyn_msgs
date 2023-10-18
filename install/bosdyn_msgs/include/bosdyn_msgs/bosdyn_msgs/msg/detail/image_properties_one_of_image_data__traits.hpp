// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ImagePropertiesOneOfImageData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES_ONE_OF_IMAGE_DATA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES_ONE_OF_IMAGE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/image_properties_one_of_image_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coordinates'
#include "bosdyn_msgs/msg/detail/polygon__traits.hpp"
// Member 'keypoints'
#include "bosdyn_msgs/msg/detail/keypoint_set__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImagePropertiesOneOfImageData & msg,
  std::ostream & out)
{
  out << "{";
  // member: coordinates
  {
    out << "coordinates: ";
    to_flow_style_yaml(msg.coordinates, out);
    out << ", ";
  }

  // member: keypoints
  {
    out << "keypoints: ";
    to_flow_style_yaml(msg.keypoints, out);
    out << ", ";
  }

  // member: image_data_choice
  {
    out << "image_data_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.image_data_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImagePropertiesOneOfImageData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinates:\n";
    to_block_style_yaml(msg.coordinates, out, indentation + 2);
  }

  // member: keypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keypoints:\n";
    to_block_style_yaml(msg.keypoints, out, indentation + 2);
  }

  // member: image_data_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_data_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.image_data_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImagePropertiesOneOfImageData & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ImagePropertiesOneOfImageData & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ImagePropertiesOneOfImageData & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ImagePropertiesOneOfImageData>()
{
  return "bosdyn_msgs::msg::ImagePropertiesOneOfImageData";
}

template<>
inline const char * name<bosdyn_msgs::msg::ImagePropertiesOneOfImageData>()
{
  return "bosdyn_msgs/msg/ImagePropertiesOneOfImageData";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ImagePropertiesOneOfImageData>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::KeypointSet>::value && has_fixed_size<bosdyn_msgs::msg::Polygon>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ImagePropertiesOneOfImageData>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::KeypointSet>::value && has_bounded_size<bosdyn_msgs::msg::Polygon>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ImagePropertiesOneOfImageData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES_ONE_OF_IMAGE_DATA__TRAITS_HPP_
