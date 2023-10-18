// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ApiGraspOverride.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/api_grasp_override__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'override_request'
#include "bosdyn_msgs/msg/detail/api_grasp_override_override__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ApiGraspOverride & msg,
  std::ostream & out)
{
  out << "{";
  // member: override_request
  {
    out << "override_request: ";
    to_flow_style_yaml(msg.override_request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApiGraspOverride & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: override_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override_request:\n";
    to_block_style_yaml(msg.override_request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApiGraspOverride & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ApiGraspOverride & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ApiGraspOverride & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ApiGraspOverride>()
{
  return "bosdyn_msgs::msg::ApiGraspOverride";
}

template<>
inline const char * name<bosdyn_msgs::msg::ApiGraspOverride>()
{
  return "bosdyn_msgs/msg/ApiGraspOverride";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ApiGraspOverride>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ApiGraspOverrideOverride>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ApiGraspOverride>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ApiGraspOverrideOverride>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ApiGraspOverride>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE__TRAITS_HPP_
