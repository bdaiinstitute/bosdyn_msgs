// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NetworkTuple.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_TUPLE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_TUPLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/network_tuple__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NetworkTuple & msg,
  std::ostream & out)
{
  out << "{";
  // member: address
  {
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << ", ";
  }

  // member: address_is_set
  {
    out << "address_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.address_is_set, out);
    out << ", ";
  }

  // member: netmask
  {
    out << "netmask: ";
    rosidl_generator_traits::value_to_yaml(msg.netmask, out);
    out << ", ";
  }

  // member: netmask_is_set
  {
    out << "netmask_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.netmask_is_set, out);
    out << ", ";
  }

  // member: gateway
  {
    out << "gateway: ";
    rosidl_generator_traits::value_to_yaml(msg.gateway, out);
    out << ", ";
  }

  // member: gateway_is_set
  {
    out << "gateway_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gateway_is_set, out);
    out << ", ";
  }

  // member: mtu
  {
    out << "mtu: ";
    rosidl_generator_traits::value_to_yaml(msg.mtu, out);
    out << ", ";
  }

  // member: mtu_is_set
  {
    out << "mtu_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mtu_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NetworkTuple & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << "\n";
  }

  // member: address_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "address_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.address_is_set, out);
    out << "\n";
  }

  // member: netmask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "netmask: ";
    rosidl_generator_traits::value_to_yaml(msg.netmask, out);
    out << "\n";
  }

  // member: netmask_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "netmask_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.netmask_is_set, out);
    out << "\n";
  }

  // member: gateway
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gateway: ";
    rosidl_generator_traits::value_to_yaml(msg.gateway, out);
    out << "\n";
  }

  // member: gateway_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gateway_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gateway_is_set, out);
    out << "\n";
  }

  // member: mtu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mtu: ";
    rosidl_generator_traits::value_to_yaml(msg.mtu, out);
    out << "\n";
  }

  // member: mtu_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mtu_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mtu_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NetworkTuple & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NetworkTuple & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NetworkTuple & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NetworkTuple>()
{
  return "bosdyn_msgs::msg::NetworkTuple";
}

template<>
inline const char * name<bosdyn_msgs::msg::NetworkTuple>()
{
  return "bosdyn_msgs/msg/NetworkTuple";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NetworkTuple>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NetworkTuple>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::NetworkTuple>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_TUPLE__TRAITS_HPP_
