// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NavigateToRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/navigate_to_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"
// Member 'route_params'
#include "bosdyn_msgs/msg/detail/route_gen_params__traits.hpp"
// Member 'travel_params'
#include "bosdyn_msgs/msg/detail/travel_params__traits.hpp"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'destination_waypoint_tform_body_goal'
#include "bosdyn_msgs/msg/detail/se2_pose__traits.hpp"
// Member 'route_blocked_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_route_blocked_behavior__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigateToRequest & msg,
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

  // member: leases
  {
    if (msg.leases.size() == 0) {
      out << "leases: []";
    } else {
      out << "leases: [";
      size_t pending_items = msg.leases.size();
      for (auto item : msg.leases) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: destination_waypoint_id
  {
    out << "destination_waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_waypoint_id, out);
    out << ", ";
  }

  // member: route_params
  {
    out << "route_params: ";
    to_flow_style_yaml(msg.route_params, out);
    out << ", ";
  }

  // member: route_params_is_set
  {
    out << "route_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.route_params_is_set, out);
    out << ", ";
  }

  // member: travel_params
  {
    out << "travel_params: ";
    to_flow_style_yaml(msg.travel_params, out);
    out << ", ";
  }

  // member: travel_params_is_set
  {
    out << "travel_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.travel_params_is_set, out);
    out << ", ";
  }

  // member: end_time
  {
    out << "end_time: ";
    to_flow_style_yaml(msg.end_time, out);
    out << ", ";
  }

  // member: end_time_is_set
  {
    out << "end_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time_is_set, out);
    out << ", ";
  }

  // member: clock_identifier
  {
    out << "clock_identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_identifier, out);
    out << ", ";
  }

  // member: destination_waypoint_tform_body_goal
  {
    out << "destination_waypoint_tform_body_goal: ";
    to_flow_style_yaml(msg.destination_waypoint_tform_body_goal, out);
    out << ", ";
  }

  // member: destination_waypoint_tform_body_goal_is_set
  {
    out << "destination_waypoint_tform_body_goal_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_waypoint_tform_body_goal_is_set, out);
    out << ", ";
  }

  // member: command_id
  {
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << ", ";
  }

  // member: route_blocked_behavior
  {
    out << "route_blocked_behavior: ";
    to_flow_style_yaml(msg.route_blocked_behavior, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToRequest & msg,
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

  // member: leases
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.leases.size() == 0) {
      out << "leases: []\n";
    } else {
      out << "leases:\n";
      for (auto item : msg.leases) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: destination_waypoint_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination_waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_waypoint_id, out);
    out << "\n";
  }

  // member: route_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_params:\n";
    to_block_style_yaml(msg.route_params, out, indentation + 2);
  }

  // member: route_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.route_params_is_set, out);
    out << "\n";
  }

  // member: travel_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "travel_params:\n";
    to_block_style_yaml(msg.travel_params, out, indentation + 2);
  }

  // member: travel_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "travel_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.travel_params_is_set, out);
    out << "\n";
  }

  // member: end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time:\n";
    to_block_style_yaml(msg.end_time, out, indentation + 2);
  }

  // member: end_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time_is_set, out);
    out << "\n";
  }

  // member: clock_identifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_identifier, out);
    out << "\n";
  }

  // member: destination_waypoint_tform_body_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination_waypoint_tform_body_goal:\n";
    to_block_style_yaml(msg.destination_waypoint_tform_body_goal, out, indentation + 2);
  }

  // member: destination_waypoint_tform_body_goal_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination_waypoint_tform_body_goal_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_waypoint_tform_body_goal_is_set, out);
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

  // member: route_blocked_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_blocked_behavior:\n";
    to_block_style_yaml(msg.route_blocked_behavior, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NavigateToRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NavigateToRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NavigateToRequest>()
{
  return "bosdyn_msgs::msg::NavigateToRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::NavigateToRequest>()
{
  return "bosdyn_msgs/msg/NavigateToRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NavigateToRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NavigateToRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::NavigateToRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__TRAITS_HPP_
