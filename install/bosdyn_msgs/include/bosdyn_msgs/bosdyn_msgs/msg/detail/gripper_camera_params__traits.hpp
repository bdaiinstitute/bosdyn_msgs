// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GripperCameraParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/gripper_camera_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'camera_mode'
#include "bosdyn_msgs/msg/detail/gripper_camera_params_camera_mode__traits.hpp"
// Member 'exposure_roi'
// Member 'focus_roi'
#include "bosdyn_msgs/msg/detail/roi_parameters__traits.hpp"
// Member 'hdr'
#include "bosdyn_msgs/msg/detail/hdr_parameters__traits.hpp"
// Member 'led_mode'
#include "bosdyn_msgs/msg/detail/gripper_camera_params_led_mode__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperCameraParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_mode
  {
    out << "camera_mode: ";
    to_flow_style_yaml(msg.camera_mode, out);
    out << ", ";
  }

  // member: brightness
  {
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << ", ";
  }

  // member: brightness_is_set
  {
    out << "brightness_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_is_set, out);
    out << ", ";
  }

  // member: contrast
  {
    out << "contrast: ";
    rosidl_generator_traits::value_to_yaml(msg.contrast, out);
    out << ", ";
  }

  // member: contrast_is_set
  {
    out << "contrast_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.contrast_is_set, out);
    out << ", ";
  }

  // member: saturation
  {
    out << "saturation: ";
    rosidl_generator_traits::value_to_yaml(msg.saturation, out);
    out << ", ";
  }

  // member: saturation_is_set
  {
    out << "saturation_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.saturation_is_set, out);
    out << ", ";
  }

  // member: gain
  {
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << ", ";
  }

  // member: gain_is_set
  {
    out << "gain_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_is_set, out);
    out << ", ";
  }

  // member: exposure_auto
  {
    out << "exposure_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_auto, out);
    out << ", ";
  }

  // member: exposure_auto_is_set
  {
    out << "exposure_auto_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_auto_is_set, out);
    out << ", ";
  }

  // member: exposure_absolute
  {
    out << "exposure_absolute: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_absolute, out);
    out << ", ";
  }

  // member: exposure_absolute_is_set
  {
    out << "exposure_absolute_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_absolute_is_set, out);
    out << ", ";
  }

  // member: exposure_roi
  {
    out << "exposure_roi: ";
    to_flow_style_yaml(msg.exposure_roi, out);
    out << ", ";
  }

  // member: exposure_roi_is_set
  {
    out << "exposure_roi_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_roi_is_set, out);
    out << ", ";
  }

  // member: focus_auto
  {
    out << "focus_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_auto, out);
    out << ", ";
  }

  // member: focus_auto_is_set
  {
    out << "focus_auto_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_auto_is_set, out);
    out << ", ";
  }

  // member: focus_absolute
  {
    out << "focus_absolute: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_absolute, out);
    out << ", ";
  }

  // member: focus_absolute_is_set
  {
    out << "focus_absolute_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_absolute_is_set, out);
    out << ", ";
  }

  // member: focus_roi
  {
    out << "focus_roi: ";
    to_flow_style_yaml(msg.focus_roi, out);
    out << ", ";
  }

  // member: focus_roi_is_set
  {
    out << "focus_roi_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_roi_is_set, out);
    out << ", ";
  }

  // member: draw_focus_roi_rectangle
  {
    out << "draw_focus_roi_rectangle: ";
    rosidl_generator_traits::value_to_yaml(msg.draw_focus_roi_rectangle, out);
    out << ", ";
  }

  // member: draw_focus_roi_rectangle_is_set
  {
    out << "draw_focus_roi_rectangle_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.draw_focus_roi_rectangle_is_set, out);
    out << ", ";
  }

  // member: hdr
  {
    out << "hdr: ";
    to_flow_style_yaml(msg.hdr, out);
    out << ", ";
  }

  // member: led_mode
  {
    out << "led_mode: ";
    to_flow_style_yaml(msg.led_mode, out);
    out << ", ";
  }

  // member: led_torch_brightness
  {
    out << "led_torch_brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.led_torch_brightness, out);
    out << ", ";
  }

  // member: led_torch_brightness_is_set
  {
    out << "led_torch_brightness_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.led_torch_brightness_is_set, out);
    out << ", ";
  }

  // member: white_balance_temperature_auto
  {
    out << "white_balance_temperature_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_temperature_auto, out);
    out << ", ";
  }

  // member: white_balance_temperature_auto_is_set
  {
    out << "white_balance_temperature_auto_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_temperature_auto_is_set, out);
    out << ", ";
  }

  // member: gamma
  {
    out << "gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma, out);
    out << ", ";
  }

  // member: gamma_is_set
  {
    out << "gamma_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma_is_set, out);
    out << ", ";
  }

  // member: white_balance_temperature
  {
    out << "white_balance_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_temperature, out);
    out << ", ";
  }

  // member: white_balance_temperature_is_set
  {
    out << "white_balance_temperature_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_temperature_is_set, out);
    out << ", ";
  }

  // member: sharpness
  {
    out << "sharpness: ";
    rosidl_generator_traits::value_to_yaml(msg.sharpness, out);
    out << ", ";
  }

  // member: sharpness_is_set
  {
    out << "sharpness_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sharpness_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCameraParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_mode:\n";
    to_block_style_yaml(msg.camera_mode, out, indentation + 2);
  }

  // member: brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << "\n";
  }

  // member: brightness_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_is_set, out);
    out << "\n";
  }

  // member: contrast
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contrast: ";
    rosidl_generator_traits::value_to_yaml(msg.contrast, out);
    out << "\n";
  }

  // member: contrast_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contrast_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.contrast_is_set, out);
    out << "\n";
  }

  // member: saturation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saturation: ";
    rosidl_generator_traits::value_to_yaml(msg.saturation, out);
    out << "\n";
  }

  // member: saturation_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saturation_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.saturation_is_set, out);
    out << "\n";
  }

  // member: gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << "\n";
  }

  // member: gain_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_is_set, out);
    out << "\n";
  }

  // member: exposure_auto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_auto, out);
    out << "\n";
  }

  // member: exposure_auto_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_auto_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_auto_is_set, out);
    out << "\n";
  }

  // member: exposure_absolute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_absolute: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_absolute, out);
    out << "\n";
  }

  // member: exposure_absolute_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_absolute_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_absolute_is_set, out);
    out << "\n";
  }

  // member: exposure_roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_roi:\n";
    to_block_style_yaml(msg.exposure_roi, out, indentation + 2);
  }

  // member: exposure_roi_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_roi_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_roi_is_set, out);
    out << "\n";
  }

  // member: focus_auto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_auto, out);
    out << "\n";
  }

  // member: focus_auto_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_auto_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_auto_is_set, out);
    out << "\n";
  }

  // member: focus_absolute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_absolute: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_absolute, out);
    out << "\n";
  }

  // member: focus_absolute_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_absolute_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_absolute_is_set, out);
    out << "\n";
  }

  // member: focus_roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_roi:\n";
    to_block_style_yaml(msg.focus_roi, out, indentation + 2);
  }

  // member: focus_roi_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_roi_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_roi_is_set, out);
    out << "\n";
  }

  // member: draw_focus_roi_rectangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "draw_focus_roi_rectangle: ";
    rosidl_generator_traits::value_to_yaml(msg.draw_focus_roi_rectangle, out);
    out << "\n";
  }

  // member: draw_focus_roi_rectangle_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "draw_focus_roi_rectangle_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.draw_focus_roi_rectangle_is_set, out);
    out << "\n";
  }

  // member: hdr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdr:\n";
    to_block_style_yaml(msg.hdr, out, indentation + 2);
  }

  // member: led_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_mode:\n";
    to_block_style_yaml(msg.led_mode, out, indentation + 2);
  }

  // member: led_torch_brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_torch_brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.led_torch_brightness, out);
    out << "\n";
  }

  // member: led_torch_brightness_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_torch_brightness_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.led_torch_brightness_is_set, out);
    out << "\n";
  }

  // member: white_balance_temperature_auto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "white_balance_temperature_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_temperature_auto, out);
    out << "\n";
  }

  // member: white_balance_temperature_auto_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "white_balance_temperature_auto_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_temperature_auto_is_set, out);
    out << "\n";
  }

  // member: gamma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma, out);
    out << "\n";
  }

  // member: gamma_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamma_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma_is_set, out);
    out << "\n";
  }

  // member: white_balance_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "white_balance_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_temperature, out);
    out << "\n";
  }

  // member: white_balance_temperature_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "white_balance_temperature_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_temperature_is_set, out);
    out << "\n";
  }

  // member: sharpness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sharpness: ";
    rosidl_generator_traits::value_to_yaml(msg.sharpness, out);
    out << "\n";
  }

  // member: sharpness_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sharpness_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sharpness_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCameraParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GripperCameraParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GripperCameraParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GripperCameraParams>()
{
  return "bosdyn_msgs::msg::GripperCameraParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::GripperCameraParams>()
{
  return "bosdyn_msgs/msg/GripperCameraParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GripperCameraParams>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::GripperCameraParamsCameraMode>::value && has_fixed_size<bosdyn_msgs::msg::GripperCameraParamsLedMode>::value && has_fixed_size<bosdyn_msgs::msg::HdrParameters>::value && has_fixed_size<bosdyn_msgs::msg::RoiParameters>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GripperCameraParams>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::GripperCameraParamsCameraMode>::value && has_bounded_size<bosdyn_msgs::msg::GripperCameraParamsLedMode>::value && has_bounded_size<bosdyn_msgs::msg::HdrParameters>::value && has_bounded_size<bosdyn_msgs::msg::RoiParameters>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::GripperCameraParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS__TRAITS_HPP_
