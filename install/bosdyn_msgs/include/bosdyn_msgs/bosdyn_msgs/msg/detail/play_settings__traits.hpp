// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PlaySettings.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAY_SETTINGS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAY_SETTINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/play_settings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'velocity_limit'
#include "bosdyn_msgs/msg/detail/se2_velocity_limit__traits.hpp"
// Member 'path_following_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__traits.hpp"
// Member 'ground_clutter_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_ground_clutter_avoidance_mode__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlaySettings & msg,
  std::ostream & out)
{
  out << "{";
  // member: velocity_limit
  {
    out << "velocity_limit: ";
    to_flow_style_yaml(msg.velocity_limit, out);
    out << ", ";
  }

  // member: velocity_limit_is_set
  {
    out << "velocity_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_limit_is_set, out);
    out << ", ";
  }

  // member: disable_directed_exploration
  {
    out << "disable_directed_exploration: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_directed_exploration, out);
    out << ", ";
  }

  // member: disable_alternate_route_finding
  {
    out << "disable_alternate_route_finding: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_alternate_route_finding, out);
    out << ", ";
  }

  // member: path_following_mode
  {
    out << "path_following_mode: ";
    to_flow_style_yaml(msg.path_following_mode, out);
    out << ", ";
  }

  // member: ground_clutter_mode
  {
    out << "ground_clutter_mode: ";
    to_flow_style_yaml(msg.ground_clutter_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaySettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: velocity_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_limit:\n";
    to_block_style_yaml(msg.velocity_limit, out, indentation + 2);
  }

  // member: velocity_limit_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_limit_is_set, out);
    out << "\n";
  }

  // member: disable_directed_exploration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_directed_exploration: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_directed_exploration, out);
    out << "\n";
  }

  // member: disable_alternate_route_finding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_alternate_route_finding: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_alternate_route_finding, out);
    out << "\n";
  }

  // member: path_following_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_following_mode:\n";
    to_block_style_yaml(msg.path_following_mode, out, indentation + 2);
  }

  // member: ground_clutter_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_clutter_mode:\n";
    to_block_style_yaml(msg.ground_clutter_mode, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaySettings & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PlaySettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PlaySettings & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PlaySettings>()
{
  return "bosdyn_msgs::msg::PlaySettings";
}

template<>
inline const char * name<bosdyn_msgs::msg::PlaySettings>()
{
  return "bosdyn_msgs/msg/PlaySettings";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PlaySettings>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::EdgeAnnotationsGroundClutterAvoidanceMode>::value && has_fixed_size<bosdyn_msgs::msg::EdgeAnnotationsPathFollowingMode>::value && has_fixed_size<bosdyn_msgs::msg::SE2VelocityLimit>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PlaySettings>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::EdgeAnnotationsGroundClutterAvoidanceMode>::value && has_bounded_size<bosdyn_msgs::msg::EdgeAnnotationsPathFollowingMode>::value && has_bounded_size<bosdyn_msgs::msg::SE2VelocityLimit>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::PlaySettings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAY_SETTINGS__TRAITS_HPP_
