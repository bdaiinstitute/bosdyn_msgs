// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/navigation_feedback_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_status__traits.hpp"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__traits.hpp"
// Member 'area_callback_errors'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_error__traits.hpp"
// Member 'remaining_route'
#include "bosdyn_msgs/msg/detail/route__traits.hpp"
// Member 'last_ko_tform_goal'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'body_movement_status'
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback_body_movement_status__traits.hpp"
// Member 'path_following_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__traits.hpp"
// Member 'active_region_information'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_navigation_feedback_response_active_region_information__traits.hpp"
// Member 'route_following_status'
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_route_following_status__traits.hpp"
// Member 'blockage_status'
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_blockage_status__traits.hpp"
// Member 'stuck_reason'
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_stuck_reason__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigationFeedbackResponse & msg,
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

  // member: area_callback_errors
  {
    if (msg.area_callback_errors.size() == 0) {
      out << "area_callback_errors: []";
    } else {
      out << "area_callback_errors: [";
      size_t pending_items = msg.area_callback_errors.size();
      for (auto item : msg.area_callback_errors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: remaining_route
  {
    out << "remaining_route: ";
    to_flow_style_yaml(msg.remaining_route, out);
    out << ", ";
  }

  // member: remaining_route_is_set
  {
    out << "remaining_route_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_route_is_set, out);
    out << ", ";
  }

  // member: command_id
  {
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << ", ";
  }

  // member: last_ko_tform_goal
  {
    out << "last_ko_tform_goal: ";
    to_flow_style_yaml(msg.last_ko_tform_goal, out);
    out << ", ";
  }

  // member: last_ko_tform_goal_is_set
  {
    out << "last_ko_tform_goal_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.last_ko_tform_goal_is_set, out);
    out << ", ";
  }

  // member: body_movement_status
  {
    out << "body_movement_status: ";
    to_flow_style_yaml(msg.body_movement_status, out);
    out << ", ";
  }

  // member: path_following_mode
  {
    out << "path_following_mode: ";
    to_flow_style_yaml(msg.path_following_mode, out);
    out << ", ";
  }

  // member: active_region_information
  {
    if (msg.active_region_information.size() == 0) {
      out << "active_region_information: []";
    } else {
      out << "active_region_information: [";
      size_t pending_items = msg.active_region_information.size();
      for (auto item : msg.active_region_information) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: route_following_status
  {
    out << "route_following_status: ";
    to_flow_style_yaml(msg.route_following_status, out);
    out << ", ";
  }

  // member: blockage_status
  {
    out << "blockage_status: ";
    to_flow_style_yaml(msg.blockage_status, out);
    out << ", ";
  }

  // member: stuck_reason
  {
    out << "stuck_reason: ";
    to_flow_style_yaml(msg.stuck_reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigationFeedbackResponse & msg,
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

  // member: area_callback_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.area_callback_errors.size() == 0) {
      out << "area_callback_errors: []\n";
    } else {
      out << "area_callback_errors:\n";
      for (auto item : msg.area_callback_errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: remaining_route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_route:\n";
    to_block_style_yaml(msg.remaining_route, out, indentation + 2);
  }

  // member: remaining_route_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_route_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_route_is_set, out);
    out << "\n";
  }

  // member: command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << "\n";
  }

  // member: last_ko_tform_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_ko_tform_goal:\n";
    to_block_style_yaml(msg.last_ko_tform_goal, out, indentation + 2);
  }

  // member: last_ko_tform_goal_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_ko_tform_goal_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.last_ko_tform_goal_is_set, out);
    out << "\n";
  }

  // member: body_movement_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_movement_status:\n";
    to_block_style_yaml(msg.body_movement_status, out, indentation + 2);
  }

  // member: path_following_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_following_mode:\n";
    to_block_style_yaml(msg.path_following_mode, out, indentation + 2);
  }

  // member: active_region_information
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_region_information.size() == 0) {
      out << "active_region_information: []\n";
    } else {
      out << "active_region_information:\n";
      for (auto item : msg.active_region_information) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: route_following_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_following_status:\n";
    to_block_style_yaml(msg.route_following_status, out, indentation + 2);
  }

  // member: blockage_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blockage_status:\n";
    to_block_style_yaml(msg.blockage_status, out, indentation + 2);
  }

  // member: stuck_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stuck_reason:\n";
    to_block_style_yaml(msg.stuck_reason, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigationFeedbackResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NavigationFeedbackResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NavigationFeedbackResponse>()
{
  return "bosdyn_msgs::msg::NavigationFeedbackResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::NavigationFeedbackResponse>()
{
  return "bosdyn_msgs/msg/NavigationFeedbackResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NavigationFeedbackResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NavigationFeedbackResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::NavigationFeedbackResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE__TRAITS_HPP_
