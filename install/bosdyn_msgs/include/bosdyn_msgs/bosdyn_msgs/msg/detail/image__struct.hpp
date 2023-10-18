// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'format'
#include "bosdyn_msgs/msg/detail/image_format__struct.hpp"
// Member 'pixel_format'
#include "bosdyn_msgs/msg/detail/image_pixel_format__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Image __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Image __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Image_
{
  using Type = Image_<ContainerAllocator>;

  explicit Image_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : format(_init),
    pixel_format(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cols = 0l;
      this->rows = 0l;
    }
  }

  explicit Image_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : format(_alloc, _init),
    pixel_format(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cols = 0l;
      this->rows = 0l;
    }
  }

  // field types and members
  using _cols_type =
    int32_t;
  _cols_type cols;
  using _rows_type =
    int32_t;
  _rows_type rows;
  using _data_type =
    std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>>;
  _data_type data;
  using _format_type =
    bosdyn_msgs::msg::ImageFormat_<ContainerAllocator>;
  _format_type format;
  using _pixel_format_type =
    bosdyn_msgs::msg::ImagePixelFormat_<ContainerAllocator>;
  _pixel_format_type pixel_format;

  // setters for named parameter idiom
  Type & set__cols(
    const int32_t & _arg)
  {
    this->cols = _arg;
    return *this;
  }
  Type & set__rows(
    const int32_t & _arg)
  {
    this->rows = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__format(
    const bosdyn_msgs::msg::ImageFormat_<ContainerAllocator> & _arg)
  {
    this->format = _arg;
    return *this;
  }
  Type & set__pixel_format(
    const bosdyn_msgs::msg::ImagePixelFormat_<ContainerAllocator> & _arg)
  {
    this->pixel_format = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Image_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Image_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Image_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Image_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Image_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Image_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Image_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Image_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Image_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Image_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Image
    std::shared_ptr<bosdyn_msgs::msg::Image_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Image
    std::shared_ptr<bosdyn_msgs::msg::Image_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Image_ & other) const
  {
    if (this->cols != other.cols) {
      return false;
    }
    if (this->rows != other.rows) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->format != other.format) {
      return false;
    }
    if (this->pixel_format != other.pixel_format) {
      return false;
    }
    return true;
  }
  bool operator!=(const Image_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Image_

// alias to use template instance with default allocator
using Image =
  bosdyn_msgs::msg::Image_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE__STRUCT_HPP_
