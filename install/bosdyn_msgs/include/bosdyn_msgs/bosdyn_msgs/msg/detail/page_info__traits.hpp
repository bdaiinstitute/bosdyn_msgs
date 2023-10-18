// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PageInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/page_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_range'
#include "bosdyn_msgs/msg/detail/time_range__traits.hpp"
// Member 'format'
#include "bosdyn_msgs/msg/detail/page_info_page_format__traits.hpp"
// Member 'compression'
#include "bosdyn_msgs/msg/detail/page_info_compression__traits.hpp"
// Member 'deleted_timestamp'
// Member 'download_started_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PageInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: time_range
  {
    out << "time_range: ";
    to_flow_style_yaml(msg.time_range, out);
    out << ", ";
  }

  // member: time_range_is_set
  {
    out << "time_range_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.time_range_is_set, out);
    out << ", ";
  }

  // member: num_ticks
  {
    out << "num_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.num_ticks, out);
    out << ", ";
  }

  // member: total_bytes
  {
    out << "total_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.total_bytes, out);
    out << ", ";
  }

  // member: format
  {
    out << "format: ";
    to_flow_style_yaml(msg.format, out);
    out << ", ";
  }

  // member: compression
  {
    out << "compression: ";
    to_flow_style_yaml(msg.compression, out);
    out << ", ";
  }

  // member: is_open
  {
    out << "is_open: ";
    rosidl_generator_traits::value_to_yaml(msg.is_open, out);
    out << ", ";
  }

  // member: is_downloaded
  {
    out << "is_downloaded: ";
    rosidl_generator_traits::value_to_yaml(msg.is_downloaded, out);
    out << ", ";
  }

  // member: deleted_timestamp
  {
    out << "deleted_timestamp: ";
    to_flow_style_yaml(msg.deleted_timestamp, out);
    out << ", ";
  }

  // member: deleted_timestamp_is_set
  {
    out << "deleted_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.deleted_timestamp_is_set, out);
    out << ", ";
  }

  // member: download_started_timestamp
  {
    out << "download_started_timestamp: ";
    to_flow_style_yaml(msg.download_started_timestamp, out);
    out << ", ";
  }

  // member: download_started_timestamp_is_set
  {
    out << "download_started_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.download_started_timestamp_is_set, out);
    out << ", ";
  }

  // member: request_preserve
  {
    out << "request_preserve: ";
    rosidl_generator_traits::value_to_yaml(msg.request_preserve, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PageInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: time_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_range:\n";
    to_block_style_yaml(msg.time_range, out, indentation + 2);
  }

  // member: time_range_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_range_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.time_range_is_set, out);
    out << "\n";
  }

  // member: num_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.num_ticks, out);
    out << "\n";
  }

  // member: total_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.total_bytes, out);
    out << "\n";
  }

  // member: format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "format:\n";
    to_block_style_yaml(msg.format, out, indentation + 2);
  }

  // member: compression
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "compression:\n";
    to_block_style_yaml(msg.compression, out, indentation + 2);
  }

  // member: is_open
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_open: ";
    rosidl_generator_traits::value_to_yaml(msg.is_open, out);
    out << "\n";
  }

  // member: is_downloaded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_downloaded: ";
    rosidl_generator_traits::value_to_yaml(msg.is_downloaded, out);
    out << "\n";
  }

  // member: deleted_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deleted_timestamp:\n";
    to_block_style_yaml(msg.deleted_timestamp, out, indentation + 2);
  }

  // member: deleted_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deleted_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.deleted_timestamp_is_set, out);
    out << "\n";
  }

  // member: download_started_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "download_started_timestamp:\n";
    to_block_style_yaml(msg.download_started_timestamp, out, indentation + 2);
  }

  // member: download_started_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "download_started_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.download_started_timestamp_is_set, out);
    out << "\n";
  }

  // member: request_preserve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_preserve: ";
    rosidl_generator_traits::value_to_yaml(msg.request_preserve, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PageInfo & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PageInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PageInfo & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PageInfo>()
{
  return "bosdyn_msgs::msg::PageInfo";
}

template<>
inline const char * name<bosdyn_msgs::msg::PageInfo>()
{
  return "bosdyn_msgs/msg/PageInfo";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PageInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PageInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PageInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__TRAITS_HPP_
