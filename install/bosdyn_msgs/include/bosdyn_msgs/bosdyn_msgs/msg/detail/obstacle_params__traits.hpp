// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ObstacleParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OBSTACLE_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OBSTACLE_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/obstacle_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: disable_vision_foot_obstacle_avoidance
  {
    out << "disable_vision_foot_obstacle_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_vision_foot_obstacle_avoidance, out);
    out << ", ";
  }

  // member: disable_vision_foot_constraint_avoidance
  {
    out << "disable_vision_foot_constraint_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_vision_foot_constraint_avoidance, out);
    out << ", ";
  }

  // member: disable_vision_body_obstacle_avoidance
  {
    out << "disable_vision_body_obstacle_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_vision_body_obstacle_avoidance, out);
    out << ", ";
  }

  // member: obstacle_avoidance_padding
  {
    out << "obstacle_avoidance_padding: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_avoidance_padding, out);
    out << ", ";
  }

  // member: disable_vision_foot_obstacle_body_assist
  {
    out << "disable_vision_foot_obstacle_body_assist: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_vision_foot_obstacle_body_assist, out);
    out << ", ";
  }

  // member: disable_vision_negative_obstacles
  {
    out << "disable_vision_negative_obstacles: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_vision_negative_obstacles, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: disable_vision_foot_obstacle_avoidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_vision_foot_obstacle_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_vision_foot_obstacle_avoidance, out);
    out << "\n";
  }

  // member: disable_vision_foot_constraint_avoidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_vision_foot_constraint_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_vision_foot_constraint_avoidance, out);
    out << "\n";
  }

  // member: disable_vision_body_obstacle_avoidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_vision_body_obstacle_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_vision_body_obstacle_avoidance, out);
    out << "\n";
  }

  // member: obstacle_avoidance_padding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_avoidance_padding: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_avoidance_padding, out);
    out << "\n";
  }

  // member: disable_vision_foot_obstacle_body_assist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_vision_foot_obstacle_body_assist: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_vision_foot_obstacle_body_assist, out);
    out << "\n";
  }

  // member: disable_vision_negative_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_vision_negative_obstacles: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_vision_negative_obstacles, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ObstacleParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ObstacleParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ObstacleParams>()
{
  return "bosdyn_msgs::msg::ObstacleParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::ObstacleParams>()
{
  return "bosdyn_msgs/msg/ObstacleParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ObstacleParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ObstacleParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::ObstacleParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__OBSTACLE_PARAMS__TRAITS_HPP_
