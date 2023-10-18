// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/kinematic_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_states'
#include "bosdyn_msgs/msg/detail/joint_state__traits.hpp"
// Member 'acquisition_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__traits.hpp"
// Member 'velocity_of_body_in_vision'
// Member 'velocity_of_body_in_odom'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KinematicState & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_states
  {
    if (msg.joint_states.size() == 0) {
      out << "joint_states: []";
    } else {
      out << "joint_states: [";
      size_t pending_items = msg.joint_states.size();
      for (auto item : msg.joint_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acquisition_timestamp
  {
    out << "acquisition_timestamp: ";
    to_flow_style_yaml(msg.acquisition_timestamp, out);
    out << ", ";
  }

  // member: acquisition_timestamp_is_set
  {
    out << "acquisition_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_timestamp_is_set, out);
    out << ", ";
  }

  // member: transforms_snapshot
  {
    out << "transforms_snapshot: ";
    to_flow_style_yaml(msg.transforms_snapshot, out);
    out << ", ";
  }

  // member: transforms_snapshot_is_set
  {
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
    out << ", ";
  }

  // member: velocity_of_body_in_vision
  {
    out << "velocity_of_body_in_vision: ";
    to_flow_style_yaml(msg.velocity_of_body_in_vision, out);
    out << ", ";
  }

  // member: velocity_of_body_in_vision_is_set
  {
    out << "velocity_of_body_in_vision_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_of_body_in_vision_is_set, out);
    out << ", ";
  }

  // member: velocity_of_body_in_odom
  {
    out << "velocity_of_body_in_odom: ";
    to_flow_style_yaml(msg.velocity_of_body_in_odom, out);
    out << ", ";
  }

  // member: velocity_of_body_in_odom_is_set
  {
    out << "velocity_of_body_in_odom_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_of_body_in_odom_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KinematicState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_states.size() == 0) {
      out << "joint_states: []\n";
    } else {
      out << "joint_states:\n";
      for (auto item : msg.joint_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: acquisition_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_timestamp:\n";
    to_block_style_yaml(msg.acquisition_timestamp, out, indentation + 2);
  }

  // member: acquisition_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_timestamp_is_set, out);
    out << "\n";
  }

  // member: transforms_snapshot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot:\n";
    to_block_style_yaml(msg.transforms_snapshot, out, indentation + 2);
  }

  // member: transforms_snapshot_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
    out << "\n";
  }

  // member: velocity_of_body_in_vision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_of_body_in_vision:\n";
    to_block_style_yaml(msg.velocity_of_body_in_vision, out, indentation + 2);
  }

  // member: velocity_of_body_in_vision_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_of_body_in_vision_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_of_body_in_vision_is_set, out);
    out << "\n";
  }

  // member: velocity_of_body_in_odom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_of_body_in_odom:\n";
    to_block_style_yaml(msg.velocity_of_body_in_odom, out, indentation + 2);
  }

  // member: velocity_of_body_in_odom_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_of_body_in_odom_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_of_body_in_odom_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KinematicState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::KinematicState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::KinematicState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::KinematicState>()
{
  return "bosdyn_msgs::msg::KinematicState";
}

template<>
inline const char * name<bosdyn_msgs::msg::KinematicState>()
{
  return "bosdyn_msgs/msg/KinematicState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::KinematicState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::KinematicState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::KinematicState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__TRAITS_HPP_
