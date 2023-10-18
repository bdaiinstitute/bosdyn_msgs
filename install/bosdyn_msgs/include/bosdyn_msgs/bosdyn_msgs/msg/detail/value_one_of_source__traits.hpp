// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ValueOneOfSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VALUE_ONE_OF_SOURCE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VALUE_ONE_OF_SOURCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/value_one_of_source__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'constant'
#include "bosdyn_msgs/msg/detail/constant_value__traits.hpp"
// Member 'runtime_var'
// Member 'parameter'
#include "bosdyn_msgs/msg/detail/variable_declaration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ValueOneOfSource & msg,
  std::ostream & out)
{
  out << "{";
  // member: constant
  {
    out << "constant: ";
    to_flow_style_yaml(msg.constant, out);
    out << ", ";
  }

  // member: runtime_var
  {
    out << "runtime_var: ";
    to_flow_style_yaml(msg.runtime_var, out);
    out << ", ";
  }

  // member: parameter
  {
    out << "parameter: ";
    to_flow_style_yaml(msg.parameter, out);
    out << ", ";
  }

  // member: source_choice
  {
    out << "source_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.source_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ValueOneOfSource & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: constant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "constant:\n";
    to_block_style_yaml(msg.constant, out, indentation + 2);
  }

  // member: runtime_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "runtime_var:\n";
    to_block_style_yaml(msg.runtime_var, out, indentation + 2);
  }

  // member: parameter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parameter:\n";
    to_block_style_yaml(msg.parameter, out, indentation + 2);
  }

  // member: source_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.source_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ValueOneOfSource & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ValueOneOfSource & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ValueOneOfSource & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ValueOneOfSource>()
{
  return "bosdyn_msgs::msg::ValueOneOfSource";
}

template<>
inline const char * name<bosdyn_msgs::msg::ValueOneOfSource>()
{
  return "bosdyn_msgs/msg/ValueOneOfSource";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ValueOneOfSource>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ConstantValue>::value && has_fixed_size<bosdyn_msgs::msg::VariableDeclaration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ValueOneOfSource>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ConstantValue>::value && has_bounded_size<bosdyn_msgs::msg::VariableDeclaration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ValueOneOfSource>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__VALUE_ONE_OF_SOURCE__TRAITS_HPP_
