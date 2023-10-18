// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BosdynNavigateTo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_TO__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_TO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/bosdyn_navigate_to__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'route_gen_params'
#include "bosdyn_msgs/msg/detail/route_gen_params__traits.hpp"
// Member 'travel_params'
#include "bosdyn_msgs/msg/detail/travel_params__traits.hpp"
// Member 'route_blocked_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_route_blocked_behavior__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BosdynNavigateTo & msg,
  std::ostream & out)
{
  out << "{";
  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: host
  {
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << ", ";
  }

  // member: destination_waypoint_id
  {
    out << "destination_waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_waypoint_id, out);
    out << ", ";
  }

  // member: route_gen_params
  {
    out << "route_gen_params: ";
    to_flow_style_yaml(msg.route_gen_params, out);
    out << ", ";
  }

  // member: route_gen_params_is_set
  {
    out << "route_gen_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.route_gen_params_is_set, out);
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

  // member: navigation_feedback_response_blackboard_key
  {
    out << "navigation_feedback_response_blackboard_key: ";
    rosidl_generator_traits::value_to_yaml(msg.navigation_feedback_response_blackboard_key, out);
    out << ", ";
  }

  // member: navigate_to_response_blackboard_key
  {
    out << "navigate_to_response_blackboard_key: ";
    rosidl_generator_traits::value_to_yaml(msg.navigate_to_response_blackboard_key, out);
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
  const BosdynNavigateTo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << "\n";
  }

  // member: host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << "\n";
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

  // member: route_gen_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_gen_params:\n";
    to_block_style_yaml(msg.route_gen_params, out, indentation + 2);
  }

  // member: route_gen_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_gen_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.route_gen_params_is_set, out);
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

  // member: navigation_feedback_response_blackboard_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigation_feedback_response_blackboard_key: ";
    rosidl_generator_traits::value_to_yaml(msg.navigation_feedback_response_blackboard_key, out);
    out << "\n";
  }

  // member: navigate_to_response_blackboard_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigate_to_response_blackboard_key: ";
    rosidl_generator_traits::value_to_yaml(msg.navigate_to_response_blackboard_key, out);
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

inline std::string to_yaml(const BosdynNavigateTo & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BosdynNavigateTo & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BosdynNavigateTo & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BosdynNavigateTo>()
{
  return "bosdyn_msgs::msg::BosdynNavigateTo";
}

template<>
inline const char * name<bosdyn_msgs::msg::BosdynNavigateTo>()
{
  return "bosdyn_msgs/msg/BosdynNavigateTo";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BosdynNavigateTo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BosdynNavigateTo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::BosdynNavigateTo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_TO__TRAITS_HPP_
