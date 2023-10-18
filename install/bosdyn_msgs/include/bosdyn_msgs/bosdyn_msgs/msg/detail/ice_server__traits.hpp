// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ICEServer.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/ice_server__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/ice_server_servertype__traits.hpp"
// Member 'transport'
#include "bosdyn_msgs/msg/detail/ice_server_icetransport__traits.hpp"
// Member 'auth'
#include "bosdyn_msgs/msg/detail/ice_server_auth_params__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ICEServer & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: address
  {
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << ", ";
  }

  // member: port
  {
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << ", ";
  }

  // member: transport
  {
    out << "transport: ";
    to_flow_style_yaml(msg.transport, out);
    out << ", ";
  }

  // member: auth
  {
    out << "auth: ";
    to_flow_style_yaml(msg.auth, out);
    out << ", ";
  }

  // member: auth_is_set
  {
    out << "auth_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.auth_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ICEServer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << "\n";
  }

  // member: port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << "\n";
  }

  // member: transport
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transport:\n";
    to_block_style_yaml(msg.transport, out, indentation + 2);
  }

  // member: auth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auth:\n";
    to_block_style_yaml(msg.auth, out, indentation + 2);
  }

  // member: auth_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auth_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.auth_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ICEServer & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ICEServer & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ICEServer & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ICEServer>()
{
  return "bosdyn_msgs::msg::ICEServer";
}

template<>
inline const char * name<bosdyn_msgs::msg::ICEServer>()
{
  return "bosdyn_msgs/msg/ICEServer";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ICEServer>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ICEServer>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ICEServer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER__TRAITS_HPP_
