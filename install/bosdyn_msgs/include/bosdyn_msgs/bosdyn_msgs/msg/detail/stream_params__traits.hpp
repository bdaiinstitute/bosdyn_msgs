// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StreamParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/stream_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'awb'
#include "bosdyn_msgs/msg/detail/stream_params_awb_mode__traits.hpp"
// Member 'exposure'
#include "bosdyn_msgs/msg/detail/stream_params_one_of_exposure__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StreamParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: targetbitrate
  {
    out << "targetbitrate: ";
    rosidl_generator_traits::value_to_yaml(msg.targetbitrate, out);
    out << ", ";
  }

  // member: targetbitrate_is_set
  {
    out << "targetbitrate_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.targetbitrate_is_set, out);
    out << ", ";
  }

  // member: refreshinterval
  {
    out << "refreshinterval: ";
    rosidl_generator_traits::value_to_yaml(msg.refreshinterval, out);
    out << ", ";
  }

  // member: refreshinterval_is_set
  {
    out << "refreshinterval_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.refreshinterval_is_set, out);
    out << ", ";
  }

  // member: idrinterval
  {
    out << "idrinterval: ";
    rosidl_generator_traits::value_to_yaml(msg.idrinterval, out);
    out << ", ";
  }

  // member: idrinterval_is_set
  {
    out << "idrinterval_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.idrinterval_is_set, out);
    out << ", ";
  }

  // member: awb
  {
    out << "awb: ";
    to_flow_style_yaml(msg.awb, out);
    out << ", ";
  }

  // member: awb_is_set
  {
    out << "awb_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.awb_is_set, out);
    out << ", ";
  }

  // member: exposure
  {
    out << "exposure: ";
    to_flow_style_yaml(msg.exposure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StreamParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: targetbitrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "targetbitrate: ";
    rosidl_generator_traits::value_to_yaml(msg.targetbitrate, out);
    out << "\n";
  }

  // member: targetbitrate_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "targetbitrate_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.targetbitrate_is_set, out);
    out << "\n";
  }

  // member: refreshinterval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refreshinterval: ";
    rosidl_generator_traits::value_to_yaml(msg.refreshinterval, out);
    out << "\n";
  }

  // member: refreshinterval_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refreshinterval_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.refreshinterval_is_set, out);
    out << "\n";
  }

  // member: idrinterval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idrinterval: ";
    rosidl_generator_traits::value_to_yaml(msg.idrinterval, out);
    out << "\n";
  }

  // member: idrinterval_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idrinterval_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.idrinterval_is_set, out);
    out << "\n";
  }

  // member: awb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "awb:\n";
    to_block_style_yaml(msg.awb, out, indentation + 2);
  }

  // member: awb_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "awb_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.awb_is_set, out);
    out << "\n";
  }

  // member: exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure:\n";
    to_block_style_yaml(msg.exposure, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StreamParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StreamParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StreamParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StreamParams>()
{
  return "bosdyn_msgs::msg::StreamParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::StreamParams>()
{
  return "bosdyn_msgs/msg/StreamParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StreamParams>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::StreamParamsAwbMode>::value && has_fixed_size<bosdyn_msgs::msg::StreamParamsOneOfExposure>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StreamParams>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::StreamParamsAwbMode>::value && has_bounded_size<bosdyn_msgs::msg::StreamParamsOneOfExposure>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::StreamParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS__TRAITS_HPP_
