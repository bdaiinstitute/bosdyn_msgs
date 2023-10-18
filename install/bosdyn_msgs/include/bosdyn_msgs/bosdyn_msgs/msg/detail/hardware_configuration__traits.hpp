// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/HardwareConfiguration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__HARDWARE_CONFIGURATION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__HARDWARE_CONFIGURATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/hardware_configuration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'skeleton'
#include "bosdyn_msgs/msg/detail/skeleton__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareConfiguration & msg,
  std::ostream & out)
{
  out << "{";
  // member: skeleton
  {
    out << "skeleton: ";
    to_flow_style_yaml(msg.skeleton, out);
    out << ", ";
  }

  // member: skeleton_is_set
  {
    out << "skeleton_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.skeleton_is_set, out);
    out << ", ";
  }

  // member: can_power_command_request_off_robot
  {
    out << "can_power_command_request_off_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.can_power_command_request_off_robot, out);
    out << ", ";
  }

  // member: can_power_command_request_cycle_robot
  {
    out << "can_power_command_request_cycle_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.can_power_command_request_cycle_robot, out);
    out << ", ";
  }

  // member: can_power_command_request_payload_ports
  {
    out << "can_power_command_request_payload_ports: ";
    rosidl_generator_traits::value_to_yaml(msg.can_power_command_request_payload_ports, out);
    out << ", ";
  }

  // member: can_power_command_request_wifi_radio
  {
    out << "can_power_command_request_wifi_radio: ";
    rosidl_generator_traits::value_to_yaml(msg.can_power_command_request_wifi_radio, out);
    out << ", ";
  }

  // member: has_audio_visual_system
  {
    out << "has_audio_visual_system: ";
    rosidl_generator_traits::value_to_yaml(msg.has_audio_visual_system, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareConfiguration & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: skeleton
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skeleton:\n";
    to_block_style_yaml(msg.skeleton, out, indentation + 2);
  }

  // member: skeleton_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skeleton_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.skeleton_is_set, out);
    out << "\n";
  }

  // member: can_power_command_request_off_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_power_command_request_off_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.can_power_command_request_off_robot, out);
    out << "\n";
  }

  // member: can_power_command_request_cycle_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_power_command_request_cycle_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.can_power_command_request_cycle_robot, out);
    out << "\n";
  }

  // member: can_power_command_request_payload_ports
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_power_command_request_payload_ports: ";
    rosidl_generator_traits::value_to_yaml(msg.can_power_command_request_payload_ports, out);
    out << "\n";
  }

  // member: can_power_command_request_wifi_radio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_power_command_request_wifi_radio: ";
    rosidl_generator_traits::value_to_yaml(msg.can_power_command_request_wifi_radio, out);
    out << "\n";
  }

  // member: has_audio_visual_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_audio_visual_system: ";
    rosidl_generator_traits::value_to_yaml(msg.has_audio_visual_system, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareConfiguration & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::HardwareConfiguration & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::HardwareConfiguration & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::HardwareConfiguration>()
{
  return "bosdyn_msgs::msg::HardwareConfiguration";
}

template<>
inline const char * name<bosdyn_msgs::msg::HardwareConfiguration>()
{
  return "bosdyn_msgs/msg/HardwareConfiguration";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::HardwareConfiguration>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Skeleton>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::HardwareConfiguration>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Skeleton>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::HardwareConfiguration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__HARDWARE_CONFIGURATION__TRAITS_HPP_
