// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CustomParamSpecOneOfSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC_ONE_OF_SPEC__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC_ONE_OF_SPEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/custom_param_spec_one_of_spec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dict_spec'
#include "bosdyn_msgs/msg/detail/serialized_message__traits.hpp"
// Member 'list_spec'
#include "bosdyn_msgs/msg/detail/list_param_spec__traits.hpp"
// Member 'int_spec'
#include "bosdyn_msgs/msg/detail/int64_param_spec__traits.hpp"
// Member 'double_spec'
#include "bosdyn_msgs/msg/detail/double_param_spec__traits.hpp"
// Member 'string_spec'
#include "bosdyn_msgs/msg/detail/string_param_spec__traits.hpp"
// Member 'roi_spec'
#include "bosdyn_msgs/msg/detail/region_of_interest_param_spec__traits.hpp"
// Member 'bool_spec'
#include "bosdyn_msgs/msg/detail/bool_param_spec__traits.hpp"
// Member 'one_of_spec'
#include "bosdyn_msgs/msg/detail/one_of_param_spec__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomParamSpecOneOfSpec & msg,
  std::ostream & out)
{
  out << "{";
  // member: dict_spec
  {
    out << "dict_spec: ";
    to_flow_style_yaml(msg.dict_spec, out);
    out << ", ";
  }

  // member: list_spec
  {
    out << "list_spec: ";
    to_flow_style_yaml(msg.list_spec, out);
    out << ", ";
  }

  // member: int_spec
  {
    out << "int_spec: ";
    to_flow_style_yaml(msg.int_spec, out);
    out << ", ";
  }

  // member: double_spec
  {
    out << "double_spec: ";
    to_flow_style_yaml(msg.double_spec, out);
    out << ", ";
  }

  // member: string_spec
  {
    out << "string_spec: ";
    to_flow_style_yaml(msg.string_spec, out);
    out << ", ";
  }

  // member: roi_spec
  {
    out << "roi_spec: ";
    to_flow_style_yaml(msg.roi_spec, out);
    out << ", ";
  }

  // member: bool_spec
  {
    out << "bool_spec: ";
    to_flow_style_yaml(msg.bool_spec, out);
    out << ", ";
  }

  // member: one_of_spec
  {
    out << "one_of_spec: ";
    to_flow_style_yaml(msg.one_of_spec, out);
    out << ", ";
  }

  // member: spec_choice
  {
    out << "spec_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.spec_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomParamSpecOneOfSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dict_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dict_spec:\n";
    to_block_style_yaml(msg.dict_spec, out, indentation + 2);
  }

  // member: list_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "list_spec:\n";
    to_block_style_yaml(msg.list_spec, out, indentation + 2);
  }

  // member: int_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_spec:\n";
    to_block_style_yaml(msg.int_spec, out, indentation + 2);
  }

  // member: double_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "double_spec:\n";
    to_block_style_yaml(msg.double_spec, out, indentation + 2);
  }

  // member: string_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_spec:\n";
    to_block_style_yaml(msg.string_spec, out, indentation + 2);
  }

  // member: roi_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi_spec:\n";
    to_block_style_yaml(msg.roi_spec, out, indentation + 2);
  }

  // member: bool_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bool_spec:\n";
    to_block_style_yaml(msg.bool_spec, out, indentation + 2);
  }

  // member: one_of_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "one_of_spec:\n";
    to_block_style_yaml(msg.one_of_spec, out, indentation + 2);
  }

  // member: spec_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spec_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.spec_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomParamSpecOneOfSpec & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CustomParamSpecOneOfSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CustomParamSpecOneOfSpec & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CustomParamSpecOneOfSpec>()
{
  return "bosdyn_msgs::msg::CustomParamSpecOneOfSpec";
}

template<>
inline const char * name<bosdyn_msgs::msg::CustomParamSpecOneOfSpec>()
{
  return "bosdyn_msgs/msg/CustomParamSpecOneOfSpec";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CustomParamSpecOneOfSpec>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::BoolParamSpec>::value && has_fixed_size<bosdyn_msgs::msg::DoubleParamSpec>::value && has_fixed_size<bosdyn_msgs::msg::Int64ParamSpec>::value && has_fixed_size<bosdyn_msgs::msg::ListParamSpec>::value && has_fixed_size<bosdyn_msgs::msg::OneOfParamSpec>::value && has_fixed_size<bosdyn_msgs::msg::RegionOfInterestParamSpec>::value && has_fixed_size<bosdyn_msgs::msg::SerializedMessage>::value && has_fixed_size<bosdyn_msgs::msg::StringParamSpec>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CustomParamSpecOneOfSpec>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::BoolParamSpec>::value && has_bounded_size<bosdyn_msgs::msg::DoubleParamSpec>::value && has_bounded_size<bosdyn_msgs::msg::Int64ParamSpec>::value && has_bounded_size<bosdyn_msgs::msg::ListParamSpec>::value && has_bounded_size<bosdyn_msgs::msg::OneOfParamSpec>::value && has_bounded_size<bosdyn_msgs::msg::RegionOfInterestParamSpec>::value && has_bounded_size<bosdyn_msgs::msg::SerializedMessage>::value && has_bounded_size<bosdyn_msgs::msg::StringParamSpec>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::CustomParamSpecOneOfSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC_ONE_OF_SPEC__TRAITS_HPP_
