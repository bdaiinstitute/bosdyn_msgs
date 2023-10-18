// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegionOneOfRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_one_of_region__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'default_region'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_default__traits.hpp"
// Member 'empty'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_empty__traits.hpp"
// Member 'circle'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_circle2_d__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaypointAnnotationsLocalizeRegionOneOfRegion & msg,
  std::ostream & out)
{
  out << "{";
  // member: default_region
  {
    out << "default_region: ";
    to_flow_style_yaml(msg.default_region, out);
    out << ", ";
  }

  // member: empty
  {
    out << "empty: ";
    to_flow_style_yaml(msg.empty, out);
    out << ", ";
  }

  // member: circle
  {
    out << "circle: ";
    to_flow_style_yaml(msg.circle, out);
    out << ", ";
  }

  // member: region_choice
  {
    out << "region_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.region_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointAnnotationsLocalizeRegionOneOfRegion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: default_region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_region:\n";
    to_block_style_yaml(msg.default_region, out, indentation + 2);
  }

  // member: empty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "empty:\n";
    to_block_style_yaml(msg.empty, out, indentation + 2);
  }

  // member: circle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circle:\n";
    to_block_style_yaml(msg.circle, out, indentation + 2);
  }

  // member: region_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "region_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.region_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointAnnotationsLocalizeRegionOneOfRegion & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion>()
{
  return "bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion";
}

template<>
inline const char * name<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion>()
{
  return "bosdyn_msgs/msg/WaypointAnnotationsLocalizeRegionOneOfRegion";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D>::value && has_fixed_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionDefault>::value && has_fixed_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D>::value && has_bounded_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionDefault>::value && has_bounded_size<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__TRAITS_HPP_
