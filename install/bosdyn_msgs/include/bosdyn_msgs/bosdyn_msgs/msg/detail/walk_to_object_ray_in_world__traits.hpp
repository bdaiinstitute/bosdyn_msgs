// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/WalkToObjectRayInWorld.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_RAY_IN_WORLD__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_RAY_IN_WORLD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/walk_to_object_ray_in_world__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ray_start_rt_frame'
// Member 'ray_end_rt_frame'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WalkToObjectRayInWorld & msg,
  std::ostream & out)
{
  out << "{";
  // member: ray_start_rt_frame
  {
    out << "ray_start_rt_frame: ";
    to_flow_style_yaml(msg.ray_start_rt_frame, out);
    out << ", ";
  }

  // member: ray_start_rt_frame_is_set
  {
    out << "ray_start_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_start_rt_frame_is_set, out);
    out << ", ";
  }

  // member: ray_end_rt_frame
  {
    out << "ray_end_rt_frame: ";
    to_flow_style_yaml(msg.ray_end_rt_frame, out);
    out << ", ";
  }

  // member: ray_end_rt_frame_is_set
  {
    out << "ray_end_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_end_rt_frame_is_set, out);
    out << ", ";
  }

  // member: frame_name
  {
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
    out << ", ";
  }

  // member: offset_distance
  {
    out << "offset_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_distance, out);
    out << ", ";
  }

  // member: offset_distance_is_set
  {
    out << "offset_distance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_distance_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WalkToObjectRayInWorld & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ray_start_rt_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_start_rt_frame:\n";
    to_block_style_yaml(msg.ray_start_rt_frame, out, indentation + 2);
  }

  // member: ray_start_rt_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_start_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_start_rt_frame_is_set, out);
    out << "\n";
  }

  // member: ray_end_rt_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_end_rt_frame:\n";
    to_block_style_yaml(msg.ray_end_rt_frame, out, indentation + 2);
  }

  // member: ray_end_rt_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_end_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_end_rt_frame_is_set, out);
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

  // member: offset_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_distance, out);
    out << "\n";
  }

  // member: offset_distance_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_distance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_distance_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WalkToObjectRayInWorld & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::WalkToObjectRayInWorld & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::WalkToObjectRayInWorld & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::WalkToObjectRayInWorld>()
{
  return "bosdyn_msgs::msg::WalkToObjectRayInWorld";
}

template<>
inline const char * name<bosdyn_msgs::msg::WalkToObjectRayInWorld>()
{
  return "bosdyn_msgs/msg/WalkToObjectRayInWorld";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::WalkToObjectRayInWorld>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::WalkToObjectRayInWorld>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::WalkToObjectRayInWorld>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_RAY_IN_WORLD__TRAITS_HPP_
