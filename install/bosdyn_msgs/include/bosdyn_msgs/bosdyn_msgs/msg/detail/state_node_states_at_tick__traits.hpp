// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTick.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/state_node_states_at_tick__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tick_start_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'node_states'
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick_node_state__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateNodeStatesAtTick & msg,
  std::ostream & out)
{
  out << "{";
  // member: tick_counter
  {
    out << "tick_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.tick_counter, out);
    out << ", ";
  }

  // member: tick_start_timestamp
  {
    out << "tick_start_timestamp: ";
    to_flow_style_yaml(msg.tick_start_timestamp, out);
    out << ", ";
  }

  // member: tick_start_timestamp_is_set
  {
    out << "tick_start_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.tick_start_timestamp_is_set, out);
    out << ", ";
  }

  // member: node_states
  {
    if (msg.node_states.size() == 0) {
      out << "node_states: []";
    } else {
      out << "node_states: [";
      size_t pending_items = msg.node_states.size();
      for (auto item : msg.node_states) {
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
  const StateNodeStatesAtTick & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tick_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.tick_counter, out);
    out << "\n";
  }

  // member: tick_start_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_start_timestamp:\n";
    to_block_style_yaml(msg.tick_start_timestamp, out, indentation + 2);
  }

  // member: tick_start_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_start_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.tick_start_timestamp_is_set, out);
    out << "\n";
  }

  // member: node_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_states.size() == 0) {
      out << "node_states: []\n";
    } else {
      out << "node_states:\n";
      for (auto item : msg.node_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateNodeStatesAtTick & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StateNodeStatesAtTick & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StateNodeStatesAtTick & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StateNodeStatesAtTick>()
{
  return "bosdyn_msgs::msg::StateNodeStatesAtTick";
}

template<>
inline const char * name<bosdyn_msgs::msg::StateNodeStatesAtTick>()
{
  return "bosdyn_msgs/msg/StateNodeStatesAtTick";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StateNodeStatesAtTick>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StateNodeStatesAtTick>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::StateNodeStatesAtTick>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__TRAITS_HPP_
