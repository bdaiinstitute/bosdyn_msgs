// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AnchorHintUncertainty.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'uncertainty'
#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty_one_of_uncertainty__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AnchorHintUncertainty & msg,
  std::ostream & out)
{
  out << "{";
  // member: uncertainty
  {
    out << "uncertainty: ";
    to_flow_style_yaml(msg.uncertainty, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AnchorHintUncertainty & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uncertainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncertainty:\n";
    to_block_style_yaml(msg.uncertainty, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AnchorHintUncertainty & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AnchorHintUncertainty & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AnchorHintUncertainty & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AnchorHintUncertainty>()
{
  return "bosdyn_msgs::msg::AnchorHintUncertainty";
}

template<>
inline const char * name<bosdyn_msgs::msg::AnchorHintUncertainty>()
{
  return "bosdyn_msgs/msg/AnchorHintUncertainty";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AnchorHintUncertainty>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AnchorHintUncertainty>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::AnchorHintUncertainty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY__TRAITS_HPP_
