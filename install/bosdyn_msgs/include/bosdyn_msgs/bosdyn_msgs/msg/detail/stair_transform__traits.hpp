// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StairTransform.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIR_TRANSFORM__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIR_TRANSFORM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/stair_transform__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'frame_tform_stairs'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StairTransform & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_tform_stairs
  {
    out << "frame_tform_stairs: ";
    to_flow_style_yaml(msg.frame_tform_stairs, out);
    out << ", ";
  }

  // member: frame_tform_stairs_is_set
  {
    out << "frame_tform_stairs_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_tform_stairs_is_set, out);
    out << ", ";
  }

  // member: frame_name
  {
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StairTransform & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_tform_stairs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_tform_stairs:\n";
    to_block_style_yaml(msg.frame_tform_stairs, out, indentation + 2);
  }

  // member: frame_tform_stairs_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_tform_stairs_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_tform_stairs_is_set, out);
    out << "\n";
  }

  // member: frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StairTransform & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StairTransform & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StairTransform & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StairTransform>()
{
  return "bosdyn_msgs::msg::StairTransform";
}

template<>
inline const char * name<bosdyn_msgs::msg::StairTransform>()
{
  return "bosdyn_msgs/msg/StairTransform";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StairTransform>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StairTransform>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::StairTransform>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIR_TRANSFORM__TRAITS_HPP_
