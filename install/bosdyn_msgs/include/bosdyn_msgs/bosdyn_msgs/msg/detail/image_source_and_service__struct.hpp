// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageSourceAndService.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request_data'
#include "bosdyn_msgs/msg/detail/image_source_and_service_one_of_request_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageSourceAndService __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageSourceAndService __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageSourceAndService_
{
  using Type = ImageSourceAndService_<ContainerAllocator>;

  explicit ImageSourceAndService_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_service = "";
    }
  }

  explicit ImageSourceAndService_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_data(_alloc, _init),
    image_service(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_service = "";
    }
  }

  // field types and members
  using _request_data_type =
    bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>;
  _request_data_type request_data;
  using _image_service_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _image_service_type image_service;

  // setters for named parameter idiom
  Type & set__request_data(
    const bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator> & _arg)
  {
    this->request_data = _arg;
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
    bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourceAndService
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourceAndService
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageSourceAndService_ & other) const
  {
    if (this->request_data != other.request_data) {
      return false;
    }
    if (this->image_service != other.image_service) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageSourceAndService_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageSourceAndService_

// alias to use template instance with default allocator
using ImageSourceAndService =
  bosdyn_msgs::msg::ImageSourceAndService_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE__STRUCT_HPP_
