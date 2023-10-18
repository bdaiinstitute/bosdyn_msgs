// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'estimated_runtime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/battery_state_status__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryState & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_is_set
  {
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
    out << ", ";
  }

  // member: identifier
  {
    out << "identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.identifier, out);
    out << ", ";
  }

  // member: charge_percentage
  {
    out << "charge_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_percentage, out);
    out << ", ";
  }

  // member: charge_percentage_is_set
  {
    out << "charge_percentage_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_percentage_is_set, out);
    out << ", ";
  }

  // member: estimated_runtime
  {
    out << "estimated_runtime: ";
    to_flow_style_yaml(msg.estimated_runtime, out);
    out << ", ";
  }

  // member: estimated_runtime_is_set
  {
    out << "estimated_runtime_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_runtime_is_set, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: current_is_set
  {
    out << "current_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.current_is_set, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: voltage_is_set
  {
    out << "voltage_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_is_set, out);
    out << ", ";
  }

  // member: temperatures
  {
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []";
    } else {
      out << "temperatures: [";
      size_t pending_items = msg.temperatures.size();
      for (auto item : msg.temperatures) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
    out << "\n";
  }

  // member: identifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.identifier, out);
    out << "\n";
  }

  // member: charge_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_percentage, out);
    out << "\n";
  }

  // member: charge_percentage_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_percentage_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_percentage_is_set, out);
    out << "\n";
  }

  // member: estimated_runtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_runtime:\n";
    to_block_style_yaml(msg.estimated_runtime, out, indentation + 2);
  }

  // member: estimated_runtime_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_runtime_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_runtime_is_set, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: current_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.current_is_set, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: voltage_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_is_set, out);
    out << "\n";
  }

  // member: temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []\n";
    } else {
      out << "temperatures:\n";
      for (auto item : msg.temperatures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BatteryState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BatteryState>()
{
  return "bosdyn_msgs::msg::BatteryState";
}

template<>
inline const char * name<bosdyn_msgs::msg::BatteryState>()
{
  return "bosdyn_msgs/msg/BatteryState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::BatteryState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
