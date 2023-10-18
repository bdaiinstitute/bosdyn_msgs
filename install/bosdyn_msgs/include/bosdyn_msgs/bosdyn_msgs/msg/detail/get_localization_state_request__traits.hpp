// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetLocalizationStateRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_localization_state_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetLocalizationStateRequest & msg,
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

  // member: waypoint_id
  {
    out << "waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_id, out);
    out << ", ";
  }

  // member: request_live_point_cloud
  {
    out << "request_live_point_cloud: ";
    rosidl_generator_traits::value_to_yaml(msg.request_live_point_cloud, out);
    out << ", ";
  }

  // member: request_live_images
  {
    out << "request_live_images: ";
    rosidl_generator_traits::value_to_yaml(msg.request_live_images, out);
    out << ", ";
  }

  // member: request_live_terrain_maps
  {
    out << "request_live_terrain_maps: ";
    rosidl_generator_traits::value_to_yaml(msg.request_live_terrain_maps, out);
    out << ", ";
  }

  // member: request_live_world_objects
  {
    out << "request_live_world_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.request_live_world_objects, out);
    out << ", ";
  }

  // member: request_live_robot_state
  {
    out << "request_live_robot_state: ";
    rosidl_generator_traits::value_to_yaml(msg.request_live_robot_state, out);
    out << ", ";
  }

  // member: compress_live_point_cloud
  {
    out << "compress_live_point_cloud: ";
    rosidl_generator_traits::value_to_yaml(msg.compress_live_point_cloud, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLocalizationStateRequest & msg,
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

  // member: waypoint_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_id, out);
    out << "\n";
  }

  // member: request_live_point_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_live_point_cloud: ";
    rosidl_generator_traits::value_to_yaml(msg.request_live_point_cloud, out);
    out << "\n";
  }

  // member: request_live_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_live_images: ";
    rosidl_generator_traits::value_to_yaml(msg.request_live_images, out);
    out << "\n";
  }

  // member: request_live_terrain_maps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_live_terrain_maps: ";
    rosidl_generator_traits::value_to_yaml(msg.request_live_terrain_maps, out);
    out << "\n";
  }

  // member: request_live_world_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_live_world_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.request_live_world_objects, out);
    out << "\n";
  }

  // member: request_live_robot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_live_robot_state: ";
    rosidl_generator_traits::value_to_yaml(msg.request_live_robot_state, out);
    out << "\n";
  }

  // member: compress_live_point_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "compress_live_point_cloud: ";
    rosidl_generator_traits::value_to_yaml(msg.compress_live_point_cloud, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLocalizationStateRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GetLocalizationStateRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetLocalizationStateRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetLocalizationStateRequest>()
{
  return "bosdyn_msgs::msg::GetLocalizationStateRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetLocalizationStateRequest>()
{
  return "bosdyn_msgs/msg/GetLocalizationStateRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetLocalizationStateRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetLocalizationStateRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::GetLocalizationStateRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_REQUEST__TRAITS_HPP_
