// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/EstopEndpointWithStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/estop_endpoint_with_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'endpoint'
#include "bosdyn_msgs/msg/detail/estop_endpoint__traits.hpp"
// Member 'stop_level'
#include "bosdyn_msgs/msg/detail/estop_stop_level__traits.hpp"
// Member 'time_since_valid_response'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstopEndpointWithStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: endpoint
  {
    out << "endpoint: ";
    to_flow_style_yaml(msg.endpoint, out);
    out << ", ";
  }

  // member: endpoint_is_set
  {
    out << "endpoint_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.endpoint_is_set, out);
    out << ", ";
  }

  // member: stop_level
  {
    out << "stop_level: ";
    to_flow_style_yaml(msg.stop_level, out);
    out << ", ";
  }

  // member: time_since_valid_response
  {
    out << "time_since_valid_response: ";
    to_flow_style_yaml(msg.time_since_valid_response, out);
    out << ", ";
  }

  // member: time_since_valid_response_is_set
  {
    out << "time_since_valid_response_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_valid_response_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstopEndpointWithStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: endpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endpoint:\n";
    to_block_style_yaml(msg.endpoint, out, indentation + 2);
  }

  // member: endpoint_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endpoint_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.endpoint_is_set, out);
    out << "\n";
  }

  // member: stop_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_level:\n";
    to_block_style_yaml(msg.stop_level, out, indentation + 2);
  }

  // member: time_since_valid_response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_valid_response:\n";
    to_block_style_yaml(msg.time_since_valid_response, out, indentation + 2);
  }

  // member: time_since_valid_response_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_valid_response_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_valid_response_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstopEndpointWithStatus & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::EstopEndpointWithStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::EstopEndpointWithStatus & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::EstopEndpointWithStatus>()
{
  return "bosdyn_msgs::msg::EstopEndpointWithStatus";
}

template<>
inline const char * name<bosdyn_msgs::msg::EstopEndpointWithStatus>()
{
  return "bosdyn_msgs/msg/EstopEndpointWithStatus";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::EstopEndpointWithStatus>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::EstopEndpoint>::value && has_fixed_size<bosdyn_msgs::msg::EstopStopLevel>::value && has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::EstopEndpointWithStatus>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::EstopEndpoint>::value && has_bounded_size<bosdyn_msgs::msg::EstopStopLevel>::value && has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::EstopEndpointWithStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__TRAITS_HPP_
