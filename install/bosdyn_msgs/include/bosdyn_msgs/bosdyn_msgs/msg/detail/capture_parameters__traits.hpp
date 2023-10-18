// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CaptureParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/capture_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'exposure_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CaptureParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: exposure_duration
  {
    out << "exposure_duration: ";
    to_flow_style_yaml(msg.exposure_duration, out);
    out << ", ";
  }

  // member: exposure_duration_is_set
  {
    out << "exposure_duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_duration_is_set, out);
    out << ", ";
  }

  // member: gain
  {
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << ", ";
  }

  // member: custom_params
  {
    out << "custom_params: ";
    to_flow_style_yaml(msg.custom_params, out);
    out << ", ";
  }

  // member: custom_params_is_set
  {
    out << "custom_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_params_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exposure_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_duration:\n";
    to_block_style_yaml(msg.exposure_duration, out, indentation + 2);
  }

  // member: exposure_duration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_duration_is_set, out);
    out << "\n";
  }

  // member: gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << "\n";
  }

  // member: custom_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_params:\n";
    to_block_style_yaml(msg.custom_params, out, indentation + 2);
  }

  // member: custom_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_params_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureParameters & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CaptureParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CaptureParameters & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CaptureParameters>()
{
  return "bosdyn_msgs::msg::CaptureParameters";
}

template<>
inline const char * name<bosdyn_msgs::msg::CaptureParameters>()
{
  return "bosdyn_msgs/msg/CaptureParameters";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CaptureParameters>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DictParam>::value && has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CaptureParameters>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DictParam>::value && has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::CaptureParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__TRAITS_HPP_
