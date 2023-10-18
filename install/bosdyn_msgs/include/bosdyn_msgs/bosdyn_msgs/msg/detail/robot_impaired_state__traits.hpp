// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RobotImpairedState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_IMPAIRED_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_IMPAIRED_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/robot_impaired_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'impaired_status'
#include "bosdyn_msgs/msg/detail/robot_impaired_state_impaired_status__traits.hpp"
// Member 'system_faults'
#include "bosdyn_msgs/msg/detail/system_fault__traits.hpp"
// Member 'service_faults'
#include "bosdyn_msgs/msg/detail/service_fault__traits.hpp"
// Member 'behavior_faults'
#include "bosdyn_msgs/msg/detail/behavior_fault__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotImpairedState & msg,
  std::ostream & out)
{
  out << "{";
  // member: impaired_status
  {
    out << "impaired_status: ";
    to_flow_style_yaml(msg.impaired_status, out);
    out << ", ";
  }

  // member: system_faults
  {
    if (msg.system_faults.size() == 0) {
      out << "system_faults: []";
    } else {
      out << "system_faults: [";
      size_t pending_items = msg.system_faults.size();
      for (auto item : msg.system_faults) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: service_faults
  {
    if (msg.service_faults.size() == 0) {
      out << "service_faults: []";
    } else {
      out << "service_faults: [";
      size_t pending_items = msg.service_faults.size();
      for (auto item : msg.service_faults) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: behavior_faults
  {
    if (msg.behavior_faults.size() == 0) {
      out << "behavior_faults: []";
    } else {
      out << "behavior_faults: [";
      size_t pending_items = msg.behavior_faults.size();
      for (auto item : msg.behavior_faults) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotImpairedState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: impaired_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impaired_status:\n";
    to_block_style_yaml(msg.impaired_status, out, indentation + 2);
  }

  // member: system_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.system_faults.size() == 0) {
      out << "system_faults: []\n";
    } else {
      out << "system_faults:\n";
      for (auto item : msg.system_faults) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: service_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.service_faults.size() == 0) {
      out << "service_faults: []\n";
    } else {
      out << "service_faults:\n";
      for (auto item : msg.service_faults) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: behavior_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.behavior_faults.size() == 0) {
      out << "behavior_faults: []\n";
    } else {
      out << "behavior_faults:\n";
      for (auto item : msg.behavior_faults) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotImpairedState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RobotImpairedState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RobotImpairedState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RobotImpairedState>()
{
  return "bosdyn_msgs::msg::RobotImpairedState";
}

template<>
inline const char * name<bosdyn_msgs::msg::RobotImpairedState>()
{
  return "bosdyn_msgs/msg/RobotImpairedState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RobotImpairedState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RobotImpairedState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RobotImpairedState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_IMPAIRED_STATE__TRAITS_HPP_
