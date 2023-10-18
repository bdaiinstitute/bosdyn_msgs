// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AnchoringHint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHORING_HINT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHORING_HINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/anchoring_hint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoint_anchors'
#include "bosdyn_msgs/msg/detail/waypoint_anchor_hint__traits.hpp"
// Member 'world_objects'
#include "bosdyn_msgs/msg/detail/world_object_anchor_hint__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AnchoringHint & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoint_anchors
  {
    if (msg.waypoint_anchors.size() == 0) {
      out << "waypoint_anchors: []";
    } else {
      out << "waypoint_anchors: [";
      size_t pending_items = msg.waypoint_anchors.size();
      for (auto item : msg.waypoint_anchors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: world_objects
  {
    if (msg.world_objects.size() == 0) {
      out << "world_objects: []";
    } else {
      out << "world_objects: [";
      size_t pending_items = msg.world_objects.size();
      for (auto item : msg.world_objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AnchoringHint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoint_anchors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoint_anchors.size() == 0) {
      out << "waypoint_anchors: []\n";
    } else {
      out << "waypoint_anchors:\n";
      for (auto item : msg.waypoint_anchors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: world_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.world_objects.size() == 0) {
      out << "world_objects: []\n";
    } else {
      out << "world_objects:\n";
      for (auto item : msg.world_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AnchoringHint & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AnchoringHint & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AnchoringHint & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AnchoringHint>()
{
  return "bosdyn_msgs::msg::AnchoringHint";
}

template<>
inline const char * name<bosdyn_msgs::msg::AnchoringHint>()
{
  return "bosdyn_msgs/msg/AnchoringHint";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AnchoringHint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AnchoringHint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::AnchoringHint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHORING_HINT__TRAITS_HPP_
