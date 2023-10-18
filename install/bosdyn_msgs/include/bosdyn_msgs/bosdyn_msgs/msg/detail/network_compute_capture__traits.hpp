// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeCapture.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/network_compute_capture__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'input'
#include "bosdyn_msgs/msg/detail/network_compute_capture_one_of_input__traits.hpp"
// Member 'server_config'
#include "bosdyn_msgs/msg/detail/network_compute_server_configuration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NetworkComputeCapture & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    to_flow_style_yaml(msg.input, out);
    out << ", ";
  }

  // member: server_config
  {
    out << "server_config: ";
    to_flow_style_yaml(msg.server_config, out);
    out << ", ";
  }

  // member: server_config_is_set
  {
    out << "server_config_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.server_config_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NetworkComputeCapture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input:\n";
    to_block_style_yaml(msg.input, out, indentation + 2);
  }

  // member: server_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_config:\n";
    to_block_style_yaml(msg.server_config, out, indentation + 2);
  }

  // member: server_config_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_config_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.server_config_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NetworkComputeCapture & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NetworkComputeCapture & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NetworkComputeCapture & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NetworkComputeCapture>()
{
  return "bosdyn_msgs::msg::NetworkComputeCapture";
}

template<>
inline const char * name<bosdyn_msgs::msg::NetworkComputeCapture>()
{
  return "bosdyn_msgs/msg/NetworkComputeCapture";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NetworkComputeCapture>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput>::value && has_fixed_size<bosdyn_msgs::msg::NetworkComputeServerConfiguration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NetworkComputeCapture>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput>::value && has_bounded_size<bosdyn_msgs::msg::NetworkComputeServerConfiguration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::NetworkComputeCapture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE__TRAITS_HPP_
