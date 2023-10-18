// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Dock.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/dock__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_prep_pose'
#include "bosdyn_msgs/msg/detail/target__traits.hpp"
// Member 'prompt_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Dock & msg,
  std::ostream & out)
{
  out << "{";
  // member: dock_id
  {
    out << "dock_id: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_id, out);
    out << ", ";
  }

  // member: docked_waypoint_id
  {
    out << "docked_waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.docked_waypoint_id, out);
    out << ", ";
  }

  // member: target_prep_pose
  {
    out << "target_prep_pose: ";
    to_flow_style_yaml(msg.target_prep_pose, out);
    out << ", ";
  }

  // member: target_prep_pose_is_set
  {
    out << "target_prep_pose_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_prep_pose_is_set, out);
    out << ", ";
  }

  // member: prompt_duration
  {
    out << "prompt_duration: ";
    to_flow_style_yaml(msg.prompt_duration, out);
    out << ", ";
  }

  // member: prompt_duration_is_set
  {
    out << "prompt_duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt_duration_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dock & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dock_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_id: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_id, out);
    out << "\n";
  }

  // member: docked_waypoint_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docked_waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.docked_waypoint_id, out);
    out << "\n";
  }

  // member: target_prep_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_prep_pose:\n";
    to_block_style_yaml(msg.target_prep_pose, out, indentation + 2);
  }

  // member: target_prep_pose_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_prep_pose_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_prep_pose_is_set, out);
    out << "\n";
  }

  // member: prompt_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt_duration:\n";
    to_block_style_yaml(msg.prompt_duration, out, indentation + 2);
  }

  // member: prompt_duration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt_duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt_duration_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dock & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Dock & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Dock & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Dock>()
{
  return "bosdyn_msgs::msg::Dock";
}

template<>
inline const char * name<bosdyn_msgs::msg::Dock>()
{
  return "bosdyn_msgs/msg/Dock";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Dock>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Dock>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Dock>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK__TRAITS_HPP_
