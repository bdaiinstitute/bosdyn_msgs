// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/WaypointSnapshot.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_SNAPSHOT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_SNAPSHOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/waypoint_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'images'
#include "bosdyn_msgs/msg/detail/image_response__traits.hpp"
// Member 'point_cloud'
#include "bosdyn_msgs/msg/detail/point_cloud__traits.hpp"
// Member 'objects'
#include "bosdyn_msgs/msg/detail/world_object__traits.hpp"
// Member 'robot_state'
#include "bosdyn_msgs/msg/detail/robot_state__traits.hpp"
// Member 'robot_local_grids'
#include "bosdyn_msgs/msg/detail/local_grid__traits.hpp"
// Member 'body_tform_remote_point_cloud_sensor'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'payloads'
#include "bosdyn_msgs/msg/detail/payload__traits.hpp"
// Member 'robot_id'
#include "bosdyn_msgs/msg/detail/robot_id__traits.hpp"
// Member 'recording_started_on'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaypointSnapshot & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: images
  {
    if (msg.images.size() == 0) {
      out << "images: []";
    } else {
      out << "images: [";
      size_t pending_items = msg.images.size();
      for (auto item : msg.images) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: point_cloud
  {
    out << "point_cloud: ";
    to_flow_style_yaml(msg.point_cloud, out);
    out << ", ";
  }

  // member: point_cloud_is_set
  {
    out << "point_cloud_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.point_cloud_is_set, out);
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_state
  {
    out << "robot_state: ";
    to_flow_style_yaml(msg.robot_state, out);
    out << ", ";
  }

  // member: robot_state_is_set
  {
    out << "robot_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_state_is_set, out);
    out << ", ";
  }

  // member: robot_local_grids
  {
    if (msg.robot_local_grids.size() == 0) {
      out << "robot_local_grids: []";
    } else {
      out << "robot_local_grids: [";
      size_t pending_items = msg.robot_local_grids.size();
      for (auto item : msg.robot_local_grids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_point_cloud_processed
  {
    out << "is_point_cloud_processed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_point_cloud_processed, out);
    out << ", ";
  }

  // member: version_id
  {
    out << "version_id: ";
    rosidl_generator_traits::value_to_yaml(msg.version_id, out);
    out << ", ";
  }

  // member: has_remote_point_cloud_sensor
  {
    out << "has_remote_point_cloud_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.has_remote_point_cloud_sensor, out);
    out << ", ";
  }

  // member: body_tform_remote_point_cloud_sensor
  {
    out << "body_tform_remote_point_cloud_sensor: ";
    to_flow_style_yaml(msg.body_tform_remote_point_cloud_sensor, out);
    out << ", ";
  }

  // member: body_tform_remote_point_cloud_sensor_is_set
  {
    out << "body_tform_remote_point_cloud_sensor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.body_tform_remote_point_cloud_sensor_is_set, out);
    out << ", ";
  }

  // member: payloads
  {
    if (msg.payloads.size() == 0) {
      out << "payloads: []";
    } else {
      out << "payloads: [";
      size_t pending_items = msg.payloads.size();
      for (auto item : msg.payloads) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    to_flow_style_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: robot_id_is_set
  {
    out << "robot_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id_is_set, out);
    out << ", ";
  }

  // member: recording_started_on
  {
    out << "recording_started_on: ";
    to_flow_style_yaml(msg.recording_started_on, out);
    out << ", ";
  }

  // member: recording_started_on_is_set
  {
    out << "recording_started_on_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.recording_started_on_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointSnapshot & msg,
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

  // member: images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.images.size() == 0) {
      out << "images: []\n";
    } else {
      out << "images:\n";
      for (auto item : msg.images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: point_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_cloud:\n";
    to_block_style_yaml(msg.point_cloud, out, indentation + 2);
  }

  // member: point_cloud_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_cloud_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.point_cloud_is_set, out);
    out << "\n";
  }

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: robot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_state:\n";
    to_block_style_yaml(msg.robot_state, out, indentation + 2);
  }

  // member: robot_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_state_is_set, out);
    out << "\n";
  }

  // member: robot_local_grids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_local_grids.size() == 0) {
      out << "robot_local_grids: []\n";
    } else {
      out << "robot_local_grids:\n";
      for (auto item : msg.robot_local_grids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_point_cloud_processed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_point_cloud_processed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_point_cloud_processed, out);
    out << "\n";
  }

  // member: version_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_id: ";
    rosidl_generator_traits::value_to_yaml(msg.version_id, out);
    out << "\n";
  }

  // member: has_remote_point_cloud_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_remote_point_cloud_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.has_remote_point_cloud_sensor, out);
    out << "\n";
  }

  // member: body_tform_remote_point_cloud_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_tform_remote_point_cloud_sensor:\n";
    to_block_style_yaml(msg.body_tform_remote_point_cloud_sensor, out, indentation + 2);
  }

  // member: body_tform_remote_point_cloud_sensor_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_tform_remote_point_cloud_sensor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.body_tform_remote_point_cloud_sensor_is_set, out);
    out << "\n";
  }

  // member: payloads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payloads.size() == 0) {
      out << "payloads: []\n";
    } else {
      out << "payloads:\n";
      for (auto item : msg.payloads) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id:\n";
    to_block_style_yaml(msg.robot_id, out, indentation + 2);
  }

  // member: robot_id_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id_is_set, out);
    out << "\n";
  }

  // member: recording_started_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recording_started_on:\n";
    to_block_style_yaml(msg.recording_started_on, out, indentation + 2);
  }

  // member: recording_started_on_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recording_started_on_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.recording_started_on_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointSnapshot & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::WaypointSnapshot & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::WaypointSnapshot & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::WaypointSnapshot>()
{
  return "bosdyn_msgs::msg::WaypointSnapshot";
}

template<>
inline const char * name<bosdyn_msgs::msg::WaypointSnapshot>()
{
  return "bosdyn_msgs/msg/WaypointSnapshot";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::WaypointSnapshot>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::WaypointSnapshot>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::WaypointSnapshot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_SNAPSHOT__TRAITS_HPP_
