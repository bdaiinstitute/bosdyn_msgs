// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PayloadEstimationCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_ESTIMATION_COMMAND_FEEDBACK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_ESTIMATION_COMMAND_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback_status__traits.hpp"
// Member 'error'
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback_error__traits.hpp"
// Member 'estimated_payload'
#include "bosdyn_msgs/msg/detail/payload__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PayloadEstimationCommandFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    to_flow_style_yaml(msg.error, out);
    out << ", ";
  }

  // member: estimated_payload
  {
    out << "estimated_payload: ";
    to_flow_style_yaml(msg.estimated_payload, out);
    out << ", ";
  }

  // member: estimated_payload_is_set
  {
    out << "estimated_payload_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_payload_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PayloadEstimationCommandFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_block_style_yaml(msg.error, out, indentation + 2);
  }

  // member: estimated_payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_payload:\n";
    to_block_style_yaml(msg.estimated_payload, out, indentation + 2);
  }

  // member: estimated_payload_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_payload_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_payload_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PayloadEstimationCommandFeedback & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PayloadEstimationCommandFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PayloadEstimationCommandFeedback & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PayloadEstimationCommandFeedback>()
{
  return "bosdyn_msgs::msg::PayloadEstimationCommandFeedback";
}

template<>
inline const char * name<bosdyn_msgs::msg::PayloadEstimationCommandFeedback>()
{
  return "bosdyn_msgs/msg/PayloadEstimationCommandFeedback";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PayloadEstimationCommandFeedback>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Payload>::value && has_fixed_size<bosdyn_msgs::msg::PayloadEstimationCommandFeedbackError>::value && has_fixed_size<bosdyn_msgs::msg::PayloadEstimationCommandFeedbackStatus>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PayloadEstimationCommandFeedback>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Payload>::value && has_bounded_size<bosdyn_msgs::msg::PayloadEstimationCommandFeedbackError>::value && has_bounded_size<bosdyn_msgs::msg::PayloadEstimationCommandFeedbackStatus>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::PayloadEstimationCommandFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_ESTIMATION_COMMAND_FEEDBACK__TRAITS_HPP_
