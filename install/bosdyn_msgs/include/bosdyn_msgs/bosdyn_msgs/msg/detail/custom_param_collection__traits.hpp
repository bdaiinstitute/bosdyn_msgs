// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CustomParamCollection.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/custom_param_collection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'specs'
#include "bosdyn_msgs/msg/detail/dict_param_spec__traits.hpp"
// Member 'values'
#include "bosdyn_msgs/msg/detail/dict_param__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomParamCollection & msg,
  std::ostream & out)
{
  out << "{";
  // member: specs
  {
    out << "specs: ";
    to_flow_style_yaml(msg.specs, out);
    out << ", ";
  }

  // member: specs_is_set
  {
    out << "specs_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.specs_is_set, out);
    out << ", ";
  }

  // member: values
  {
    out << "values: ";
    to_flow_style_yaml(msg.values, out);
    out << ", ";
  }

  // member: values_is_set
  {
    out << "values_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.values_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomParamCollection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: specs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "specs:\n";
    to_block_style_yaml(msg.specs, out, indentation + 2);
  }

  // member: specs_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "specs_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.specs_is_set, out);
    out << "\n";
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "values:\n";
    to_block_style_yaml(msg.values, out, indentation + 2);
  }

  // member: values_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "values_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.values_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomParamCollection & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CustomParamCollection & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CustomParamCollection & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CustomParamCollection>()
{
  return "bosdyn_msgs::msg::CustomParamCollection";
}

template<>
inline const char * name<bosdyn_msgs::msg::CustomParamCollection>()
{
  return "bosdyn_msgs/msg/CustomParamCollection";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CustomParamCollection>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DictParam>::value && has_fixed_size<bosdyn_msgs::msg::DictParamSpec>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CustomParamCollection>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DictParam>::value && has_bounded_size<bosdyn_msgs::msg::DictParamSpec>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::CustomParamCollection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__TRAITS_HPP_
