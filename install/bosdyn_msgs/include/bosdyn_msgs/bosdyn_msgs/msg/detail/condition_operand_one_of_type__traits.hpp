// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ConditionOperandOneOfType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND_ONE_OF_TYPE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND_ONE_OF_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/condition_operand_one_of_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'var'
#include "bosdyn_msgs/msg/detail/variable_declaration__traits.hpp"
// Member 'constant'
#include "bosdyn_msgs/msg/detail/constant_value__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConditionOperandOneOfType & msg,
  std::ostream & out)
{
  out << "{";
  // member: var
  {
    out << "var: ";
    to_flow_style_yaml(msg.var, out);
    out << ", ";
  }

  // member: constant
  {
    out << "constant: ";
    to_flow_style_yaml(msg.constant, out);
    out << ", ";
  }

  // member: type_choice
  {
    out << "type_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.type_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConditionOperandOneOfType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "var:\n";
    to_block_style_yaml(msg.var, out, indentation + 2);
  }

  // member: constant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "constant:\n";
    to_block_style_yaml(msg.constant, out, indentation + 2);
  }

  // member: type_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.type_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConditionOperandOneOfType & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ConditionOperandOneOfType & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ConditionOperandOneOfType & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ConditionOperandOneOfType>()
{
  return "bosdyn_msgs::msg::ConditionOperandOneOfType";
}

template<>
inline const char * name<bosdyn_msgs::msg::ConditionOperandOneOfType>()
{
  return "bosdyn_msgs/msg/ConditionOperandOneOfType";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ConditionOperandOneOfType>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ConstantValue>::value && has_fixed_size<bosdyn_msgs::msg::VariableDeclaration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ConditionOperandOneOfType>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ConstantValue>::value && has_bounded_size<bosdyn_msgs::msg::VariableDeclaration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ConditionOperandOneOfType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND_ONE_OF_TYPE__TRAITS_HPP_
