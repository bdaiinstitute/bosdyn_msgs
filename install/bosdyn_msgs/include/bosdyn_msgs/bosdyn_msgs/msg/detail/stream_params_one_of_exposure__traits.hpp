// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsOneOfExposure.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/stream_params_one_of_exposure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'auto_exposure'
#include "bosdyn_msgs/msg/detail/stream_params_auto_exposure__traits.hpp"
// Member 'sync_exposure'
#include "bosdyn_msgs/msg/detail/stream_params_sync_auto_exposure__traits.hpp"
// Member 'manual_exposure'
#include "bosdyn_msgs/msg/detail/stream_params_manual_exposure__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StreamParamsOneOfExposure & msg,
  std::ostream & out)
{
  out << "{";
  // member: auto_exposure
  {
    out << "auto_exposure: ";
    to_flow_style_yaml(msg.auto_exposure, out);
    out << ", ";
  }

  // member: sync_exposure
  {
    out << "sync_exposure: ";
    to_flow_style_yaml(msg.sync_exposure, out);
    out << ", ";
  }

  // member: manual_exposure
  {
    out << "manual_exposure: ";
    to_flow_style_yaml(msg.manual_exposure, out);
    out << ", ";
  }

  // member: exposure_choice
  {
    out << "exposure_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StreamParamsOneOfExposure & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: auto_exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_exposure:\n";
    to_block_style_yaml(msg.auto_exposure, out, indentation + 2);
  }

  // member: sync_exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_exposure:\n";
    to_block_style_yaml(msg.sync_exposure, out, indentation + 2);
  }

  // member: manual_exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_exposure:\n";
    to_block_style_yaml(msg.manual_exposure, out, indentation + 2);
  }

  // member: exposure_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StreamParamsOneOfExposure & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StreamParamsOneOfExposure & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StreamParamsOneOfExposure & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StreamParamsOneOfExposure>()
{
  return "bosdyn_msgs::msg::StreamParamsOneOfExposure";
}

template<>
inline const char * name<bosdyn_msgs::msg::StreamParamsOneOfExposure>()
{
  return "bosdyn_msgs/msg/StreamParamsOneOfExposure";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StreamParamsOneOfExposure>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::StreamParamsAutoExposure>::value && has_fixed_size<bosdyn_msgs::msg::StreamParamsManualExposure>::value && has_fixed_size<bosdyn_msgs::msg::StreamParamsSyncAutoExposure>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StreamParamsOneOfExposure>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::StreamParamsAutoExposure>::value && has_bounded_size<bosdyn_msgs::msg::StreamParamsManualExposure>::value && has_bounded_size<bosdyn_msgs::msg::StreamParamsSyncAutoExposure>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::StreamParamsOneOfExposure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__TRAITS_HPP_
