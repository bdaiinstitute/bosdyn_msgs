// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ClearBehaviorFaults.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULTS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/clear_behavior_faults__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClearBehaviorFaults & msg,
  std::ostream & out)
{
  out << "{";
  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: host
  {
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << ", ";
  }

  // member: robot_state_blackboard_name
  {
    out << "robot_state_blackboard_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_state_blackboard_name, out);
    out << ", ";
  }

  // member: cleared_cause_fall_blackboard_name
  {
    out << "cleared_cause_fall_blackboard_name: ";
    rosidl_generator_traits::value_to_yaml(msg.cleared_cause_fall_blackboard_name, out);
    out << ", ";
  }

  // member: cleared_cause_hardware_blackboard_name
  {
    out << "cleared_cause_hardware_blackboard_name: ";
    rosidl_generator_traits::value_to_yaml(msg.cleared_cause_hardware_blackboard_name, out);
    out << ", ";
  }

  // member: cleared_cause_lease_timeout_blackboard_name
  {
    out << "cleared_cause_lease_timeout_blackboard_name: ";
    rosidl_generator_traits::value_to_yaml(msg.cleared_cause_lease_timeout_blackboard_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearBehaviorFaults & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << "\n";
  }

  // member: host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << "\n";
  }

  // member: robot_state_blackboard_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_state_blackboard_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_state_blackboard_name, out);
    out << "\n";
  }

  // member: cleared_cause_fall_blackboard_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cleared_cause_fall_blackboard_name: ";
    rosidl_generator_traits::value_to_yaml(msg.cleared_cause_fall_blackboard_name, out);
    out << "\n";
  }

  // member: cleared_cause_hardware_blackboard_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cleared_cause_hardware_blackboard_name: ";
    rosidl_generator_traits::value_to_yaml(msg.cleared_cause_hardware_blackboard_name, out);
    out << "\n";
  }

  // member: cleared_cause_lease_timeout_blackboard_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cleared_cause_lease_timeout_blackboard_name: ";
    rosidl_generator_traits::value_to_yaml(msg.cleared_cause_lease_timeout_blackboard_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearBehaviorFaults & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ClearBehaviorFaults & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ClearBehaviorFaults & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ClearBehaviorFaults>()
{
  return "bosdyn_msgs::msg::ClearBehaviorFaults";
}

template<>
inline const char * name<bosdyn_msgs::msg::ClearBehaviorFaults>()
{
  return "bosdyn_msgs/msg/ClearBehaviorFaults";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ClearBehaviorFaults>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ClearBehaviorFaults>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ClearBehaviorFaults>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULTS__TRAITS_HPP_
