// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BoundingBoxProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOUNDING_BOX_PROPERTIES__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOUNDING_BOX_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/bounding_box_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'size_ewrt_frame'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBoxProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: size_ewrt_frame
  {
    out << "size_ewrt_frame: ";
    to_flow_style_yaml(msg.size_ewrt_frame, out);
    out << ", ";
  }

  // member: size_ewrt_frame_is_set
  {
    out << "size_ewrt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.size_ewrt_frame_is_set, out);
    out << ", ";
  }

  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBoxProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: size_ewrt_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size_ewrt_frame:\n";
    to_block_style_yaml(msg.size_ewrt_frame, out, indentation + 2);
  }

  // member: size_ewrt_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size_ewrt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.size_ewrt_frame_is_set, out);
    out << "\n";
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBoxProperties & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BoundingBoxProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BoundingBoxProperties & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BoundingBoxProperties>()
{
  return "bosdyn_msgs::msg::BoundingBoxProperties";
}

template<>
inline const char * name<bosdyn_msgs::msg::BoundingBoxProperties>()
{
  return "bosdyn_msgs/msg/BoundingBoxProperties";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BoundingBoxProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BoundingBoxProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::BoundingBoxProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOUNDING_BOX_PROPERTIES__TRAITS_HPP_
