// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncRoundTrip.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/time_sync_round_trip__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'client_tx'
// Member 'server_rx'
// Member 'server_tx'
// Member 'client_rx'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimeSyncRoundTrip & msg,
  std::ostream & out)
{
  out << "{";
  // member: client_tx
  {
    out << "client_tx: ";
    to_flow_style_yaml(msg.client_tx, out);
    out << ", ";
  }

  // member: client_tx_is_set
  {
    out << "client_tx_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.client_tx_is_set, out);
    out << ", ";
  }

  // member: server_rx
  {
    out << "server_rx: ";
    to_flow_style_yaml(msg.server_rx, out);
    out << ", ";
  }

  // member: server_rx_is_set
  {
    out << "server_rx_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.server_rx_is_set, out);
    out << ", ";
  }

  // member: server_tx
  {
    out << "server_tx: ";
    to_flow_style_yaml(msg.server_tx, out);
    out << ", ";
  }

  // member: server_tx_is_set
  {
    out << "server_tx_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.server_tx_is_set, out);
    out << ", ";
  }

  // member: client_rx
  {
    out << "client_rx: ";
    to_flow_style_yaml(msg.client_rx, out);
    out << ", ";
  }

  // member: client_rx_is_set
  {
    out << "client_rx_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.client_rx_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeSyncRoundTrip & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: client_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_tx:\n";
    to_block_style_yaml(msg.client_tx, out, indentation + 2);
  }

  // member: client_tx_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_tx_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.client_tx_is_set, out);
    out << "\n";
  }

  // member: server_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_rx:\n";
    to_block_style_yaml(msg.server_rx, out, indentation + 2);
  }

  // member: server_rx_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_rx_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.server_rx_is_set, out);
    out << "\n";
  }

  // member: server_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_tx:\n";
    to_block_style_yaml(msg.server_tx, out, indentation + 2);
  }

  // member: server_tx_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_tx_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.server_tx_is_set, out);
    out << "\n";
  }

  // member: client_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_rx:\n";
    to_block_style_yaml(msg.client_rx, out, indentation + 2);
  }

  // member: client_rx_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_rx_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.client_rx_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeSyncRoundTrip & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::TimeSyncRoundTrip & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::TimeSyncRoundTrip & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::TimeSyncRoundTrip>()
{
  return "bosdyn_msgs::msg::TimeSyncRoundTrip";
}

template<>
inline const char * name<bosdyn_msgs::msg::TimeSyncRoundTrip>()
{
  return "bosdyn_msgs/msg/TimeSyncRoundTrip";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::TimeSyncRoundTrip>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::TimeSyncRoundTrip>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::TimeSyncRoundTrip>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__TRAITS_HPP_
