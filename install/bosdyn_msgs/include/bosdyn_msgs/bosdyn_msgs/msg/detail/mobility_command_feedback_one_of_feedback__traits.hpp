// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/MobilityCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/mobility_command_feedback_one_of_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'se2_trajectory_feedback'
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback__traits.hpp"
// Member 'se2_velocity_feedback'
#include "bosdyn_msgs/msg/detail/se2_velocity_command_feedback__traits.hpp"
// Member 'sit_feedback'
#include "bosdyn_msgs/msg/detail/sit_command_feedback__traits.hpp"
// Member 'stand_feedback'
#include "bosdyn_msgs/msg/detail/stand_command_feedback__traits.hpp"
// Member 'stance_feedback'
#include "bosdyn_msgs/msg/detail/stance_command_feedback__traits.hpp"
// Member 'stop_feedback'
#include "bosdyn_msgs/msg/detail/stop_command_feedback__traits.hpp"
// Member 'follow_arm_feedback'
#include "bosdyn_msgs/msg/detail/follow_arm_command_feedback__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MobilityCommandFeedbackOneOfFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: se2_trajectory_feedback
  {
    out << "se2_trajectory_feedback: ";
    to_flow_style_yaml(msg.se2_trajectory_feedback, out);
    out << ", ";
  }

  // member: se2_velocity_feedback
  {
    out << "se2_velocity_feedback: ";
    to_flow_style_yaml(msg.se2_velocity_feedback, out);
    out << ", ";
  }

  // member: sit_feedback
  {
    out << "sit_feedback: ";
    to_flow_style_yaml(msg.sit_feedback, out);
    out << ", ";
  }

  // member: stand_feedback
  {
    out << "stand_feedback: ";
    to_flow_style_yaml(msg.stand_feedback, out);
    out << ", ";
  }

  // member: stance_feedback
  {
    out << "stance_feedback: ";
    to_flow_style_yaml(msg.stance_feedback, out);
    out << ", ";
  }

  // member: stop_feedback
  {
    out << "stop_feedback: ";
    to_flow_style_yaml(msg.stop_feedback, out);
    out << ", ";
  }

  // member: follow_arm_feedback
  {
    out << "follow_arm_feedback: ";
    to_flow_style_yaml(msg.follow_arm_feedback, out);
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
  const MobilityCommandFeedbackOneOfFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: se2_trajectory_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "se2_trajectory_feedback:\n";
    to_block_style_yaml(msg.se2_trajectory_feedback, out, indentation + 2);
  }

  // member: se2_velocity_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "se2_velocity_feedback:\n";
    to_block_style_yaml(msg.se2_velocity_feedback, out, indentation + 2);
  }

  // member: sit_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sit_feedback:\n";
    to_block_style_yaml(msg.sit_feedback, out, indentation + 2);
  }

  // member: stand_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stand_feedback:\n";
    to_block_style_yaml(msg.stand_feedback, out, indentation + 2);
  }

  // member: stance_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stance_feedback:\n";
    to_block_style_yaml(msg.stance_feedback, out, indentation + 2);
  }

  // member: stop_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_feedback:\n";
    to_block_style_yaml(msg.stop_feedback, out, indentation + 2);
  }

  // member: follow_arm_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "follow_arm_feedback:\n";
    to_block_style_yaml(msg.follow_arm_feedback, out, indentation + 2);
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

inline std::string to_yaml(const MobilityCommandFeedbackOneOfFeedback & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback>()
{
  return "bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback";
}

template<>
inline const char * name<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback>()
{
  return "bosdyn_msgs/msg/MobilityCommandFeedbackOneOfFeedback";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::FollowArmCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::SE2TrajectoryCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::SE2VelocityCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::SitCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::StanceCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::StandCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::StopCommandFeedback>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::FollowArmCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::SE2TrajectoryCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::SE2VelocityCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::SitCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::StanceCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::StandCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::StopCommandFeedback>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__TRAITS_HPP_
