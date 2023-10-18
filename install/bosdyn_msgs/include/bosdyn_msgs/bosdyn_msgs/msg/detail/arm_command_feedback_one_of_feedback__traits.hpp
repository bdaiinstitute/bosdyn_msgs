// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_command_feedback_one_of_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'arm_cartesian_feedback'
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_feedback__traits.hpp"
// Member 'arm_joint_move_feedback'
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback__traits.hpp"
// Member 'named_arm_position_feedback'
#include "bosdyn_msgs/msg/detail/named_arm_positions_command_feedback__traits.hpp"
// Member 'arm_velocity_feedback'
#include "bosdyn_msgs/msg/detail/arm_velocity_command_feedback__traits.hpp"
// Member 'arm_gaze_feedback'
#include "bosdyn_msgs/msg/detail/gaze_command_feedback__traits.hpp"
// Member 'arm_stop_feedback'
#include "bosdyn_msgs/msg/detail/arm_stop_command_feedback__traits.hpp"
// Member 'arm_drag_feedback'
#include "bosdyn_msgs/msg/detail/arm_drag_command_feedback__traits.hpp"
// Member 'arm_impedance_feedback'
#include "bosdyn_msgs/msg/detail/arm_impedance_command_feedback__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmCommandFeedbackOneOfFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_cartesian_feedback
  {
    out << "arm_cartesian_feedback: ";
    to_flow_style_yaml(msg.arm_cartesian_feedback, out);
    out << ", ";
  }

  // member: arm_joint_move_feedback
  {
    out << "arm_joint_move_feedback: ";
    to_flow_style_yaml(msg.arm_joint_move_feedback, out);
    out << ", ";
  }

  // member: named_arm_position_feedback
  {
    out << "named_arm_position_feedback: ";
    to_flow_style_yaml(msg.named_arm_position_feedback, out);
    out << ", ";
  }

  // member: arm_velocity_feedback
  {
    out << "arm_velocity_feedback: ";
    to_flow_style_yaml(msg.arm_velocity_feedback, out);
    out << ", ";
  }

  // member: arm_gaze_feedback
  {
    out << "arm_gaze_feedback: ";
    to_flow_style_yaml(msg.arm_gaze_feedback, out);
    out << ", ";
  }

  // member: arm_stop_feedback
  {
    out << "arm_stop_feedback: ";
    to_flow_style_yaml(msg.arm_stop_feedback, out);
    out << ", ";
  }

  // member: arm_drag_feedback
  {
    out << "arm_drag_feedback: ";
    to_flow_style_yaml(msg.arm_drag_feedback, out);
    out << ", ";
  }

  // member: arm_impedance_feedback
  {
    out << "arm_impedance_feedback: ";
    to_flow_style_yaml(msg.arm_impedance_feedback, out);
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
  const ArmCommandFeedbackOneOfFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arm_cartesian_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_cartesian_feedback:\n";
    to_block_style_yaml(msg.arm_cartesian_feedback, out, indentation + 2);
  }

  // member: arm_joint_move_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_joint_move_feedback:\n";
    to_block_style_yaml(msg.arm_joint_move_feedback, out, indentation + 2);
  }

  // member: named_arm_position_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "named_arm_position_feedback:\n";
    to_block_style_yaml(msg.named_arm_position_feedback, out, indentation + 2);
  }

  // member: arm_velocity_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_velocity_feedback:\n";
    to_block_style_yaml(msg.arm_velocity_feedback, out, indentation + 2);
  }

  // member: arm_gaze_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_gaze_feedback:\n";
    to_block_style_yaml(msg.arm_gaze_feedback, out, indentation + 2);
  }

  // member: arm_stop_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_stop_feedback:\n";
    to_block_style_yaml(msg.arm_stop_feedback, out, indentation + 2);
  }

  // member: arm_drag_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_drag_feedback:\n";
    to_block_style_yaml(msg.arm_drag_feedback, out, indentation + 2);
  }

  // member: arm_impedance_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_impedance_feedback:\n";
    to_block_style_yaml(msg.arm_impedance_feedback, out, indentation + 2);
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

inline std::string to_yaml(const ArmCommandFeedbackOneOfFeedback & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback>()
{
  return "bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback>()
{
  return "bosdyn_msgs/msg/ArmCommandFeedbackOneOfFeedback";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmCartesianCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::ArmDragCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::ArmImpedanceCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::ArmJointMoveCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::ArmStopCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::ArmVelocityCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::GazeCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::NamedArmPositionsCommandFeedback>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmCartesianCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::ArmDragCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::ArmImpedanceCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::ArmJointMoveCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::ArmStopCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::ArmVelocityCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::GazeCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::NamedArmPositionsCommandFeedback>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__TRAITS_HPP_
