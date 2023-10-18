// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CustomParamOneOfValue.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ONE_OF_VALUE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ONE_OF_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/custom_param_one_of_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dict_value'
#include "bosdyn_msgs/msg/detail/serialized_message__traits.hpp"
// Member 'list_value'
#include "bosdyn_msgs/msg/detail/list_param__traits.hpp"
// Member 'int_value'
#include "bosdyn_msgs/msg/detail/int64_param__traits.hpp"
// Member 'double_value'
#include "bosdyn_msgs/msg/detail/double_param__traits.hpp"
// Member 'string_value'
#include "bosdyn_msgs/msg/detail/string_param__traits.hpp"
// Member 'roi_value'
#include "bosdyn_msgs/msg/detail/region_of_interest_param__traits.hpp"
// Member 'bool_value'
#include "bosdyn_msgs/msg/detail/bool_param__traits.hpp"
// Member 'one_of_value'
#include "bosdyn_msgs/msg/detail/one_of_param__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomParamOneOfValue & msg,
  std::ostream & out)
{
  out << "{";
  // member: dict_value
  {
    out << "dict_value: ";
    to_flow_style_yaml(msg.dict_value, out);
    out << ", ";
  }

  // member: list_value
  {
    out << "list_value: ";
    to_flow_style_yaml(msg.list_value, out);
    out << ", ";
  }

  // member: int_value
  {
    out << "int_value: ";
    to_flow_style_yaml(msg.int_value, out);
    out << ", ";
  }

  // member: double_value
  {
    out << "double_value: ";
    to_flow_style_yaml(msg.double_value, out);
    out << ", ";
  }

  // member: string_value
  {
    out << "string_value: ";
    to_flow_style_yaml(msg.string_value, out);
    out << ", ";
  }

  // member: roi_value
  {
    out << "roi_value: ";
    to_flow_style_yaml(msg.roi_value, out);
    out << ", ";
  }

  // member: bool_value
  {
    out << "bool_value: ";
    to_flow_style_yaml(msg.bool_value, out);
    out << ", ";
  }

  // member: one_of_value
  {
    out << "one_of_value: ";
    to_flow_style_yaml(msg.one_of_value, out);
    out << ", ";
  }

  // member: value_choice
  {
    out << "value_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.value_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomParamOneOfValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dict_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dict_value:\n";
    to_block_style_yaml(msg.dict_value, out, indentation + 2);
  }

  // member: list_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "list_value:\n";
    to_block_style_yaml(msg.list_value, out, indentation + 2);
  }

  // member: int_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_value:\n";
    to_block_style_yaml(msg.int_value, out, indentation + 2);
  }

  // member: double_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "double_value:\n";
    to_block_style_yaml(msg.double_value, out, indentation + 2);
  }

  // member: string_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value:\n";
    to_block_style_yaml(msg.string_value, out, indentation + 2);
  }

  // member: roi_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi_value:\n";
    to_block_style_yaml(msg.roi_value, out, indentation + 2);
  }

  // member: bool_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bool_value:\n";
    to_block_style_yaml(msg.bool_value, out, indentation + 2);
  }

  // member: one_of_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "one_of_value:\n";
    to_block_style_yaml(msg.one_of_value, out, indentation + 2);
  }

  // member: value_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.value_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomParamOneOfValue & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CustomParamOneOfValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CustomParamOneOfValue & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CustomParamOneOfValue>()
{
  return "bosdyn_msgs::msg::CustomParamOneOfValue";
}

template<>
inline const char * name<bosdyn_msgs::msg::CustomParamOneOfValue>()
{
  return "bosdyn_msgs/msg/CustomParamOneOfValue";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CustomParamOneOfValue>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::BoolParam>::value && has_fixed_size<bosdyn_msgs::msg::DoubleParam>::value && has_fixed_size<bosdyn_msgs::msg::Int64Param>::value && has_fixed_size<bosdyn_msgs::msg::ListParam>::value && has_fixed_size<bosdyn_msgs::msg::OneOfParam>::value && has_fixed_size<bosdyn_msgs::msg::RegionOfInterestParam>::value && has_fixed_size<bosdyn_msgs::msg::SerializedMessage>::value && has_fixed_size<bosdyn_msgs::msg::StringParam>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CustomParamOneOfValue>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::BoolParam>::value && has_bounded_size<bosdyn_msgs::msg::DoubleParam>::value && has_bounded_size<bosdyn_msgs::msg::Int64Param>::value && has_bounded_size<bosdyn_msgs::msg::ListParam>::value && has_bounded_size<bosdyn_msgs::msg::OneOfParam>::value && has_bounded_size<bosdyn_msgs::msg::RegionOfInterestParam>::value && has_bounded_size<bosdyn_msgs::msg::SerializedMessage>::value && has_bounded_size<bosdyn_msgs::msg::StringParam>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::CustomParamOneOfValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ONE_OF_VALUE__TRAITS_HPP_
