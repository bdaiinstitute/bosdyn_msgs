// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RobotHardwareConfigurationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_HARDWARE_CONFIGURATION_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_HARDWARE_CONFIGURATION_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/robot_hardware_configuration_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'hardware_configuration'
#include "bosdyn_msgs/msg/detail/hardware_configuration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotHardwareConfigurationResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: hardware_configuration
  {
    out << "hardware_configuration: ";
    to_flow_style_yaml(msg.hardware_configuration, out);
    out << ", ";
  }

  // member: hardware_configuration_is_set
  {
    out << "hardware_configuration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_configuration_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotHardwareConfigurationResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: hardware_configuration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_configuration:\n";
    to_block_style_yaml(msg.hardware_configuration, out, indentation + 2);
  }

  // member: hardware_configuration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_configuration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_configuration_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotHardwareConfigurationResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RobotHardwareConfigurationResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RobotHardwareConfigurationResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RobotHardwareConfigurationResponse>()
{
  return "bosdyn_msgs::msg::RobotHardwareConfigurationResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::RobotHardwareConfigurationResponse>()
{
  return "bosdyn_msgs/msg/RobotHardwareConfigurationResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RobotHardwareConfigurationResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::HardwareConfiguration>::value && has_fixed_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RobotHardwareConfigurationResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::HardwareConfiguration>::value && has_bounded_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::RobotHardwareConfigurationResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_HARDWARE_CONFIGURATION_RESPONSE__TRAITS_HPP_
