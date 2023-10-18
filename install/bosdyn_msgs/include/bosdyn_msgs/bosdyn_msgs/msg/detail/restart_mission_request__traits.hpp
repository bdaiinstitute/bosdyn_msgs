// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RestartMissionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESTART_MISSION_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RESTART_MISSION_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/restart_mission_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'pause_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"
// Member 'settings'
#include "bosdyn_msgs/msg/detail/play_settings__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RestartMissionRequest & msg,
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

  // member: pause_time
  {
    out << "pause_time: ";
    to_flow_style_yaml(msg.pause_time, out);
    out << ", ";
  }

  // member: pause_time_is_set
  {
    out << "pause_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pause_time_is_set, out);
    out << ", ";
  }

  // member: leases
  {
    if (msg.leases.size() == 0) {
      out << "leases: []";
    } else {
      out << "leases: [";
      size_t pending_items = msg.leases.size();
      for (auto item : msg.leases) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: settings
  {
    out << "settings: ";
    to_flow_style_yaml(msg.settings, out);
    out << ", ";
  }

  // member: settings_is_set
  {
    out << "settings_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.settings_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RestartMissionRequest & msg,
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

  // member: pause_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pause_time:\n";
    to_block_style_yaml(msg.pause_time, out, indentation + 2);
  }

  // member: pause_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pause_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pause_time_is_set, out);
    out << "\n";
  }

  // member: leases
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.leases.size() == 0) {
      out << "leases: []\n";
    } else {
      out << "leases:\n";
      for (auto item : msg.leases) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: settings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "settings:\n";
    to_block_style_yaml(msg.settings, out, indentation + 2);
  }

  // member: settings_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "settings_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.settings_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RestartMissionRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RestartMissionRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RestartMissionRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RestartMissionRequest>()
{
  return "bosdyn_msgs::msg::RestartMissionRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::RestartMissionRequest>()
{
  return "bosdyn_msgs/msg/RestartMissionRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RestartMissionRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RestartMissionRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RestartMissionRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESTART_MISSION_REQUEST__TRAITS_HPP_
