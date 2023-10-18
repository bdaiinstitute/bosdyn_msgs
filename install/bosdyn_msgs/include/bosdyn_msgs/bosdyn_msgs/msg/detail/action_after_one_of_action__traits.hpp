// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionAfterOneOfAction.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_ONE_OF_ACTION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_ONE_OF_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_after_one_of_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'record_event'
#include "bosdyn_msgs/msg/detail/action_after_record_event__traits.hpp"
// Member 'auto_return'
#include "bosdyn_msgs/msg/detail/action_after_auto_return__traits.hpp"
// Member 'controlled_motors_off'
#include "bosdyn_msgs/msg/detail/action_after_controlled_motors_off__traits.hpp"
// Member 'immediate_robot_off'
#include "bosdyn_msgs/msg/detail/action_after_immediate_robot_off__traits.hpp"
// Member 'lease_stale'
#include "bosdyn_msgs/msg/detail/action_after_lease_stale__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionAfterOneOfAction & msg,
  std::ostream & out)
{
  out << "{";
  // member: record_event
  {
    out << "record_event: ";
    to_flow_style_yaml(msg.record_event, out);
    out << ", ";
  }

  // member: auto_return
  {
    out << "auto_return: ";
    to_flow_style_yaml(msg.auto_return, out);
    out << ", ";
  }

  // member: controlled_motors_off
  {
    out << "controlled_motors_off: ";
    to_flow_style_yaml(msg.controlled_motors_off, out);
    out << ", ";
  }

  // member: immediate_robot_off
  {
    out << "immediate_robot_off: ";
    to_flow_style_yaml(msg.immediate_robot_off, out);
    out << ", ";
  }

  // member: lease_stale
  {
    out << "lease_stale: ";
    to_flow_style_yaml(msg.lease_stale, out);
    out << ", ";
  }

  // member: action_choice
  {
    out << "action_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.action_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionAfterOneOfAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: record_event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "record_event:\n";
    to_block_style_yaml(msg.record_event, out, indentation + 2);
  }

  // member: auto_return
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_return:\n";
    to_block_style_yaml(msg.auto_return, out, indentation + 2);
  }

  // member: controlled_motors_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controlled_motors_off:\n";
    to_block_style_yaml(msg.controlled_motors_off, out, indentation + 2);
  }

  // member: immediate_robot_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "immediate_robot_off:\n";
    to_block_style_yaml(msg.immediate_robot_off, out, indentation + 2);
  }

  // member: lease_stale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_stale:\n";
    to_block_style_yaml(msg.lease_stale, out, indentation + 2);
  }

  // member: action_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.action_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionAfterOneOfAction & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ActionAfterOneOfAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionAfterOneOfAction & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionAfterOneOfAction>()
{
  return "bosdyn_msgs::msg::ActionAfterOneOfAction";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionAfterOneOfAction>()
{
  return "bosdyn_msgs/msg/ActionAfterOneOfAction";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionAfterOneOfAction>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ActionAfterAutoReturn>::value && has_fixed_size<bosdyn_msgs::msg::ActionAfterControlledMotorsOff>::value && has_fixed_size<bosdyn_msgs::msg::ActionAfterImmediateRobotOff>::value && has_fixed_size<bosdyn_msgs::msg::ActionAfterLeaseStale>::value && has_fixed_size<bosdyn_msgs::msg::ActionAfterRecordEvent>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionAfterOneOfAction>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ActionAfterAutoReturn>::value && has_bounded_size<bosdyn_msgs::msg::ActionAfterControlledMotorsOff>::value && has_bounded_size<bosdyn_msgs::msg::ActionAfterImmediateRobotOff>::value && has_bounded_size<bosdyn_msgs::msg::ActionAfterLeaseStale>::value && has_bounded_size<bosdyn_msgs::msg::ActionAfterRecordEvent>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionAfterOneOfAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_ONE_OF_ACTION__TRAITS_HPP_
