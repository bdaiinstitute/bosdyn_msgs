// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/FanPowerCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/fan_power_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FanPowerCommandRequest & msg,
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

  // member: lease
  {
    out << "lease: ";
    to_flow_style_yaml(msg.lease, out);
    out << ", ";
  }

  // member: lease_is_set
  {
    out << "lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_is_set, out);
    out << ", ";
  }

  // member: percent_power
  {
    out << "percent_power: ";
    rosidl_generator_traits::value_to_yaml(msg.percent_power, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
    out << ", ";
  }

  // member: duration_is_set
  {
    out << "duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FanPowerCommandRequest & msg,
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

  // member: lease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease:\n";
    to_block_style_yaml(msg.lease, out, indentation + 2);
  }

  // member: lease_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_is_set, out);
    out << "\n";
  }

  // member: percent_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percent_power: ";
    rosidl_generator_traits::value_to_yaml(msg.percent_power, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }

  // member: duration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FanPowerCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::FanPowerCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::FanPowerCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::FanPowerCommandRequest>()
{
  return "bosdyn_msgs::msg::FanPowerCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::FanPowerCommandRequest>()
{
  return "bosdyn_msgs/msg/FanPowerCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::FanPowerCommandRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Lease>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value && has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::FanPowerCommandRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Lease>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value && has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::FanPowerCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_REQUEST__TRAITS_HPP_
