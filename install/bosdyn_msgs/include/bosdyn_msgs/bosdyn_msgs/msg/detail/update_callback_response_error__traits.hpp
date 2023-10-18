// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ERROR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/update_callback_response_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'error'
#include "bosdyn_msgs/msg/detail/update_callback_response_error_error_type__traits.hpp"
// Member 'lease_use_results'
#include "bosdyn_msgs/msg/detail/lease_use_result__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UpdateCallbackResponseError & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    to_flow_style_yaml(msg.error, out);
    out << ", ";
  }

  // member: lease_use_results
  {
    if (msg.lease_use_results.size() == 0) {
      out << "lease_use_results: []";
    } else {
      out << "lease_use_results: [";
      size_t pending_items = msg.lease_use_results.size();
      for (auto item : msg.lease_use_results) {
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
  const UpdateCallbackResponseError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_block_style_yaml(msg.error, out, indentation + 2);
  }

  // member: lease_use_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lease_use_results.size() == 0) {
      out << "lease_use_results: []\n";
    } else {
      out << "lease_use_results:\n";
      for (auto item : msg.lease_use_results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpdateCallbackResponseError & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::UpdateCallbackResponseError & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::UpdateCallbackResponseError & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::UpdateCallbackResponseError>()
{
  return "bosdyn_msgs::msg::UpdateCallbackResponseError";
}

template<>
inline const char * name<bosdyn_msgs::msg::UpdateCallbackResponseError>()
{
  return "bosdyn_msgs/msg/UpdateCallbackResponseError";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponseError>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponseError>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::UpdateCallbackResponseError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ERROR__TRAITS_HPP_
