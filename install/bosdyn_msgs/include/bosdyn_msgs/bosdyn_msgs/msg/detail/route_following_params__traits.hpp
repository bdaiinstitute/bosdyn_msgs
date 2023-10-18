// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RouteFollowingParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/route_following_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'new_cmd_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_start_route_behavior__traits.hpp"
// Member 'existing_cmd_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_resume_behavior__traits.hpp"
// Member 'route_blocked_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_route_blocked_behavior__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RouteFollowingParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: new_cmd_behavior
  {
    out << "new_cmd_behavior: ";
    to_flow_style_yaml(msg.new_cmd_behavior, out);
    out << ", ";
  }

  // member: existing_cmd_behavior
  {
    out << "existing_cmd_behavior: ";
    to_flow_style_yaml(msg.existing_cmd_behavior, out);
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
  const RouteFollowingParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: new_cmd_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_cmd_behavior:\n";
    to_block_style_yaml(msg.new_cmd_behavior, out, indentation + 2);
  }

  // member: existing_cmd_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "existing_cmd_behavior:\n";
    to_block_style_yaml(msg.existing_cmd_behavior, out, indentation + 2);
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

inline std::string to_yaml(const RouteFollowingParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RouteFollowingParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RouteFollowingParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RouteFollowingParams>()
{
  return "bosdyn_msgs::msg::RouteFollowingParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::RouteFollowingParams>()
{
  return "bosdyn_msgs/msg/RouteFollowingParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RouteFollowingParams>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::RouteFollowingParamsResumeBehavior>::value && has_fixed_size<bosdyn_msgs::msg::RouteFollowingParamsRouteBlockedBehavior>::value && has_fixed_size<bosdyn_msgs::msg::RouteFollowingParamsStartRouteBehavior>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RouteFollowingParams>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::RouteFollowingParamsResumeBehavior>::value && has_bounded_size<bosdyn_msgs::msg::RouteFollowingParamsRouteBlockedBehavior>::value && has_bounded_size<bosdyn_msgs::msg::RouteFollowingParamsStartRouteBehavior>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::RouteFollowingParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS__TRAITS_HPP_
