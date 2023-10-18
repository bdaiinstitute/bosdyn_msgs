// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/EstopSystemStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_SYSTEM_STATUS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_SYSTEM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/estop_system_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'endpoints'
#include "bosdyn_msgs/msg/detail/estop_endpoint_with_status__traits.hpp"
// Member 'stop_level'
#include "bosdyn_msgs/msg/detail/estop_stop_level__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstopSystemStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: endpoints
  {
    if (msg.endpoints.size() == 0) {
      out << "endpoints: []";
    } else {
      out << "endpoints: [";
      size_t pending_items = msg.endpoints.size();
      for (auto item : msg.endpoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stop_level
  {
    out << "stop_level: ";
    to_flow_style_yaml(msg.stop_level, out);
    out << ", ";
  }

  // member: stop_level_details
  {
    out << "stop_level_details: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_level_details, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstopSystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: endpoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.endpoints.size() == 0) {
      out << "endpoints: []\n";
    } else {
      out << "endpoints:\n";
      for (auto item : msg.endpoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: stop_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_level:\n";
    to_block_style_yaml(msg.stop_level, out, indentation + 2);
  }

  // member: stop_level_details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_level_details: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_level_details, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstopSystemStatus & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::EstopSystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::EstopSystemStatus & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::EstopSystemStatus>()
{
  return "bosdyn_msgs::msg::EstopSystemStatus";
}

template<>
inline const char * name<bosdyn_msgs::msg::EstopSystemStatus>()
{
  return "bosdyn_msgs/msg/EstopSystemStatus";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::EstopSystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::EstopSystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::EstopSystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_SYSTEM_STATUS__TRAITS_HPP_
