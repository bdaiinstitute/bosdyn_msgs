// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/FootState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/foot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'foot_position_rt_body'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'contact'
#include "bosdyn_msgs/msg/detail/foot_state_contact__traits.hpp"
// Member 'terrain'
#include "bosdyn_msgs/msg/detail/foot_state_terrain_state__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FootState & msg,
  std::ostream & out)
{
  out << "{";
  // member: foot_position_rt_body
  {
    out << "foot_position_rt_body: ";
    to_flow_style_yaml(msg.foot_position_rt_body, out);
    out << ", ";
  }

  // member: foot_position_rt_body_is_set
  {
    out << "foot_position_rt_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_rt_body_is_set, out);
    out << ", ";
  }

  // member: contact
  {
    out << "contact: ";
    to_flow_style_yaml(msg.contact, out);
    out << ", ";
  }

  // member: terrain
  {
    out << "terrain: ";
    to_flow_style_yaml(msg.terrain, out);
    out << ", ";
  }

  // member: terrain_is_set
  {
    out << "terrain_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FootState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: foot_position_rt_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_rt_body:\n";
    to_block_style_yaml(msg.foot_position_rt_body, out, indentation + 2);
  }

  // member: foot_position_rt_body_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_rt_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_rt_body_is_set, out);
    out << "\n";
  }

  // member: contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact:\n";
    to_block_style_yaml(msg.contact, out, indentation + 2);
  }

  // member: terrain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain:\n";
    to_block_style_yaml(msg.terrain, out, indentation + 2);
  }

  // member: terrain_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FootState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::FootState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::FootState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::FootState>()
{
  return "bosdyn_msgs::msg::FootState";
}

template<>
inline const char * name<bosdyn_msgs::msg::FootState>()
{
  return "bosdyn_msgs/msg/FootState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::FootState>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::FootStateContact>::value && has_fixed_size<bosdyn_msgs::msg::FootStateTerrainState>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::FootState>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::FootStateContact>::value && has_bounded_size<bosdyn_msgs::msg::FootStateTerrainState>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::FootState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE__TRAITS_HPP_
