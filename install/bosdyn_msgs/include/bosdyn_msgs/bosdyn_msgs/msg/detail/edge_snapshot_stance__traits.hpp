// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/EdgeSnapshotStance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT_STANCE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT_STANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/edge_snapshot_stance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'foot_states'
#include "bosdyn_msgs/msg/detail/foot_state__traits.hpp"
// Member 'ko_tform_body'
// Member 'vision_tform_body'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EdgeSnapshotStance & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_is_set
  {
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
    out << ", ";
  }

  // member: foot_states
  {
    if (msg.foot_states.size() == 0) {
      out << "foot_states: []";
    } else {
      out << "foot_states: [";
      size_t pending_items = msg.foot_states.size();
      for (auto item : msg.foot_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ko_tform_body
  {
    out << "ko_tform_body: ";
    to_flow_style_yaml(msg.ko_tform_body, out);
    out << ", ";
  }

  // member: ko_tform_body_is_set
  {
    out << "ko_tform_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ko_tform_body_is_set, out);
    out << ", ";
  }

  // member: vision_tform_body
  {
    out << "vision_tform_body: ";
    to_flow_style_yaml(msg.vision_tform_body, out);
    out << ", ";
  }

  // member: vision_tform_body_is_set
  {
    out << "vision_tform_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.vision_tform_body_is_set, out);
    out << ", ";
  }

  // member: planar_ground
  {
    out << "planar_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.planar_ground, out);
    out << ", ";
  }

  // member: planar_ground_is_set
  {
    out << "planar_ground_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.planar_ground_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EdgeSnapshotStance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
    out << "\n";
  }

  // member: foot_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_states.size() == 0) {
      out << "foot_states: []\n";
    } else {
      out << "foot_states:\n";
      for (auto item : msg.foot_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ko_tform_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ko_tform_body:\n";
    to_block_style_yaml(msg.ko_tform_body, out, indentation + 2);
  }

  // member: ko_tform_body_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ko_tform_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ko_tform_body_is_set, out);
    out << "\n";
  }

  // member: vision_tform_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_tform_body:\n";
    to_block_style_yaml(msg.vision_tform_body, out, indentation + 2);
  }

  // member: vision_tform_body_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_tform_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.vision_tform_body_is_set, out);
    out << "\n";
  }

  // member: planar_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planar_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.planar_ground, out);
    out << "\n";
  }

  // member: planar_ground_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planar_ground_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.planar_ground_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EdgeSnapshotStance & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::EdgeSnapshotStance & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::EdgeSnapshotStance & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::EdgeSnapshotStance>()
{
  return "bosdyn_msgs::msg::EdgeSnapshotStance";
}

template<>
inline const char * name<bosdyn_msgs::msg::EdgeSnapshotStance>()
{
  return "bosdyn_msgs/msg/EdgeSnapshotStance";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::EdgeSnapshotStance>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::EdgeSnapshotStance>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::EdgeSnapshotStance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT_STANCE__TRAITS_HPP_
