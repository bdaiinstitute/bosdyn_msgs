// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DictParamChildSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_CHILD_SPEC__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_CHILD_SPEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/dict_param_child_spec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'spec'
#include "bosdyn_msgs/msg/detail/custom_param_spec__traits.hpp"
// Member 'ui_info'
#include "bosdyn_msgs/msg/detail/user_interface_info__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DictParamChildSpec & msg,
  std::ostream & out)
{
  out << "{";
  // member: spec
  {
    out << "spec: ";
    to_flow_style_yaml(msg.spec, out);
    out << ", ";
  }

  // member: spec_is_set
  {
    out << "spec_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.spec_is_set, out);
    out << ", ";
  }

  // member: ui_info
  {
    out << "ui_info: ";
    to_flow_style_yaml(msg.ui_info, out);
    out << ", ";
  }

  // member: ui_info_is_set
  {
    out << "ui_info_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ui_info_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DictParamChildSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spec:\n";
    to_block_style_yaml(msg.spec, out, indentation + 2);
  }

  // member: spec_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spec_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.spec_is_set, out);
    out << "\n";
  }

  // member: ui_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ui_info:\n";
    to_block_style_yaml(msg.ui_info, out, indentation + 2);
  }

  // member: ui_info_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ui_info_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ui_info_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DictParamChildSpec & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DictParamChildSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DictParamChildSpec & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DictParamChildSpec>()
{
  return "bosdyn_msgs::msg::DictParamChildSpec";
}

template<>
inline const char * name<bosdyn_msgs::msg::DictParamChildSpec>()
{
  return "bosdyn_msgs/msg/DictParamChildSpec";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DictParamChildSpec>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::CustomParamSpec>::value && has_fixed_size<bosdyn_msgs::msg::UserInterfaceInfo>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DictParamChildSpec>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::CustomParamSpec>::value && has_bounded_size<bosdyn_msgs::msg::UserInterfaceInfo>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::DictParamChildSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_CHILD_SPEC__TRAITS_HPP_
