// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ResponseHeader.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESPONSE_HEADER__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RESPONSE_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/response_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request_header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'request_received_timestamp'
// Member 'response_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'error'
#include "bosdyn_msgs/msg/detail/common_error__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ResponseHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: request_header
  {
    out << "request_header: ";
    to_flow_style_yaml(msg.request_header, out);
    out << ", ";
  }

  // member: request_header_is_set
  {
    out << "request_header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.request_header_is_set, out);
    out << ", ";
  }

  // member: request_received_timestamp
  {
    out << "request_received_timestamp: ";
    to_flow_style_yaml(msg.request_received_timestamp, out);
    out << ", ";
  }

  // member: request_received_timestamp_is_set
  {
    out << "request_received_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.request_received_timestamp_is_set, out);
    out << ", ";
  }

  // member: response_timestamp
  {
    out << "response_timestamp: ";
    to_flow_style_yaml(msg.response_timestamp, out);
    out << ", ";
  }

  // member: response_timestamp_is_set
  {
    out << "response_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.response_timestamp_is_set, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    to_flow_style_yaml(msg.error, out);
    out << ", ";
  }

  // member: error_is_set
  {
    out << "error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.error_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResponseHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_header:\n";
    to_block_style_yaml(msg.request_header, out, indentation + 2);
  }

  // member: request_header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.request_header_is_set, out);
    out << "\n";
  }

  // member: request_received_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_received_timestamp:\n";
    to_block_style_yaml(msg.request_received_timestamp, out, indentation + 2);
  }

  // member: request_received_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_received_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.request_received_timestamp_is_set, out);
    out << "\n";
  }

  // member: response_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_timestamp:\n";
    to_block_style_yaml(msg.response_timestamp, out, indentation + 2);
  }

  // member: response_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.response_timestamp_is_set, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_block_style_yaml(msg.error, out, indentation + 2);
  }

  // member: error_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.error_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResponseHeader & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ResponseHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ResponseHeader & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ResponseHeader>()
{
  return "bosdyn_msgs::msg::ResponseHeader";
}

template<>
inline const char * name<bosdyn_msgs::msg::ResponseHeader>()
{
  return "bosdyn_msgs/msg/ResponseHeader";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ResponseHeader>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::CommonError>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ResponseHeader>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::CommonError>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ResponseHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESPONSE_HEADER__TRAITS_HPP_
