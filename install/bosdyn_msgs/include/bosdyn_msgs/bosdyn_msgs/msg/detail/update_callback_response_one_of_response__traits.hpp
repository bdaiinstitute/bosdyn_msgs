// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseOneOfResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ONE_OF_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ONE_OF_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/update_callback_response_one_of_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'policy'
#include "bosdyn_msgs/msg/detail/update_callback_response_nav_policy__traits.hpp"
// Member 'error'
#include "bosdyn_msgs/msg/detail/update_callback_response_error__traits.hpp"
// Member 'complete'
#include "bosdyn_msgs/msg/detail/update_callback_response_complete__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UpdateCallbackResponseOneOfResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: policy
  {
    out << "policy: ";
    to_flow_style_yaml(msg.policy, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    to_flow_style_yaml(msg.error, out);
    out << ", ";
  }

  // member: complete
  {
    out << "complete: ";
    to_flow_style_yaml(msg.complete, out);
    out << ", ";
  }

  // member: response_choice
  {
    out << "response_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.response_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UpdateCallbackResponseOneOfResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: policy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "policy:\n";
    to_block_style_yaml(msg.policy, out, indentation + 2);
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_block_style_yaml(msg.error, out, indentation + 2);
  }

  // member: complete
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "complete:\n";
    to_block_style_yaml(msg.complete, out, indentation + 2);
  }

  // member: response_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.response_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpdateCallbackResponseOneOfResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse>()
{
  return "bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse>()
{
  return "bosdyn_msgs/msg/UpdateCallbackResponseOneOfResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponseComplete>::value && has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponseError>::value && has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponseComplete>::value && has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponseError>::value && has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ONE_OF_RESPONSE__TRAITS_HPP_
