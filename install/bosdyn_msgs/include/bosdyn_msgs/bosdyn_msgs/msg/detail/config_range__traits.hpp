// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ConfigRange.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONFIG_RANGE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONFIG_RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/config_range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/dock_type__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConfigRange & msg,
  std::ostream & out)
{
  out << "{";
  // member: id_start
  {
    out << "id_start: ";
    rosidl_generator_traits::value_to_yaml(msg.id_start, out);
    out << ", ";
  }

  // member: id_end
  {
    out << "id_end: ";
    rosidl_generator_traits::value_to_yaml(msg.id_end, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfigRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id_start: ";
    rosidl_generator_traits::value_to_yaml(msg.id_start, out);
    out << "\n";
  }

  // member: id_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id_end: ";
    rosidl_generator_traits::value_to_yaml(msg.id_end, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigRange & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ConfigRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ConfigRange & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ConfigRange>()
{
  return "bosdyn_msgs::msg::ConfigRange";
}

template<>
inline const char * name<bosdyn_msgs::msg::ConfigRange>()
{
  return "bosdyn_msgs/msg/ConfigRange";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ConfigRange>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DockType>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ConfigRange>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DockType>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ConfigRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONFIG_RANGE__TRAITS_HPP_
