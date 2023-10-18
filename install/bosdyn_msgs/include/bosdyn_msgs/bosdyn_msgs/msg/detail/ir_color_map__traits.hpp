// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/IrColorMap.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/ir_color_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'colormap'
#include "bosdyn_msgs/msg/detail/ir_color_map_color_map__traits.hpp"
// Member 'scale'
#include "bosdyn_msgs/msg/detail/ir_color_map_scaling_pair__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IrColorMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: colormap
  {
    out << "colormap: ";
    to_flow_style_yaml(msg.colormap, out);
    out << ", ";
  }

  // member: scale
  {
    out << "scale: ";
    to_flow_style_yaml(msg.scale, out);
    out << ", ";
  }

  // member: scale_is_set
  {
    out << "scale_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_is_set, out);
    out << ", ";
  }

  // member: auto_scale
  {
    out << "auto_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_scale, out);
    out << ", ";
  }

  // member: auto_scale_is_set
  {
    out << "auto_scale_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_scale_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IrColorMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: colormap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "colormap:\n";
    to_block_style_yaml(msg.colormap, out, indentation + 2);
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale:\n";
    to_block_style_yaml(msg.scale, out, indentation + 2);
  }

  // member: scale_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_is_set, out);
    out << "\n";
  }

  // member: auto_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_scale, out);
    out << "\n";
  }

  // member: auto_scale_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_scale_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_scale_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IrColorMap & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::IrColorMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::IrColorMap & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::IrColorMap>()
{
  return "bosdyn_msgs::msg::IrColorMap";
}

template<>
inline const char * name<bosdyn_msgs::msg::IrColorMap>()
{
  return "bosdyn_msgs/msg/IrColorMap";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::IrColorMap>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::IrColorMapColorMap>::value && has_fixed_size<bosdyn_msgs::msg::IrColorMapScalingPair>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::IrColorMap>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::IrColorMapColorMap>::value && has_bounded_size<bosdyn_msgs::msg::IrColorMapScalingPair>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::IrColorMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP__TRAITS_HPP_
