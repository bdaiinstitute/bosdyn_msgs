// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfToolSpecification.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TOOL_SPECIFICATION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TOOL_SPECIFICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_tool_specification__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'wrist_mounted_tool'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_wrist_mounted_tool__traits.hpp"
// Member 'body_mounted_tool'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_body_mounted_tool__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InverseKinematicsRequestOneOfToolSpecification & msg,
  std::ostream & out)
{
  out << "{";
  // member: wrist_mounted_tool
  {
    out << "wrist_mounted_tool: ";
    to_flow_style_yaml(msg.wrist_mounted_tool, out);
    out << ", ";
  }

  // member: body_mounted_tool
  {
    out << "body_mounted_tool: ";
    to_flow_style_yaml(msg.body_mounted_tool, out);
    out << ", ";
  }

  // member: tool_specification_choice
  {
    out << "tool_specification_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_specification_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematicsRequestOneOfToolSpecification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wrist_mounted_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_mounted_tool:\n";
    to_block_style_yaml(msg.wrist_mounted_tool, out, indentation + 2);
  }

  // member: body_mounted_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_mounted_tool:\n";
    to_block_style_yaml(msg.body_mounted_tool, out, indentation + 2);
  }

  // member: tool_specification_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_specification_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_specification_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematicsRequestOneOfToolSpecification & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification>()
{
  return "bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification";
}

template<>
inline const char * name<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification>()
{
  return "bosdyn_msgs/msg/InverseKinematicsRequestOneOfToolSpecification";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool>::value && has_fixed_size<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool>::value && has_bounded_size<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TOOL_SPECIFICATION__TRAITS_HPP_
