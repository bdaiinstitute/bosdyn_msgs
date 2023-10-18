// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ListPointCloudSourcesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_POINT_CLOUD_SOURCES_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_POINT_CLOUD_SOURCES_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/list_point_cloud_sources_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'point_cloud_sources'
#include "bosdyn_msgs/msg/detail/point_cloud_source__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ListPointCloudSourcesResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: point_cloud_sources
  {
    if (msg.point_cloud_sources.size() == 0) {
      out << "point_cloud_sources: []";
    } else {
      out << "point_cloud_sources: [";
      size_t pending_items = msg.point_cloud_sources.size();
      for (auto item : msg.point_cloud_sources) {
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
  const ListPointCloudSourcesResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: point_cloud_sources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.point_cloud_sources.size() == 0) {
      out << "point_cloud_sources: []\n";
    } else {
      out << "point_cloud_sources:\n";
      for (auto item : msg.point_cloud_sources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListPointCloudSourcesResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ListPointCloudSourcesResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ListPointCloudSourcesResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ListPointCloudSourcesResponse>()
{
  return "bosdyn_msgs::msg::ListPointCloudSourcesResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::ListPointCloudSourcesResponse>()
{
  return "bosdyn_msgs/msg/ListPointCloudSourcesResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ListPointCloudSourcesResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ListPointCloudSourcesResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ListPointCloudSourcesResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_POINT_CLOUD_SOURCES_RESPONSE__TRAITS_HPP_
