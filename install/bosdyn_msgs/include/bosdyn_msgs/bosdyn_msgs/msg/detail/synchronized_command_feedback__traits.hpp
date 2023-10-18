// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SynchronizedCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_FEEDBACK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/synchronized_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'arm_command_feedback'
#include "bosdyn_msgs/msg/detail/arm_command_feedback__traits.hpp"
// Member 'mobility_command_feedback'
#include "bosdyn_msgs/msg/detail/mobility_command_feedback__traits.hpp"
// Member 'gripper_command_feedback'
#include "bosdyn_msgs/msg/detail/gripper_command_feedback__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SynchronizedCommandFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_command_feedback
  {
    out << "arm_command_feedback: ";
    to_flow_style_yaml(msg.arm_command_feedback, out);
    out << ", ";
  }

  // member: arm_command_feedback_is_set
  {
    out << "arm_command_feedback_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_command_feedback_is_set, out);
    out << ", ";
  }

  // member: mobility_command_feedback
  {
    out << "mobility_command_feedback: ";
    to_flow_style_yaml(msg.mobility_command_feedback, out);
    out << ", ";
  }

  // member: mobility_command_feedback_is_set
  {
    out << "mobility_command_feedback_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mobility_command_feedback_is_set, out);
    out << ", ";
  }

  // member: gripper_command_feedback
  {
    out << "gripper_command_feedback: ";
    to_flow_style_yaml(msg.gripper_command_feedback, out);
    out << ", ";
  }

  // member: gripper_command_feedback_is_set
  {
    out << "gripper_command_feedback_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_command_feedback_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SynchronizedCommandFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arm_command_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_command_feedback:\n";
    to_block_style_yaml(msg.arm_command_feedback, out, indentation + 2);
  }

  // member: arm_command_feedback_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_command_feedback_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_command_feedback_is_set, out);
    out << "\n";
  }

  // member: mobility_command_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mobility_command_feedback:\n";
    to_block_style_yaml(msg.mobility_command_feedback, out, indentation + 2);
  }

  // member: mobility_command_feedback_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mobility_command_feedback_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mobility_command_feedback_is_set, out);
    out << "\n";
  }

  // member: gripper_command_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_command_feedback:\n";
    to_block_style_yaml(msg.gripper_command_feedback, out, indentation + 2);
  }

  // member: gripper_command_feedback_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_command_feedback_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_command_feedback_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SynchronizedCommandFeedback & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SynchronizedCommandFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SynchronizedCommandFeedback & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SynchronizedCommandFeedback>()
{
  return "bosdyn_msgs::msg::SynchronizedCommandFeedback";
}

template<>
inline const char * name<bosdyn_msgs::msg::SynchronizedCommandFeedback>()
{
  return "bosdyn_msgs/msg/SynchronizedCommandFeedback";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SynchronizedCommandFeedback>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::GripperCommandFeedback>::value && has_fixed_size<bosdyn_msgs::msg::MobilityCommandFeedback>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SynchronizedCommandFeedback>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::GripperCommandFeedback>::value && has_bounded_size<bosdyn_msgs::msg::MobilityCommandFeedback>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::SynchronizedCommandFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_FEEDBACK__TRAITS_HPP_
