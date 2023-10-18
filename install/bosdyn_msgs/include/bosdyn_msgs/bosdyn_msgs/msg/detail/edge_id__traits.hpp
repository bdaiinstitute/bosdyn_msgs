// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/EdgeId.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_ID__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/edge_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EdgeId & msg,
  std::ostream & out)
{
  out << "{";
  // member: from_waypoint
  {
    out << "from_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.from_waypoint, out);
    out << ", ";
  }

  // member: to_waypoint
  {
    out << "to_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.to_waypoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EdgeId & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: from_waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.from_waypoint, out);
    out << "\n";
  }

  // member: to_waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "to_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.to_waypoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EdgeId & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::EdgeId & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::EdgeId & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::EdgeId>()
{
  return "bosdyn_msgs::msg::EdgeId";
}

template<>
inline const char * name<bosdyn_msgs::msg::EdgeId>()
{
  return "bosdyn_msgs/msg/EdgeId";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::EdgeId>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::EdgeId>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::EdgeId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_ID__TRAITS_HPP_
