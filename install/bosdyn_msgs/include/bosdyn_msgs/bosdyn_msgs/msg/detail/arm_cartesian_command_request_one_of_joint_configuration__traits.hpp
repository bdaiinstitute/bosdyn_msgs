// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmCartesianCommandRequestOneOfJointConfiguration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST_ONE_OF_JOINT_CONFIGURATION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST_ONE_OF_JOINT_CONFIGURATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request_one_of_joint_configuration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'preferred_joint_configuration'
#include "bosdyn_msgs/msg/detail/arm_joint_position__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmCartesianCommandRequestOneOfJointConfiguration & msg,
  std::ostream & out)
{
  out << "{";
  // member: force_remain_near_current_joint_configuration
  {
    out << "force_remain_near_current_joint_configuration: ";
    rosidl_generator_traits::value_to_yaml(msg.force_remain_near_current_joint_configuration, out);
    out << ", ";
  }

  // member: preferred_joint_configuration
  {
    out << "preferred_joint_configuration: ";
    to_flow_style_yaml(msg.preferred_joint_configuration, out);
    out << ", ";
  }

  // member: joint_configuration_choice
  {
    out << "joint_configuration_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_configuration_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmCartesianCommandRequestOneOfJointConfiguration & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: force_remain_near_current_joint_configuration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_remain_near_current_joint_configuration: ";
    rosidl_generator_traits::value_to_yaml(msg.force_remain_near_current_joint_configuration, out);
    out << "\n";
  }

  // member: preferred_joint_configuration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preferred_joint_configuration:\n";
    to_block_style_yaml(msg.preferred_joint_configuration, out, indentation + 2);
  }

  // member: joint_configuration_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_configuration_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_configuration_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmCartesianCommandRequestOneOfJointConfiguration & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration>()
{
  return "bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration>()
{
  return "bosdyn_msgs/msg/ArmCartesianCommandRequestOneOfJointConfiguration";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmJointPosition>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmJointPosition>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST_ONE_OF_JOINT_CONFIGURATION__TRAITS_HPP_
