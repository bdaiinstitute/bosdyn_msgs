// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestFixedStance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_fixed_stance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fl_rt_scene'
// Member 'fr_rt_scene'
// Member 'hl_rt_scene'
// Member 'hr_rt_scene'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InverseKinematicsRequestFixedStance & msg,
  std::ostream & out)
{
  out << "{";
  // member: fl_rt_scene
  {
    out << "fl_rt_scene: ";
    to_flow_style_yaml(msg.fl_rt_scene, out);
    out << ", ";
  }

  // member: fl_rt_scene_is_set
  {
    out << "fl_rt_scene_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_rt_scene_is_set, out);
    out << ", ";
  }

  // member: fr_rt_scene
  {
    out << "fr_rt_scene: ";
    to_flow_style_yaml(msg.fr_rt_scene, out);
    out << ", ";
  }

  // member: fr_rt_scene_is_set
  {
    out << "fr_rt_scene_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_rt_scene_is_set, out);
    out << ", ";
  }

  // member: hl_rt_scene
  {
    out << "hl_rt_scene: ";
    to_flow_style_yaml(msg.hl_rt_scene, out);
    out << ", ";
  }

  // member: hl_rt_scene_is_set
  {
    out << "hl_rt_scene_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_rt_scene_is_set, out);
    out << ", ";
  }

  // member: hr_rt_scene
  {
    out << "hr_rt_scene: ";
    to_flow_style_yaml(msg.hr_rt_scene, out);
    out << ", ";
  }

  // member: hr_rt_scene_is_set
  {
    out << "hr_rt_scene_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.hr_rt_scene_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematicsRequestFixedStance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fl_rt_scene
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_rt_scene:\n";
    to_block_style_yaml(msg.fl_rt_scene, out, indentation + 2);
  }

  // member: fl_rt_scene_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_rt_scene_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_rt_scene_is_set, out);
    out << "\n";
  }

  // member: fr_rt_scene
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_rt_scene:\n";
    to_block_style_yaml(msg.fr_rt_scene, out, indentation + 2);
  }

  // member: fr_rt_scene_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_rt_scene_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_rt_scene_is_set, out);
    out << "\n";
  }

  // member: hl_rt_scene
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_rt_scene:\n";
    to_block_style_yaml(msg.hl_rt_scene, out, indentation + 2);
  }

  // member: hl_rt_scene_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_rt_scene_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_rt_scene_is_set, out);
    out << "\n";
  }

  // member: hr_rt_scene
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hr_rt_scene:\n";
    to_block_style_yaml(msg.hr_rt_scene, out, indentation + 2);
  }

  // member: hr_rt_scene_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hr_rt_scene_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.hr_rt_scene_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematicsRequestFixedStance & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::InverseKinematicsRequestFixedStance & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::InverseKinematicsRequestFixedStance & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance>()
{
  return "bosdyn_msgs::msg::InverseKinematicsRequestFixedStance";
}

template<>
inline const char * name<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance>()
{
  return "bosdyn_msgs/msg/InverseKinematicsRequestFixedStance";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__TRAITS_HPP_
