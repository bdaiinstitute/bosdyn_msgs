// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BodyControlParamsOneOfParam.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/body_control_params_one_of_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'base_offset_rt_footprint'
#include "bosdyn_msgs/msg/detail/se3_trajectory__traits.hpp"
// Member 'body_assist_for_manipulation'
#include "bosdyn_msgs/msg/detail/body_control_params_body_assist_for_manipulation__traits.hpp"
// Member 'body_pose'
#include "bosdyn_msgs/msg/detail/body_control_params_body_pose__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BodyControlParamsOneOfParam & msg,
  std::ostream & out)
{
  out << "{";
  // member: base_offset_rt_footprint
  {
    out << "base_offset_rt_footprint: ";
    to_flow_style_yaml(msg.base_offset_rt_footprint, out);
    out << ", ";
  }

  // member: body_assist_for_manipulation
  {
    out << "body_assist_for_manipulation: ";
    to_flow_style_yaml(msg.body_assist_for_manipulation, out);
    out << ", ";
  }

  // member: body_pose
  {
    out << "body_pose: ";
    to_flow_style_yaml(msg.body_pose, out);
    out << ", ";
  }

  // member: param_choice
  {
    out << "param_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.param_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BodyControlParamsOneOfParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base_offset_rt_footprint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_offset_rt_footprint:\n";
    to_block_style_yaml(msg.base_offset_rt_footprint, out, indentation + 2);
  }

  // member: body_assist_for_manipulation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_assist_for_manipulation:\n";
    to_block_style_yaml(msg.body_assist_for_manipulation, out, indentation + 2);
  }

  // member: body_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_pose:\n";
    to_block_style_yaml(msg.body_pose, out, indentation + 2);
  }

  // member: param_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.param_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BodyControlParamsOneOfParam & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BodyControlParamsOneOfParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BodyControlParamsOneOfParam & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BodyControlParamsOneOfParam>()
{
  return "bosdyn_msgs::msg::BodyControlParamsOneOfParam";
}

template<>
inline const char * name<bosdyn_msgs::msg::BodyControlParamsOneOfParam>()
{
  return "bosdyn_msgs/msg/BodyControlParamsOneOfParam";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BodyControlParamsOneOfParam>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation>::value && has_fixed_size<bosdyn_msgs::msg::BodyControlParamsBodyPose>::value && has_fixed_size<bosdyn_msgs::msg::SE3Trajectory>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BodyControlParamsOneOfParam>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation>::value && has_bounded_size<bosdyn_msgs::msg::BodyControlParamsBodyPose>::value && has_bounded_size<bosdyn_msgs::msg::SE3Trajectory>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::BodyControlParamsOneOfParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__TRAITS_HPP_
