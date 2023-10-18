// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'edge_id'
#include "bosdyn_msgs/msg/detail/edge_id__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Route & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoint_id
  {
    if (msg.waypoint_id.size() == 0) {
      out << "waypoint_id: []";
    } else {
      out << "waypoint_id: [";
      size_t pending_items = msg.waypoint_id.size();
      for (auto item : msg.waypoint_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: edge_id
  {
    if (msg.edge_id.size() == 0) {
      out << "edge_id: []";
    } else {
      out << "edge_id: [";
      size_t pending_items = msg.edge_id.size();
      for (auto item : msg.edge_id) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Route & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoint_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoint_id.size() == 0) {
      out << "waypoint_id: []\n";
    } else {
      out << "waypoint_id:\n";
      for (auto item : msg.waypoint_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: edge_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.edge_id.size() == 0) {
      out << "edge_id: []\n";
    } else {
      out << "edge_id:\n";
      for (auto item : msg.edge_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Route & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Route & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Route & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Route>()
{
  return "bosdyn_msgs::msg::Route";
}

template<>
inline const char * name<bosdyn_msgs::msg::Route>()
{
  return "bosdyn_msgs/msg/Route";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Route>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Route>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Route>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_
