// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GripperCameraParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'camera_mode'
#include "bosdyn_msgs/msg/detail/gripper_camera_params_camera_mode__struct.hpp"
// Member 'exposure_roi'
// Member 'focus_roi'
#include "bosdyn_msgs/msg/detail/roi_parameters__struct.hpp"
// Member 'hdr'
#include "bosdyn_msgs/msg/detail/hdr_parameters__struct.hpp"
// Member 'led_mode'
#include "bosdyn_msgs/msg/detail/gripper_camera_params_led_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GripperCameraParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GripperCameraParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperCameraParams_
{
  using Type = GripperCameraParams_<ContainerAllocator>;

  explicit GripperCameraParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_mode(_init),
    exposure_roi(_init),
    focus_roi(_init),
    hdr(_init),
    led_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness = 0.0f;
      this->brightness_is_set = false;
      this->contrast = 0.0f;
      this->contrast_is_set = false;
      this->saturation = 0.0f;
      this->saturation_is_set = false;
      this->gain = 0.0f;
      this->gain_is_set = false;
      this->exposure_auto = false;
      this->exposure_auto_is_set = false;
      this->exposure_absolute = 0.0f;
      this->exposure_absolute_is_set = false;
      this->exposure_roi_is_set = false;
      this->focus_auto = false;
      this->focus_auto_is_set = false;
      this->focus_absolute = 0.0f;
      this->focus_absolute_is_set = false;
      this->focus_roi_is_set = false;
      this->draw_focus_roi_rectangle = false;
      this->draw_focus_roi_rectangle_is_set = false;
      this->led_torch_brightness = 0.0f;
      this->led_torch_brightness_is_set = false;
      this->white_balance_temperature_auto = false;
      this->white_balance_temperature_auto_is_set = false;
      this->gamma = 0.0f;
      this->gamma_is_set = false;
      this->white_balance_temperature = 0.0f;
      this->white_balance_temperature_is_set = false;
      this->sharpness = 0.0f;
      this->sharpness_is_set = false;
    }
  }

  explicit GripperCameraParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_mode(_alloc, _init),
    exposure_roi(_alloc, _init),
    focus_roi(_alloc, _init),
    hdr(_alloc, _init),
    led_mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness = 0.0f;
      this->brightness_is_set = false;
      this->contrast = 0.0f;
      this->contrast_is_set = false;
      this->saturation = 0.0f;
      this->saturation_is_set = false;
      this->gain = 0.0f;
      this->gain_is_set = false;
      this->exposure_auto = false;
      this->exposure_auto_is_set = false;
      this->exposure_absolute = 0.0f;
      this->exposure_absolute_is_set = false;
      this->exposure_roi_is_set = false;
      this->focus_auto = false;
      this->focus_auto_is_set = false;
      this->focus_absolute = 0.0f;
      this->focus_absolute_is_set = false;
      this->focus_roi_is_set = false;
      this->draw_focus_roi_rectangle = false;
      this->draw_focus_roi_rectangle_is_set = false;
      this->led_torch_brightness = 0.0f;
      this->led_torch_brightness_is_set = false;
      this->white_balance_temperature_auto = false;
      this->white_balance_temperature_auto_is_set = false;
      this->gamma = 0.0f;
      this->gamma_is_set = false;
      this->white_balance_temperature = 0.0f;
      this->white_balance_temperature_is_set = false;
      this->sharpness = 0.0f;
      this->sharpness_is_set = false;
    }
  }

  // field types and members
  using _camera_mode_type =
    bosdyn_msgs::msg::GripperCameraParamsCameraMode_<ContainerAllocator>;
  _camera_mode_type camera_mode;
  using _brightness_type =
    float;
  _brightness_type brightness;
  using _brightness_is_set_type =
    bool;
  _brightness_is_set_type brightness_is_set;
  using _contrast_type =
    float;
  _contrast_type contrast;
  using _contrast_is_set_type =
    bool;
  _contrast_is_set_type contrast_is_set;
  using _saturation_type =
    float;
  _saturation_type saturation;
  using _saturation_is_set_type =
    bool;
  _saturation_is_set_type saturation_is_set;
  using _gain_type =
    float;
  _gain_type gain;
  using _gain_is_set_type =
    bool;
  _gain_is_set_type gain_is_set;
  using _exposure_auto_type =
    bool;
  _exposure_auto_type exposure_auto;
  using _exposure_auto_is_set_type =
    bool;
  _exposure_auto_is_set_type exposure_auto_is_set;
  using _exposure_absolute_type =
    float;
  _exposure_absolute_type exposure_absolute;
  using _exposure_absolute_is_set_type =
    bool;
  _exposure_absolute_is_set_type exposure_absolute_is_set;
  using _exposure_roi_type =
    bosdyn_msgs::msg::RoiParameters_<ContainerAllocator>;
  _exposure_roi_type exposure_roi;
  using _exposure_roi_is_set_type =
    bool;
  _exposure_roi_is_set_type exposure_roi_is_set;
  using _focus_auto_type =
    bool;
  _focus_auto_type focus_auto;
  using _focus_auto_is_set_type =
    bool;
  _focus_auto_is_set_type focus_auto_is_set;
  using _focus_absolute_type =
    float;
  _focus_absolute_type focus_absolute;
  using _focus_absolute_is_set_type =
    bool;
  _focus_absolute_is_set_type focus_absolute_is_set;
  using _focus_roi_type =
    bosdyn_msgs::msg::RoiParameters_<ContainerAllocator>;
  _focus_roi_type focus_roi;
  using _focus_roi_is_set_type =
    bool;
  _focus_roi_is_set_type focus_roi_is_set;
  using _draw_focus_roi_rectangle_type =
    bool;
  _draw_focus_roi_rectangle_type draw_focus_roi_rectangle;
  using _draw_focus_roi_rectangle_is_set_type =
    bool;
  _draw_focus_roi_rectangle_is_set_type draw_focus_roi_rectangle_is_set;
  using _hdr_type =
    bosdyn_msgs::msg::HdrParameters_<ContainerAllocator>;
  _hdr_type hdr;
  using _led_mode_type =
    bosdyn_msgs::msg::GripperCameraParamsLedMode_<ContainerAllocator>;
  _led_mode_type led_mode;
  using _led_torch_brightness_type =
    float;
  _led_torch_brightness_type led_torch_brightness;
  using _led_torch_brightness_is_set_type =
    bool;
  _led_torch_brightness_is_set_type led_torch_brightness_is_set;
  using _white_balance_temperature_auto_type =
    bool;
  _white_balance_temperature_auto_type white_balance_temperature_auto;
  using _white_balance_temperature_auto_is_set_type =
    bool;
  _white_balance_temperature_auto_is_set_type white_balance_temperature_auto_is_set;
  using _gamma_type =
    float;
  _gamma_type gamma;
  using _gamma_is_set_type =
    bool;
  _gamma_is_set_type gamma_is_set;
  using _white_balance_temperature_type =
    float;
  _white_balance_temperature_type white_balance_temperature;
  using _white_balance_temperature_is_set_type =
    bool;
  _white_balance_temperature_is_set_type white_balance_temperature_is_set;
  using _sharpness_type =
    float;
  _sharpness_type sharpness;
  using _sharpness_is_set_type =
    bool;
  _sharpness_is_set_type sharpness_is_set;

  // setters for named parameter idiom
  Type & set__camera_mode(
    const bosdyn_msgs::msg::GripperCameraParamsCameraMode_<ContainerAllocator> & _arg)
  {
    this->camera_mode = _arg;
    return *this;
  }
  Type & set__brightness(
    const float & _arg)
  {
    this->brightness = _arg;
    return *this;
  }
  Type & set__brightness_is_set(
    const bool & _arg)
  {
    this->brightness_is_set = _arg;
    return *this;
  }
  Type & set__contrast(
    const float & _arg)
  {
    this->contrast = _arg;
    return *this;
  }
  Type & set__contrast_is_set(
    const bool & _arg)
  {
    this->contrast_is_set = _arg;
    return *this;
  }
  Type & set__saturation(
    const float & _arg)
  {
    this->saturation = _arg;
    return *this;
  }
  Type & set__saturation_is_set(
    const bool & _arg)
  {
    this->saturation_is_set = _arg;
    return *this;
  }
  Type & set__gain(
    const float & _arg)
  {
    this->gain = _arg;
    return *this;
  }
  Type & set__gain_is_set(
    const bool & _arg)
  {
    this->gain_is_set = _arg;
    return *this;
  }
  Type & set__exposure_auto(
    const bool & _arg)
  {
    this->exposure_auto = _arg;
    return *this;
  }
  Type & set__exposure_auto_is_set(
    const bool & _arg)
  {
    this->exposure_auto_is_set = _arg;
    return *this;
  }
  Type & set__exposure_absolute(
    const float & _arg)
  {
    this->exposure_absolute = _arg;
    return *this;
  }
  Type & set__exposure_absolute_is_set(
    const bool & _arg)
  {
    this->exposure_absolute_is_set = _arg;
    return *this;
  }
  Type & set__exposure_roi(
    const bosdyn_msgs::msg::RoiParameters_<ContainerAllocator> & _arg)
  {
    this->exposure_roi = _arg;
    return *this;
  }
  Type & set__exposure_roi_is_set(
    const bool & _arg)
  {
    this->exposure_roi_is_set = _arg;
    return *this;
  }
  Type & set__focus_auto(
    const bool & _arg)
  {
    this->focus_auto = _arg;
    return *this;
  }
  Type & set__focus_auto_is_set(
    const bool & _arg)
  {
    this->focus_auto_is_set = _arg;
    return *this;
  }
  Type & set__focus_absolute(
    const float & _arg)
  {
    this->focus_absolute = _arg;
    return *this;
  }
  Type & set__focus_absolute_is_set(
    const bool & _arg)
  {
    this->focus_absolute_is_set = _arg;
    return *this;
  }
  Type & set__focus_roi(
    const bosdyn_msgs::msg::RoiParameters_<ContainerAllocator> & _arg)
  {
    this->focus_roi = _arg;
    return *this;
  }
  Type & set__focus_roi_is_set(
    const bool & _arg)
  {
    this->focus_roi_is_set = _arg;
    return *this;
  }
  Type & set__draw_focus_roi_rectangle(
    const bool & _arg)
  {
    this->draw_focus_roi_rectangle = _arg;
    return *this;
  }
  Type & set__draw_focus_roi_rectangle_is_set(
    const bool & _arg)
  {
    this->draw_focus_roi_rectangle_is_set = _arg;
    return *this;
  }
  Type & set__hdr(
    const bosdyn_msgs::msg::HdrParameters_<ContainerAllocator> & _arg)
  {
    this->hdr = _arg;
    return *this;
  }
  Type & set__led_mode(
    const bosdyn_msgs::msg::GripperCameraParamsLedMode_<ContainerAllocator> & _arg)
  {
    this->led_mode = _arg;
    return *this;
  }
  Type & set__led_torch_brightness(
    const float & _arg)
  {
    this->led_torch_brightness = _arg;
    return *this;
  }
  Type & set__led_torch_brightness_is_set(
    const bool & _arg)
  {
    this->led_torch_brightness_is_set = _arg;
    return *this;
  }
  Type & set__white_balance_temperature_auto(
    const bool & _arg)
  {
    this->white_balance_temperature_auto = _arg;
    return *this;
  }
  Type & set__white_balance_temperature_auto_is_set(
    const bool & _arg)
  {
    this->white_balance_temperature_auto_is_set = _arg;
    return *this;
  }
  Type & set__gamma(
    const float & _arg)
  {
    this->gamma = _arg;
    return *this;
  }
  Type & set__gamma_is_set(
    const bool & _arg)
  {
    this->gamma_is_set = _arg;
    return *this;
  }
  Type & set__white_balance_temperature(
    const float & _arg)
  {
    this->white_balance_temperature = _arg;
    return *this;
  }
  Type & set__white_balance_temperature_is_set(
    const bool & _arg)
  {
    this->white_balance_temperature_is_set = _arg;
    return *this;
  }
  Type & set__sharpness(
    const float & _arg)
  {
    this->sharpness = _arg;
    return *this;
  }
  Type & set__sharpness_is_set(
    const bool & _arg)
  {
    this->sharpness_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GripperCameraParams
    std::shared_ptr<bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GripperCameraParams
    std::shared_ptr<bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCameraParams_ & other) const
  {
    if (this->camera_mode != other.camera_mode) {
      return false;
    }
    if (this->brightness != other.brightness) {
      return false;
    }
    if (this->brightness_is_set != other.brightness_is_set) {
      return false;
    }
    if (this->contrast != other.contrast) {
      return false;
    }
    if (this->contrast_is_set != other.contrast_is_set) {
      return false;
    }
    if (this->saturation != other.saturation) {
      return false;
    }
    if (this->saturation_is_set != other.saturation_is_set) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->gain_is_set != other.gain_is_set) {
      return false;
    }
    if (this->exposure_auto != other.exposure_auto) {
      return false;
    }
    if (this->exposure_auto_is_set != other.exposure_auto_is_set) {
      return false;
    }
    if (this->exposure_absolute != other.exposure_absolute) {
      return false;
    }
    if (this->exposure_absolute_is_set != other.exposure_absolute_is_set) {
      return false;
    }
    if (this->exposure_roi != other.exposure_roi) {
      return false;
    }
    if (this->exposure_roi_is_set != other.exposure_roi_is_set) {
      return false;
    }
    if (this->focus_auto != other.focus_auto) {
      return false;
    }
    if (this->focus_auto_is_set != other.focus_auto_is_set) {
      return false;
    }
    if (this->focus_absolute != other.focus_absolute) {
      return false;
    }
    if (this->focus_absolute_is_set != other.focus_absolute_is_set) {
      return false;
    }
    if (this->focus_roi != other.focus_roi) {
      return false;
    }
    if (this->focus_roi_is_set != other.focus_roi_is_set) {
      return false;
    }
    if (this->draw_focus_roi_rectangle != other.draw_focus_roi_rectangle) {
      return false;
    }
    if (this->draw_focus_roi_rectangle_is_set != other.draw_focus_roi_rectangle_is_set) {
      return false;
    }
    if (this->hdr != other.hdr) {
      return false;
    }
    if (this->led_mode != other.led_mode) {
      return false;
    }
    if (this->led_torch_brightness != other.led_torch_brightness) {
      return false;
    }
    if (this->led_torch_brightness_is_set != other.led_torch_brightness_is_set) {
      return false;
    }
    if (this->white_balance_temperature_auto != other.white_balance_temperature_auto) {
      return false;
    }
    if (this->white_balance_temperature_auto_is_set != other.white_balance_temperature_auto_is_set) {
      return false;
    }
    if (this->gamma != other.gamma) {
      return false;
    }
    if (this->gamma_is_set != other.gamma_is_set) {
      return false;
    }
    if (this->white_balance_temperature != other.white_balance_temperature) {
      return false;
    }
    if (this->white_balance_temperature_is_set != other.white_balance_temperature_is_set) {
      return false;
    }
    if (this->sharpness != other.sharpness) {
      return false;
    }
    if (this->sharpness_is_set != other.sharpness_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCameraParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCameraParams_

// alias to use template instance with default allocator
using GripperCameraParams =
  bosdyn_msgs::msg::GripperCameraParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS__STRUCT_HPP_
