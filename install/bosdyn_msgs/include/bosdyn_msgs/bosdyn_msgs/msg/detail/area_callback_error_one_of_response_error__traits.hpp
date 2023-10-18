// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackErrorOneOfResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR_ONE_OF_RESPONSE_ERROR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR_ONE_OF_RESPONSE_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/area_callback_error_one_of_response_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'begin_callback'
#include "bosdyn_msgs/msg/detail/begin_callback_response__traits.hpp"
// Member 'begin_control'
#include "bosdyn_msgs/msg/detail/begin_control_response__traits.hpp"
// Member 'update_callback'
#include "bosdyn_msgs/msg/detail/update_callback_response__traits.hpp"
// Member 'end_callback'
#include "bosdyn_msgs/msg/detail/end_callback_response__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AreaCallbackErrorOneOfResponseError & msg,
  std::ostream & out)
{
  out << "{";
  // member: begin_callback
  {
    out << "begin_callback: ";
    to_flow_style_yaml(msg.begin_callback, out);
    out << ", ";
  }

  // member: begin_control
  {
    out << "begin_control: ";
    to_flow_style_yaml(msg.begin_control, out);
    out << ", ";
  }

  // member: update_callback
  {
    out << "update_callback: ";
    to_flow_style_yaml(msg.update_callback, out);
    out << ", ";
  }

  // member: end_callback
  {
    out << "end_callback: ";
    to_flow_style_yaml(msg.end_callback, out);
    out << ", ";
  }

  // member: response_error_choice
  {
    out << "response_error_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.response_error_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AreaCallbackErrorOneOfResponseError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: begin_callback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "begin_callback:\n";
    to_block_style_yaml(msg.begin_callback, out, indentation + 2);
  }

  // member: begin_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "begin_control:\n";
    to_block_style_yaml(msg.begin_control, out, indentation + 2);
  }

  // member: update_callback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_callback:\n";
    to_block_style_yaml(msg.update_callback, out, indentation + 2);
  }

  // member: end_callback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_callback:\n";
    to_block_style_yaml(msg.end_callback, out, indentation + 2);
  }

  // member: response_error_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_error_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.response_error_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AreaCallbackErrorOneOfResponseError & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError>()
{
  return "bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError";
}

template<>
inline const char * name<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError>()
{
  return "bosdyn_msgs/msg/AreaCallbackErrorOneOfResponseError";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::BeginCallbackResponse>::value && has_fixed_size<bosdyn_msgs::msg::BeginControlResponse>::value && has_fixed_size<bosdyn_msgs::msg::EndCallbackResponse>::value && has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponse>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::BeginCallbackResponse>::value && has_bounded_size<bosdyn_msgs::msg::BeginControlResponse>::value && has_bounded_size<bosdyn_msgs::msg::EndCallbackResponse>::value && has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponse>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR_ONE_OF_RESPONSE_ERROR__TRAITS_HPP_
