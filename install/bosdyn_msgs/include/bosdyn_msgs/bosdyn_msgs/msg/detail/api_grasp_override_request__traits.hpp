// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ApiGraspOverrideRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/api_grasp_override_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'api_grasp_override'
#include "bosdyn_msgs/msg/detail/api_grasp_override__traits.hpp"
// Member 'carry_state_override'
#include "bosdyn_msgs/msg/detail/api_grasped_carry_state_override__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ApiGraspOverrideRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: api_grasp_override
  {
    out << "api_grasp_override: ";
    to_flow_style_yaml(msg.api_grasp_override, out);
    out << ", ";
  }

  // member: api_grasp_override_is_set
  {
    out << "api_grasp_override_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.api_grasp_override_is_set, out);
    out << ", ";
  }

  // member: carry_state_override
  {
    out << "carry_state_override: ";
    to_flow_style_yaml(msg.carry_state_override, out);
    out << ", ";
  }

  // member: carry_state_override_is_set
  {
    out << "carry_state_override_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.carry_state_override_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApiGraspOverrideRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: api_grasp_override
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "api_grasp_override:\n";
    to_block_style_yaml(msg.api_grasp_override, out, indentation + 2);
  }

  // member: api_grasp_override_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "api_grasp_override_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.api_grasp_override_is_set, out);
    out << "\n";
  }

  // member: carry_state_override
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carry_state_override:\n";
    to_block_style_yaml(msg.carry_state_override, out, indentation + 2);
  }

  // member: carry_state_override_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carry_state_override_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.carry_state_override_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApiGraspOverrideRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ApiGraspOverrideRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ApiGraspOverrideRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ApiGraspOverrideRequest>()
{
  return "bosdyn_msgs::msg::ApiGraspOverrideRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ApiGraspOverrideRequest>()
{
  return "bosdyn_msgs/msg/ApiGraspOverrideRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ApiGraspOverrideRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ApiGraspOverride>::value && has_fixed_size<bosdyn_msgs::msg::ApiGraspedCarryStateOverride>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ApiGraspOverrideRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ApiGraspOverride>::value && has_bounded_size<bosdyn_msgs::msg::ApiGraspedCarryStateOverride>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ApiGraspOverrideRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_REQUEST__TRAITS_HPP_
