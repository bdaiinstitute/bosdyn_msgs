// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SeriesDescriptorOneOfDataType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/series_descriptor_one_of_data_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'message_type'
#include "bosdyn_msgs/msg/detail/message_type_descriptor__traits.hpp"
// Member 'pod_type'
#include "bosdyn_msgs/msg/detail/pod_type_descriptor__traits.hpp"
// Member 'struct_type'
#include "bosdyn_msgs/msg/detail/struct_type_descriptor__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SeriesDescriptorOneOfDataType & msg,
  std::ostream & out)
{
  out << "{";
  // member: message_type
  {
    out << "message_type: ";
    to_flow_style_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: pod_type
  {
    out << "pod_type: ";
    to_flow_style_yaml(msg.pod_type, out);
    out << ", ";
  }

  // member: struct_type
  {
    out << "struct_type: ";
    to_flow_style_yaml(msg.struct_type, out);
    out << ", ";
  }

  // member: data_type_choice
  {
    out << "data_type_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.data_type_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SeriesDescriptorOneOfDataType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type:\n";
    to_block_style_yaml(msg.message_type, out, indentation + 2);
  }

  // member: pod_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pod_type:\n";
    to_block_style_yaml(msg.pod_type, out, indentation + 2);
  }

  // member: struct_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "struct_type:\n";
    to_block_style_yaml(msg.struct_type, out, indentation + 2);
  }

  // member: data_type_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_type_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.data_type_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SeriesDescriptorOneOfDataType & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SeriesDescriptorOneOfDataType & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SeriesDescriptorOneOfDataType & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType>()
{
  return "bosdyn_msgs::msg::SeriesDescriptorOneOfDataType";
}

template<>
inline const char * name<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType>()
{
  return "bosdyn_msgs/msg/SeriesDescriptorOneOfDataType";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::MessageTypeDescriptor>::value && has_fixed_size<bosdyn_msgs::msg::PodTypeDescriptor>::value && has_fixed_size<bosdyn_msgs::msg::StructTypeDescriptor>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::MessageTypeDescriptor>::value && has_bounded_size<bosdyn_msgs::msg::PodTypeDescriptor>::value && has_bounded_size<bosdyn_msgs::msg::StructTypeDescriptor>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__TRAITS_HPP_
