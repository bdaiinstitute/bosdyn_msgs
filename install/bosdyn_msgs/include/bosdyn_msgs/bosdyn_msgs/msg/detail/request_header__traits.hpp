// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RequestHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: request_timestamp
  {
    out << "request_timestamp: ";
    to_flow_style_yaml(msg.request_timestamp, out);
    out << ", ";
  }

  // member: request_timestamp_is_set
  {
    out << "request_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.request_timestamp_is_set, out);
    out << ", ";
  }

  // member: client_name
  {
    out << "client_name: ";
    rosidl_generator_traits::value_to_yaml(msg.client_name, out);
    out << ", ";
  }

  // member: disable_rpc_logging
  {
    out << "disable_rpc_logging: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_rpc_logging, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RequestHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_timestamp:\n";
    to_block_style_yaml(msg.request_timestamp, out, indentation + 2);
  }

  // member: request_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.request_timestamp_is_set, out);
    out << "\n";
  }

  // member: client_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_name: ";
    rosidl_generator_traits::value_to_yaml(msg.client_name, out);
    out << "\n";
  }

  // member: disable_rpc_logging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_rpc_logging: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_rpc_logging, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RequestHeader & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RequestHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RequestHeader & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RequestHeader>()
{
  return "bosdyn_msgs::msg::RequestHeader";
}

template<>
inline const char * name<bosdyn_msgs::msg::RequestHeader>()
{
  return "bosdyn_msgs/msg/RequestHeader";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RequestHeader>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RequestHeader>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RequestHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__TRAITS_HPP_
