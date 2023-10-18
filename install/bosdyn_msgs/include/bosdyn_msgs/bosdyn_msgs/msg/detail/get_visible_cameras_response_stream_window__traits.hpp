// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetVisibleCamerasResponseStreamWindow.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM_WINDOW__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM_WINDOW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_visible_cameras_response_stream_window__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetVisibleCamerasResponseStreamWindow & msg,
  std::ostream & out)
{
  out << "{";
  // member: xoffset
  {
    out << "xoffset: ";
    rosidl_generator_traits::value_to_yaml(msg.xoffset, out);
    out << ", ";
  }

  // member: yoffset
  {
    out << "yoffset: ";
    rosidl_generator_traits::value_to_yaml(msg.yoffset, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetVisibleCamerasResponseStreamWindow & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xoffset: ";
    rosidl_generator_traits::value_to_yaml(msg.xoffset, out);
    out << "\n";
  }

  // member: yoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yoffset: ";
    rosidl_generator_traits::value_to_yaml(msg.yoffset, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetVisibleCamerasResponseStreamWindow & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow>()
{
  return "bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow>()
{
  return "bosdyn_msgs/msg/GetVisibleCamerasResponseStreamWindow";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM_WINDOW__TRAITS_HPP_
