// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CameraOneOfIntrinsics.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_ONE_OF_INTRINSICS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_ONE_OF_INTRINSICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/camera_one_of_intrinsics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pinhole'
#include "bosdyn_msgs/msg/detail/camera_pinhole_intrinsics__traits.hpp"
// Member 'spherical'
#include "bosdyn_msgs/msg/detail/camera_spherical_limits__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraOneOfIntrinsics & msg,
  std::ostream & out)
{
  out << "{";
  // member: pinhole
  {
    out << "pinhole: ";
    to_flow_style_yaml(msg.pinhole, out);
    out << ", ";
  }

  // member: spherical
  {
    out << "spherical: ";
    to_flow_style_yaml(msg.spherical, out);
    out << ", ";
  }

  // member: intrinsics_choice
  {
    out << "intrinsics_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.intrinsics_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraOneOfIntrinsics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pinhole
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pinhole:\n";
    to_block_style_yaml(msg.pinhole, out, indentation + 2);
  }

  // member: spherical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spherical:\n";
    to_block_style_yaml(msg.spherical, out, indentation + 2);
  }

  // member: intrinsics_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intrinsics_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.intrinsics_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraOneOfIntrinsics & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CameraOneOfIntrinsics & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CameraOneOfIntrinsics & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CameraOneOfIntrinsics>()
{
  return "bosdyn_msgs::msg::CameraOneOfIntrinsics";
}

template<>
inline const char * name<bosdyn_msgs::msg::CameraOneOfIntrinsics>()
{
  return "bosdyn_msgs/msg/CameraOneOfIntrinsics";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CameraOneOfIntrinsics>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::CameraPinholeIntrinsics>::value && has_fixed_size<bosdyn_msgs::msg::CameraSphericalLimits>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CameraOneOfIntrinsics>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::CameraPinholeIntrinsics>::value && has_bounded_size<bosdyn_msgs::msg::CameraSphericalLimits>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::CameraOneOfIntrinsics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_ONE_OF_INTRINSICS__TRAITS_HPP_
