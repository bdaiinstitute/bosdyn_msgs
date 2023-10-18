// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PointCloudResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/point_cloud_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/point_cloud_response_status__traits.hpp"
// Member 'point_cloud'
#include "bosdyn_msgs/msg/detail/point_cloud__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointCloudResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: point_cloud
  {
    out << "point_cloud: ";
    to_flow_style_yaml(msg.point_cloud, out);
    out << ", ";
  }

  // member: point_cloud_is_set
  {
    out << "point_cloud_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.point_cloud_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointCloudResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: point_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_cloud:\n";
    to_block_style_yaml(msg.point_cloud, out, indentation + 2);
  }

  // member: point_cloud_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_cloud_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.point_cloud_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointCloudResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PointCloudResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PointCloudResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PointCloudResponse>()
{
  return "bosdyn_msgs::msg::PointCloudResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::PointCloudResponse>()
{
  return "bosdyn_msgs/msg/PointCloudResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PointCloudResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::PointCloud>::value && has_fixed_size<bosdyn_msgs::msg::PointCloudResponseStatus>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PointCloudResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::PointCloud>::value && has_bounded_size<bosdyn_msgs::msg::PointCloudResponseStatus>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::PointCloudResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_RESPONSE__TRAITS_HPP_
