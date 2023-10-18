// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetPayloadAuthTokenRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_PAYLOAD_AUTH_TOKEN_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_PAYLOAD_AUTH_TOKEN_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_payload_auth_token_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'payload_credentials'
#include "bosdyn_msgs/msg/detail/payload_credentials__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetPayloadAuthTokenRequest & msg,
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

  // member: payload_credentials
  {
    out << "payload_credentials: ";
    to_flow_style_yaml(msg.payload_credentials, out);
    out << ", ";
  }

  // member: payload_credentials_is_set
  {
    out << "payload_credentials_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_credentials_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPayloadAuthTokenRequest & msg,
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

  // member: payload_credentials
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_credentials:\n";
    to_block_style_yaml(msg.payload_credentials, out, indentation + 2);
  }

  // member: payload_credentials_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_credentials_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_credentials_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPayloadAuthTokenRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GetPayloadAuthTokenRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetPayloadAuthTokenRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetPayloadAuthTokenRequest>()
{
  return "bosdyn_msgs::msg::GetPayloadAuthTokenRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetPayloadAuthTokenRequest>()
{
  return "bosdyn_msgs/msg/GetPayloadAuthTokenRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetPayloadAuthTokenRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::PayloadCredentials>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetPayloadAuthTokenRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::PayloadCredentials>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::GetPayloadAuthTokenRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_PAYLOAD_AUTH_TOKEN_REQUEST__TRAITS_HPP_
