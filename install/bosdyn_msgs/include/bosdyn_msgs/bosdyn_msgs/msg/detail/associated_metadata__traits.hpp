// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AssociatedMetadata.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_METADATA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_METADATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/associated_metadata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'reference_id'
#include "bosdyn_msgs/msg/detail/data_identifier__traits.hpp"
// Member 'metadata'
#include "bosdyn_msgs/msg/detail/metadata__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AssociatedMetadata & msg,
  std::ostream & out)
{
  out << "{";
  // member: reference_id
  {
    out << "reference_id: ";
    to_flow_style_yaml(msg.reference_id, out);
    out << ", ";
  }

  // member: reference_id_is_set
  {
    out << "reference_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_id_is_set, out);
    out << ", ";
  }

  // member: metadata
  {
    out << "metadata: ";
    to_flow_style_yaml(msg.metadata, out);
    out << ", ";
  }

  // member: metadata_is_set
  {
    out << "metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.metadata_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AssociatedMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reference_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_id:\n";
    to_block_style_yaml(msg.reference_id, out, indentation + 2);
  }

  // member: reference_id_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_id_is_set, out);
    out << "\n";
  }

  // member: metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "metadata:\n";
    to_block_style_yaml(msg.metadata, out, indentation + 2);
  }

  // member: metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.metadata_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AssociatedMetadata & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AssociatedMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AssociatedMetadata & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AssociatedMetadata>()
{
  return "bosdyn_msgs::msg::AssociatedMetadata";
}

template<>
inline const char * name<bosdyn_msgs::msg::AssociatedMetadata>()
{
  return "bosdyn_msgs/msg/AssociatedMetadata";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AssociatedMetadata>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DataIdentifier>::value && has_fixed_size<bosdyn_msgs::msg::Metadata>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AssociatedMetadata>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DataIdentifier>::value && has_bounded_size<bosdyn_msgs::msg::Metadata>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::AssociatedMetadata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_METADATA__TRAITS_HPP_
