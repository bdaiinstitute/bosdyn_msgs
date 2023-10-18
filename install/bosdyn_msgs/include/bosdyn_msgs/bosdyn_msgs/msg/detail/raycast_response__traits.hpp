// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RaycastResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAYCAST_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAYCAST_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/raycast_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/raycast_response_status__traits.hpp"
// Member 'hits'
#include "bosdyn_msgs/msg/detail/ray_intersection__traits.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RaycastResponse & msg,
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

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: hit_frame_name
  {
    out << "hit_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.hit_frame_name, out);
    out << ", ";
  }

  // member: hits
  {
    if (msg.hits.size() == 0) {
      out << "hits: []";
    } else {
      out << "hits: [";
      size_t pending_items = msg.hits.size();
      for (auto item : msg.hits) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: transforms_snapshot
  {
    out << "transforms_snapshot: ";
    to_flow_style_yaml(msg.transforms_snapshot, out);
    out << ", ";
  }

  // member: transforms_snapshot_is_set
  {
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RaycastResponse & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: hit_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hit_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.hit_frame_name, out);
    out << "\n";
  }

  // member: hits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hits.size() == 0) {
      out << "hits: []\n";
    } else {
      out << "hits:\n";
      for (auto item : msg.hits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: transforms_snapshot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot:\n";
    to_block_style_yaml(msg.transforms_snapshot, out, indentation + 2);
  }

  // member: transforms_snapshot_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RaycastResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RaycastResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RaycastResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RaycastResponse>()
{
  return "bosdyn_msgs::msg::RaycastResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::RaycastResponse>()
{
  return "bosdyn_msgs/msg/RaycastResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RaycastResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RaycastResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RaycastResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAYCAST_RESPONSE__TRAITS_HPP_
