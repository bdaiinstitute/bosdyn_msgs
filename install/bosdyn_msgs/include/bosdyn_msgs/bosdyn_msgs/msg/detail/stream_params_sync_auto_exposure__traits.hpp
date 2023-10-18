// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsSyncAutoExposure.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_SYNC_AUTO_EXPOSURE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_SYNC_AUTO_EXPOSURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/stream_params_sync_auto_exposure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StreamParamsSyncAutoExposure & msg,
  std::ostream & out)
{
  out << "{";
  // member: brightness_target
  {
    out << "brightness_target: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_target, out);
    out << ", ";
  }

  // member: brightness_target_is_set
  {
    out << "brightness_target_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_target_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StreamParamsSyncAutoExposure & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brightness_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness_target: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_target, out);
    out << "\n";
  }

  // member: brightness_target_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness_target_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_target_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StreamParamsSyncAutoExposure & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StreamParamsSyncAutoExposure & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StreamParamsSyncAutoExposure & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StreamParamsSyncAutoExposure>()
{
  return "bosdyn_msgs::msg::StreamParamsSyncAutoExposure";
}

template<>
inline const char * name<bosdyn_msgs::msg::StreamParamsSyncAutoExposure>()
{
  return "bosdyn_msgs/msg/StreamParamsSyncAutoExposure";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StreamParamsSyncAutoExposure>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StreamParamsSyncAutoExposure>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::StreamParamsSyncAutoExposure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_SYNC_AUTO_EXPOSURE__TRAITS_HPP_
