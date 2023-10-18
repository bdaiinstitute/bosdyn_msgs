// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GripperCommandFeedbackOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_FEEDBACK_ONE_OF_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_FEEDBACK_ONE_OF_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/gripper_command_feedback_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'claw_gripper_feedback'
#include "bosdyn_msgs/msg/detail/claw_gripper_command_feedback__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperCommandFeedbackOneOfCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: claw_gripper_feedback
  {
    out << "claw_gripper_feedback: ";
    to_flow_style_yaml(msg.claw_gripper_feedback, out);
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
  const GripperCommandFeedbackOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: claw_gripper_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "claw_gripper_feedback:\n";
    to_block_style_yaml(msg.claw_gripper_feedback, out, indentation + 2);
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

inline std::string to_yaml(const GripperCommandFeedbackOneOfCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand>()
{
  return "bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand>()
{
  return "bosdyn_msgs/msg/GripperCommandFeedbackOneOfCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ClawGripperCommandFeedback>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ClawGripperCommandFeedback>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::GripperCommandFeedbackOneOfCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_FEEDBACK_ONE_OF_COMMAND__TRAITS_HPP_
