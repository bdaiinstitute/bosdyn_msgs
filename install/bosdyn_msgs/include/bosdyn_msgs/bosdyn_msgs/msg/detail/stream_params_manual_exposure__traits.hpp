// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsManualExposure.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_MANUAL_EXPOSURE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_MANUAL_EXPOSURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/stream_params_manual_exposure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'exposure'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StreamParamsManualExposure & msg,
  std::ostream & out)
{
  out << "{";
  // member: exposure
  {
    out << "exposure: ";
    to_flow_style_yaml(msg.exposure, out);
    out << ", ";
  }

  // member: exposure_is_set
  {
    out << "exposure_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_is_set, out);
    out << ", ";
  }

  // member: gain
  {
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << ", ";
  }

  // member: gain_is_set
  {
    out << "gain_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StreamParamsManualExposure & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure:\n";
    to_block_style_yaml(msg.exposure, out, indentation + 2);
  }

  // member: exposure_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_is_set, out);
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

  // member: gain_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StreamParamsManualExposure & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StreamParamsManualExposure & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StreamParamsManualExposure & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StreamParamsManualExposure>()
{
  return "bosdyn_msgs::msg::StreamParamsManualExposure";
}

template<>
inline const char * name<bosdyn_msgs::msg::StreamParamsManualExposure>()
{
  return "bosdyn_msgs/msg/StreamParamsManualExposure";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StreamParamsManualExposure>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StreamParamsManualExposure>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::StreamParamsManualExposure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_MANUAL_EXPOSURE__TRAITS_HPP_
