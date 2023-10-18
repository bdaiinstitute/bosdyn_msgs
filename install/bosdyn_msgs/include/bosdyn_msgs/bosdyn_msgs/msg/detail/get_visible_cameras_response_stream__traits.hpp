// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetVisibleCamerasResponseStream.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_visible_cameras_response_stream__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'window'
#include "bosdyn_msgs/msg/detail/get_visible_cameras_response_stream_window__traits.hpp"
// Member 'camera'
#include "bosdyn_msgs/msg/detail/camera__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetVisibleCamerasResponseStream & msg,
  std::ostream & out)
{
  out << "{";
  // member: window
  {
    out << "window: ";
    to_flow_style_yaml(msg.window, out);
    out << ", ";
  }

  // member: window_is_set
  {
    out << "window_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.window_is_set, out);
    out << ", ";
  }

  // member: camera
  {
    out << "camera: ";
    to_flow_style_yaml(msg.camera, out);
    out << ", ";
  }

  // member: camera_is_set
  {
    out << "camera_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetVisibleCamerasResponseStream & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: window
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "window:\n";
    to_block_style_yaml(msg.window, out, indentation + 2);
  }

  // member: window_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "window_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.window_is_set, out);
    out << "\n";
  }

  // member: camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera:\n";
    to_block_style_yaml(msg.camera, out, indentation + 2);
  }

  // member: camera_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetVisibleCamerasResponseStream & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GetVisibleCamerasResponseStream & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetVisibleCamerasResponseStream & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetVisibleCamerasResponseStream>()
{
  return "bosdyn_msgs::msg::GetVisibleCamerasResponseStream";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetVisibleCamerasResponseStream>()
{
  return "bosdyn_msgs/msg/GetVisibleCamerasResponseStream";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetVisibleCamerasResponseStream>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Camera>::value && has_fixed_size<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetVisibleCamerasResponseStream>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Camera>::value && has_bounded_size<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::GetVisibleCamerasResponseStream>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__TRAITS_HPP_
