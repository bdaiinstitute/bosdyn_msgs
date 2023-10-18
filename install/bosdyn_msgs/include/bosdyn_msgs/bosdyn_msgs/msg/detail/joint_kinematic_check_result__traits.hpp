// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/JointKinematicCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/joint_kinematic_check_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'error'
#include "bosdyn_msgs/msg/detail/joint_kinematic_check_result_error__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointKinematicCheckResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    to_flow_style_yaml(msg.error, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << ", ";
  }

  // member: old_offset
  {
    out << "old_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.old_offset, out);
    out << ", ";
  }

  // member: health_score
  {
    out << "health_score: ";
    rosidl_generator_traits::value_to_yaml(msg.health_score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointKinematicCheckResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_block_style_yaml(msg.error, out, indentation + 2);
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << "\n";
  }

  // member: old_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "old_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.old_offset, out);
    out << "\n";
  }

  // member: health_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_score: ";
    rosidl_generator_traits::value_to_yaml(msg.health_score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointKinematicCheckResult & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::JointKinematicCheckResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::JointKinematicCheckResult & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::JointKinematicCheckResult>()
{
  return "bosdyn_msgs::msg::JointKinematicCheckResult";
}

template<>
inline const char * name<bosdyn_msgs::msg::JointKinematicCheckResult>()
{
  return "bosdyn_msgs/msg/JointKinematicCheckResult";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::JointKinematicCheckResult>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::JointKinematicCheckResultError>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::JointKinematicCheckResult>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::JointKinematicCheckResultError>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::JointKinematicCheckResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__TRAITS_HPP_
