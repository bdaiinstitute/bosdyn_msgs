// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PointCloudEncodingParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/point_cloud_encoding_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointCloudEncodingParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: scale_factor
  {
    out << "scale_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_factor, out);
    out << ", ";
  }

  // member: max_x
  {
    out << "max_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_x, out);
    out << ", ";
  }

  // member: max_y
  {
    out << "max_y: ";
    rosidl_generator_traits::value_to_yaml(msg.max_y, out);
    out << ", ";
  }

  // member: max_z
  {
    out << "max_z: ";
    rosidl_generator_traits::value_to_yaml(msg.max_z, out);
    out << ", ";
  }

  // member: remapping_constant
  {
    out << "remapping_constant: ";
    rosidl_generator_traits::value_to_yaml(msg.remapping_constant, out);
    out << ", ";
  }

  // member: bytes_per_point
  {
    out << "bytes_per_point: ";
    rosidl_generator_traits::value_to_yaml(msg.bytes_per_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointCloudEncodingParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scale_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_factor, out);
    out << "\n";
  }

  // member: max_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_x, out);
    out << "\n";
  }

  // member: max_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_y: ";
    rosidl_generator_traits::value_to_yaml(msg.max_y, out);
    out << "\n";
  }

  // member: max_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_z: ";
    rosidl_generator_traits::value_to_yaml(msg.max_z, out);
    out << "\n";
  }

  // member: remapping_constant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remapping_constant: ";
    rosidl_generator_traits::value_to_yaml(msg.remapping_constant, out);
    out << "\n";
  }

  // member: bytes_per_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bytes_per_point: ";
    rosidl_generator_traits::value_to_yaml(msg.bytes_per_point, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointCloudEncodingParameters & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PointCloudEncodingParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PointCloudEncodingParameters & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PointCloudEncodingParameters>()
{
  return "bosdyn_msgs::msg::PointCloudEncodingParameters";
}

template<>
inline const char * name<bosdyn_msgs::msg::PointCloudEncodingParameters>()
{
  return "bosdyn_msgs/msg/PointCloudEncodingParameters";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PointCloudEncodingParameters>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PointCloudEncodingParameters>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::PointCloudEncodingParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__TRAITS_HPP_
