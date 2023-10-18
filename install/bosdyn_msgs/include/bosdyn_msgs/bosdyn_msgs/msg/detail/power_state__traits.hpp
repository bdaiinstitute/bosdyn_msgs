// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PowerState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/power_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'motor_power_state'
#include "bosdyn_msgs/msg/detail/power_state_motor_power_state__traits.hpp"
// Member 'shore_power_state'
#include "bosdyn_msgs/msg/detail/power_state_shore_power_state__traits.hpp"
// Member 'robot_power_state'
#include "bosdyn_msgs/msg/detail/power_state_robot_power_state__traits.hpp"
// Member 'payload_ports_power_state'
#include "bosdyn_msgs/msg/detail/power_state_payload_ports_power_state__traits.hpp"
// Member 'wifi_radio_power_state'
#include "bosdyn_msgs/msg/detail/power_state_wifi_radio_power_state__traits.hpp"
// Member 'locomotion_estimated_runtime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerState & msg,
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

  // member: motor_power_state
  {
    out << "motor_power_state: ";
    to_flow_style_yaml(msg.motor_power_state, out);
    out << ", ";
  }

  // member: shore_power_state
  {
    out << "shore_power_state: ";
    to_flow_style_yaml(msg.shore_power_state, out);
    out << ", ";
  }

  // member: robot_power_state
  {
    out << "robot_power_state: ";
    to_flow_style_yaml(msg.robot_power_state, out);
    out << ", ";
  }

  // member: payload_ports_power_state
  {
    out << "payload_ports_power_state: ";
    to_flow_style_yaml(msg.payload_ports_power_state, out);
    out << ", ";
  }

  // member: wifi_radio_power_state
  {
    out << "wifi_radio_power_state: ";
    to_flow_style_yaml(msg.wifi_radio_power_state, out);
    out << ", ";
  }

  // member: locomotion_charge_percentage
  {
    out << "locomotion_charge_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.locomotion_charge_percentage, out);
    out << ", ";
  }

  // member: locomotion_charge_percentage_is_set
  {
    out << "locomotion_charge_percentage_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.locomotion_charge_percentage_is_set, out);
    out << ", ";
  }

  // member: locomotion_estimated_runtime
  {
    out << "locomotion_estimated_runtime: ";
    to_flow_style_yaml(msg.locomotion_estimated_runtime, out);
    out << ", ";
  }

  // member: locomotion_estimated_runtime_is_set
  {
    out << "locomotion_estimated_runtime_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.locomotion_estimated_runtime_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerState & msg,
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

  // member: motor_power_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_power_state:\n";
    to_block_style_yaml(msg.motor_power_state, out, indentation + 2);
  }

  // member: shore_power_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shore_power_state:\n";
    to_block_style_yaml(msg.shore_power_state, out, indentation + 2);
  }

  // member: robot_power_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_power_state:\n";
    to_block_style_yaml(msg.robot_power_state, out, indentation + 2);
  }

  // member: payload_ports_power_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_ports_power_state:\n";
    to_block_style_yaml(msg.payload_ports_power_state, out, indentation + 2);
  }

  // member: wifi_radio_power_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wifi_radio_power_state:\n";
    to_block_style_yaml(msg.wifi_radio_power_state, out, indentation + 2);
  }

  // member: locomotion_charge_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locomotion_charge_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.locomotion_charge_percentage, out);
    out << "\n";
  }

  // member: locomotion_charge_percentage_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locomotion_charge_percentage_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.locomotion_charge_percentage_is_set, out);
    out << "\n";
  }

  // member: locomotion_estimated_runtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locomotion_estimated_runtime:\n";
    to_block_style_yaml(msg.locomotion_estimated_runtime, out, indentation + 2);
  }

  // member: locomotion_estimated_runtime_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locomotion_estimated_runtime_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.locomotion_estimated_runtime_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PowerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PowerState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PowerState>()
{
  return "bosdyn_msgs::msg::PowerState";
}

template<>
inline const char * name<bosdyn_msgs::msg::PowerState>()
{
  return "bosdyn_msgs/msg/PowerState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PowerState>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::PowerStateMotorPowerState>::value && has_fixed_size<bosdyn_msgs::msg::PowerStatePayloadPortsPowerState>::value && has_fixed_size<bosdyn_msgs::msg::PowerStateRobotPowerState>::value && has_fixed_size<bosdyn_msgs::msg::PowerStateShorePowerState>::value && has_fixed_size<bosdyn_msgs::msg::PowerStateWifiRadioPowerState>::value && has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PowerState>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::PowerStateMotorPowerState>::value && has_bounded_size<bosdyn_msgs::msg::PowerStatePayloadPortsPowerState>::value && has_bounded_size<bosdyn_msgs::msg::PowerStateRobotPowerState>::value && has_bounded_size<bosdyn_msgs::msg::PowerStateShorePowerState>::value && has_bounded_size<bosdyn_msgs::msg::PowerStateWifiRadioPowerState>::value && has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::PowerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_STATE__TRAITS_HPP_
