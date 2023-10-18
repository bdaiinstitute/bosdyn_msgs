// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ClientMetadata.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLIENT_METADATA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLIENT_METADATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/client_metadata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClientMetadata & msg,
  std::ostream & out)
{
  out << "{";
  // member: session_name
  {
    out << "session_name: ";
    rosidl_generator_traits::value_to_yaml(msg.session_name, out);
    out << ", ";
  }

  // member: client_username
  {
    out << "client_username: ";
    rosidl_generator_traits::value_to_yaml(msg.client_username, out);
    out << ", ";
  }

  // member: client_software_version
  {
    out << "client_software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.client_software_version, out);
    out << ", ";
  }

  // member: client_id
  {
    out << "client_id: ";
    rosidl_generator_traits::value_to_yaml(msg.client_id, out);
    out << ", ";
  }

  // member: client_type
  {
    out << "client_type: ";
    rosidl_generator_traits::value_to_yaml(msg.client_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClientMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: session_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_name: ";
    rosidl_generator_traits::value_to_yaml(msg.session_name, out);
    out << "\n";
  }

  // member: client_username
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_username: ";
    rosidl_generator_traits::value_to_yaml(msg.client_username, out);
    out << "\n";
  }

  // member: client_software_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.client_software_version, out);
    out << "\n";
  }

  // member: client_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_id: ";
    rosidl_generator_traits::value_to_yaml(msg.client_id, out);
    out << "\n";
  }

  // member: client_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_type: ";
    rosidl_generator_traits::value_to_yaml(msg.client_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClientMetadata & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ClientMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ClientMetadata & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ClientMetadata>()
{
  return "bosdyn_msgs::msg::ClientMetadata";
}

template<>
inline const char * name<bosdyn_msgs::msg::ClientMetadata>()
{
  return "bosdyn_msgs/msg/ClientMetadata";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ClientMetadata>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ClientMetadata>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ClientMetadata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLIENT_METADATA__TRAITS_HPP_
