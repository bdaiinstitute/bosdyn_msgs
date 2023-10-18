// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetLocalizationStateResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_localization_state_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'localization'
#include "bosdyn_msgs/msg/detail/localization__traits.hpp"
// Member 'robot_kinematics'
#include "bosdyn_msgs/msg/detail/kinematic_state__traits.hpp"
// Member 'remote_cloud_status'
#include "bosdyn_msgs/msg/detail/remote_point_cloud_status__traits.hpp"
// Member 'live_data'
#include "bosdyn_msgs/msg/detail/waypoint_snapshot__traits.hpp"
// Member 'lost_detector_state'
#include "bosdyn_msgs/msg/detail/lost_detector_state__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetLocalizationStateResponse & msg,
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

  // member: localization
  {
    out << "localization: ";
    to_flow_style_yaml(msg.localization, out);
    out << ", ";
  }

  // member: localization_is_set
  {
    out << "localization_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_is_set, out);
    out << ", ";
  }

  // member: robot_kinematics
  {
    out << "robot_kinematics: ";
    to_flow_style_yaml(msg.robot_kinematics, out);
    out << ", ";
  }

  // member: robot_kinematics_is_set
  {
    out << "robot_kinematics_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_kinematics_is_set, out);
    out << ", ";
  }

  // member: remote_cloud_status
  {
    if (msg.remote_cloud_status.size() == 0) {
      out << "remote_cloud_status: []";
    } else {
      out << "remote_cloud_status: [";
      size_t pending_items = msg.remote_cloud_status.size();
      for (auto item : msg.remote_cloud_status) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: live_data
  {
    out << "live_data: ";
    to_flow_style_yaml(msg.live_data, out);
    out << ", ";
  }

  // member: live_data_is_set
  {
    out << "live_data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.live_data_is_set, out);
    out << ", ";
  }

  // member: lost_detector_state
  {
    out << "lost_detector_state: ";
    to_flow_style_yaml(msg.lost_detector_state, out);
    out << ", ";
  }

  // member: lost_detector_state_is_set
  {
    out << "lost_detector_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lost_detector_state_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLocalizationStateResponse & msg,
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

  // member: localization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization:\n";
    to_block_style_yaml(msg.localization, out, indentation + 2);
  }

  // member: localization_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_is_set, out);
    out << "\n";
  }

  // member: robot_kinematics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_kinematics:\n";
    to_block_style_yaml(msg.robot_kinematics, out, indentation + 2);
  }

  // member: robot_kinematics_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_kinematics_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_kinematics_is_set, out);
    out << "\n";
  }

  // member: remote_cloud_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.remote_cloud_status.size() == 0) {
      out << "remote_cloud_status: []\n";
    } else {
      out << "remote_cloud_status:\n";
      for (auto item : msg.remote_cloud_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: live_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "live_data:\n";
    to_block_style_yaml(msg.live_data, out, indentation + 2);
  }

  // member: live_data_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "live_data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.live_data_is_set, out);
    out << "\n";
  }

  // member: lost_detector_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lost_detector_state:\n";
    to_block_style_yaml(msg.lost_detector_state, out, indentation + 2);
  }

  // member: lost_detector_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lost_detector_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lost_detector_state_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLocalizationStateResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GetLocalizationStateResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetLocalizationStateResponse>()
{
  return "bosdyn_msgs::msg::GetLocalizationStateResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetLocalizationStateResponse>()
{
  return "bosdyn_msgs/msg/GetLocalizationStateResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetLocalizationStateResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetLocalizationStateResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::GetLocalizationStateResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_RESPONSE__TRAITS_HPP_
