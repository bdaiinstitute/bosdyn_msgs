// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoint_tform_ko'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'annotations'
#include "bosdyn_msgs/msg/detail/waypoint_annotations__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Waypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: snapshot_id
  {
    out << "snapshot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.snapshot_id, out);
    out << ", ";
  }

  // member: waypoint_tform_ko
  {
    out << "waypoint_tform_ko: ";
    to_flow_style_yaml(msg.waypoint_tform_ko, out);
    out << ", ";
  }

  // member: waypoint_tform_ko_is_set
  {
    out << "waypoint_tform_ko_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_tform_ko_is_set, out);
    out << ", ";
  }

  // member: annotations
  {
    out << "annotations: ";
    to_flow_style_yaml(msg.annotations, out);
    out << ", ";
  }

  // member: annotations_is_set
  {
    out << "annotations_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.annotations_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: snapshot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snapshot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.snapshot_id, out);
    out << "\n";
  }

  // member: waypoint_tform_ko
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_tform_ko:\n";
    to_block_style_yaml(msg.waypoint_tform_ko, out, indentation + 2);
  }

  // member: waypoint_tform_ko_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_tform_ko_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_tform_ko_is_set, out);
    out << "\n";
  }

  // member: annotations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "annotations:\n";
    to_block_style_yaml(msg.annotations, out, indentation + 2);
  }

  // member: annotations_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "annotations_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.annotations_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Waypoint & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Waypoint & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Waypoint>()
{
  return "bosdyn_msgs::msg::Waypoint";
}

template<>
inline const char * name<bosdyn_msgs::msg::Waypoint>()
{
  return "bosdyn_msgs/msg/Waypoint";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Waypoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Waypoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
