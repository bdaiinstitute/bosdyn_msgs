// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DebugRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/debug_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DebugRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: enable_temperature
  {
    out << "enable_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_temperature, out);
    out << ", ";
  }

  // member: enable_humidity
  {
    out << "enable_humidity: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_humidity, out);
    out << ", ";
  }

  // member: enable_bit
  {
    out << "enable_bit: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_bit, out);
    out << ", ";
  }

  // member: enable_shock
  {
    out << "enable_shock: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_shock, out);
    out << ", ";
  }

  // member: enable_system_stat
  {
    out << "enable_system_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_system_stat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DebugRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: enable_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_temperature, out);
    out << "\n";
  }

  // member: enable_humidity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_humidity: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_humidity, out);
    out << "\n";
  }

  // member: enable_bit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_bit: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_bit, out);
    out << "\n";
  }

  // member: enable_shock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_shock: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_shock, out);
    out << "\n";
  }

  // member: enable_system_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_system_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_system_stat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DebugRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DebugRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DebugRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DebugRequest>()
{
  return "bosdyn_msgs::msg::DebugRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::DebugRequest>()
{
  return "bosdyn_msgs/msg/DebugRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DebugRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DebugRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::DebugRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__TRAITS_HPP_
