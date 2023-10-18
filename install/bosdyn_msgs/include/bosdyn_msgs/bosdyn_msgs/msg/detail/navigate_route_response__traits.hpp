// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NavigateRouteResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_ROUTE_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_ROUTE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/navigate_route_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'lease_use_results'
#include "bosdyn_msgs/msg/detail/lease_use_result__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/navigate_route_response_status__traits.hpp"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__traits.hpp"
// Member 'error_edge_ids'
#include "bosdyn_msgs/msg/detail/edge_id__traits.hpp"
// Member 'area_callback_error'
#include "bosdyn_msgs/msg/detail/area_callback_service_error__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigateRouteResponse & msg,
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

  // member: lease_use_results
  {
    if (msg.lease_use_results.size() == 0) {
      out << "lease_use_results: []";
    } else {
      out << "lease_use_results: [";
      size_t pending_items = msg.lease_use_results.size();
      for (auto item : msg.lease_use_results) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: command_id
  {
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << ", ";
  }

  // member: error_waypoint_ids
  {
    if (msg.error_waypoint_ids.size() == 0) {
      out << "error_waypoint_ids: []";
    } else {
      out << "error_waypoint_ids: [";
      size_t pending_items = msg.error_waypoint_ids.size();
      for (auto item : msg.error_waypoint_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_edge_ids
  {
    if (msg.error_edge_ids.size() == 0) {
      out << "error_edge_ids: []";
    } else {
      out << "error_edge_ids: [";
      size_t pending_items = msg.error_edge_ids.size();
      for (auto item : msg.error_edge_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateRouteResponse & msg,
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

  // member: lease_use_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lease_use_results.size() == 0) {
      out << "lease_use_results: []\n";
    } else {
      out << "lease_use_results:\n";
      for (auto item : msg.lease_use_results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << "\n";
  }

  // member: error_waypoint_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_waypoint_ids.size() == 0) {
      out << "error_waypoint_ids: []\n";
    } else {
      out << "error_waypoint_ids:\n";
      for (auto item : msg.error_waypoint_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: error_edge_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_edge_ids.size() == 0) {
      out << "error_edge_ids: []\n";
    } else {
      out << "error_edge_ids:\n";
      for (auto item : msg.error_edge_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateRouteResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NavigateRouteResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NavigateRouteResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NavigateRouteResponse>()
{
  return "bosdyn_msgs::msg::NavigateRouteResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::NavigateRouteResponse>()
{
  return "bosdyn_msgs/msg/NavigateRouteResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NavigateRouteResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NavigateRouteResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::NavigateRouteResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_ROUTE_RESPONSE__TRAITS_HPP_
