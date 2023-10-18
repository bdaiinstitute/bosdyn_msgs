// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageSourceAndServiceOneOfRequestData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE_ONE_OF_REQUEST_DATA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE_ONE_OF_REQUEST_DATA__STRUCT_HPP_

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
# define DEPRECATED__bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageSourceAndServiceOneOfRequestData_
{
  using Type = ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>;

  explicit ImageSourceAndServiceOneOfRequestData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_source = "";
      this->request_data_choice = 0;
    }
  }

  explicit ImageSourceAndServiceOneOfRequestData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_source(_alloc),
    image_request(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_source = "";
      this->request_data_choice = 0;
    }
  }

  // field types and members
  using _image_source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _image_source_type image_source;
  using _image_request_type =
    bosdyn_msgs::msg::ImageRequest_<ContainerAllocator>;
  _image_request_type image_request;
  using _request_data_choice_type =
    int8_t;
  _request_data_choice_type request_data_choice;

  // setters for named parameter idiom
  Type & set__image_source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->image_source = _arg;
    return *this;
  }
  Type & set__image_request(
    const bosdyn_msgs::msg::ImageRequest_<ContainerAllocator> & _arg)
  {
    this->image_request = _arg;
    return *this;
  }
  Type & set__request_data_choice(
    const int8_t & _arg)
  {
    this->request_data_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t REQUEST_DATA_NOT_SET =
    0;
  static constexpr int8_t REQUEST_DATA_IMAGE_SOURCE_SET =
    1;
  static constexpr int8_t REQUEST_DATA_IMAGE_REQUEST_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageSourceAndServiceOneOfRequestData_ & other) const
  {
    if (this->image_source != other.image_source) {
      return false;
    }
    if (this->image_request != other.image_request) {
      return false;
    }
    if (this->request_data_choice != other.request_data_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageSourceAndServiceOneOfRequestData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageSourceAndServiceOneOfRequestData_

// alias to use template instance with default allocator
using ImageSourceAndServiceOneOfRequestData =
  bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>::REQUEST_DATA_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>::REQUEST_DATA_IMAGE_SOURCE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ImageSourceAndServiceOneOfRequestData_<ContainerAllocator>::REQUEST_DATA_IMAGE_REQUEST_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE_ONE_OF_REQUEST_DATA__STRUCT_HPP_
