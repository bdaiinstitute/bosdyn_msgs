// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RaycastRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/raycast_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'ray'
#include "bosdyn_msgs/msg/detail/ray__traits.hpp"
// Member 'intersection_types'
#include "bosdyn_msgs/msg/detail/ray_intersection_type__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RaycastRequest & msg,
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

  // member: ray_frame_name
  {
    out << "ray_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_frame_name, out);
    out << ", ";
  }

  // member: ray
  {
    out << "ray: ";
    to_flow_style_yaml(msg.ray, out);
    out << ", ";
  }

  // member: ray_is_set
  {
    out << "ray_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_is_set, out);
    out << ", ";
  }

  // member: min_intersection_distance
  {
    out << "min_intersection_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.min_intersection_distance, out);
    out << ", ";
  }

  // member: intersection_types
  {
    if (msg.intersection_types.size() == 0) {
      out << "intersection_types: []";
    } else {
      out << "intersection_types: [";
      size_t pending_items = msg.intersection_types.size();
      for (auto item : msg.intersection_types) {
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
  const RaycastRequest & msg,
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

  // member: ray_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_frame_name, out);
    out << "\n";
  }

  // member: ray
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray:\n";
    to_block_style_yaml(msg.ray, out, indentation + 2);
  }

  // member: ray_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_is_set, out);
    out << "\n";
  }

  // member: min_intersection_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_intersection_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.min_intersection_distance, out);
    out << "\n";
  }

  // member: intersection_types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersection_types.size() == 0) {
      out << "intersection_types: []\n";
    } else {
      out << "intersection_types:\n";
      for (auto item : msg.intersection_types) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RaycastRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RaycastRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RaycastRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RaycastRequest>()
{
  return "bosdyn_msgs::msg::RaycastRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::RaycastRequest>()
{
  return "bosdyn_msgs/msg/RaycastRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RaycastRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RaycastRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RaycastRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__TRAITS_HPP_
