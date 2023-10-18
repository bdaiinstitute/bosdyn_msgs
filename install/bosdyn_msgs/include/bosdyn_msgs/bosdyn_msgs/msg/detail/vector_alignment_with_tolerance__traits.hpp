// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/VectorAlignmentWithTolerance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VECTOR_ALIGNMENT_WITH_TOLERANCE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VECTOR_ALIGNMENT_WITH_TOLERANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/vector_alignment_with_tolerance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'axis_on_gripper_ewrt_gripper'
// Member 'axis_to_align_with_ewrt_frame'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VectorAlignmentWithTolerance & msg,
  std::ostream & out)
{
  out << "{";
  // member: axis_on_gripper_ewrt_gripper
  {
    out << "axis_on_gripper_ewrt_gripper: ";
    to_flow_style_yaml(msg.axis_on_gripper_ewrt_gripper, out);
    out << ", ";
  }

  // member: axis_on_gripper_ewrt_gripper_is_set
  {
    out << "axis_on_gripper_ewrt_gripper_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_on_gripper_ewrt_gripper_is_set, out);
    out << ", ";
  }

  // member: axis_to_align_with_ewrt_frame
  {
    out << "axis_to_align_with_ewrt_frame: ";
    to_flow_style_yaml(msg.axis_to_align_with_ewrt_frame, out);
    out << ", ";
  }

  // member: axis_to_align_with_ewrt_frame_is_set
  {
    out << "axis_to_align_with_ewrt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_to_align_with_ewrt_frame_is_set, out);
    out << ", ";
  }

  // member: threshold_radians
  {
    out << "threshold_radians: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold_radians, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VectorAlignmentWithTolerance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: axis_on_gripper_ewrt_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_on_gripper_ewrt_gripper:\n";
    to_block_style_yaml(msg.axis_on_gripper_ewrt_gripper, out, indentation + 2);
  }

  // member: axis_on_gripper_ewrt_gripper_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_on_gripper_ewrt_gripper_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_on_gripper_ewrt_gripper_is_set, out);
    out << "\n";
  }

  // member: axis_to_align_with_ewrt_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_to_align_with_ewrt_frame:\n";
    to_block_style_yaml(msg.axis_to_align_with_ewrt_frame, out, indentation + 2);
  }

  // member: axis_to_align_with_ewrt_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_to_align_with_ewrt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_to_align_with_ewrt_frame_is_set, out);
    out << "\n";
  }

  // member: threshold_radians
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threshold_radians: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold_radians, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VectorAlignmentWithTolerance & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::VectorAlignmentWithTolerance & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::VectorAlignmentWithTolerance & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::VectorAlignmentWithTolerance>()
{
  return "bosdyn_msgs::msg::VectorAlignmentWithTolerance";
}

template<>
inline const char * name<bosdyn_msgs::msg::VectorAlignmentWithTolerance>()
{
  return "bosdyn_msgs/msg/VectorAlignmentWithTolerance";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::VectorAlignmentWithTolerance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::VectorAlignmentWithTolerance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::VectorAlignmentWithTolerance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__VECTOR_ALIGNMENT_WITH_TOLERANCE__TRAITS_HPP_
