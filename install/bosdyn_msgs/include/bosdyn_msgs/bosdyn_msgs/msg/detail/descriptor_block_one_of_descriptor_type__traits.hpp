// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DescriptorBlockOneOfDescriptorType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK_ONE_OF_DESCRIPTOR_TYPE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK_ONE_OF_DESCRIPTOR_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/descriptor_block_one_of_descriptor_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'file_descriptor'
#include "bosdyn_msgs/msg/detail/file_format_descriptor__traits.hpp"
// Member 'series_descriptor'
#include "bosdyn_msgs/msg/detail/series_descriptor__traits.hpp"
// Member 'series_block_index'
#include "bosdyn_msgs/msg/detail/series_block_index__traits.hpp"
// Member 'file_index'
#include "bosdyn_msgs/msg/detail/file_index__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DescriptorBlockOneOfDescriptorType & msg,
  std::ostream & out)
{
  out << "{";
  // member: file_descriptor
  {
    out << "file_descriptor: ";
    to_flow_style_yaml(msg.file_descriptor, out);
    out << ", ";
  }

  // member: series_descriptor
  {
    out << "series_descriptor: ";
    to_flow_style_yaml(msg.series_descriptor, out);
    out << ", ";
  }

  // member: series_block_index
  {
    out << "series_block_index: ";
    to_flow_style_yaml(msg.series_block_index, out);
    out << ", ";
  }

  // member: file_index
  {
    out << "file_index: ";
    to_flow_style_yaml(msg.file_index, out);
    out << ", ";
  }

  // member: descriptor_type_choice
  {
    out << "descriptor_type_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_type_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DescriptorBlockOneOfDescriptorType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: file_descriptor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_descriptor:\n";
    to_block_style_yaml(msg.file_descriptor, out, indentation + 2);
  }

  // member: series_descriptor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "series_descriptor:\n";
    to_block_style_yaml(msg.series_descriptor, out, indentation + 2);
  }

  // member: series_block_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "series_block_index:\n";
    to_block_style_yaml(msg.series_block_index, out, indentation + 2);
  }

  // member: file_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_index:\n";
    to_block_style_yaml(msg.file_index, out, indentation + 2);
  }

  // member: descriptor_type_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "descriptor_type_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_type_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DescriptorBlockOneOfDescriptorType & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType>()
{
  return "bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType";
}

template<>
inline const char * name<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType>()
{
  return "bosdyn_msgs/msg/DescriptorBlockOneOfDescriptorType";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::FileFormatDescriptor>::value && has_fixed_size<bosdyn_msgs::msg::FileIndex>::value && has_fixed_size<bosdyn_msgs::msg::SeriesBlockIndex>::value && has_fixed_size<bosdyn_msgs::msg::SeriesDescriptor>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::FileFormatDescriptor>::value && has_bounded_size<bosdyn_msgs::msg::FileIndex>::value && has_bounded_size<bosdyn_msgs::msg::SeriesBlockIndex>::value && has_bounded_size<bosdyn_msgs::msg::SeriesDescriptor>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK_ONE_OF_DESCRIPTOR_TYPE__TRAITS_HPP_
