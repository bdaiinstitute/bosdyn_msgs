// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionOneOfAction.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_ONE_OF_ACTION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_ONE_OF_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_one_of_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sleep'
#include "bosdyn_msgs/msg/detail/action_sleep__traits.hpp"
// Member 'data_acquisition'
#include "bosdyn_msgs/msg/detail/action_data_acquisition__traits.hpp"
// Member 'remote_grpc'
#include "bosdyn_msgs/msg/detail/action_remote_grpc__traits.hpp"
// Member 'node'
#include "bosdyn_msgs/msg/detail/node__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionOneOfAction & msg,
  std::ostream & out)
{
  out << "{";
  // member: sleep
  {
    out << "sleep: ";
    to_flow_style_yaml(msg.sleep, out);
    out << ", ";
  }

  // member: data_acquisition
  {
    out << "data_acquisition: ";
    to_flow_style_yaml(msg.data_acquisition, out);
    out << ", ";
  }

  // member: remote_grpc
  {
    out << "remote_grpc: ";
    to_flow_style_yaml(msg.remote_grpc, out);
    out << ", ";
  }

  // member: node
  {
    out << "node: ";
    to_flow_style_yaml(msg.node, out);
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
  const ActionOneOfAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sleep
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sleep:\n";
    to_block_style_yaml(msg.sleep, out, indentation + 2);
  }

  // member: data_acquisition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_acquisition:\n";
    to_block_style_yaml(msg.data_acquisition, out, indentation + 2);
  }

  // member: remote_grpc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_grpc:\n";
    to_block_style_yaml(msg.remote_grpc, out, indentation + 2);
  }

  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node:\n";
    to_block_style_yaml(msg.node, out, indentation + 2);
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

inline std::string to_yaml(const ActionOneOfAction & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ActionOneOfAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionOneOfAction & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionOneOfAction>()
{
  return "bosdyn_msgs::msg::ActionOneOfAction";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionOneOfAction>()
{
  return "bosdyn_msgs/msg/ActionOneOfAction";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionOneOfAction>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ActionDataAcquisition>::value && has_fixed_size<bosdyn_msgs::msg::ActionRemoteGrpc>::value && has_fixed_size<bosdyn_msgs::msg::ActionSleep>::value && has_fixed_size<bosdyn_msgs::msg::Node>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionOneOfAction>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ActionDataAcquisition>::value && has_bounded_size<bosdyn_msgs::msg::ActionRemoteGrpc>::value && has_bounded_size<bosdyn_msgs::msg::ActionSleep>::value && has_bounded_size<bosdyn_msgs::msg::Node>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionOneOfAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_ONE_OF_ACTION__TRAITS_HPP_
