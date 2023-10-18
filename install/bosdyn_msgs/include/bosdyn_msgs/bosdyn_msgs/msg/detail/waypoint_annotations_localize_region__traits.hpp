// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'state'
#include "bosdyn_msgs/msg/detail/annotation_state__traits.hpp"
// Member 'region'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_one_of_region__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaypointAnnotationsLocalizeRegion & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: region
  {
    out << "region: ";
    to_flow_style_yaml(msg.region, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointAnnotationsLocalizeRegion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "region:\n";
    to_block_style_yaml(msg.region, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointAnnotationsLocalizeRegion & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion>()
{
  return "bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion";
}

template<>
inline const char * name<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion>()
{
  return "bosdyn_msgs/msg/WaypointAnnotationsLocalizeRegion";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::AnnotationState>::value && has_fixed_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::AnnotationState>::value && has_bounded_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION__TRAITS_HPP_
