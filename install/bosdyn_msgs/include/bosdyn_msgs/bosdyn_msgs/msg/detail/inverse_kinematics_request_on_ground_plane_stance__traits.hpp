// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOnGroundPlaneStance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ON_GROUND_PLANE_STANCE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ON_GROUND_PLANE_STANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_on_ground_plane_stance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'scene_tform_ground'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InverseKinematicsRequestOnGroundPlaneStance & msg,
  std::ostream & out)
{
  out << "{";
  // member: scene_tform_ground
  {
    out << "scene_tform_ground: ";
    to_flow_style_yaml(msg.scene_tform_ground, out);
    out << ", ";
  }

  // member: scene_tform_ground_is_set
  {
    out << "scene_tform_ground_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_tform_ground_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematicsRequestOnGroundPlaneStance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scene_tform_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_tform_ground:\n";
    to_block_style_yaml(msg.scene_tform_ground, out, indentation + 2);
  }

  // member: scene_tform_ground_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_tform_ground_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_tform_ground_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematicsRequestOnGroundPlaneStance & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance>()
{
  return "bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance";
}

template<>
inline const char * name<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance>()
{
  return "bosdyn_msgs/msg/InverseKinematicsRequestOnGroundPlaneStance";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ON_GROUND_PLANE_STANCE__TRAITS_HPP_
