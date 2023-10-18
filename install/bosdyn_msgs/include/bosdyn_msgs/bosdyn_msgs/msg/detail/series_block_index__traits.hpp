// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SeriesBlockIndex.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/series_block_index__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'block_entries'
#include "bosdyn_msgs/msg/detail/series_block_index_block_entry__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SeriesBlockIndex & msg,
  std::ostream & out)
{
  out << "{";
  // member: series_index
  {
    out << "series_index: ";
    rosidl_generator_traits::value_to_yaml(msg.series_index, out);
    out << ", ";
  }

  // member: descriptor_file_offset
  {
    out << "descriptor_file_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_file_offset, out);
    out << ", ";
  }

  // member: block_entries
  {
    if (msg.block_entries.size() == 0) {
      out << "block_entries: []";
    } else {
      out << "block_entries: [";
      size_t pending_items = msg.block_entries.size();
      for (auto item : msg.block_entries) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: total_bytes
  {
    out << "total_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.total_bytes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SeriesBlockIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: series_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "series_index: ";
    rosidl_generator_traits::value_to_yaml(msg.series_index, out);
    out << "\n";
  }

  // member: descriptor_file_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "descriptor_file_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_file_offset, out);
    out << "\n";
  }

  // member: block_entries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.block_entries.size() == 0) {
      out << "block_entries: []\n";
    } else {
      out << "block_entries:\n";
      for (auto item : msg.block_entries) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SeriesBlockIndex & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SeriesBlockIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SeriesBlockIndex & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SeriesBlockIndex>()
{
  return "bosdyn_msgs::msg::SeriesBlockIndex";
}

template<>
inline const char * name<bosdyn_msgs::msg::SeriesBlockIndex>()
{
  return "bosdyn_msgs/msg/SeriesBlockIndex";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SeriesBlockIndex>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SeriesBlockIndex>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SeriesBlockIndex>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX__TRAITS_HPP_
