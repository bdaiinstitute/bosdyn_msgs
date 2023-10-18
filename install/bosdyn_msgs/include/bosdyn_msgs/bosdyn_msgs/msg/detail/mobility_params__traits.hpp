// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/MobilityParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/mobility_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vel_limit'
#include "bosdyn_msgs/msg/detail/se2_velocity_limit__traits.hpp"
// Member 'body_control'
#include "bosdyn_msgs/msg/detail/body_control_params__traits.hpp"
// Member 'locomotion_hint'
#include "bosdyn_msgs/msg/detail/locomotion_hint__traits.hpp"
// Member 'stairs_mode'
#include "bosdyn_msgs/msg/detail/mobility_params_stairs_mode__traits.hpp"
// Member 'obstacle_params'
#include "bosdyn_msgs/msg/detail/obstacle_params__traits.hpp"
// Member 'swing_height'
#include "bosdyn_msgs/msg/detail/swing_height__traits.hpp"
// Member 'terrain_params'
#include "bosdyn_msgs/msg/detail/terrain_params__traits.hpp"
// Member 'external_force_params'
#include "bosdyn_msgs/msg/detail/body_external_force_params__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MobilityParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: vel_limit
  {
    out << "vel_limit: ";
    to_flow_style_yaml(msg.vel_limit, out);
    out << ", ";
  }

  // member: vel_limit_is_set
  {
    out << "vel_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_limit_is_set, out);
    out << ", ";
  }

  // member: body_control
  {
    out << "body_control: ";
    to_flow_style_yaml(msg.body_control, out);
    out << ", ";
  }

  // member: body_control_is_set
  {
    out << "body_control_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.body_control_is_set, out);
    out << ", ";
  }

  // member: locomotion_hint
  {
    out << "locomotion_hint: ";
    to_flow_style_yaml(msg.locomotion_hint, out);
    out << ", ";
  }

  // member: stairs_mode
  {
    out << "stairs_mode: ";
    to_flow_style_yaml(msg.stairs_mode, out);
    out << ", ";
  }

  // member: allow_degraded_perception
  {
    out << "allow_degraded_perception: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_degraded_perception, out);
    out << ", ";
  }

  // member: obstacle_params
  {
    out << "obstacle_params: ";
    to_flow_style_yaml(msg.obstacle_params, out);
    out << ", ";
  }

  // member: obstacle_params_is_set
  {
    out << "obstacle_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_params_is_set, out);
    out << ", ";
  }

  // member: swing_height
  {
    out << "swing_height: ";
    to_flow_style_yaml(msg.swing_height, out);
    out << ", ";
  }

  // member: terrain_params
  {
    out << "terrain_params: ";
    to_flow_style_yaml(msg.terrain_params, out);
    out << ", ";
  }

  // member: terrain_params_is_set
  {
    out << "terrain_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_params_is_set, out);
    out << ", ";
  }

  // member: disallow_stair_tracker
  {
    out << "disallow_stair_tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.disallow_stair_tracker, out);
    out << ", ";
  }

  // member: disable_stair_error_auto_descent
  {
    out << "disable_stair_error_auto_descent: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_stair_error_auto_descent, out);
    out << ", ";
  }

  // member: external_force_params
  {
    out << "external_force_params: ";
    to_flow_style_yaml(msg.external_force_params, out);
    out << ", ";
  }

  // member: external_force_params_is_set
  {
    out << "external_force_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.external_force_params_is_set, out);
    out << ", ";
  }

  // member: disallow_non_stairs_pitch_limiting
  {
    out << "disallow_non_stairs_pitch_limiting: ";
    rosidl_generator_traits::value_to_yaml(msg.disallow_non_stairs_pitch_limiting, out);
    out << ", ";
  }

  // member: disable_nearmap_cliff_avoidance
  {
    out << "disable_nearmap_cliff_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_nearmap_cliff_avoidance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MobilityParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_limit:\n";
    to_block_style_yaml(msg.vel_limit, out, indentation + 2);
  }

  // member: vel_limit_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_limit_is_set, out);
    out << "\n";
  }

  // member: body_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_control:\n";
    to_block_style_yaml(msg.body_control, out, indentation + 2);
  }

  // member: body_control_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_control_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.body_control_is_set, out);
    out << "\n";
  }

  // member: locomotion_hint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locomotion_hint:\n";
    to_block_style_yaml(msg.locomotion_hint, out, indentation + 2);
  }

  // member: stairs_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stairs_mode:\n";
    to_block_style_yaml(msg.stairs_mode, out, indentation + 2);
  }

  // member: allow_degraded_perception
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_degraded_perception: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_degraded_perception, out);
    out << "\n";
  }

  // member: obstacle_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_params:\n";
    to_block_style_yaml(msg.obstacle_params, out, indentation + 2);
  }

  // member: obstacle_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_params_is_set, out);
    out << "\n";
  }

  // member: swing_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swing_height:\n";
    to_block_style_yaml(msg.swing_height, out, indentation + 2);
  }

  // member: terrain_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_params:\n";
    to_block_style_yaml(msg.terrain_params, out, indentation + 2);
  }

  // member: terrain_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_params_is_set, out);
    out << "\n";
  }

  // member: disallow_stair_tracker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disallow_stair_tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.disallow_stair_tracker, out);
    out << "\n";
  }

  // member: disable_stair_error_auto_descent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_stair_error_auto_descent: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_stair_error_auto_descent, out);
    out << "\n";
  }

  // member: external_force_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_force_params:\n";
    to_block_style_yaml(msg.external_force_params, out, indentation + 2);
  }

  // member: external_force_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_force_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.external_force_params_is_set, out);
    out << "\n";
  }

  // member: disallow_non_stairs_pitch_limiting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disallow_non_stairs_pitch_limiting: ";
    rosidl_generator_traits::value_to_yaml(msg.disallow_non_stairs_pitch_limiting, out);
    out << "\n";
  }

  // member: disable_nearmap_cliff_avoidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_nearmap_cliff_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_nearmap_cliff_avoidance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MobilityParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::MobilityParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::MobilityParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::MobilityParams>()
{
  return "bosdyn_msgs::msg::MobilityParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::MobilityParams>()
{
  return "bosdyn_msgs/msg/MobilityParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::MobilityParams>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::BodyControlParams>::value && has_fixed_size<bosdyn_msgs::msg::BodyExternalForceParams>::value && has_fixed_size<bosdyn_msgs::msg::LocomotionHint>::value && has_fixed_size<bosdyn_msgs::msg::MobilityParamsStairsMode>::value && has_fixed_size<bosdyn_msgs::msg::ObstacleParams>::value && has_fixed_size<bosdyn_msgs::msg::SE2VelocityLimit>::value && has_fixed_size<bosdyn_msgs::msg::SwingHeight>::value && has_fixed_size<bosdyn_msgs::msg::TerrainParams>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::MobilityParams>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::BodyControlParams>::value && has_bounded_size<bosdyn_msgs::msg::BodyExternalForceParams>::value && has_bounded_size<bosdyn_msgs::msg::LocomotionHint>::value && has_bounded_size<bosdyn_msgs::msg::MobilityParamsStairsMode>::value && has_bounded_size<bosdyn_msgs::msg::ObstacleParams>::value && has_bounded_size<bosdyn_msgs::msg::SE2VelocityLimit>::value && has_bounded_size<bosdyn_msgs::msg::SwingHeight>::value && has_bounded_size<bosdyn_msgs::msg::TerrainParams>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::MobilityParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS__TRAITS_HPP_
