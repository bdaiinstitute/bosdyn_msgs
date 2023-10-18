// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image_format'
#include "bosdyn_msgs/msg/detail/image_format__struct.hpp"
// Member 'pixel_format'
#include "bosdyn_msgs/msg/detail/image_pixel_format__struct.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageRequest_
{
  using Type = ImageRequest_<ContainerAllocator>;

  explicit ImageRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_format(_init),
    pixel_format(_init),
    custom_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_source_name = "";
      this->quality_percent = 0.0;
      this->resize_ratio = 0.0;
      this->custom_params_is_set = false;
    }
  }

  explicit ImageRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_source_name(_alloc),
    image_format(_alloc, _init),
    pixel_format(_alloc, _init),
    custom_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_source_name = "";
      this->quality_percent = 0.0;
      this->resize_ratio = 0.0;
      this->custom_params_is_set = false;
    }
  }

  // field types and members
  using _image_source_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _image_source_name_type image_source_name;
  using _quality_percent_type =
    double;
  _quality_percent_type quality_percent;
  using _image_format_type =
    bosdyn_msgs::msg::ImageFormat_<ContainerAllocator>;
  _image_format_type image_format;
  using _resize_ratio_type =
    double;
  _resize_ratio_type resize_ratio;
  using _pixel_format_type =
    bosdyn_msgs::msg::ImagePixelFormat_<ContainerAllocator>;
  _pixel_format_type pixel_format;
  using _custom_params_type =
    bosdyn_msgs::msg::DictParam_<ContainerAllocator>;
  _custom_params_type custom_params;
  using _custom_params_is_set_type =
    bool;
  _custom_params_is_set_type custom_params_is_set;

  // setters for named parameter idiom
  Type & set__image_source_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->image_source_name = _arg;
    return *this;
  }
  Type & set__quality_percent(
    const double & _arg)
  {
    this->quality_percent = _arg;
    return *this;
  }
  Type & set__image_format(
    const bosdyn_msgs::msg::ImageFormat_<ContainerAllocator> & _arg)
  {
    this->image_format = _arg;
    return *this;
  }
  Type & set__resize_ratio(
    const double & _arg)
  {
    this->resize_ratio = _arg;
    return *this;
  }
  Type & set__pixel_format(
    const bosdyn_msgs::msg::ImagePixelFormat_<ContainerAllocator> & _arg)
  {
    this->pixel_format = _arg;
    return *this;
  }
  Type & set__custom_params(
    const bosdyn_msgs::msg::DictParam_<ContainerAllocator> & _arg)
  {
    this->custom_params = _arg;
    return *this;
  }
  Type & set__custom_params_is_set(
    const bool & _arg)
  {
    this->custom_params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageRequest
    std::shared_ptr<bosdyn_msgs::msg::ImageRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageRequest
    std::shared_ptr<bosdyn_msgs::msg::ImageRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageRequest_ & other) const
  {
    if (this->image_source_name != other.image_source_name) {
      return false;
    }
    if (this->quality_percent != other.quality_percent) {
      return false;
    }
    if (this->image_format != other.image_format) {
      return false;
    }
    if (this->resize_ratio != other.resize_ratio) {
      return false;
    }
    if (this->pixel_format != other.pixel_format) {
      return false;
    }
    if (this->custom_params != other.custom_params) {
      return false;
    }
    if (this->custom_params_is_set != other.custom_params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageRequest_

// alias to use template instance with default allocator
using ImageRequest =
  bosdyn_msgs::msg::ImageRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_REQUEST__STRUCT_HPP_
