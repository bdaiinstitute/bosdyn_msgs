// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/TargetOneOfTarget.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/target_one_of_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'navigate_to'
#include "bosdyn_msgs/msg/detail/target_navigate_to__traits.hpp"
// Member 'navigate_route'
#include "bosdyn_msgs/msg/detail/target_navigate_route__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetOneOfTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: navigate_to
  {
    out << "navigate_to: ";
    to_flow_style_yaml(msg.navigate_to, out);
    out << ", ";
  }

  // member: navigate_route
  {
    out << "navigate_route: ";
    to_flow_style_yaml(msg.navigate_route, out);
    out << ", ";
  }

  // member: target_choice
  {
    out << "target_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.target_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetOneOfTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: navigate_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigate_to:\n";
    to_block_style_yaml(msg.navigate_to, out, indentation + 2);
  }

  // member: navigate_route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigate_route:\n";
    to_block_style_yaml(msg.navigate_route, out, indentation + 2);
  }

  // member: target_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.target_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetOneOfTarget & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::TargetOneOfTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::TargetOneOfTarget & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::TargetOneOfTarget>()
{
  return "bosdyn_msgs::msg::TargetOneOfTarget";
}

template<>
inline const char * name<bosdyn_msgs::msg::TargetOneOfTarget>()
{
  return "bosdyn_msgs/msg/TargetOneOfTarget";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::TargetOneOfTarget>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::TargetNavigateRoute>::value && has_fixed_size<bosdyn_msgs::msg::TargetNavigateTo>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::TargetOneOfTarget>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::TargetNavigateRoute>::value && has_bounded_size<bosdyn_msgs::msg::TargetNavigateTo>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::TargetOneOfTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__TRAITS_HPP_
