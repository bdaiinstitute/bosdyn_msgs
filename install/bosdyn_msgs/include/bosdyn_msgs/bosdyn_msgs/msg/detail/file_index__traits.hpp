// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/FileIndex.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FILE_INDEX__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FILE_INDEX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/file_index__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'series_identifiers'
#include "bosdyn_msgs/msg/detail/series_identifier__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FileIndex & msg,
  std::ostream & out)
{
  out << "{";
  // member: series_identifiers
  {
    if (msg.series_identifiers.size() == 0) {
      out << "series_identifiers: []";
    } else {
      out << "series_identifiers: [";
      size_t pending_items = msg.series_identifiers.size();
      for (auto item : msg.series_identifiers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: series_block_index_offsets
  {
    if (msg.series_block_index_offsets.size() == 0) {
      out << "series_block_index_offsets: []";
    } else {
      out << "series_block_index_offsets: [";
      size_t pending_items = msg.series_block_index_offsets.size();
      for (auto item : msg.series_block_index_offsets) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: series_identifier_hashes
  {
    if (msg.series_identifier_hashes.size() == 0) {
      out << "series_identifier_hashes: []";
    } else {
      out << "series_identifier_hashes: [";
      size_t pending_items = msg.series_identifier_hashes.size();
      for (auto item : msg.series_identifier_hashes) {
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
  const FileIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: series_identifiers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.series_identifiers.size() == 0) {
      out << "series_identifiers: []\n";
    } else {
      out << "series_identifiers:\n";
      for (auto item : msg.series_identifiers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: series_block_index_offsets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.series_block_index_offsets.size() == 0) {
      out << "series_block_index_offsets: []\n";
    } else {
      out << "series_block_index_offsets:\n";
      for (auto item : msg.series_block_index_offsets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: series_identifier_hashes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.series_identifier_hashes.size() == 0) {
      out << "series_identifier_hashes: []\n";
    } else {
      out << "series_identifier_hashes:\n";
      for (auto item : msg.series_identifier_hashes) {
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

inline std::string to_yaml(const FileIndex & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::FileIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::FileIndex & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::FileIndex>()
{
  return "bosdyn_msgs::msg::FileIndex";
}

template<>
inline const char * name<bosdyn_msgs::msg::FileIndex>()
{
  return "bosdyn_msgs/msg/FileIndex";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::FileIndex>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::FileIndex>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::FileIndex>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FILE_INDEX__TRAITS_HPP_
