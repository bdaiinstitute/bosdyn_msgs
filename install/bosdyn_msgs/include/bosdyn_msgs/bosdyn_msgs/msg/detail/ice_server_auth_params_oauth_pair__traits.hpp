// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ICEServerAuthParamsOauthPair.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_OAUTH_PAIR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_OAUTH_PAIR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/ice_server_auth_params_oauth_pair__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ICEServerAuthParamsOauthPair & msg,
  std::ostream & out)
{
  out << "{";
  // member: mac_key
  {
    out << "mac_key: ";
    rosidl_generator_traits::value_to_yaml(msg.mac_key, out);
    out << ", ";
  }

  // member: access_token
  {
    out << "access_token: ";
    rosidl_generator_traits::value_to_yaml(msg.access_token, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ICEServerAuthParamsOauthPair & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mac_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mac_key: ";
    rosidl_generator_traits::value_to_yaml(msg.mac_key, out);
    out << "\n";
  }

  // member: access_token
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "access_token: ";
    rosidl_generator_traits::value_to_yaml(msg.access_token, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ICEServerAuthParamsOauthPair & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ICEServerAuthParamsOauthPair & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ICEServerAuthParamsOauthPair & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair>()
{
  return "bosdyn_msgs::msg::ICEServerAuthParamsOauthPair";
}

template<>
inline const char * name<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair>()
{
  return "bosdyn_msgs/msg/ICEServerAuthParamsOauthPair";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_OAUTH_PAIR__TRAITS_HPP_
