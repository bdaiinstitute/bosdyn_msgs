// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RobotCommandFeedbackOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_ONE_OF_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_ONE_OF_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/robot_command_feedback_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'full_body_feedback'
#include "bosdyn_msgs/msg/detail/full_body_command_feedback__traits.hpp"
// Member 'synchronized_feedback'
#include "bosdyn_msgs/msg/detail/synchronized_command_feedback__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotCommandFeedbackOneOfCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: full_body_feedback
  {
    out << "full_body_feedback: ";
    to_flow_style_yaml(msg.full_body_feedback, out);
    out << ", ";
  }

  // member: synchronized_feedback
  {
    out << "synchronized_feedback: ";
    to_flow_style_yaml(msg.synchronized_feedback, out);
    out << ", ";
  }

  // member: command_choice
  {
    out << "command_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.command_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotCommandFeedbackOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: full_body_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_body_feedback:\n";
    to_block_style_yaml(msg.full_body_feedback, out, indentation + 2);
  }

  // member: synchronized_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "synchronized_feedback:\n";
    to_block_style_yaml(msg.synchronized_feedback, out, indentation + 2);
  }

  // member: command_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.command_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotCommandFeedbackOneOfCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand>()
{
  return "bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand>()
{
  return "bosdyn_msgs/msg/RobotCommandFeedbackOneOfCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::FullBodyCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::SynchronizedCommandFeedback>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::FullBodyCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::SynchronizedCommandFeedback>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::RobotCommandFeedbackOneOfCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_ONE_OF_COMMAND__TRAITS_HPP_
