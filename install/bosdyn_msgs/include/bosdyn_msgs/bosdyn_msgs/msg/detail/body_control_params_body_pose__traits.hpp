// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BodyControlParamsBodyPose.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_POSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/body_control_params_body_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'base_offset_rt_root'
#include "bosdyn_msgs/msg/detail/se3_trajectory__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BodyControlParamsBodyPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: root_frame_name
  {
    out << "root_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_frame_name, out);
    out << ", ";
  }

  // member: base_offset_rt_root
  {
    out << "base_offset_rt_root: ";
    to_flow_style_yaml(msg.base_offset_rt_root, out);
    out << ", ";
  }

  // member: base_offset_rt_root_is_set
  {
    out << "base_offset_rt_root_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.base_offset_rt_root_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BodyControlParamsBodyPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: root_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_frame_name, out);
    out << "\n";
  }

  // member: base_offset_rt_root
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_offset_rt_root:\n";
    to_block_style_yaml(msg.base_offset_rt_root, out, indentation + 2);
  }

  // member: base_offset_rt_root_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_offset_rt_root_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.base_offset_rt_root_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BodyControlParamsBodyPose & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BodyControlParamsBodyPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BodyControlParamsBodyPose & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BodyControlParamsBodyPose>()
{
  return "bosdyn_msgs::msg::BodyControlParamsBodyPose";
}

template<>
inline const char * name<bosdyn_msgs::msg::BodyControlParamsBodyPose>()
{
  return "bosdyn_msgs/msg/BodyControlParamsBodyPose";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BodyControlParamsBodyPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BodyControlParamsBodyPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::BodyControlParamsBodyPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_POSE__TRAITS_HPP_
