// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/MapStats.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MAP_STATS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MAP_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/map_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
// Member 'waypoint_snapshots'
// Member 'alternate_waypoints'
// Member 'edges'
// Member 'edge_snapshots'
// Member 'alternate_edges'
// Member 'waypoint_anchors'
// Member 'object_anchors'
#include "bosdyn_msgs/msg/detail/map_stats_stat__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    out << "waypoints: ";
    to_flow_style_yaml(msg.waypoints, out);
    out << ", ";
  }

  // member: waypoints_is_set
  {
    out << "waypoints_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoints_is_set, out);
    out << ", ";
  }

  // member: waypoint_snapshots
  {
    out << "waypoint_snapshots: ";
    to_flow_style_yaml(msg.waypoint_snapshots, out);
    out << ", ";
  }

  // member: waypoint_snapshots_is_set
  {
    out << "waypoint_snapshots_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_snapshots_is_set, out);
    out << ", ";
  }

  // member: alternate_waypoints
  {
    out << "alternate_waypoints: ";
    to_flow_style_yaml(msg.alternate_waypoints, out);
    out << ", ";
  }

  // member: alternate_waypoints_is_set
  {
    out << "alternate_waypoints_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.alternate_waypoints_is_set, out);
    out << ", ";
  }

  // member: edges
  {
    out << "edges: ";
    to_flow_style_yaml(msg.edges, out);
    out << ", ";
  }

  // member: edges_is_set
  {
    out << "edges_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.edges_is_set, out);
    out << ", ";
  }

  // member: edge_snapshots
  {
    out << "edge_snapshots: ";
    to_flow_style_yaml(msg.edge_snapshots, out);
    out << ", ";
  }

  // member: edge_snapshots_is_set
  {
    out << "edge_snapshots_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_snapshots_is_set, out);
    out << ", ";
  }

  // member: alternate_edges
  {
    out << "alternate_edges: ";
    to_flow_style_yaml(msg.alternate_edges, out);
    out << ", ";
  }

  // member: alternate_edges_is_set
  {
    out << "alternate_edges_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.alternate_edges_is_set, out);
    out << ", ";
  }

  // member: waypoint_anchors
  {
    out << "waypoint_anchors: ";
    to_flow_style_yaml(msg.waypoint_anchors, out);
    out << ", ";
  }

  // member: waypoint_anchors_is_set
  {
    out << "waypoint_anchors_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_anchors_is_set, out);
    out << ", ";
  }

  // member: object_anchors
  {
    out << "object_anchors: ";
    to_flow_style_yaml(msg.object_anchors, out);
    out << ", ";
  }

  // member: object_anchors_is_set
  {
    out << "object_anchors_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.object_anchors_is_set, out);
    out << ", ";
  }

  // member: total_path_length
  {
    out << "total_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.total_path_length, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints:\n";
    to_block_style_yaml(msg.waypoints, out, indentation + 2);
  }

  // member: waypoints_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoints_is_set, out);
    out << "\n";
  }

  // member: waypoint_snapshots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_snapshots:\n";
    to_block_style_yaml(msg.waypoint_snapshots, out, indentation + 2);
  }

  // member: waypoint_snapshots_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_snapshots_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_snapshots_is_set, out);
    out << "\n";
  }

  // member: alternate_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alternate_waypoints:\n";
    to_block_style_yaml(msg.alternate_waypoints, out, indentation + 2);
  }

  // member: alternate_waypoints_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alternate_waypoints_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.alternate_waypoints_is_set, out);
    out << "\n";
  }

  // member: edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edges:\n";
    to_block_style_yaml(msg.edges, out, indentation + 2);
  }

  // member: edges_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edges_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.edges_is_set, out);
    out << "\n";
  }

  // member: edge_snapshots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_snapshots:\n";
    to_block_style_yaml(msg.edge_snapshots, out, indentation + 2);
  }

  // member: edge_snapshots_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_snapshots_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_snapshots_is_set, out);
    out << "\n";
  }

  // member: alternate_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alternate_edges:\n";
    to_block_style_yaml(msg.alternate_edges, out, indentation + 2);
  }

  // member: alternate_edges_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alternate_edges_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.alternate_edges_is_set, out);
    out << "\n";
  }

  // member: waypoint_anchors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_anchors:\n";
    to_block_style_yaml(msg.waypoint_anchors, out, indentation + 2);
  }

  // member: waypoint_anchors_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_anchors_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_anchors_is_set, out);
    out << "\n";
  }

  // member: object_anchors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_anchors:\n";
    to_block_style_yaml(msg.object_anchors, out, indentation + 2);
  }

  // member: object_anchors_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_anchors_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.object_anchors_is_set, out);
    out << "\n";
  }

  // member: total_path_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.total_path_length, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapStats & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::MapStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::MapStats & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::MapStats>()
{
  return "bosdyn_msgs::msg::MapStats";
}

template<>
inline const char * name<bosdyn_msgs::msg::MapStats>()
{
  return "bosdyn_msgs/msg/MapStats";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::MapStats>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::MapStatsStat>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::MapStats>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::MapStatsStat>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::MapStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MAP_STATS__TRAITS_HPP_
