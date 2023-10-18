// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ListParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_PARAM_SPEC__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_PARAM_SPEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/list_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'element_spec'
#include "bosdyn_msgs/msg/detail/serialized_message__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ListParamSpec & msg,
  std::ostream & out)
{
  out << "{";
  // member: element_spec
  {
    out << "element_spec: ";
    to_flow_style_yaml(msg.element_spec, out);
    out << ", ";
  }

  // member: element_spec_is_set
  {
    out << "element_spec_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.element_spec_is_set, out);
    out << ", ";
  }

  // member: min_number_of_values
  {
    out << "min_number_of_values: ";
    rosidl_generator_traits::value_to_yaml(msg.min_number_of_values, out);
    out << ", ";
  }

  // member: min_number_of_values_is_set
  {
    out << "min_number_of_values_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.min_number_of_values_is_set, out);
    out << ", ";
  }

  // member: max_number_of_values
  {
    out << "max_number_of_values: ";
    rosidl_generator_traits::value_to_yaml(msg.max_number_of_values, out);
    out << ", ";
  }

  // member: max_number_of_values_is_set
  {
    out << "max_number_of_values_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_number_of_values_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListParamSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: element_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "element_spec:\n";
    to_block_style_yaml(msg.element_spec, out, indentation + 2);
  }

  // member: element_spec_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "element_spec_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.element_spec_is_set, out);
    out << "\n";
  }

  // member: min_number_of_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_number_of_values: ";
    rosidl_generator_traits::value_to_yaml(msg.min_number_of_values, out);
    out << "\n";
  }

  // member: min_number_of_values_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_number_of_values_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.min_number_of_values_is_set, out);
    out << "\n";
  }

  // member: max_number_of_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_number_of_values: ";
    rosidl_generator_traits::value_to_yaml(msg.max_number_of_values, out);
    out << "\n";
  }

  // member: max_number_of_values_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_number_of_values_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_number_of_values_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListParamSpec & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ListParamSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ListParamSpec & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ListParamSpec>()
{
  return "bosdyn_msgs::msg::ListParamSpec";
}

template<>
inline const char * name<bosdyn_msgs::msg::ListParamSpec>()
{
  return "bosdyn_msgs/msg/ListParamSpec";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ListParamSpec>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::SerializedMessage>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ListParamSpec>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::SerializedMessage>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ListParamSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_PARAM_SPEC__TRAITS_HPP_
