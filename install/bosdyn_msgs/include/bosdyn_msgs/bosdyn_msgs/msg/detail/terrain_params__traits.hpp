// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/TerrainParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TERRAIN_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TERRAIN_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/terrain_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'grated_surfaces_mode'
#include "bosdyn_msgs/msg/detail/terrain_params_grated_surfaces_mode__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TerrainParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: ground_mu_hint
  {
    out << "ground_mu_hint: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_mu_hint, out);
    out << ", ";
  }

  // member: ground_mu_hint_is_set
  {
    out << "ground_mu_hint_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_mu_hint_is_set, out);
    out << ", ";
  }

  // member: grated_surfaces_mode
  {
    out << "grated_surfaces_mode: ";
    to_flow_style_yaml(msg.grated_surfaces_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TerrainParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ground_mu_hint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_mu_hint: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_mu_hint, out);
    out << "\n";
  }

  // member: ground_mu_hint_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_mu_hint_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_mu_hint_is_set, out);
    out << "\n";
  }

  // member: grated_surfaces_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grated_surfaces_mode:\n";
    to_block_style_yaml(msg.grated_surfaces_mode, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TerrainParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::TerrainParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::TerrainParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::TerrainParams>()
{
  return "bosdyn_msgs::msg::TerrainParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::TerrainParams>()
{
  return "bosdyn_msgs/msg/TerrainParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::TerrainParams>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::TerrainParamsGratedSurfacesMode>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::TerrainParams>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::TerrainParamsGratedSurfacesMode>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::TerrainParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__TERRAIN_PARAMS__TRAITS_HPP_
