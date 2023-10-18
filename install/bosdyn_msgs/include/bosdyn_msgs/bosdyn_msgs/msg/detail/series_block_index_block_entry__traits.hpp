// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SeriesBlockIndexBlockEntry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX_BLOCK_ENTRY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX_BLOCK_ENTRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/series_block_index_block_entry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SeriesBlockIndexBlockEntry & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_is_set
  {
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
    out << ", ";
  }

  // member: file_offset
  {
    out << "file_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.file_offset, out);
    out << ", ";
  }

  // member: additional_indexes
  {
    if (msg.additional_indexes.size() == 0) {
      out << "additional_indexes: []";
    } else {
      out << "additional_indexes: [";
      size_t pending_items = msg.additional_indexes.size();
      for (auto item : msg.additional_indexes) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SeriesBlockIndexBlockEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
    out << "\n";
  }

  // member: file_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.file_offset, out);
    out << "\n";
  }

  // member: additional_indexes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.additional_indexes.size() == 0) {
      out << "additional_indexes: []\n";
    } else {
      out << "additional_indexes:\n";
      for (auto item : msg.additional_indexes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SeriesBlockIndexBlockEntry & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SeriesBlockIndexBlockEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SeriesBlockIndexBlockEntry & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry>()
{
  return "bosdyn_msgs::msg::SeriesBlockIndexBlockEntry";
}

template<>
inline const char * name<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry>()
{
  return "bosdyn_msgs/msg/SeriesBlockIndexBlockEntry";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX_BLOCK_ENTRY__TRAITS_HPP_
