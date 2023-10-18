// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ICEServerAuthParamsOneOfCredential.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_ONE_OF_CREDENTIAL__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_ONE_OF_CREDENTIAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/ice_server_auth_params_one_of_credential__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'oauth'
#include "bosdyn_msgs/msg/detail/ice_server_auth_params_oauth_pair__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ICEServerAuthParamsOneOfCredential & msg,
  std::ostream & out)
{
  out << "{";
  // member: oauth
  {
    out << "oauth: ";
    to_flow_style_yaml(msg.oauth, out);
    out << ", ";
  }

  // member: password
  {
    out << "password: ";
    rosidl_generator_traits::value_to_yaml(msg.password, out);
    out << ", ";
  }

  // member: credential_choice
  {
    out << "credential_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.credential_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ICEServerAuthParamsOneOfCredential & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: oauth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oauth:\n";
    to_block_style_yaml(msg.oauth, out, indentation + 2);
  }

  // member: password
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "password: ";
    rosidl_generator_traits::value_to_yaml(msg.password, out);
    out << "\n";
  }

  // member: credential_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "credential_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.credential_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ICEServerAuthParamsOneOfCredential & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential>()
{
  return "bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential";
}

template<>
inline const char * name<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential>()
{
  return "bosdyn_msgs/msg/ICEServerAuthParamsOneOfCredential";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_ONE_OF_CREDENTIAL__TRAITS_HPP_
