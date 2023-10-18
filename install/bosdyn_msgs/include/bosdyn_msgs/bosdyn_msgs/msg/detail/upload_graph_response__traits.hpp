// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/UploadGraphResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/upload_graph_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/upload_graph_response_status__traits.hpp"
// Member 'lease_use_result'
#include "bosdyn_msgs/msg/detail/lease_use_result__traits.hpp"
// Member 'license_status'
#include "bosdyn_msgs/msg/detail/license_info_status__traits.hpp"
// Member 'sensor_status'
#include "bosdyn_msgs/msg/detail/sensor_compatibility_status__traits.hpp"
// Member 'area_callback_error'
#include "bosdyn_msgs/msg/detail/area_callback_service_error__traits.hpp"
// Member 'map_stats'
#include "bosdyn_msgs/msg/detail/map_stats__traits.hpp"
// Member 'validation_status'
#include "bosdyn_msgs/msg/detail/upload_graph_response_validation_status__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UploadGraphResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: lease_use_result
  {
    out << "lease_use_result: ";
    to_flow_style_yaml(msg.lease_use_result, out);
    out << ", ";
  }

  // member: lease_use_result_is_set
  {
    out << "lease_use_result_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_use_result_is_set, out);
    out << ", ";
  }

  // member: loaded_waypoint_snapshot_ids
  {
    if (msg.loaded_waypoint_snapshot_ids.size() == 0) {
      out << "loaded_waypoint_snapshot_ids: []";
    } else {
      out << "loaded_waypoint_snapshot_ids: [";
      size_t pending_items = msg.loaded_waypoint_snapshot_ids.size();
      for (auto item : msg.loaded_waypoint_snapshot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unknown_waypoint_snapshot_ids
  {
    if (msg.unknown_waypoint_snapshot_ids.size() == 0) {
      out << "unknown_waypoint_snapshot_ids: []";
    } else {
      out << "unknown_waypoint_snapshot_ids: [";
      size_t pending_items = msg.unknown_waypoint_snapshot_ids.size();
      for (auto item : msg.unknown_waypoint_snapshot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: loaded_edge_snapshot_ids
  {
    if (msg.loaded_edge_snapshot_ids.size() == 0) {
      out << "loaded_edge_snapshot_ids: []";
    } else {
      out << "loaded_edge_snapshot_ids: [";
      size_t pending_items = msg.loaded_edge_snapshot_ids.size();
      for (auto item : msg.loaded_edge_snapshot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unknown_edge_snapshot_ids
  {
    if (msg.unknown_edge_snapshot_ids.size() == 0) {
      out << "unknown_edge_snapshot_ids: []";
    } else {
      out << "unknown_edge_snapshot_ids: [";
      size_t pending_items = msg.unknown_edge_snapshot_ids.size();
      for (auto item : msg.unknown_edge_snapshot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: license_status
  {
    out << "license_status: ";
    to_flow_style_yaml(msg.license_status, out);
    out << ", ";
  }

  // member: sensor_status
  {
    out << "sensor_status: ";
    to_flow_style_yaml(msg.sensor_status, out);
    out << ", ";
  }

  // member: sensor_status_is_set
  {
    out << "sensor_status_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_status_is_set, out);
    out << ", ";
  }

  // member: area_callback_error
  {
    out << "area_callback_error: ";
    to_flow_style_yaml(msg.area_callback_error, out);
    out << ", ";
  }

  // member: area_callback_error_is_set
  {
    out << "area_callback_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.area_callback_error_is_set, out);
    out << ", ";
  }

  // member: map_stats
  {
    out << "map_stats: ";
    to_flow_style_yaml(msg.map_stats, out);
    out << ", ";
  }

  // member: map_stats_is_set
  {
    out << "map_stats_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.map_stats_is_set, out);
    out << ", ";
  }

  // member: validation_status
  {
    out << "validation_status: ";
    to_flow_style_yaml(msg.validation_status, out);
    out << ", ";
  }

  // member: validation_status_is_set
  {
    out << "validation_status_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.validation_status_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UploadGraphResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: lease_use_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_use_result:\n";
    to_block_style_yaml(msg.lease_use_result, out, indentation + 2);
  }

  // member: lease_use_result_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_use_result_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_use_result_is_set, out);
    out << "\n";
  }

  // member: loaded_waypoint_snapshot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.loaded_waypoint_snapshot_ids.size() == 0) {
      out << "loaded_waypoint_snapshot_ids: []\n";
    } else {
      out << "loaded_waypoint_snapshot_ids:\n";
      for (auto item : msg.loaded_waypoint_snapshot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: unknown_waypoint_snapshot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unknown_waypoint_snapshot_ids.size() == 0) {
      out << "unknown_waypoint_snapshot_ids: []\n";
    } else {
      out << "unknown_waypoint_snapshot_ids:\n";
      for (auto item : msg.unknown_waypoint_snapshot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: loaded_edge_snapshot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.loaded_edge_snapshot_ids.size() == 0) {
      out << "loaded_edge_snapshot_ids: []\n";
    } else {
      out << "loaded_edge_snapshot_ids:\n";
      for (auto item : msg.loaded_edge_snapshot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: unknown_edge_snapshot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unknown_edge_snapshot_ids.size() == 0) {
      out << "unknown_edge_snapshot_ids: []\n";
    } else {
      out << "unknown_edge_snapshot_ids:\n";
      for (auto item : msg.unknown_edge_snapshot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: license_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "license_status:\n";
    to_block_style_yaml(msg.license_status, out, indentation + 2);
  }

  // member: sensor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_status:\n";
    to_block_style_yaml(msg.sensor_status, out, indentation + 2);
  }

  // member: sensor_status_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_status_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_status_is_set, out);
    out << "\n";
  }

  // member: area_callback_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_callback_error:\n";
    to_block_style_yaml(msg.area_callback_error, out, indentation + 2);
  }

  // member: area_callback_error_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_callback_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.area_callback_error_is_set, out);
    out << "\n";
  }

  // member: map_stats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_stats:\n";
    to_block_style_yaml(msg.map_stats, out, indentation + 2);
  }

  // member: map_stats_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_stats_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.map_stats_is_set, out);
    out << "\n";
  }

  // member: validation_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "validation_status:\n";
    to_block_style_yaml(msg.validation_status, out, indentation + 2);
  }

  // member: validation_status_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "validation_status_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.validation_status_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UploadGraphResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::UploadGraphResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::UploadGraphResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::UploadGraphResponse>()
{
  return "bosdyn_msgs::msg::UploadGraphResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::UploadGraphResponse>()
{
  return "bosdyn_msgs/msg/UploadGraphResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::UploadGraphResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::UploadGraphResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::UploadGraphResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE__TRAITS_HPP_
