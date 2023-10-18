// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ImageAcquisitionCapability.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_ACQUISITION_CAPABILITY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_ACQUISITION_CAPABILITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/image_acquisition_capability__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image_sources'
#include "bosdyn_msgs/msg/detail/image_source__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageAcquisitionCapability & msg,
  std::ostream & out)
{
  out << "{";
  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: image_sources
  {
    if (msg.image_sources.size() == 0) {
      out << "image_sources: []";
    } else {
      out << "image_sources: [";
      size_t pending_items = msg.image_sources.size();
      for (auto item : msg.image_sources) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageAcquisitionCapability & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << "\n";
  }

  // member: image_sources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_sources.size() == 0) {
      out << "image_sources: []\n";
    } else {
      out << "image_sources:\n";
      for (auto item : msg.image_sources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageAcquisitionCapability & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ImageAcquisitionCapability & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ImageAcquisitionCapability & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ImageAcquisitionCapability>()
{
  return "bosdyn_msgs::msg::ImageAcquisitionCapability";
}

template<>
inline const char * name<bosdyn_msgs::msg::ImageAcquisitionCapability>()
{
  return "bosdyn_msgs/msg/ImageAcquisitionCapability";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ImageAcquisitionCapability>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ImageAcquisitionCapability>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ImageAcquisitionCapability>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_ACQUISITION_CAPABILITY__TRAITS_HPP_
