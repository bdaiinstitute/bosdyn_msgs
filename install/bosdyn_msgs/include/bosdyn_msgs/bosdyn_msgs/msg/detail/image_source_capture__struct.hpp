// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageSourceCapture.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_CAPTURE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_CAPTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image_request'
#include "bosdyn_msgs/msg/detail/image_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageSourceCapture __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageSourceCapture __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageSourceCapture_
{
  using Type = ImageSourceCapture_<ContainerAllocator>;

  explicit ImageSourceCapture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_service = "";
      this->image_request_is_set = false;
    }
  }

  explicit ImageSourceCapture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_service(_alloc),
    image_request(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_service = "";
      this->image_request_is_set = false;
    }
  }

  // field types and members
  using _image_service_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _image_service_type image_service;
  using _image_request_type =
    bosdyn_msgs::msg::ImageRequest_<ContainerAllocator>;
  _image_request_type image_request;
  using _image_request_is_set_type =
    bool;
  _image_request_is_set_type image_request_is_set;

  // setters for named parameter idiom
  Type & set__image_service(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->image_service = _arg;
    return *this;
  }
  Type & set__image_request(
    const bosdyn_msgs::msg::ImageRequest_<ContainerAllocator> & _arg)
  {
    this->image_request = _arg;
    return *this;
  }
  Type & set__image_request_is_set(
    const bool & _arg)
  {
    this->image_request_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourceCapture
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourceCapture
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageSourceCapture_ & other) const
  {
    if (this->image_service != other.image_service) {
      return false;
    }
    if (this->image_request != other.image_request) {
      return false;
    }
    if (this->image_request_is_set != other.image_request_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageSourceCapture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageSourceCapture_

// alias to use template instance with default allocator
using ImageSourceCapture =
  bosdyn_msgs::msg::ImageSourceCapture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_CAPTURE__STRUCT_HPP_
