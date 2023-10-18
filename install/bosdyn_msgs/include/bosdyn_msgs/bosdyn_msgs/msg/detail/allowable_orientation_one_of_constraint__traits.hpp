// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AllowableOrientationOneOfConstraint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION_ONE_OF_CONSTRAINT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION_ONE_OF_CONSTRAINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/allowable_orientation_one_of_constraint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rotation_with_tolerance'
#include "bosdyn_msgs/msg/detail/rotation_with_tolerance__traits.hpp"
// Member 'vector_alignment_with_tolerance'
#include "bosdyn_msgs/msg/detail/vector_alignment_with_tolerance__traits.hpp"
// Member 'squeeze_grasp'
#include "bosdyn_msgs/msg/detail/squeeze_grasp__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllowableOrientationOneOfConstraint & msg,
  std::ostream & out)
{
  out << "{";
  // member: rotation_with_tolerance
  {
    out << "rotation_with_tolerance: ";
    to_flow_style_yaml(msg.rotation_with_tolerance, out);
    out << ", ";
  }

  // member: vector_alignment_with_tolerance
  {
    out << "vector_alignment_with_tolerance: ";
    to_flow_style_yaml(msg.vector_alignment_with_tolerance, out);
    out << ", ";
  }

  // member: squeeze_grasp
  {
    out << "squeeze_grasp: ";
    to_flow_style_yaml(msg.squeeze_grasp, out);
    out << ", ";
  }

  // member: constraint_choice
  {
    out << "constraint_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.constraint_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AllowableOrientationOneOfConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rotation_with_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_with_tolerance:\n";
    to_block_style_yaml(msg.rotation_with_tolerance, out, indentation + 2);
  }

  // member: vector_alignment_with_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vector_alignment_with_tolerance:\n";
    to_block_style_yaml(msg.vector_alignment_with_tolerance, out, indentation + 2);
  }

  // member: squeeze_grasp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "squeeze_grasp:\n";
    to_block_style_yaml(msg.squeeze_grasp, out, indentation + 2);
  }

  // member: constraint_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "constraint_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.constraint_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AllowableOrientationOneOfConstraint & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AllowableOrientationOneOfConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AllowableOrientationOneOfConstraint & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint>()
{
  return "bosdyn_msgs::msg::AllowableOrientationOneOfConstraint";
}

template<>
inline const char * name<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint>()
{
  return "bosdyn_msgs/msg/AllowableOrientationOneOfConstraint";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::RotationWithTolerance>::value && has_fixed_size<bosdyn_msgs::msg::SqueezeGrasp>::value && has_fixed_size<bosdyn_msgs::msg::VectorAlignmentWithTolerance>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::RotationWithTolerance>::value && has_bounded_size<bosdyn_msgs::msg::SqueezeGrasp>::value && has_bounded_size<bosdyn_msgs::msg::VectorAlignmentWithTolerance>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION_ONE_OF_CONSTRAINT__TRAITS_HPP_
