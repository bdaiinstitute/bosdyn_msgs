// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PowerStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_STATUS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/power_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: ptz
  {
    out << "ptz: ";
    rosidl_generator_traits::value_to_yaml(msg.ptz, out);
    out << ", ";
  }

  // member: ptz_is_set
  {
    out << "ptz_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ptz_is_set, out);
    out << ", ";
  }

  // member: aux1
  {
    out << "aux1: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1, out);
    out << ", ";
  }

  // member: aux1_is_set
  {
    out << "aux1_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1_is_set, out);
    out << ", ";
  }

  // member: aux2
  {
    out << "aux2: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2, out);
    out << ", ";
  }

  // member: aux2_is_set
  {
    out << "aux2_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2_is_set, out);
    out << ", ";
  }

  // member: external_mic
  {
    out << "external_mic: ";
    rosidl_generator_traits::value_to_yaml(msg.external_mic, out);
    out << ", ";
  }

  // member: external_mic_is_set
  {
    out << "external_mic_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.external_mic_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ptz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ptz: ";
    rosidl_generator_traits::value_to_yaml(msg.ptz, out);
    out << "\n";
  }

  // member: ptz_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ptz_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ptz_is_set, out);
    out << "\n";
  }

  // member: aux1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux1: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1, out);
    out << "\n";
  }

  // member: aux1_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux1_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1_is_set, out);
    out << "\n";
  }

  // member: aux2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux2: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2, out);
    out << "\n";
  }

  // member: aux2_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux2_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2_is_set, out);
    out << "\n";
  }

  // member: external_mic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_mic: ";
    rosidl_generator_traits::value_to_yaml(msg.external_mic, out);
    out << "\n";
  }

  // member: external_mic_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_mic_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.external_mic_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerStatus & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PowerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PowerStatus & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PowerStatus>()
{
  return "bosdyn_msgs::msg::PowerStatus";
}

template<>
inline const char * name<bosdyn_msgs::msg::PowerStatus>()
{
  return "bosdyn_msgs/msg/PowerStatus";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PowerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PowerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::PowerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_STATUS__TRAITS_HPP_
