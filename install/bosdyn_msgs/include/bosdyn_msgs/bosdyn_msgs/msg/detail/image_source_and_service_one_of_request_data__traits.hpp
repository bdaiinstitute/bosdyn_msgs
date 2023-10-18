// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ImageSourceAndServiceOneOfRequestData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE_ONE_OF_REQUEST_DATA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE_ONE_OF_REQUEST_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/image_source_and_service_one_of_request_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image_request'
#include "bosdyn_msgs/msg/detail/image_request__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageSourceAndServiceOneOfRequestData & msg,
  std::ostream & out)
{
  out << "{";
  // member: image_source
  {
    out << "image_source: ";
    rosidl_generator_traits::value_to_yaml(msg.image_source, out);
    out << ", ";
  }

  // member: image_request
  {
    out << "image_request: ";
    to_flow_style_yaml(msg.image_request, out);
    out << ", ";
  }

  // member: request_data_choice
  {
    out << "request_data_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.request_data_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageSourceAndServiceOneOfRequestData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_source: ";
    rosidl_generator_traits::value_to_yaml(msg.image_source, out);
    out << "\n";
  }

  // member: image_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_request:\n";
    to_block_style_yaml(msg.image_request, out, indentation + 2);
  }

  // member: request_data_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_data_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.request_data_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageSourceAndServiceOneOfRequestData & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData>()
{
  return "bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData";
}

template<>
inline const char * name<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData>()
{
  return "bosdyn_msgs/msg/ImageSourceAndServiceOneOfRequestData";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE_ONE_OF_REQUEST_DATA__TRAITS_HPP_
