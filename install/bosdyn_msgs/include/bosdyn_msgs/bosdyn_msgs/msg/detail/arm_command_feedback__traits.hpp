// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'feedback'
#include "bosdyn_msgs/msg/detail/arm_command_feedback_one_of_feedback__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/robot_command_feedback_status_status__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmCommandFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmCommandFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmCommandFeedback & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmCommandFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmCommandFeedback & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmCommandFeedback>()
{
  return "bosdyn_msgs::msg::ArmCommandFeedback";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmCommandFeedback>()
{
  return "bosdyn_msgs/msg/ArmCommandFeedback";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmCommandFeedback>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback>::value && has_fixed_size<bosdyn_msgs::msg::RobotCommandFeedbackStatusStatus>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmCommandFeedback>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback>::value && has_bounded_size<bosdyn_msgs::msg::RobotCommandFeedbackStatusStatus>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmCommandFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK__TRAITS_HPP_
