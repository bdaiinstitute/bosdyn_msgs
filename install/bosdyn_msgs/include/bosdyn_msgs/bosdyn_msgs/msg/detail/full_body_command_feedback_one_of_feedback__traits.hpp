// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/FullBodyCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/full_body_command_feedback_one_of_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stop_feedback'
#include "bosdyn_msgs/msg/detail/stop_command_feedback__traits.hpp"
// Member 'freeze_feedback'
#include "bosdyn_msgs/msg/detail/freeze_command_feedback__traits.hpp"
// Member 'selfright_feedback'
#include "bosdyn_msgs/msg/detail/self_right_command_feedback__traits.hpp"
// Member 'safe_power_off_feedback'
#include "bosdyn_msgs/msg/detail/safe_power_off_command_feedback__traits.hpp"
// Member 'battery_change_pose_feedback'
#include "bosdyn_msgs/msg/detail/battery_change_pose_command_feedback__traits.hpp"
// Member 'payload_estimation_feedback'
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback__traits.hpp"
// Member 'constrained_manipulation_feedback'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_feedback__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FullBodyCommandFeedbackOneOfFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: stop_feedback
  {
    out << "stop_feedback: ";
    to_flow_style_yaml(msg.stop_feedback, out);
    out << ", ";
  }

  // member: freeze_feedback
  {
    out << "freeze_feedback: ";
    to_flow_style_yaml(msg.freeze_feedback, out);
    out << ", ";
  }

  // member: selfright_feedback
  {
    out << "selfright_feedback: ";
    to_flow_style_yaml(msg.selfright_feedback, out);
    out << ", ";
  }

  // member: safe_power_off_feedback
  {
    out << "safe_power_off_feedback: ";
    to_flow_style_yaml(msg.safe_power_off_feedback, out);
    out << ", ";
  }

  // member: battery_change_pose_feedback
  {
    out << "battery_change_pose_feedback: ";
    to_flow_style_yaml(msg.battery_change_pose_feedback, out);
    out << ", ";
  }

  // member: payload_estimation_feedback
  {
    out << "payload_estimation_feedback: ";
    to_flow_style_yaml(msg.payload_estimation_feedback, out);
    out << ", ";
  }

  // member: constrained_manipulation_feedback
  {
    out << "constrained_manipulation_feedback: ";
    to_flow_style_yaml(msg.constrained_manipulation_feedback, out);
    out << ", ";
  }

  // member: feedback_choice
  {
    out << "feedback_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FullBodyCommandFeedbackOneOfFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stop_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_feedback:\n";
    to_block_style_yaml(msg.stop_feedback, out, indentation + 2);
  }

  // member: freeze_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freeze_feedback:\n";
    to_block_style_yaml(msg.freeze_feedback, out, indentation + 2);
  }

  // member: selfright_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selfright_feedback:\n";
    to_block_style_yaml(msg.selfright_feedback, out, indentation + 2);
  }

  // member: safe_power_off_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_power_off_feedback:\n";
    to_block_style_yaml(msg.safe_power_off_feedback, out, indentation + 2);
  }

  // member: battery_change_pose_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_change_pose_feedback:\n";
    to_block_style_yaml(msg.battery_change_pose_feedback, out, indentation + 2);
  }

  // member: payload_estimation_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_estimation_feedback:\n";
    to_block_style_yaml(msg.payload_estimation_feedback, out, indentation + 2);
  }

  // member: constrained_manipulation_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "constrained_manipulation_feedback:\n";
    to_block_style_yaml(msg.constrained_manipulation_feedback, out, indentation + 2);
  }

  // member: feedback_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FullBodyCommandFeedbackOneOfFeedback & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback>()
{
  return "bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback";
}

template<>
inline const char * name<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback>()
{
  return "bosdyn_msgs/msg/FullBodyCommandFeedbackOneOfFeedback";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::BatteryChangePoseCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::FreezeCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::PayloadEstimationCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::SafePowerOffCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::SelfRightCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::StopCommandFeedback>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::BatteryChangePoseCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::FreezeCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::PayloadEstimationCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::SafePowerOffCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::SelfRightCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::StopCommandFeedback>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__TRAITS_HPP_
