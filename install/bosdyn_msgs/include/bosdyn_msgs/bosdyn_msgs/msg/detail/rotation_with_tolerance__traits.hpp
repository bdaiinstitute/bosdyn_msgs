// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RotationWithTolerance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/rotation_with_tolerance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rotation_ewrt_frame'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RotationWithTolerance & msg,
  std::ostream & out)
{
  out << "{";
  // member: rotation_ewrt_frame
  {
    out << "rotation_ewrt_frame: ";
    to_flow_style_yaml(msg.rotation_ewrt_frame, out);
    out << ", ";
  }

  // member: rotation_ewrt_frame_is_set
  {
    out << "rotation_ewrt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_ewrt_frame_is_set, out);
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
  const RotationWithTolerance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rotation_ewrt_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_ewrt_frame:\n";
    to_block_style_yaml(msg.rotation_ewrt_frame, out, indentation + 2);
  }

  // member: rotation_ewrt_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_ewrt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_ewrt_frame_is_set, out);
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

inline std::string to_yaml(const RotationWithTolerance & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RotationWithTolerance & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RotationWithTolerance & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RotationWithTolerance>()
{
  return "bosdyn_msgs::msg::RotationWithTolerance";
}

template<>
inline const char * name<bosdyn_msgs::msg::RotationWithTolerance>()
{
  return "bosdyn_msgs/msg/RotationWithTolerance";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RotationWithTolerance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RotationWithTolerance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::RotationWithTolerance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__TRAITS_HPP_
