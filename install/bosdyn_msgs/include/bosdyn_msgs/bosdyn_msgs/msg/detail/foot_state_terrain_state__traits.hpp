// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/FootStateTerrainState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE_TERRAIN_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE_TERRAIN_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/foot_state_terrain_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'foot_slip_distance_rt_frame'
// Member 'foot_slip_velocity_rt_frame'
// Member 'ground_contact_normal_rt_frame'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FootStateTerrainState & msg,
  std::ostream & out)
{
  out << "{";
  // member: ground_mu_est
  {
    out << "ground_mu_est: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_mu_est, out);
    out << ", ";
  }

  // member: frame_name
  {
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
    out << ", ";
  }

  // member: foot_slip_distance_rt_frame
  {
    out << "foot_slip_distance_rt_frame: ";
    to_flow_style_yaml(msg.foot_slip_distance_rt_frame, out);
    out << ", ";
  }

  // member: foot_slip_distance_rt_frame_is_set
  {
    out << "foot_slip_distance_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_slip_distance_rt_frame_is_set, out);
    out << ", ";
  }

  // member: foot_slip_velocity_rt_frame
  {
    out << "foot_slip_velocity_rt_frame: ";
    to_flow_style_yaml(msg.foot_slip_velocity_rt_frame, out);
    out << ", ";
  }

  // member: foot_slip_velocity_rt_frame_is_set
  {
    out << "foot_slip_velocity_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_slip_velocity_rt_frame_is_set, out);
    out << ", ";
  }

  // member: ground_contact_normal_rt_frame
  {
    out << "ground_contact_normal_rt_frame: ";
    to_flow_style_yaml(msg.ground_contact_normal_rt_frame, out);
    out << ", ";
  }

  // member: ground_contact_normal_rt_frame_is_set
  {
    out << "ground_contact_normal_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_contact_normal_rt_frame_is_set, out);
    out << ", ";
  }

  // member: visual_surface_ground_penetration_mean
  {
    out << "visual_surface_ground_penetration_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.visual_surface_ground_penetration_mean, out);
    out << ", ";
  }

  // member: visual_surface_ground_penetration_std
  {
    out << "visual_surface_ground_penetration_std: ";
    rosidl_generator_traits::value_to_yaml(msg.visual_surface_ground_penetration_std, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FootStateTerrainState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ground_mu_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_mu_est: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_mu_est, out);
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

  // member: foot_slip_distance_rt_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_slip_distance_rt_frame:\n";
    to_block_style_yaml(msg.foot_slip_distance_rt_frame, out, indentation + 2);
  }

  // member: foot_slip_distance_rt_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_slip_distance_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_slip_distance_rt_frame_is_set, out);
    out << "\n";
  }

  // member: foot_slip_velocity_rt_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_slip_velocity_rt_frame:\n";
    to_block_style_yaml(msg.foot_slip_velocity_rt_frame, out, indentation + 2);
  }

  // member: foot_slip_velocity_rt_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_slip_velocity_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_slip_velocity_rt_frame_is_set, out);
    out << "\n";
  }

  // member: ground_contact_normal_rt_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_contact_normal_rt_frame:\n";
    to_block_style_yaml(msg.ground_contact_normal_rt_frame, out, indentation + 2);
  }

  // member: ground_contact_normal_rt_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_contact_normal_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_contact_normal_rt_frame_is_set, out);
    out << "\n";
  }

  // member: visual_surface_ground_penetration_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visual_surface_ground_penetration_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.visual_surface_ground_penetration_mean, out);
    out << "\n";
  }

  // member: visual_surface_ground_penetration_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visual_surface_ground_penetration_std: ";
    rosidl_generator_traits::value_to_yaml(msg.visual_surface_ground_penetration_std, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FootStateTerrainState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::FootStateTerrainState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::FootStateTerrainState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::FootStateTerrainState>()
{
  return "bosdyn_msgs::msg::FootStateTerrainState";
}

template<>
inline const char * name<bosdyn_msgs::msg::FootStateTerrainState>()
{
  return "bosdyn_msgs/msg/FootStateTerrainState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::FootStateTerrainState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::FootStateTerrainState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::FootStateTerrainState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE_TERRAIN_STATE__TRAITS_HPP_
