// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageCaptureAndSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE_AND_SOURCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE_AND_SOURCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'shot'
#include "bosdyn_msgs/msg/detail/image_capture__struct.hpp"
// Member 'source'
#include "bosdyn_msgs/msg/detail/image_source__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageCaptureAndSource __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageCaptureAndSource __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageCaptureAndSource_
{
  using Type = ImageCaptureAndSource_<ContainerAllocator>;

  explicit ImageCaptureAndSource_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shot(_init),
    source(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shot_is_set = false;
      this->source_is_set = false;
      this->image_service = "";
    }
  }

  explicit ImageCaptureAndSource_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shot(_alloc, _init),
    source(_alloc, _init),
    image_service(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shot_is_set = false;
      this->source_is_set = false;
      this->image_service = "";
    }
  }

  // field types and members
  using _shot_type =
    bosdyn_msgs::msg::ImageCapture_<ContainerAllocator>;
  _shot_type shot;
  using _shot_is_set_type =
    bool;
  _shot_is_set_type shot_is_set;
  using _source_type =
    bosdyn_msgs::msg::ImageSource_<ContainerAllocator>;
  _source_type source;
  using _source_is_set_type =
    bool;
  _source_is_set_type source_is_set;
  using _image_service_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _image_service_type image_service;

  // setters for named parameter idiom
  Type & set__shot(
    const bosdyn_msgs::msg::ImageCapture_<ContainerAllocator> & _arg)
  {
    this->shot = _arg;
    return *this;
  }
  Type & set__shot_is_set(
    const bool & _arg)
  {
    this->shot_is_set = _arg;
    return *this;
  }
  Type & set__source(
    const bosdyn_msgs::msg::ImageSource_<ContainerAllocator> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__source_is_set(
    const bool & _arg)
  {
    this->source_is_set = _arg;
    return *this;
  }
  Type & set__image_service(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->image_service = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageCaptureAndSource
    std::shared_ptr<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageCaptureAndSource
    std::shared_ptr<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageCaptureAndSource_ & other) const
  {
    if (this->shot != other.shot) {
      return false;
    }
    if (this->shot_is_set != other.shot_is_set) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->source_is_set != other.source_is_set) {
      return false;
    }
    if (this->image_service != other.image_service) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageCaptureAndSource_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageCaptureAndSource_

// alias to use template instance with default allocator
using ImageCaptureAndSource =
  bosdyn_msgs::msg::ImageCaptureAndSource_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_CAPTURE_AND_SOURCE__STRUCT_HPP_
