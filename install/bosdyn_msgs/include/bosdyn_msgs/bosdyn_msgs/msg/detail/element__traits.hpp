// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Element.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ELEMENT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ELEMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/element__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
#include "bosdyn_msgs/msg/detail/target__traits.hpp"
// Member 'target_failure_behavior'
// Member 'action_failure_behavior'
#include "bosdyn_msgs/msg/detail/failure_behavior__traits.hpp"
// Member 'action'
#include "bosdyn_msgs/msg/detail/action__traits.hpp"
// Member 'action_wrapper'
#include "bosdyn_msgs/msg/detail/action_wrapper__traits.hpp"
// Member 'battery_monitor'
#include "bosdyn_msgs/msg/detail/battery_monitor__traits.hpp"
// Member 'action_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Element & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
    out << ", ";
  }

  // member: target_is_set
  {
    out << "target_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_is_set, out);
    out << ", ";
  }

  // member: target_failure_behavior
  {
    out << "target_failure_behavior: ";
    to_flow_style_yaml(msg.target_failure_behavior, out);
    out << ", ";
  }

  // member: target_failure_behavior_is_set
  {
    out << "target_failure_behavior_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_failure_behavior_is_set, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    to_flow_style_yaml(msg.action, out);
    out << ", ";
  }

  // member: action_is_set
  {
    out << "action_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_is_set, out);
    out << ", ";
  }

  // member: action_wrapper
  {
    out << "action_wrapper: ";
    to_flow_style_yaml(msg.action_wrapper, out);
    out << ", ";
  }

  // member: action_wrapper_is_set
  {
    out << "action_wrapper_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_wrapper_is_set, out);
    out << ", ";
  }

  // member: action_failure_behavior
  {
    out << "action_failure_behavior: ";
    to_flow_style_yaml(msg.action_failure_behavior, out);
    out << ", ";
  }

  // member: action_failure_behavior_is_set
  {
    out << "action_failure_behavior_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_failure_behavior_is_set, out);
    out << ", ";
  }

  // member: is_skipped
  {
    out << "is_skipped: ";
    rosidl_generator_traits::value_to_yaml(msg.is_skipped, out);
    out << ", ";
  }

  // member: battery_monitor
  {
    out << "battery_monitor: ";
    to_flow_style_yaml(msg.battery_monitor, out);
    out << ", ";
  }

  // member: battery_monitor_is_set
  {
    out << "battery_monitor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_monitor_is_set, out);
    out << ", ";
  }

  // member: action_duration
  {
    out << "action_duration: ";
    to_flow_style_yaml(msg.action_duration, out);
    out << ", ";
  }

  // member: action_duration_is_set
  {
    out << "action_duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_duration_is_set, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Element & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }

  // member: target_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_is_set, out);
    out << "\n";
  }

  // member: target_failure_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_failure_behavior:\n";
    to_block_style_yaml(msg.target_failure_behavior, out, indentation + 2);
  }

  // member: target_failure_behavior_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_failure_behavior_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_failure_behavior_is_set, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action:\n";
    to_block_style_yaml(msg.action, out, indentation + 2);
  }

  // member: action_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_is_set, out);
    out << "\n";
  }

  // member: action_wrapper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_wrapper:\n";
    to_block_style_yaml(msg.action_wrapper, out, indentation + 2);
  }

  // member: action_wrapper_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_wrapper_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_wrapper_is_set, out);
    out << "\n";
  }

  // member: action_failure_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_failure_behavior:\n";
    to_block_style_yaml(msg.action_failure_behavior, out, indentation + 2);
  }

  // member: action_failure_behavior_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_failure_behavior_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_failure_behavior_is_set, out);
    out << "\n";
  }

  // member: is_skipped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_skipped: ";
    rosidl_generator_traits::value_to_yaml(msg.is_skipped, out);
    out << "\n";
  }

  // member: battery_monitor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_monitor:\n";
    to_block_style_yaml(msg.battery_monitor, out, indentation + 2);
  }

  // member: battery_monitor_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_monitor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_monitor_is_set, out);
    out << "\n";
  }

  // member: action_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_duration:\n";
    to_block_style_yaml(msg.action_duration, out, indentation + 2);
  }

  // member: action_duration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_duration_is_set, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Element & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Element & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Element & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Element>()
{
  return "bosdyn_msgs::msg::Element";
}

template<>
inline const char * name<bosdyn_msgs::msg::Element>()
{
  return "bosdyn_msgs/msg/Element";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Element>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Element>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Element>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ELEMENT__TRAITS_HPP_
