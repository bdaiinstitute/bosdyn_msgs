// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/MobilityCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/mobility_command_request_one_of_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'se2_trajectory_request'
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_request__traits.hpp"
// Member 'se2_velocity_request'
#include "bosdyn_msgs/msg/detail/se2_velocity_command_request__traits.hpp"
// Member 'sit_request'
#include "bosdyn_msgs/msg/detail/sit_command_request__traits.hpp"
// Member 'stand_request'
#include "bosdyn_msgs/msg/detail/stand_command_request__traits.hpp"
// Member 'stance_request'
#include "bosdyn_msgs/msg/detail/stance_command_request__traits.hpp"
// Member 'stop_request'
#include "bosdyn_msgs/msg/detail/stop_command_request__traits.hpp"
// Member 'follow_arm_request'
#include "bosdyn_msgs/msg/detail/follow_arm_command_request__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MobilityCommandRequestOneOfCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: se2_trajectory_request
  {
    out << "se2_trajectory_request: ";
    to_flow_style_yaml(msg.se2_trajectory_request, out);
    out << ", ";
  }

  // member: se2_velocity_request
  {
    out << "se2_velocity_request: ";
    to_flow_style_yaml(msg.se2_velocity_request, out);
    out << ", ";
  }

  // member: sit_request
  {
    out << "sit_request: ";
    to_flow_style_yaml(msg.sit_request, out);
    out << ", ";
  }

  // member: stand_request
  {
    out << "stand_request: ";
    to_flow_style_yaml(msg.stand_request, out);
    out << ", ";
  }

  // member: stance_request
  {
    out << "stance_request: ";
    to_flow_style_yaml(msg.stance_request, out);
    out << ", ";
  }

  // member: stop_request
  {
    out << "stop_request: ";
    to_flow_style_yaml(msg.stop_request, out);
    out << ", ";
  }

  // member: follow_arm_request
  {
    out << "follow_arm_request: ";
    to_flow_style_yaml(msg.follow_arm_request, out);
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
  const MobilityCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: se2_trajectory_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "se2_trajectory_request:\n";
    to_block_style_yaml(msg.se2_trajectory_request, out, indentation + 2);
  }

  // member: se2_velocity_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "se2_velocity_request:\n";
    to_block_style_yaml(msg.se2_velocity_request, out, indentation + 2);
  }

  // member: sit_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sit_request:\n";
    to_block_style_yaml(msg.sit_request, out, indentation + 2);
  }

  // member: stand_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stand_request:\n";
    to_block_style_yaml(msg.stand_request, out, indentation + 2);
  }

  // member: stance_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stance_request:\n";
    to_block_style_yaml(msg.stance_request, out, indentation + 2);
  }

  // member: stop_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_request:\n";
    to_block_style_yaml(msg.stop_request, out, indentation + 2);
  }

  // member: follow_arm_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "follow_arm_request:\n";
    to_block_style_yaml(msg.follow_arm_request, out, indentation + 2);
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

inline std::string to_yaml(const MobilityCommandRequestOneOfCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand>()
{
  return "bosdyn_msgs/msg/MobilityCommandRequestOneOfCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::FollowArmCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::SE2TrajectoryCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::SE2VelocityCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::SitCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::StanceCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::StandCommandRequest>::value && has_fixed_size<bosdyn_msgs::msg::StopCommandRequest>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::FollowArmCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::SE2TrajectoryCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::SE2VelocityCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::SitCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::StanceCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::StandCommandRequest>::value && has_bounded_size<bosdyn_msgs::msg::StopCommandRequest>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST_ONE_OF_COMMAND__TRAITS_HPP_
