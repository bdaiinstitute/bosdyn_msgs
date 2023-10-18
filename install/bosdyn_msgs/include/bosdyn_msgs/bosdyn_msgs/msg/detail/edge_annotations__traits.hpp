// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/EdgeAnnotations.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/edge_annotations__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stairs'
#include "bosdyn_msgs/msg/detail/edge_annotations_stair_data__traits.hpp"
// Member 'direction_constraint'
#include "bosdyn_msgs/msg/detail/edge_annotations_direction_constraint__traits.hpp"
// Member 'mobility_params'
#include "bosdyn_msgs/msg/detail/mobility_params__traits.hpp"
// Member 'edge_source'
#include "bosdyn_msgs/msg/detail/edge_edge_source__traits.hpp"
// Member 'path_following_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__traits.hpp"
// Member 'area_callbacks'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_region__traits.hpp"
// Member 'ground_clutter_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_ground_clutter_avoidance_mode__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EdgeAnnotations & msg,
  std::ostream & out)
{
  out << "{";
  // member: stairs
  {
    out << "stairs: ";
    to_flow_style_yaml(msg.stairs, out);
    out << ", ";
  }

  // member: stairs_is_set
  {
    out << "stairs_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.stairs_is_set, out);
    out << ", ";
  }

  // member: direction_constraint
  {
    out << "direction_constraint: ";
    to_flow_style_yaml(msg.direction_constraint, out);
    out << ", ";
  }

  // member: require_alignment
  {
    out << "require_alignment: ";
    rosidl_generator_traits::value_to_yaml(msg.require_alignment, out);
    out << ", ";
  }

  // member: require_alignment_is_set
  {
    out << "require_alignment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.require_alignment_is_set, out);
    out << ", ";
  }

  // member: mobility_params
  {
    out << "mobility_params: ";
    to_flow_style_yaml(msg.mobility_params, out);
    out << ", ";
  }

  // member: mobility_params_is_set
  {
    out << "mobility_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mobility_params_is_set, out);
    out << ", ";
  }

  // member: cost
  {
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << ", ";
  }

  // member: cost_is_set
  {
    out << "cost_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.cost_is_set, out);
    out << ", ";
  }

  // member: edge_source
  {
    out << "edge_source: ";
    to_flow_style_yaml(msg.edge_source, out);
    out << ", ";
  }

  // member: disable_alternate_route_finding
  {
    out << "disable_alternate_route_finding: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_alternate_route_finding, out);
    out << ", ";
  }

  // member: path_following_mode
  {
    out << "path_following_mode: ";
    to_flow_style_yaml(msg.path_following_mode, out);
    out << ", ";
  }

  // member: disable_directed_exploration
  {
    out << "disable_directed_exploration: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_directed_exploration, out);
    out << ", ";
  }

  // member: area_callbacks
  {
    if (msg.area_callbacks.size() == 0) {
      out << "area_callbacks: []";
    } else {
      out << "area_callbacks: [";
      size_t pending_items = msg.area_callbacks.size();
      for (auto item : msg.area_callbacks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ground_clutter_mode
  {
    out << "ground_clutter_mode: ";
    to_flow_style_yaml(msg.ground_clutter_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EdgeAnnotations & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stairs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stairs:\n";
    to_block_style_yaml(msg.stairs, out, indentation + 2);
  }

  // member: stairs_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stairs_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.stairs_is_set, out);
    out << "\n";
  }

  // member: direction_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_constraint:\n";
    to_block_style_yaml(msg.direction_constraint, out, indentation + 2);
  }

  // member: require_alignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "require_alignment: ";
    rosidl_generator_traits::value_to_yaml(msg.require_alignment, out);
    out << "\n";
  }

  // member: require_alignment_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "require_alignment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.require_alignment_is_set, out);
    out << "\n";
  }

  // member: mobility_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mobility_params:\n";
    to_block_style_yaml(msg.mobility_params, out, indentation + 2);
  }

  // member: mobility_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mobility_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mobility_params_is_set, out);
    out << "\n";
  }

  // member: cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << "\n";
  }

  // member: cost_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.cost_is_set, out);
    out << "\n";
  }

  // member: edge_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_source:\n";
    to_block_style_yaml(msg.edge_source, out, indentation + 2);
  }

  // member: disable_alternate_route_finding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_alternate_route_finding: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_alternate_route_finding, out);
    out << "\n";
  }

  // member: path_following_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_following_mode:\n";
    to_block_style_yaml(msg.path_following_mode, out, indentation + 2);
  }

  // member: disable_directed_exploration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_directed_exploration: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_directed_exploration, out);
    out << "\n";
  }

  // member: area_callbacks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.area_callbacks.size() == 0) {
      out << "area_callbacks: []\n";
    } else {
      out << "area_callbacks:\n";
      for (auto item : msg.area_callbacks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ground_clutter_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_clutter_mode:\n";
    to_block_style_yaml(msg.ground_clutter_mode, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EdgeAnnotations & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::EdgeAnnotations & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::EdgeAnnotations & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::EdgeAnnotations>()
{
  return "bosdyn_msgs::msg::EdgeAnnotations";
}

template<>
inline const char * name<bosdyn_msgs::msg::EdgeAnnotations>()
{
  return "bosdyn_msgs/msg/EdgeAnnotations";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::EdgeAnnotations>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::EdgeAnnotations>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::EdgeAnnotations>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS__TRAITS_HPP_
