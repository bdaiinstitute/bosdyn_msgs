// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AnchorHintUncertaintyOneOfUncertainty.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY_ONE_OF_UNCERTAINTY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY_ONE_OF_UNCERTAINTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty_one_of_uncertainty__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'se3_covariance'
#include "bosdyn_msgs/msg/detail/se3_covariance__traits.hpp"
// Member 'confidence_bounds'
#include "bosdyn_msgs/msg/detail/pose_bounds__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AnchorHintUncertaintyOneOfUncertainty & msg,
  std::ostream & out)
{
  out << "{";
  // member: se3_covariance
  {
    out << "se3_covariance: ";
    to_flow_style_yaml(msg.se3_covariance, out);
    out << ", ";
  }

  // member: confidence_bounds
  {
    out << "confidence_bounds: ";
    to_flow_style_yaml(msg.confidence_bounds, out);
    out << ", ";
  }

  // member: uncertainty_choice
  {
    out << "uncertainty_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AnchorHintUncertaintyOneOfUncertainty & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: se3_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "se3_covariance:\n";
    to_block_style_yaml(msg.se3_covariance, out, indentation + 2);
  }

  // member: confidence_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence_bounds:\n";
    to_block_style_yaml(msg.confidence_bounds, out, indentation + 2);
  }

  // member: uncertainty_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncertainty_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AnchorHintUncertaintyOneOfUncertainty & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty>()
{
  return "bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty";
}

template<>
inline const char * name<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty>()
{
  return "bosdyn_msgs/msg/AnchorHintUncertaintyOneOfUncertainty";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::PoseBounds>::value && has_fixed_size<bosdyn_msgs::msg::SE3Covariance>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::PoseBounds>::value && has_bounded_size<bosdyn_msgs::msg::SE3Covariance>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY_ONE_OF_UNCERTAINTY__TRAITS_HPP_
