// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotations.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/waypoint_annotations__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'creation_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'icp_variance'
#include "bosdyn_msgs/msg/detail/se3_covariance__traits.hpp"
// Member 'scan_match_region'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region__traits.hpp"
// Member 'waypoint_source'
#include "bosdyn_msgs/msg/detail/waypoint_waypoint_source__traits.hpp"
// Member 'client_metadata'
#include "bosdyn_msgs/msg/detail/client_metadata__traits.hpp"
// Member 'loop_closure_settings'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_loop_closure_settings__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaypointAnnotations & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: creation_time
  {
    out << "creation_time: ";
    to_flow_style_yaml(msg.creation_time, out);
    out << ", ";
  }

  // member: creation_time_is_set
  {
    out << "creation_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.creation_time_is_set, out);
    out << ", ";
  }

  // member: icp_variance
  {
    out << "icp_variance: ";
    to_flow_style_yaml(msg.icp_variance, out);
    out << ", ";
  }

  // member: icp_variance_is_set
  {
    out << "icp_variance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_variance_is_set, out);
    out << ", ";
  }

  // member: scan_match_region
  {
    out << "scan_match_region: ";
    to_flow_style_yaml(msg.scan_match_region, out);
    out << ", ";
  }

  // member: scan_match_region_is_set
  {
    out << "scan_match_region_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_match_region_is_set, out);
    out << ", ";
  }

  // member: waypoint_source
  {
    out << "waypoint_source: ";
    to_flow_style_yaml(msg.waypoint_source, out);
    out << ", ";
  }

  // member: client_metadata
  {
    out << "client_metadata: ";
    to_flow_style_yaml(msg.client_metadata, out);
    out << ", ";
  }

  // member: client_metadata_is_set
  {
    out << "client_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.client_metadata_is_set, out);
    out << ", ";
  }

  // member: loop_closure_settings
  {
    out << "loop_closure_settings: ";
    to_flow_style_yaml(msg.loop_closure_settings, out);
    out << ", ";
  }

  // member: loop_closure_settings_is_set
  {
    out << "loop_closure_settings_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_closure_settings_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointAnnotations & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: creation_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "creation_time:\n";
    to_block_style_yaml(msg.creation_time, out, indentation + 2);
  }

  // member: creation_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "creation_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.creation_time_is_set, out);
    out << "\n";
  }

  // member: icp_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_variance:\n";
    to_block_style_yaml(msg.icp_variance, out, indentation + 2);
  }

  // member: icp_variance_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_variance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_variance_is_set, out);
    out << "\n";
  }

  // member: scan_match_region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_match_region:\n";
    to_block_style_yaml(msg.scan_match_region, out, indentation + 2);
  }

  // member: scan_match_region_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_match_region_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_match_region_is_set, out);
    out << "\n";
  }

  // member: waypoint_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_source:\n";
    to_block_style_yaml(msg.waypoint_source, out, indentation + 2);
  }

  // member: client_metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_metadata:\n";
    to_block_style_yaml(msg.client_metadata, out, indentation + 2);
  }

  // member: client_metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.client_metadata_is_set, out);
    out << "\n";
  }

  // member: loop_closure_settings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_closure_settings:\n";
    to_block_style_yaml(msg.loop_closure_settings, out, indentation + 2);
  }

  // member: loop_closure_settings_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_closure_settings_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_closure_settings_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointAnnotations & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::WaypointAnnotations & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::WaypointAnnotations & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::WaypointAnnotations>()
{
  return "bosdyn_msgs::msg::WaypointAnnotations";
}

template<>
inline const char * name<bosdyn_msgs::msg::WaypointAnnotations>()
{
  return "bosdyn_msgs/msg/WaypointAnnotations";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::WaypointAnnotations>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::WaypointAnnotations>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::WaypointAnnotations>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS__TRAITS_HPP_
