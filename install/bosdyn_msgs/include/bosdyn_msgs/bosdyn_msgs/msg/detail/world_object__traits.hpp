// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/WorldObject.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/world_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'acquisition_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__traits.hpp"
// Member 'object_lifetime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'drawable_properties'
#include "bosdyn_msgs/msg/detail/drawable_properties__traits.hpp"
// Member 'apriltag_properties'
#include "bosdyn_msgs/msg/detail/april_tag_properties__traits.hpp"
// Member 'nogo_region_properties'
#include "bosdyn_msgs/msg/detail/no_go_region_properties__traits.hpp"
// Member 'image_properties'
#include "bosdyn_msgs/msg/detail/image_properties__traits.hpp"
// Member 'dock_properties'
#include "bosdyn_msgs/msg/detail/dock_properties__traits.hpp"
// Member 'ray_properties'
#include "bosdyn_msgs/msg/detail/ray_properties__traits.hpp"
// Member 'bounding_box_properties'
#include "bosdyn_msgs/msg/detail/bounding_box_properties__traits.hpp"
// Member 'staircase_properties'
#include "bosdyn_msgs/msg/detail/staircase_properties__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorldObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: acquisition_time
  {
    out << "acquisition_time: ";
    to_flow_style_yaml(msg.acquisition_time, out);
    out << ", ";
  }

  // member: acquisition_time_is_set
  {
    out << "acquisition_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_time_is_set, out);
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

  // member: object_lifetime
  {
    out << "object_lifetime: ";
    to_flow_style_yaml(msg.object_lifetime, out);
    out << ", ";
  }

  // member: object_lifetime_is_set
  {
    out << "object_lifetime_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.object_lifetime_is_set, out);
    out << ", ";
  }

  // member: drawable_properties
  {
    if (msg.drawable_properties.size() == 0) {
      out << "drawable_properties: []";
    } else {
      out << "drawable_properties: [";
      size_t pending_items = msg.drawable_properties.size();
      for (auto item : msg.drawable_properties) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: apriltag_properties
  {
    out << "apriltag_properties: ";
    to_flow_style_yaml(msg.apriltag_properties, out);
    out << ", ";
  }

  // member: apriltag_properties_is_set
  {
    out << "apriltag_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.apriltag_properties_is_set, out);
    out << ", ";
  }

  // member: nogo_region_properties
  {
    out << "nogo_region_properties: ";
    to_flow_style_yaml(msg.nogo_region_properties, out);
    out << ", ";
  }

  // member: nogo_region_properties_is_set
  {
    out << "nogo_region_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.nogo_region_properties_is_set, out);
    out << ", ";
  }

  // member: image_properties
  {
    out << "image_properties: ";
    to_flow_style_yaml(msg.image_properties, out);
    out << ", ";
  }

  // member: image_properties_is_set
  {
    out << "image_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.image_properties_is_set, out);
    out << ", ";
  }

  // member: dock_properties
  {
    out << "dock_properties: ";
    to_flow_style_yaml(msg.dock_properties, out);
    out << ", ";
  }

  // member: dock_properties_is_set
  {
    out << "dock_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_properties_is_set, out);
    out << ", ";
  }

  // member: ray_properties
  {
    out << "ray_properties: ";
    to_flow_style_yaml(msg.ray_properties, out);
    out << ", ";
  }

  // member: ray_properties_is_set
  {
    out << "ray_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_properties_is_set, out);
    out << ", ";
  }

  // member: bounding_box_properties
  {
    out << "bounding_box_properties: ";
    to_flow_style_yaml(msg.bounding_box_properties, out);
    out << ", ";
  }

  // member: bounding_box_properties_is_set
  {
    out << "bounding_box_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.bounding_box_properties_is_set, out);
    out << ", ";
  }

  // member: staircase_properties
  {
    out << "staircase_properties: ";
    to_flow_style_yaml(msg.staircase_properties, out);
    out << ", ";
  }

  // member: staircase_properties_is_set
  {
    out << "staircase_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.staircase_properties_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WorldObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: acquisition_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_time:\n";
    to_block_style_yaml(msg.acquisition_time, out, indentation + 2);
  }

  // member: acquisition_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_time_is_set, out);
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

  // member: object_lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_lifetime:\n";
    to_block_style_yaml(msg.object_lifetime, out, indentation + 2);
  }

  // member: object_lifetime_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_lifetime_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.object_lifetime_is_set, out);
    out << "\n";
  }

  // member: drawable_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drawable_properties.size() == 0) {
      out << "drawable_properties: []\n";
    } else {
      out << "drawable_properties:\n";
      for (auto item : msg.drawable_properties) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: apriltag_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apriltag_properties:\n";
    to_block_style_yaml(msg.apriltag_properties, out, indentation + 2);
  }

  // member: apriltag_properties_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apriltag_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.apriltag_properties_is_set, out);
    out << "\n";
  }

  // member: nogo_region_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nogo_region_properties:\n";
    to_block_style_yaml(msg.nogo_region_properties, out, indentation + 2);
  }

  // member: nogo_region_properties_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nogo_region_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.nogo_region_properties_is_set, out);
    out << "\n";
  }

  // member: image_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_properties:\n";
    to_block_style_yaml(msg.image_properties, out, indentation + 2);
  }

  // member: image_properties_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.image_properties_is_set, out);
    out << "\n";
  }

  // member: dock_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_properties:\n";
    to_block_style_yaml(msg.dock_properties, out, indentation + 2);
  }

  // member: dock_properties_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_properties_is_set, out);
    out << "\n";
  }

  // member: ray_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_properties:\n";
    to_block_style_yaml(msg.ray_properties, out, indentation + 2);
  }

  // member: ray_properties_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_properties_is_set, out);
    out << "\n";
  }

  // member: bounding_box_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box_properties:\n";
    to_block_style_yaml(msg.bounding_box_properties, out, indentation + 2);
  }

  // member: bounding_box_properties_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.bounding_box_properties_is_set, out);
    out << "\n";
  }

  // member: staircase_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "staircase_properties:\n";
    to_block_style_yaml(msg.staircase_properties, out, indentation + 2);
  }

  // member: staircase_properties_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "staircase_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.staircase_properties_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorldObject & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::WorldObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::WorldObject & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::WorldObject>()
{
  return "bosdyn_msgs::msg::WorldObject";
}

template<>
inline const char * name<bosdyn_msgs::msg::WorldObject>()
{
  return "bosdyn_msgs/msg/WorldObject";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::WorldObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::WorldObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::WorldObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT__TRAITS_HPP_
