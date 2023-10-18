// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Vec3Trajectory.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/vec3_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "bosdyn_msgs/msg/detail/vec3_trajectory_point__traits.hpp"
// Member 'reference_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'pos_interpolation'
#include "bosdyn_msgs/msg/detail/positional_interpolation__traits.hpp"
// Member 'starting_velocity'
// Member 'ending_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vec3Trajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reference_time
  {
    out << "reference_time: ";
    to_flow_style_yaml(msg.reference_time, out);
    out << ", ";
  }

  // member: reference_time_is_set
  {
    out << "reference_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_time_is_set, out);
    out << ", ";
  }

  // member: pos_interpolation
  {
    out << "pos_interpolation: ";
    to_flow_style_yaml(msg.pos_interpolation, out);
    out << ", ";
  }

  // member: starting_velocity
  {
    out << "starting_velocity: ";
    to_flow_style_yaml(msg.starting_velocity, out);
    out << ", ";
  }

  // member: starting_velocity_is_set
  {
    out << "starting_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.starting_velocity_is_set, out);
    out << ", ";
  }

  // member: ending_velocity
  {
    out << "ending_velocity: ";
    to_flow_style_yaml(msg.ending_velocity, out);
    out << ", ";
  }

  // member: ending_velocity_is_set
  {
    out << "ending_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ending_velocity_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Vec3Trajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: reference_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_time:\n";
    to_block_style_yaml(msg.reference_time, out, indentation + 2);
  }

  // member: reference_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_time_is_set, out);
    out << "\n";
  }

  // member: pos_interpolation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_interpolation:\n";
    to_block_style_yaml(msg.pos_interpolation, out, indentation + 2);
  }

  // member: starting_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starting_velocity:\n";
    to_block_style_yaml(msg.starting_velocity, out, indentation + 2);
  }

  // member: starting_velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starting_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.starting_velocity_is_set, out);
    out << "\n";
  }

  // member: ending_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ending_velocity:\n";
    to_block_style_yaml(msg.ending_velocity, out, indentation + 2);
  }

  // member: ending_velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ending_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ending_velocity_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Vec3Trajectory & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Vec3Trajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Vec3Trajectory & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Vec3Trajectory>()
{
  return "bosdyn_msgs::msg::Vec3Trajectory";
}

template<>
inline const char * name<bosdyn_msgs::msg::Vec3Trajectory>()
{
  return "bosdyn_msgs/msg/Vec3Trajectory";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Vec3Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Vec3Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Vec3Trajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY__TRAITS_HPP_
