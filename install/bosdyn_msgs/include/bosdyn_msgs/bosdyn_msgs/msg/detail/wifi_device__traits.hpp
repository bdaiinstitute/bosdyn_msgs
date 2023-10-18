// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/WifiDevice.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WIFI_DEVICE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WIFI_DEVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/wifi_device__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/wifi_device_type__traits.hpp"
// Member 'associations'
#include "bosdyn_msgs/msg/detail/association__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WifiDevice & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: mac_address
  {
    out << "mac_address: ";
    rosidl_generator_traits::value_to_yaml(msg.mac_address, out);
    out << ", ";
  }

  // member: ssid
  {
    out << "ssid: ";
    rosidl_generator_traits::value_to_yaml(msg.ssid, out);
    out << ", ";
  }

  // member: tx_power_dbm
  {
    out << "tx_power_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_power_dbm, out);
    out << ", ";
  }

  // member: associations
  {
    if (msg.associations.size() == 0) {
      out << "associations: []";
    } else {
      out << "associations: [";
      size_t pending_items = msg.associations.size();
      for (auto item : msg.associations) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WifiDevice & msg,
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

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: mac_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mac_address: ";
    rosidl_generator_traits::value_to_yaml(msg.mac_address, out);
    out << "\n";
  }

  // member: ssid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssid: ";
    rosidl_generator_traits::value_to_yaml(msg.ssid, out);
    out << "\n";
  }

  // member: tx_power_dbm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_power_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_power_dbm, out);
    out << "\n";
  }

  // member: associations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.associations.size() == 0) {
      out << "associations: []\n";
    } else {
      out << "associations:\n";
      for (auto item : msg.associations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WifiDevice & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::WifiDevice & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::WifiDevice & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::WifiDevice>()
{
  return "bosdyn_msgs::msg::WifiDevice";
}

template<>
inline const char * name<bosdyn_msgs::msg::WifiDevice>()
{
  return "bosdyn_msgs/msg/WifiDevice";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::WifiDevice>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::WifiDevice>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::WifiDevice>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WIFI_DEVICE__TRAITS_HPP_
