// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageCapture.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'acquisition_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__struct.hpp"
// Member 'image'
#include "bosdyn_msgs/msg/detail/image__struct.hpp"
// Member 'capture_params'
#include "bosdyn_msgs/msg/detail/capture_parameters__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageCapture __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageCapture __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageCapture_
{
  using Type = ImageCapture_<ContainerAllocator>;

  explicit ImageCapture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acquisition_time(_init),
    transforms_snapshot(_init),
    image(_init),
    capture_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acquisition_time_is_set = false;
      this->transforms_snapshot_is_set = false;
      this->frame_name_image_sensor = "";
      this->image_is_set = false;
      this->capture_params_is_set = false;
    }
  }

  explicit ImageCapture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acquisition_time(_alloc, _init),
    transforms_snapshot(_alloc, _init),
    frame_name_image_sensor(_alloc),
    image(_alloc, _init),
    capture_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acquisition_time_is_set = false;
      this->transforms_snapshot_is_set = false;
      this->frame_name_image_sensor = "";
      this->image_is_set = false;
      this->capture_params_is_set = false;
    }
  }

  // field types and members
  using _acquisition_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _acquisition_time_type acquisition_time;
  using _acquisition_time_is_set_type =
    bool;
  _acquisition_time_is_set_type acquisition_time_is_set;
  using _transforms_snapshot_type =
    bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator>;
  _transforms_snapshot_type transforms_snapshot;
  using _transforms_snapshot_is_set_type =
    bool;
  _transforms_snapshot_is_set_type transforms_snapshot_is_set;
  using _frame_name_image_sensor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_image_sensor_type frame_name_image_sensor;
  using _image_type =
    bosdyn_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _image_is_set_type =
    bool;
  _image_is_set_type image_is_set;
  using _capture_params_type =
    bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator>;
  _capture_params_type capture_params;
  using _capture_params_is_set_type =
    bool;
  _capture_params_is_set_type capture_params_is_set;

  // setters for named parameter idiom
  Type & set__acquisition_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->acquisition_time = _arg;
    return *this;
  }
  Type & set__acquisition_time_is_set(
    const bool & _arg)
  {
    this->acquisition_time_is_set = _arg;
    return *this;
  }
  Type & set__transforms_snapshot(
    const bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator> & _arg)
  {
    this->transforms_snapshot = _arg;
    return *this;
  }
  Type & set__transforms_snapshot_is_set(
    const bool & _arg)
  {
    this->transforms_snapshot_is_set = _arg;
    return *this;
  }
  Type & set__frame_name_image_sensor(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name_image_sensor = _arg;
    return *this;
  }
  Type & set__image(
    const bosdyn_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__image_is_set(
    const bool & _arg)
  {
    this->image_is_set = _arg;
    return *this;
  }
  Type & set__capture_params(
    const bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator> & _arg)
  {
    this->capture_params = _arg;
    return *this;
  }
  Type & set__capture_params_is_set(
    const bool & _arg)
  {
    this->capture_params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageCapture_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageCapture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageCapture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageCapture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageCapture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageCapture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageCapture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageCapture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageCapture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageCapture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageCapture
    std::shared_ptr<bosdyn_msgs::msg::ImageCapture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageCapture
    std::shared_ptr<bosdyn_msgs::msg::ImageCapture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageCapture_ & other) const
  {
    if (this->acquisition_time != other.acquisition_time) {
      return false;
    }
    if (this->acquisition_time_is_set != other.acquisition_time_is_set) {
      return false;
    }
    if (this->transforms_snapshot != other.transforms_snapshot) {
      return false;
    }
    if (this->transforms_snapshot_is_set != other.transforms_snapshot_is_set) {
      return false;
    }
    if (this->frame_name_image_sensor != other.frame_name_image_sensor) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->image_is_set != other.image_is_set) {
      return false;
    }
    if (this->capture_params != other.capture_params) {
      return false;
    }
    if (this->capture_params_is_set != other.capture_params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageCapture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageCapture_

// alias to use template instance with default allocator
using ImageCapture =
  bosdyn_msgs::msg::ImageCapture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE__STRUCT_HPP_
