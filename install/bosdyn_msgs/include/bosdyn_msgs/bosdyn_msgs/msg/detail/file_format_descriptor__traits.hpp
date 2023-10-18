// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/FileFormatDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/file_format_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'version'
#include "bosdyn_msgs/msg/detail/file_format_version__traits.hpp"
// Member 'annotations'
#include "bosdyn_msgs/msg/detail/key_string_value_string__traits.hpp"
// Member 'checksum_type'
#include "bosdyn_msgs/msg/detail/file_format_descriptor_check_sum_type__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FileFormatDescriptor & msg,
  std::ostream & out)
{
  out << "{";
  // member: version
  {
    out << "version: ";
    to_flow_style_yaml(msg.version, out);
    out << ", ";
  }

  // member: version_is_set
  {
    out << "version_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.version_is_set, out);
    out << ", ";
  }

  // member: annotations
  {
    if (msg.annotations.size() == 0) {
      out << "annotations: []";
    } else {
      out << "annotations: [";
      size_t pending_items = msg.annotations.size();
      for (auto item : msg.annotations) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: checksum_type
  {
    out << "checksum_type: ";
    to_flow_style_yaml(msg.checksum_type, out);
    out << ", ";
  }

  // member: checksum_num_bytes
  {
    out << "checksum_num_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.checksum_num_bytes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FileFormatDescriptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version:\n";
    to_block_style_yaml(msg.version, out, indentation + 2);
  }

  // member: version_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.version_is_set, out);
    out << "\n";
  }

  // member: annotations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.annotations.size() == 0) {
      out << "annotations: []\n";
    } else {
      out << "annotations:\n";
      for (auto item : msg.annotations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: checksum_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "checksum_type:\n";
    to_block_style_yaml(msg.checksum_type, out, indentation + 2);
  }

  // member: checksum_num_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "checksum_num_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.checksum_num_bytes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FileFormatDescriptor & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::FileFormatDescriptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::FileFormatDescriptor & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::FileFormatDescriptor>()
{
  return "bosdyn_msgs::msg::FileFormatDescriptor";
}

template<>
inline const char * name<bosdyn_msgs::msg::FileFormatDescriptor>()
{
  return "bosdyn_msgs/msg/FileFormatDescriptor";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::FileFormatDescriptor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::FileFormatDescriptor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::FileFormatDescriptor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__TRAITS_HPP_
