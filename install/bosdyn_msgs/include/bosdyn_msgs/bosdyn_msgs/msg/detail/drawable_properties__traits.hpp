// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DrawableProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/drawable_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'color'
#include "bosdyn_msgs/msg/detail/drawable_properties_color__traits.hpp"
// Member 'drawable'
#include "bosdyn_msgs/msg/detail/drawable_properties_one_of_drawable__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DrawableProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
    out << ", ";
  }

  // member: color_is_set
  {
    out << "color_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.color_is_set, out);
    out << ", ";
  }

  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: wireframe
  {
    out << "wireframe: ";
    rosidl_generator_traits::value_to_yaml(msg.wireframe, out);
    out << ", ";
  }

  // member: drawable
  {
    out << "drawable: ";
    to_flow_style_yaml(msg.drawable, out);
    out << ", ";
  }

  // member: frame_name_drawable
  {
    out << "frame_name_drawable: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_drawable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrawableProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }

  // member: color_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.color_is_set, out);
    out << "\n";
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: wireframe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wireframe: ";
    rosidl_generator_traits::value_to_yaml(msg.wireframe, out);
    out << "\n";
  }

  // member: drawable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drawable:\n";
    to_block_style_yaml(msg.drawable, out, indentation + 2);
  }

  // member: frame_name_drawable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name_drawable: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_drawable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrawableProperties & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DrawableProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DrawableProperties & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DrawableProperties>()
{
  return "bosdyn_msgs::msg::DrawableProperties";
}

template<>
inline const char * name<bosdyn_msgs::msg::DrawableProperties>()
{
  return "bosdyn_msgs/msg/DrawableProperties";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DrawableProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DrawableProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DrawableProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES__TRAITS_HPP_
