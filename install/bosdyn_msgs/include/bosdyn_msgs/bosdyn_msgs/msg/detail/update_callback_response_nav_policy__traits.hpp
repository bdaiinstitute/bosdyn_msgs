// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseNavPolicy.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/update_callback_response_nav_policy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'at_start'
// Member 'at_end'
#include "bosdyn_msgs/msg/detail/update_callback_response_nav_policy_option__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UpdateCallbackResponseNavPolicy & msg,
  std::ostream & out)
{
  out << "{";
  // member: at_start
  {
    out << "at_start: ";
    to_flow_style_yaml(msg.at_start, out);
    out << ", ";
  }

  // member: at_end
  {
    out << "at_end: ";
    to_flow_style_yaml(msg.at_end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UpdateCallbackResponseNavPolicy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: at_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "at_start:\n";
    to_block_style_yaml(msg.at_start, out, indentation + 2);
  }

  // member: at_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "at_end:\n";
    to_block_style_yaml(msg.at_end, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpdateCallbackResponseNavPolicy & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy>()
{
  return "bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy";
}

template<>
inline const char * name<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy>()
{
  return "bosdyn_msgs/msg/UpdateCallbackResponseNavPolicy";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicyOption>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicyOption>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__TRAITS_HPP_
