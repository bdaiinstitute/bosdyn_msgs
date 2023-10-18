// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BehaviorFault.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/behavior_fault__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'onset_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'cause'
#include "bosdyn_msgs/msg/detail/behavior_fault_cause__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/behavior_fault_status__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BehaviorFault & msg,
  std::ostream & out)
{
  out << "{";
  // member: behavior_fault_id
  {
    out << "behavior_fault_id: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_fault_id, out);
    out << ", ";
  }

  // member: onset_timestamp
  {
    out << "onset_timestamp: ";
    to_flow_style_yaml(msg.onset_timestamp, out);
    out << ", ";
  }

  // member: onset_timestamp_is_set
  {
    out << "onset_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.onset_timestamp_is_set, out);
    out << ", ";
  }

  // member: cause
  {
    out << "cause: ";
    to_flow_style_yaml(msg.cause, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorFault & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: behavior_fault_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_fault_id: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_fault_id, out);
    out << "\n";
  }

  // member: onset_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "onset_timestamp:\n";
    to_block_style_yaml(msg.onset_timestamp, out, indentation + 2);
  }

  // member: onset_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "onset_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.onset_timestamp_is_set, out);
    out << "\n";
  }

  // member: cause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cause:\n";
    to_block_style_yaml(msg.cause, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorFault & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BehaviorFault & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BehaviorFault & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BehaviorFault>()
{
  return "bosdyn_msgs::msg::BehaviorFault";
}

template<>
inline const char * name<bosdyn_msgs::msg::BehaviorFault>()
{
  return "bosdyn_msgs/msg/BehaviorFault";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BehaviorFault>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::BehaviorFaultCause>::value && has_fixed_size<bosdyn_msgs::msg::BehaviorFaultStatus>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BehaviorFault>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::BehaviorFaultCause>::value && has_bounded_size<bosdyn_msgs::msg::BehaviorFaultStatus>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::BehaviorFault>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT__TRAITS_HPP_
