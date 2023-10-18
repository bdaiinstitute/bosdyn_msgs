// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ElementIdentifiers.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/element_identifiers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'root_id'
// Member 'action_id'
#include "bosdyn_msgs/msg/detail/node_identifier__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ElementIdentifiers & msg,
  std::ostream & out)
{
  out << "{";
  // member: root_id
  {
    out << "root_id: ";
    to_flow_style_yaml(msg.root_id, out);
    out << ", ";
  }

  // member: root_id_is_set
  {
    out << "root_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_id_is_set, out);
    out << ", ";
  }

  // member: action_id
  {
    out << "action_id: ";
    to_flow_style_yaml(msg.action_id, out);
    out << ", ";
  }

  // member: action_id_is_set
  {
    out << "action_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_id_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ElementIdentifiers & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: root_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_id:\n";
    to_block_style_yaml(msg.root_id, out, indentation + 2);
  }

  // member: root_id_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_id_is_set, out);
    out << "\n";
  }

  // member: action_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_id:\n";
    to_block_style_yaml(msg.action_id, out, indentation + 2);
  }

  // member: action_id_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_id_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ElementIdentifiers & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ElementIdentifiers & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ElementIdentifiers & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ElementIdentifiers>()
{
  return "bosdyn_msgs::msg::ElementIdentifiers";
}

template<>
inline const char * name<bosdyn_msgs::msg::ElementIdentifiers>()
{
  return "bosdyn_msgs/msg/ElementIdentifiers";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ElementIdentifiers>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::NodeIdentifier>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ElementIdentifiers>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::NodeIdentifier>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ElementIdentifiers>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__TRAITS_HPP_
