// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DefineBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEFINE_BLACKBOARD__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DEFINE_BLACKBOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/define_blackboard__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'blackboard_variables'
#include "bosdyn_msgs/msg/detail/key_value__traits.hpp"
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DefineBlackboard & msg,
  std::ostream & out)
{
  out << "{";
  // member: blackboard_variables
  {
    if (msg.blackboard_variables.size() == 0) {
      out << "blackboard_variables: []";
    } else {
      out << "blackboard_variables: [";
      size_t pending_items = msg.blackboard_variables.size();
      for (auto item : msg.blackboard_variables) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: child
  {
    out << "child: ";
    to_flow_style_yaml(msg.child, out);
    out << ", ";
  }

  // member: child_is_set
  {
    out << "child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DefineBlackboard & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: blackboard_variables
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blackboard_variables.size() == 0) {
      out << "blackboard_variables: []\n";
    } else {
      out << "blackboard_variables:\n";
      for (auto item : msg.blackboard_variables) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: child
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child:\n";
    to_block_style_yaml(msg.child, out, indentation + 2);
  }

  // member: child_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DefineBlackboard & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DefineBlackboard & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DefineBlackboard & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DefineBlackboard>()
{
  return "bosdyn_msgs::msg::DefineBlackboard";
}

template<>
inline const char * name<bosdyn_msgs::msg::DefineBlackboard>()
{
  return "bosdyn_msgs/msg/DefineBlackboard";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DefineBlackboard>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DefineBlackboard>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DefineBlackboard>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEFINE_BLACKBOARD__TRAITS_HPP_
