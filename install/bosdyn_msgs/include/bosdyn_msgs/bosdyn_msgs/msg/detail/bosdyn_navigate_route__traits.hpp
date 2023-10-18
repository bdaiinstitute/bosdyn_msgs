// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BosdynNavigateRoute.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_ROUTE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_ROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/bosdyn_navigate_route__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'route'
#include "bosdyn_msgs/msg/detail/route__traits.hpp"
// Member 'route_follow_params'
#include "bosdyn_msgs/msg/detail/route_following_params__traits.hpp"
// Member 'travel_params'
#include "bosdyn_msgs/msg/detail/travel_params__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BosdynNavigateRoute & msg,
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

  // member: route
  {
    out << "route: ";
    to_flow_style_yaml(msg.route, out);
    out << ", ";
  }

  // member: route_is_set
  {
    out << "route_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.route_is_set, out);
    out << ", ";
  }

  // member: route_follow_params
  {
    out << "route_follow_params: ";
    to_flow_style_yaml(msg.route_follow_params, out);
    out << ", ";
  }

  // member: route_follow_params_is_set
  {
    out << "route_follow_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.route_follow_params_is_set, out);
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

  // member: navigate_route_response_blackboard_key
  {
    out << "navigate_route_response_blackboard_key: ";
    rosidl_generator_traits::value_to_yaml(msg.navigate_route_response_blackboard_key, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BosdynNavigateRoute & msg,
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

  // member: route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route:\n";
    to_block_style_yaml(msg.route, out, indentation + 2);
  }

  // member: route_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.route_is_set, out);
    out << "\n";
  }

  // member: route_follow_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_follow_params:\n";
    to_block_style_yaml(msg.route_follow_params, out, indentation + 2);
  }

  // member: route_follow_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_follow_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.route_follow_params_is_set, out);
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

  // member: navigate_route_response_blackboard_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigate_route_response_blackboard_key: ";
    rosidl_generator_traits::value_to_yaml(msg.navigate_route_response_blackboard_key, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BosdynNavigateRoute & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BosdynNavigateRoute & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BosdynNavigateRoute & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BosdynNavigateRoute>()
{
  return "bosdyn_msgs::msg::BosdynNavigateRoute";
}

template<>
inline const char * name<bosdyn_msgs::msg::BosdynNavigateRoute>()
{
  return "bosdyn_msgs/msg/BosdynNavigateRoute";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BosdynNavigateRoute>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BosdynNavigateRoute>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::BosdynNavigateRoute>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_ROUTE__TRAITS_HPP_
