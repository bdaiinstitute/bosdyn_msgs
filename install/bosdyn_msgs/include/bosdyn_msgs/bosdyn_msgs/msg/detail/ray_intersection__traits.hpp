// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RayIntersection.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAY_INTERSECTION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAY_INTERSECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/ray_intersection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/ray_intersection_type__traits.hpp"
// Member 'hit_position_in_hit_frame'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RayIntersection & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: hit_position_in_hit_frame
  {
    out << "hit_position_in_hit_frame: ";
    to_flow_style_yaml(msg.hit_position_in_hit_frame, out);
    out << ", ";
  }

  // member: hit_position_in_hit_frame_is_set
  {
    out << "hit_position_in_hit_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.hit_position_in_hit_frame_is_set, out);
    out << ", ";
  }

  // member: distance_meters
  {
    out << "distance_meters: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_meters, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RayIntersection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: hit_position_in_hit_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hit_position_in_hit_frame:\n";
    to_block_style_yaml(msg.hit_position_in_hit_frame, out, indentation + 2);
  }

  // member: hit_position_in_hit_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hit_position_in_hit_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.hit_position_in_hit_frame_is_set, out);
    out << "\n";
  }

  // member: distance_meters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_meters: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_meters, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RayIntersection & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RayIntersection & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RayIntersection & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RayIntersection>()
{
  return "bosdyn_msgs::msg::RayIntersection";
}

template<>
inline const char * name<bosdyn_msgs::msg::RayIntersection>()
{
  return "bosdyn_msgs/msg/RayIntersection";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RayIntersection>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::RayIntersectionType>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RayIntersection>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::RayIntersectionType>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::RayIntersection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAY_INTERSECTION__TRAITS_HPP_
