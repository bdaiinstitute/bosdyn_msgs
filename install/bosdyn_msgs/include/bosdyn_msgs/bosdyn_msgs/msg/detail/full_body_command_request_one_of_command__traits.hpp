// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/FullBodyCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/full_body_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stop_request'
#include "bosdyn_msgs/msg/detail/stop_command_request__traits.hpp"
// Member 'freeze_request'
#include "bosdyn_msgs/msg/detail/freeze_command_request__traits.hpp"
// Member 'selfright_request'
#include "bosdyn_msgs/msg/detail/self_right_command_request__traits.hpp"
// Member 'safe_power_off_request'
#include "bosdyn_msgs/msg/detail/safe_power_off_command_request__traits.hpp"
// Member 'battery_change_pose_request'
#include "bosdyn_msgs/msg/detail/battery_change_pose_command_request__traits.hpp"
// Member 'payload_estimation_request'
#include "bosdyn_msgs/msg/detail/payload_estimation_command_request__traits.hpp"
// Member 'constrained_manipulation_request'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FullBodyCommandRequestOneOfCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: stop_request
  {
    out << "stop_request: ";
    to_flow_style_yaml(msg.stop_request, out);
    out << ", ";
  }

  // member: freeze_request
  {
    out << "freeze_request: ";
    to_flow_style_yaml(msg.freeze_request, out);
    out << ", ";
  }

  // member: selfright_request
  {
    out << "selfright_request: ";
    to_flow_style_yaml(msg.selfright_request, out);
    out << ", ";
  }

  // member: safe_power_off_request
  {
    out << "safe_power_off_request: ";
    to_flow_style_yaml(msg.safe_power_off_request, out);
    out << ", ";
  }

  // member: battery_change_pose_request
  {
    out << "battery_change_pose_request: ";
    to_flow_style_yaml(msg.battery_change_pose_request, out);
    out << ", ";
  }

  // member: payload_estimation_request
  {
    out << "payload_estimation_request: ";
    to_flow_style_yaml(msg.payload_estimation_request, out);
    out << ", ";
  }

  // member: constrained_manipulation_request
  {
    out << "constrained_manipulation_request: ";
    to_flow_style_yaml(msg.constrained_manipulation_request, out);
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
  const FullBodyCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stop_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_request:\n";
    to_block_style_yaml(msg.stop_request, out, indentation + 2);
  }

  // member: freeze_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freeze_request:\n";
    to_block_style_yaml(msg.freeze_request, out, indentation + 2);
  }

  // member: selfright_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selfright_request:\n";
    to_block_style_yaml(msg.selfright_request, out, indentation + 2);
  }

  // member: safe_power_off_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_power_off_request:\n";
    to_block_style_yaml(msg.safe_power_off_request, out, indentation + 2);
  }

  // member: battery_change_pose_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_change_pose_request:\n";
    to_block_style_yaml(msg.battery_change_pose_request, out, indentation + 2);
  }

  // member: payload_estimation_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_estimation_request:\n";
    to_block_style_yaml(msg.payload_estimation_request, out, indentation + 2);
  }

  // member: constrained_manipulation_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "constrained_manipulation_request:\n";
    to_block_style_yaml(msg.constrained_manipulation_request, out, indentation + 2);
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

inline std::string to_yaml(const FullBodyCommandRequestOneOfCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs/msg/FullBodyCommandRequestOneOfCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::BatteryChangePoseCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::FreezeCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::PayloadEstimationCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::SafePowerOffCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::SelfRightCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::StopCommandRequest>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::BatteryChangePoseCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::FreezeCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::PayloadEstimationCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::SafePowerOffCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::SelfRightCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::StopCommandRequest>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
