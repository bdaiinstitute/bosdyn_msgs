// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTickNodeStateBlackboardState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/state_node_states_at_tick_node_state_blackboard_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'variables'
#include "bosdyn_msgs/msg/detail/key_value__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateNodeStatesAtTickNodeStateBlackboardState & msg,
  std::ostream & out)
{
  out << "{";
  // member: variables
  {
    if (msg.variables.size() == 0) {
      out << "variables: []";
    } else {
      out << "variables: [";
      size_t pending_items = msg.variables.size();
      for (auto item : msg.variables) {
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
  const StateNodeStatesAtTickNodeStateBlackboardState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: variables
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.variables.size() == 0) {
      out << "variables: []\n";
    } else {
      out << "variables:\n";
      for (auto item : msg.variables) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateNodeStatesAtTickNodeStateBlackboardState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState>()
{
  return "bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState";
}

template<>
inline const char * name<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState>()
{
  return "bosdyn_msgs/msg/StateNodeStatesAtTickNodeStateBlackboardState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__TRAITS_HPP_
