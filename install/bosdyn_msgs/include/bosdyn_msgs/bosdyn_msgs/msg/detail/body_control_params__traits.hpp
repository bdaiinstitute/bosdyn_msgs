// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BodyControlParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/body_control_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'param'
#include "bosdyn_msgs/msg/detail/body_control_params_one_of_param__traits.hpp"
// Member 'rotation_setting'
#include "bosdyn_msgs/msg/detail/body_control_params_rotation_setting__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BodyControlParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: param
  {
    out << "param: ";
    to_flow_style_yaml(msg.param, out);
    out << ", ";
  }

  // member: rotation_setting
  {
    out << "rotation_setting: ";
    to_flow_style_yaml(msg.rotation_setting, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BodyControlParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: param
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param:\n";
    to_block_style_yaml(msg.param, out, indentation + 2);
  }

  // member: rotation_setting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_setting:\n";
    to_block_style_yaml(msg.rotation_setting, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BodyControlParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BodyControlParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BodyControlParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BodyControlParams>()
{
  return "bosdyn_msgs::msg::BodyControlParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::BodyControlParams>()
{
  return "bosdyn_msgs/msg/BodyControlParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BodyControlParams>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::BodyControlParamsOneOfParam>::value && has_fixed_size<bosdyn_msgs::msg::BodyControlParamsRotationSetting>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BodyControlParams>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::BodyControlParamsOneOfParam>::value && has_bounded_size<bosdyn_msgs::msg::BodyControlParamsRotationSetting>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::BodyControlParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS__TRAITS_HPP_
