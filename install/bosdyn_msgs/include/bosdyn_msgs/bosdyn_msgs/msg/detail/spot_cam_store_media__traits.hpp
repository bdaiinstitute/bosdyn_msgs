// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SpotCamStoreMedia.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_STORE_MEDIA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_STORE_MEDIA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/spot_cam_store_media__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'camera'
#include "bosdyn_msgs/msg/detail/camera__traits.hpp"
// Member 'type'
#include "bosdyn_msgs/msg/detail/logpoint_record_type__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpotCamStoreMedia & msg,
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
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: tag
  {
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpotCamStoreMedia & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: tag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpotCamStoreMedia & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SpotCamStoreMedia & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SpotCamStoreMedia & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SpotCamStoreMedia>()
{
  return "bosdyn_msgs::msg::SpotCamStoreMedia";
}

template<>
inline const char * name<bosdyn_msgs::msg::SpotCamStoreMedia>()
{
  return "bosdyn_msgs/msg/SpotCamStoreMedia";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SpotCamStoreMedia>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SpotCamStoreMedia>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SpotCamStoreMedia>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_STORE_MEDIA__TRAITS_HPP_
