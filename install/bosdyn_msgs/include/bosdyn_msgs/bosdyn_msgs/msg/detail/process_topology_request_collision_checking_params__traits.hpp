// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestCollisionCheckingParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/process_topology_request_collision_checking_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessTopologyRequestCollisionCheckingParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: check_edges_for_collision
  {
    out << "check_edges_for_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.check_edges_for_collision, out);
    out << ", ";
  }

  // member: check_edges_for_collision_is_set
  {
    out << "check_edges_for_collision_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.check_edges_for_collision_is_set, out);
    out << ", ";
  }

  // member: collision_check_robot_radius
  {
    out << "collision_check_robot_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_check_robot_radius, out);
    out << ", ";
  }

  // member: collision_check_robot_radius_is_set
  {
    out << "collision_check_robot_radius_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_check_robot_radius_is_set, out);
    out << ", ";
  }

  // member: collision_check_height_variation
  {
    out << "collision_check_height_variation: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_check_height_variation, out);
    out << ", ";
  }

  // member: collision_check_height_variation_is_set
  {
    out << "collision_check_height_variation_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_check_height_variation_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessTopologyRequestCollisionCheckingParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: check_edges_for_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_edges_for_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.check_edges_for_collision, out);
    out << "\n";
  }

  // member: check_edges_for_collision_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_edges_for_collision_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.check_edges_for_collision_is_set, out);
    out << "\n";
  }

  // member: collision_check_robot_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_check_robot_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_check_robot_radius, out);
    out << "\n";
  }

  // member: collision_check_robot_radius_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_check_robot_radius_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_check_robot_radius_is_set, out);
    out << "\n";
  }

  // member: collision_check_height_variation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_check_height_variation: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_check_height_variation, out);
    out << "\n";
  }

  // member: collision_check_height_variation_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_check_height_variation_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_check_height_variation_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessTopologyRequestCollisionCheckingParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams>()
{
  return "bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams>()
{
  return "bosdyn_msgs/msg/ProcessTopologyRequestCollisionCheckingParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__TRAITS_HPP_
