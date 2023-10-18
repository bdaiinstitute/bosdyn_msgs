// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PtzDescription.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/ptz_description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pan_limit'
// Member 'tilt_limit'
// Member 'zoom_limit'
#include "bosdyn_msgs/msg/detail/ptz_description_limits__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PtzDescription & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: pan_limit
  {
    out << "pan_limit: ";
    to_flow_style_yaml(msg.pan_limit, out);
    out << ", ";
  }

  // member: pan_limit_is_set
  {
    out << "pan_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_limit_is_set, out);
    out << ", ";
  }

  // member: tilt_limit
  {
    out << "tilt_limit: ";
    to_flow_style_yaml(msg.tilt_limit, out);
    out << ", ";
  }

  // member: tilt_limit_is_set
  {
    out << "tilt_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_limit_is_set, out);
    out << ", ";
  }

  // member: zoom_limit
  {
    out << "zoom_limit: ";
    to_flow_style_yaml(msg.zoom_limit, out);
    out << ", ";
  }

  // member: zoom_limit_is_set
  {
    out << "zoom_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.zoom_limit_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PtzDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: pan_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_limit:\n";
    to_block_style_yaml(msg.pan_limit, out, indentation + 2);
  }

  // member: pan_limit_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_limit_is_set, out);
    out << "\n";
  }

  // member: tilt_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_limit:\n";
    to_block_style_yaml(msg.tilt_limit, out, indentation + 2);
  }

  // member: tilt_limit_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_limit_is_set, out);
    out << "\n";
  }

  // member: zoom_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zoom_limit:\n";
    to_block_style_yaml(msg.zoom_limit, out, indentation + 2);
  }

  // member: zoom_limit_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zoom_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.zoom_limit_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PtzDescription & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PtzDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PtzDescription & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PtzDescription>()
{
  return "bosdyn_msgs::msg::PtzDescription";
}

template<>
inline const char * name<bosdyn_msgs::msg::PtzDescription>()
{
  return "bosdyn_msgs/msg/PtzDescription";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PtzDescription>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PtzDescription>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PtzDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION__TRAITS_HPP_
