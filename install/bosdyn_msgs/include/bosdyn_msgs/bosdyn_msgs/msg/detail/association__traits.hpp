// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Association.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ASSOCIATION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ASSOCIATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/association__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'connected_time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Association & msg,
  std::ostream & out)
{
  out << "{";
  // member: mac_address
  {
    out << "mac_address: ";
    rosidl_generator_traits::value_to_yaml(msg.mac_address, out);
    out << ", ";
  }

  // member: connected_time
  {
    out << "connected_time: ";
    to_flow_style_yaml(msg.connected_time, out);
    out << ", ";
  }

  // member: connected_time_is_set
  {
    out << "connected_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.connected_time_is_set, out);
    out << ", ";
  }

  // member: rx_signal_dbm
  {
    out << "rx_signal_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_signal_dbm, out);
    out << ", ";
  }

  // member: rx_signal_avg_dbm
  {
    out << "rx_signal_avg_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_signal_avg_dbm, out);
    out << ", ";
  }

  // member: rx_beacon_signal_avg_dbm
  {
    out << "rx_beacon_signal_avg_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_beacon_signal_avg_dbm, out);
    out << ", ";
  }

  // member: expected_bits_per_second
  {
    out << "expected_bits_per_second: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_bits_per_second, out);
    out << ", ";
  }

  // member: rx_bytes
  {
    out << "rx_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_bytes, out);
    out << ", ";
  }

  // member: rx_packets
  {
    out << "rx_packets: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_packets, out);
    out << ", ";
  }

  // member: rx_bits_per_second
  {
    out << "rx_bits_per_second: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_bits_per_second, out);
    out << ", ";
  }

  // member: tx_bytes
  {
    out << "tx_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_bytes, out);
    out << ", ";
  }

  // member: tx_packets
  {
    out << "tx_packets: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_packets, out);
    out << ", ";
  }

  // member: tx_bits_per_second
  {
    out << "tx_bits_per_second: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_bits_per_second, out);
    out << ", ";
  }

  // member: tx_retries
  {
    out << "tx_retries: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_retries, out);
    out << ", ";
  }

  // member: tx_failed
  {
    out << "tx_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_failed, out);
    out << ", ";
  }

  // member: beacons_received
  {
    out << "beacons_received: ";
    rosidl_generator_traits::value_to_yaml(msg.beacons_received, out);
    out << ", ";
  }

  // member: beacon_loss_count
  {
    out << "beacon_loss_count: ";
    rosidl_generator_traits::value_to_yaml(msg.beacon_loss_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Association & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mac_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mac_address: ";
    rosidl_generator_traits::value_to_yaml(msg.mac_address, out);
    out << "\n";
  }

  // member: connected_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected_time:\n";
    to_block_style_yaml(msg.connected_time, out, indentation + 2);
  }

  // member: connected_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.connected_time_is_set, out);
    out << "\n";
  }

  // member: rx_signal_dbm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_signal_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_signal_dbm, out);
    out << "\n";
  }

  // member: rx_signal_avg_dbm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_signal_avg_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_signal_avg_dbm, out);
    out << "\n";
  }

  // member: rx_beacon_signal_avg_dbm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_beacon_signal_avg_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_beacon_signal_avg_dbm, out);
    out << "\n";
  }

  // member: expected_bits_per_second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_bits_per_second: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_bits_per_second, out);
    out << "\n";
  }

  // member: rx_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_bytes, out);
    out << "\n";
  }

  // member: rx_packets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_packets: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_packets, out);
    out << "\n";
  }

  // member: rx_bits_per_second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_bits_per_second: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_bits_per_second, out);
    out << "\n";
  }

  // member: tx_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_bytes, out);
    out << "\n";
  }

  // member: tx_packets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_packets: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_packets, out);
    out << "\n";
  }

  // member: tx_bits_per_second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_bits_per_second: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_bits_per_second, out);
    out << "\n";
  }

  // member: tx_retries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_retries: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_retries, out);
    out << "\n";
  }

  // member: tx_failed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_failed, out);
    out << "\n";
  }

  // member: beacons_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beacons_received: ";
    rosidl_generator_traits::value_to_yaml(msg.beacons_received, out);
    out << "\n";
  }

  // member: beacon_loss_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beacon_loss_count: ";
    rosidl_generator_traits::value_to_yaml(msg.beacon_loss_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Association & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Association & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Association & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Association>()
{
  return "bosdyn_msgs::msg::Association";
}

template<>
inline const char * name<bosdyn_msgs::msg::Association>()
{
  return "bosdyn_msgs/msg/Association";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Association>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Association>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Association>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ASSOCIATION__TRAITS_HPP_
