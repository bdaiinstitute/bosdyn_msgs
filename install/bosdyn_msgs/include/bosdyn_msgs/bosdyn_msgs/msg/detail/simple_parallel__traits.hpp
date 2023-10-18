// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SimpleParallel.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIMPLE_PARALLEL__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SIMPLE_PARALLEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/simple_parallel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'primary'
// Member 'secondary'
#include "bosdyn_msgs/msg/detail/node__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SimpleParallel & msg,
  std::ostream & out)
{
  out << "{";
  // member: primary
  {
    out << "primary: ";
    to_flow_style_yaml(msg.primary, out);
    out << ", ";
  }

  // member: primary_is_set
  {
    out << "primary_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.primary_is_set, out);
    out << ", ";
  }

  // member: secondary
  {
    out << "secondary: ";
    to_flow_style_yaml(msg.secondary, out);
    out << ", ";
  }

  // member: secondary_is_set
  {
    out << "secondary_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.secondary_is_set, out);
    out << ", ";
  }

  // member: run_secondary_node_once
  {
    out << "run_secondary_node_once: ";
    rosidl_generator_traits::value_to_yaml(msg.run_secondary_node_once, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleParallel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: primary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primary:\n";
    to_block_style_yaml(msg.primary, out, indentation + 2);
  }

  // member: primary_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primary_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.primary_is_set, out);
    out << "\n";
  }

  // member: secondary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secondary:\n";
    to_block_style_yaml(msg.secondary, out, indentation + 2);
  }

  // member: secondary_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secondary_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.secondary_is_set, out);
    out << "\n";
  }

  // member: run_secondary_node_once
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_secondary_node_once: ";
    rosidl_generator_traits::value_to_yaml(msg.run_secondary_node_once, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleParallel & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SimpleParallel & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SimpleParallel & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SimpleParallel>()
{
  return "bosdyn_msgs::msg::SimpleParallel";
}

template<>
inline const char * name<bosdyn_msgs::msg::SimpleParallel>()
{
  return "bosdyn_msgs/msg/SimpleParallel";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SimpleParallel>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Node>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SimpleParallel>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Node>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::SimpleParallel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIMPLE_PARALLEL__TRAITS_HPP_
