// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Condition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONDITION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONDITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/condition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lhs'
// Member 'rhs'
#include "bosdyn_msgs/msg/detail/condition_operand__traits.hpp"
// Member 'operation'
#include "bosdyn_msgs/msg/detail/condition_compare__traits.hpp"
// Member 'handle_staleness'
#include "bosdyn_msgs/msg/detail/condition_handle_staleness__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Condition & msg,
  std::ostream & out)
{
  out << "{";
  // member: lhs
  {
    out << "lhs: ";
    to_flow_style_yaml(msg.lhs, out);
    out << ", ";
  }

  // member: lhs_is_set
  {
    out << "lhs_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lhs_is_set, out);
    out << ", ";
  }

  // member: rhs
  {
    out << "rhs: ";
    to_flow_style_yaml(msg.rhs, out);
    out << ", ";
  }

  // member: rhs_is_set
  {
    out << "rhs_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.rhs_is_set, out);
    out << ", ";
  }

  // member: operation
  {
    out << "operation: ";
    to_flow_style_yaml(msg.operation, out);
    out << ", ";
  }

  // member: handle_staleness
  {
    out << "handle_staleness: ";
    to_flow_style_yaml(msg.handle_staleness, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Condition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lhs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lhs:\n";
    to_block_style_yaml(msg.lhs, out, indentation + 2);
  }

  // member: lhs_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lhs_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lhs_is_set, out);
    out << "\n";
  }

  // member: rhs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rhs:\n";
    to_block_style_yaml(msg.rhs, out, indentation + 2);
  }

  // member: rhs_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rhs_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.rhs_is_set, out);
    out << "\n";
  }

  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation:\n";
    to_block_style_yaml(msg.operation, out, indentation + 2);
  }

  // member: handle_staleness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "handle_staleness:\n";
    to_block_style_yaml(msg.handle_staleness, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Condition & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Condition & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Condition & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Condition>()
{
  return "bosdyn_msgs::msg::Condition";
}

template<>
inline const char * name<bosdyn_msgs::msg::Condition>()
{
  return "bosdyn_msgs/msg/Condition";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Condition>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ConditionCompare>::value && has_fixed_size<bosdyn_msgs::msg::ConditionHandleStaleness>::value && has_fixed_size<bosdyn_msgs::msg::ConditionOperand>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Condition>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ConditionCompare>::value && has_bounded_size<bosdyn_msgs::msg::ConditionHandleStaleness>::value && has_bounded_size<bosdyn_msgs::msg::ConditionOperand>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::Condition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONDITION__TRAITS_HPP_
