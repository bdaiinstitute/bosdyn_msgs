// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StructTypeDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRUCT_TYPE_DESCRIPTOR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRUCT_TYPE_DESCRIPTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/struct_type_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'key_to_series_identifier_hash'
#include "bosdyn_msgs/msg/detail/key_string_value_uint64__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StructTypeDescriptor & msg,
  std::ostream & out)
{
  out << "{";
  // member: key_to_series_identifier_hash
  {
    if (msg.key_to_series_identifier_hash.size() == 0) {
      out << "key_to_series_identifier_hash: []";
    } else {
      out << "key_to_series_identifier_hash: [";
      size_t pending_items = msg.key_to_series_identifier_hash.size();
      for (auto item : msg.key_to_series_identifier_hash) {
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
  const StructTypeDescriptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key_to_series_identifier_hash
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.key_to_series_identifier_hash.size() == 0) {
      out << "key_to_series_identifier_hash: []\n";
    } else {
      out << "key_to_series_identifier_hash:\n";
      for (auto item : msg.key_to_series_identifier_hash) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StructTypeDescriptor & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StructTypeDescriptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StructTypeDescriptor & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StructTypeDescriptor>()
{
  return "bosdyn_msgs::msg::StructTypeDescriptor";
}

template<>
inline const char * name<bosdyn_msgs::msg::StructTypeDescriptor>()
{
  return "bosdyn_msgs/msg/StructTypeDescriptor";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StructTypeDescriptor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StructTypeDescriptor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::StructTypeDescriptor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRUCT_TYPE_DESCRIPTOR__TRAITS_HPP_
