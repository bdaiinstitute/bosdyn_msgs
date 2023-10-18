// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RoiParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/roi_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'roi_percentage_in_image'
#include "bosdyn_msgs/msg/detail/vec2__traits.hpp"
// Member 'window_size'
#include "bosdyn_msgs/msg/detail/roi_parameters_roi_window_size__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoiParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: roi_percentage_in_image
  {
    out << "roi_percentage_in_image: ";
    to_flow_style_yaml(msg.roi_percentage_in_image, out);
    out << ", ";
  }

  // member: roi_percentage_in_image_is_set
  {
    out << "roi_percentage_in_image_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.roi_percentage_in_image_is_set, out);
    out << ", ";
  }

  // member: window_size
  {
    out << "window_size: ";
    to_flow_style_yaml(msg.window_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoiParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roi_percentage_in_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi_percentage_in_image:\n";
    to_block_style_yaml(msg.roi_percentage_in_image, out, indentation + 2);
  }

  // member: roi_percentage_in_image_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi_percentage_in_image_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.roi_percentage_in_image_is_set, out);
    out << "\n";
  }

  // member: window_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "window_size:\n";
    to_block_style_yaml(msg.window_size, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoiParameters & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RoiParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RoiParameters & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RoiParameters>()
{
  return "bosdyn_msgs::msg::RoiParameters";
}

template<>
inline const char * name<bosdyn_msgs::msg::RoiParameters>()
{
  return "bosdyn_msgs/msg/RoiParameters";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RoiParameters>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::RoiParametersRoiWindowSize>::value && has_fixed_size<bosdyn_msgs::msg::Vec2>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RoiParameters>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::RoiParametersRoiWindowSize>::value && has_bounded_size<bosdyn_msgs::msg::Vec2>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::RoiParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__TRAITS_HPP_
