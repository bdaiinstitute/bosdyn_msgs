// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
#include "bosdyn_msgs/msg/detail/target_one_of_target__traits.hpp"
// Member 'relocalize'
#include "bosdyn_msgs/msg/detail/target_relocalize__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Target & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
    out << ", ";
  }

  // member: relocalize
  {
    out << "relocalize: ";
    to_flow_style_yaml(msg.relocalize, out);
    out << ", ";
  }

  // member: relocalize_is_set
  {
    out << "relocalize_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.relocalize_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Target & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }

  // member: relocalize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relocalize:\n";
    to_block_style_yaml(msg.relocalize, out, indentation + 2);
  }

  // member: relocalize_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relocalize_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.relocalize_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Target & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Target & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Target & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Target>()
{
  return "bosdyn_msgs::msg::Target";
}

template<>
inline const char * name<bosdyn_msgs::msg::Target>()
{
  return "bosdyn_msgs/msg/Target";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Target>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::TargetOneOfTarget>::value && has_fixed_size<bosdyn_msgs::msg::TargetRelocalize>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Target>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::TargetOneOfTarget>::value && has_bounded_size<bosdyn_msgs::msg::TargetRelocalize>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::Target>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_
