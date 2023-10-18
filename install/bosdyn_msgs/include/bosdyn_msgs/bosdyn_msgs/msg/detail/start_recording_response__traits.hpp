// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StartRecordingResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/start_recording_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'created_waypoint'
#include "bosdyn_msgs/msg/detail/waypoint__traits.hpp"
// Member 'lease_use_result'
#include "bosdyn_msgs/msg/detail/lease_use_result__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/start_recording_response_status__traits.hpp"
// Member 'license_status'
#include "bosdyn_msgs/msg/detail/license_info_status__traits.hpp"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__traits.hpp"
// Member 'session_start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'map_stats'
#include "bosdyn_msgs/msg/detail/map_stats__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StartRecordingResponse & msg,
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

  // member: created_waypoint
  {
    out << "created_waypoint: ";
    to_flow_style_yaml(msg.created_waypoint, out);
    out << ", ";
  }

  // member: created_waypoint_is_set
  {
    out << "created_waypoint_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.created_waypoint_is_set, out);
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

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: missing_fiducials
  {
    if (msg.missing_fiducials.size() == 0) {
      out << "missing_fiducials: []";
    } else {
      out << "missing_fiducials: [";
      size_t pending_items = msg.missing_fiducials.size();
      for (auto item : msg.missing_fiducials) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bad_pose_fiducials
  {
    if (msg.bad_pose_fiducials.size() == 0) {
      out << "bad_pose_fiducials: []";
    } else {
      out << "bad_pose_fiducials: [";
      size_t pending_items = msg.bad_pose_fiducials.size();
      for (auto item : msg.bad_pose_fiducials) {
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

  // member: impaired_state
  {
    out << "impaired_state: ";
    to_flow_style_yaml(msg.impaired_state, out);
    out << ", ";
  }

  // member: impaired_state_is_set
  {
    out << "impaired_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.impaired_state_is_set, out);
    out << ", ";
  }

  // member: session_start_time
  {
    out << "session_start_time: ";
    to_flow_style_yaml(msg.session_start_time, out);
    out << ", ";
  }

  // member: session_start_time_is_set
  {
    out << "session_start_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.session_start_time_is_set, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartRecordingResponse & msg,
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

  // member: created_waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "created_waypoint:\n";
    to_block_style_yaml(msg.created_waypoint, out, indentation + 2);
  }

  // member: created_waypoint_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "created_waypoint_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.created_waypoint_is_set, out);
    out << "\n";
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: missing_fiducials
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.missing_fiducials.size() == 0) {
      out << "missing_fiducials: []\n";
    } else {
      out << "missing_fiducials:\n";
      for (auto item : msg.missing_fiducials) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bad_pose_fiducials
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bad_pose_fiducials.size() == 0) {
      out << "bad_pose_fiducials: []\n";
    } else {
      out << "bad_pose_fiducials:\n";
      for (auto item : msg.bad_pose_fiducials) {
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

  // member: impaired_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impaired_state:\n";
    to_block_style_yaml(msg.impaired_state, out, indentation + 2);
  }

  // member: impaired_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impaired_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.impaired_state_is_set, out);
    out << "\n";
  }

  // member: session_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_start_time:\n";
    to_block_style_yaml(msg.session_start_time, out, indentation + 2);
  }

  // member: session_start_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_start_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.session_start_time_is_set, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartRecordingResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StartRecordingResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StartRecordingResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StartRecordingResponse>()
{
  return "bosdyn_msgs::msg::StartRecordingResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::StartRecordingResponse>()
{
  return "bosdyn_msgs/msg/StartRecordingResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StartRecordingResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StartRecordingResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::StartRecordingResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE__TRAITS_HPP_
