// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GripperCameraParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/gripper_camera_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperCameraParams_sharpness_is_set
{
public:
  explicit Init_GripperCameraParams_sharpness_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GripperCameraParams sharpness_is_set(::bosdyn_msgs::msg::GripperCameraParams::_sharpness_is_set_type arg)
  {
    msg_.sharpness_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_sharpness
{
public:
  explicit Init_GripperCameraParams_sharpness(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_sharpness_is_set sharpness(::bosdyn_msgs::msg::GripperCameraParams::_sharpness_type arg)
  {
    msg_.sharpness = std::move(arg);
    return Init_GripperCameraParams_sharpness_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_white_balance_temperature_is_set
{
public:
  explicit Init_GripperCameraParams_white_balance_temperature_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_sharpness white_balance_temperature_is_set(::bosdyn_msgs::msg::GripperCameraParams::_white_balance_temperature_is_set_type arg)
  {
    msg_.white_balance_temperature_is_set = std::move(arg);
    return Init_GripperCameraParams_sharpness(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_white_balance_temperature
{
public:
  explicit Init_GripperCameraParams_white_balance_temperature(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_white_balance_temperature_is_set white_balance_temperature(::bosdyn_msgs::msg::GripperCameraParams::_white_balance_temperature_type arg)
  {
    msg_.white_balance_temperature = std::move(arg);
    return Init_GripperCameraParams_white_balance_temperature_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_gamma_is_set
{
public:
  explicit Init_GripperCameraParams_gamma_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_white_balance_temperature gamma_is_set(::bosdyn_msgs::msg::GripperCameraParams::_gamma_is_set_type arg)
  {
    msg_.gamma_is_set = std::move(arg);
    return Init_GripperCameraParams_white_balance_temperature(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_gamma
{
public:
  explicit Init_GripperCameraParams_gamma(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_gamma_is_set gamma(::bosdyn_msgs::msg::GripperCameraParams::_gamma_type arg)
  {
    msg_.gamma = std::move(arg);
    return Init_GripperCameraParams_gamma_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_white_balance_temperature_auto_is_set
{
public:
  explicit Init_GripperCameraParams_white_balance_temperature_auto_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_gamma white_balance_temperature_auto_is_set(::bosdyn_msgs::msg::GripperCameraParams::_white_balance_temperature_auto_is_set_type arg)
  {
    msg_.white_balance_temperature_auto_is_set = std::move(arg);
    return Init_GripperCameraParams_gamma(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_white_balance_temperature_auto
{
public:
  explicit Init_GripperCameraParams_white_balance_temperature_auto(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_white_balance_temperature_auto_is_set white_balance_temperature_auto(::bosdyn_msgs::msg::GripperCameraParams::_white_balance_temperature_auto_type arg)
  {
    msg_.white_balance_temperature_auto = std::move(arg);
    return Init_GripperCameraParams_white_balance_temperature_auto_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_led_torch_brightness_is_set
{
public:
  explicit Init_GripperCameraParams_led_torch_brightness_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_white_balance_temperature_auto led_torch_brightness_is_set(::bosdyn_msgs::msg::GripperCameraParams::_led_torch_brightness_is_set_type arg)
  {
    msg_.led_torch_brightness_is_set = std::move(arg);
    return Init_GripperCameraParams_white_balance_temperature_auto(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_led_torch_brightness
{
public:
  explicit Init_GripperCameraParams_led_torch_brightness(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_led_torch_brightness_is_set led_torch_brightness(::bosdyn_msgs::msg::GripperCameraParams::_led_torch_brightness_type arg)
  {
    msg_.led_torch_brightness = std::move(arg);
    return Init_GripperCameraParams_led_torch_brightness_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_led_mode
{
public:
  explicit Init_GripperCameraParams_led_mode(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_led_torch_brightness led_mode(::bosdyn_msgs::msg::GripperCameraParams::_led_mode_type arg)
  {
    msg_.led_mode = std::move(arg);
    return Init_GripperCameraParams_led_torch_brightness(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_hdr
{
public:
  explicit Init_GripperCameraParams_hdr(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_led_mode hdr(::bosdyn_msgs::msg::GripperCameraParams::_hdr_type arg)
  {
    msg_.hdr = std::move(arg);
    return Init_GripperCameraParams_led_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_draw_focus_roi_rectangle_is_set
{
public:
  explicit Init_GripperCameraParams_draw_focus_roi_rectangle_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_hdr draw_focus_roi_rectangle_is_set(::bosdyn_msgs::msg::GripperCameraParams::_draw_focus_roi_rectangle_is_set_type arg)
  {
    msg_.draw_focus_roi_rectangle_is_set = std::move(arg);
    return Init_GripperCameraParams_hdr(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_draw_focus_roi_rectangle
{
public:
  explicit Init_GripperCameraParams_draw_focus_roi_rectangle(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_draw_focus_roi_rectangle_is_set draw_focus_roi_rectangle(::bosdyn_msgs::msg::GripperCameraParams::_draw_focus_roi_rectangle_type arg)
  {
    msg_.draw_focus_roi_rectangle = std::move(arg);
    return Init_GripperCameraParams_draw_focus_roi_rectangle_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_focus_roi_is_set
{
public:
  explicit Init_GripperCameraParams_focus_roi_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_draw_focus_roi_rectangle focus_roi_is_set(::bosdyn_msgs::msg::GripperCameraParams::_focus_roi_is_set_type arg)
  {
    msg_.focus_roi_is_set = std::move(arg);
    return Init_GripperCameraParams_draw_focus_roi_rectangle(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_focus_roi
{
public:
  explicit Init_GripperCameraParams_focus_roi(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_focus_roi_is_set focus_roi(::bosdyn_msgs::msg::GripperCameraParams::_focus_roi_type arg)
  {
    msg_.focus_roi = std::move(arg);
    return Init_GripperCameraParams_focus_roi_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_focus_absolute_is_set
{
public:
  explicit Init_GripperCameraParams_focus_absolute_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_focus_roi focus_absolute_is_set(::bosdyn_msgs::msg::GripperCameraParams::_focus_absolute_is_set_type arg)
  {
    msg_.focus_absolute_is_set = std::move(arg);
    return Init_GripperCameraParams_focus_roi(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_focus_absolute
{
public:
  explicit Init_GripperCameraParams_focus_absolute(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_focus_absolute_is_set focus_absolute(::bosdyn_msgs::msg::GripperCameraParams::_focus_absolute_type arg)
  {
    msg_.focus_absolute = std::move(arg);
    return Init_GripperCameraParams_focus_absolute_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_focus_auto_is_set
{
public:
  explicit Init_GripperCameraParams_focus_auto_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_focus_absolute focus_auto_is_set(::bosdyn_msgs::msg::GripperCameraParams::_focus_auto_is_set_type arg)
  {
    msg_.focus_auto_is_set = std::move(arg);
    return Init_GripperCameraParams_focus_absolute(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_focus_auto
{
public:
  explicit Init_GripperCameraParams_focus_auto(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_focus_auto_is_set focus_auto(::bosdyn_msgs::msg::GripperCameraParams::_focus_auto_type arg)
  {
    msg_.focus_auto = std::move(arg);
    return Init_GripperCameraParams_focus_auto_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_exposure_roi_is_set
{
public:
  explicit Init_GripperCameraParams_exposure_roi_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_focus_auto exposure_roi_is_set(::bosdyn_msgs::msg::GripperCameraParams::_exposure_roi_is_set_type arg)
  {
    msg_.exposure_roi_is_set = std::move(arg);
    return Init_GripperCameraParams_focus_auto(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_exposure_roi
{
public:
  explicit Init_GripperCameraParams_exposure_roi(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_exposure_roi_is_set exposure_roi(::bosdyn_msgs::msg::GripperCameraParams::_exposure_roi_type arg)
  {
    msg_.exposure_roi = std::move(arg);
    return Init_GripperCameraParams_exposure_roi_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_exposure_absolute_is_set
{
public:
  explicit Init_GripperCameraParams_exposure_absolute_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_exposure_roi exposure_absolute_is_set(::bosdyn_msgs::msg::GripperCameraParams::_exposure_absolute_is_set_type arg)
  {
    msg_.exposure_absolute_is_set = std::move(arg);
    return Init_GripperCameraParams_exposure_roi(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_exposure_absolute
{
public:
  explicit Init_GripperCameraParams_exposure_absolute(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_exposure_absolute_is_set exposure_absolute(::bosdyn_msgs::msg::GripperCameraParams::_exposure_absolute_type arg)
  {
    msg_.exposure_absolute = std::move(arg);
    return Init_GripperCameraParams_exposure_absolute_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_exposure_auto_is_set
{
public:
  explicit Init_GripperCameraParams_exposure_auto_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_exposure_absolute exposure_auto_is_set(::bosdyn_msgs::msg::GripperCameraParams::_exposure_auto_is_set_type arg)
  {
    msg_.exposure_auto_is_set = std::move(arg);
    return Init_GripperCameraParams_exposure_absolute(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_exposure_auto
{
public:
  explicit Init_GripperCameraParams_exposure_auto(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_exposure_auto_is_set exposure_auto(::bosdyn_msgs::msg::GripperCameraParams::_exposure_auto_type arg)
  {
    msg_.exposure_auto = std::move(arg);
    return Init_GripperCameraParams_exposure_auto_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_gain_is_set
{
public:
  explicit Init_GripperCameraParams_gain_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_exposure_auto gain_is_set(::bosdyn_msgs::msg::GripperCameraParams::_gain_is_set_type arg)
  {
    msg_.gain_is_set = std::move(arg);
    return Init_GripperCameraParams_exposure_auto(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_gain
{
public:
  explicit Init_GripperCameraParams_gain(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_gain_is_set gain(::bosdyn_msgs::msg::GripperCameraParams::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_GripperCameraParams_gain_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_saturation_is_set
{
public:
  explicit Init_GripperCameraParams_saturation_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_gain saturation_is_set(::bosdyn_msgs::msg::GripperCameraParams::_saturation_is_set_type arg)
  {
    msg_.saturation_is_set = std::move(arg);
    return Init_GripperCameraParams_gain(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_saturation
{
public:
  explicit Init_GripperCameraParams_saturation(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_saturation_is_set saturation(::bosdyn_msgs::msg::GripperCameraParams::_saturation_type arg)
  {
    msg_.saturation = std::move(arg);
    return Init_GripperCameraParams_saturation_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_contrast_is_set
{
public:
  explicit Init_GripperCameraParams_contrast_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_saturation contrast_is_set(::bosdyn_msgs::msg::GripperCameraParams::_contrast_is_set_type arg)
  {
    msg_.contrast_is_set = std::move(arg);
    return Init_GripperCameraParams_saturation(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_contrast
{
public:
  explicit Init_GripperCameraParams_contrast(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_contrast_is_set contrast(::bosdyn_msgs::msg::GripperCameraParams::_contrast_type arg)
  {
    msg_.contrast = std::move(arg);
    return Init_GripperCameraParams_contrast_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_brightness_is_set
{
public:
  explicit Init_GripperCameraParams_brightness_is_set(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_contrast brightness_is_set(::bosdyn_msgs::msg::GripperCameraParams::_brightness_is_set_type arg)
  {
    msg_.brightness_is_set = std::move(arg);
    return Init_GripperCameraParams_contrast(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_brightness
{
public:
  explicit Init_GripperCameraParams_brightness(::bosdyn_msgs::msg::GripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParams_brightness_is_set brightness(::bosdyn_msgs::msg::GripperCameraParams::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return Init_GripperCameraParams_brightness_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

class Init_GripperCameraParams_camera_mode
{
public:
  Init_GripperCameraParams_camera_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCameraParams_brightness camera_mode(::bosdyn_msgs::msg::GripperCameraParams::_camera_mode_type arg)
  {
    msg_.camera_mode = std::move(arg);
    return Init_GripperCameraParams_brightness(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GripperCameraParams>()
{
  return bosdyn_msgs::msg::builder::Init_GripperCameraParams_camera_mode();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS__BUILDER_HPP_
