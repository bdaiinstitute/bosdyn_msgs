// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTickNodeState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/state_node_states_at_tick_node_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'result'
#include "bosdyn_msgs/msg/detail/result__traits.hpp"
// Member 'blackboard'
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick_node_state_blackboard_state__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateNodeStatesAtTickNodeState & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: blackboard
  {
    out << "blackboard: ";
    to_flow_style_yaml(msg.blackboard, out);
    out << ", ";
  }

  // member: blackboard_is_set
  {
    out << "blackboard_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.blackboard_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StateNodeStatesAtTickNodeState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
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

  // member: blackboard
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blackboard:\n";
    to_block_style_yaml(msg.blackboard, out, indentation + 2);
  }

  // member: blackboard_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blackboard_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.blackboard_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateNodeStatesAtTickNodeState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StateNodeStatesAtTickNodeState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StateNodeStatesAtTickNodeState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState>()
{
  return "bosdyn_msgs::msg::StateNodeStatesAtTickNodeState";
}

template<>
inline const char * name<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState>()
{
  return "bosdyn_msgs/msg/StateNodeStatesAtTickNodeState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE__TRAITS_HPP_
