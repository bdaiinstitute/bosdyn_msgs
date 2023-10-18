// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLoopClosureSettings.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOOP_CLOSURE_SETTINGS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOOP_CLOSURE_SETTINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/waypoint_annotations_loop_closure_settings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaypointAnnotationsLoopClosureSettings & msg,
  std::ostream & out)
{
  out << "{";
  // member: disable_loop_closure
  {
    out << "disable_loop_closure: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_loop_closure, out);
    out << ", ";
  }

  // member: disable_collision_check
  {
    out << "disable_collision_check: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_collision_check, out);
    out << ", ";
  }

  // member: max_edge_length
  {
    out << "max_edge_length: ";
    rosidl_generator_traits::value_to_yaml(msg.max_edge_length, out);
    out << ", ";
  }

  // member: max_odometry_path_length
  {
    out << "max_odometry_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.max_odometry_path_length, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointAnnotationsLoopClosureSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: disable_loop_closure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_loop_closure: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_loop_closure, out);
    out << "\n";
  }

  // member: disable_collision_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_collision_check: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_collision_check, out);
    out << "\n";
  }

  // member: max_edge_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_edge_length: ";
    rosidl_generator_traits::value_to_yaml(msg.max_edge_length, out);
    out << "\n";
  }

  // member: max_odometry_path_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_odometry_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.max_odometry_path_length, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointAnnotationsLoopClosureSettings & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings>()
{
  return "bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings";
}

template<>
inline const char * name<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings>()
{
  return "bosdyn_msgs/msg/WaypointAnnotationsLoopClosureSettings";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOOP_CLOSURE_SETTINGS__TRAITS_HPP_
