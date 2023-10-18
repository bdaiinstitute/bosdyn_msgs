// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeInputDataOneOfInput.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image_source_and_service'
#include "bosdyn_msgs/msg/detail/image_source_and_service__struct.hpp"
// Member 'image'
#include "bosdyn_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NetworkComputeInputDataOneOfInput_
{
  using Type = NetworkComputeInputDataOneOfInput_<ContainerAllocator>;

  explicit NetworkComputeInputDataOneOfInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_source_and_service(_init),
    image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_choice = 0;
    }
  }

  explicit NetworkComputeInputDataOneOfInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_source_and_service(_alloc, _init),
    image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_choice = 0;
    }
  }

  // field types and members
  using _image_source_and_service_type =
    bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>;
  _image_source_and_service_type image_source_and_service;
  using _image_type =
    bosdyn_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _input_choice_type =
    int8_t;
  _input_choice_type input_choice;

  // setters for named parameter idiom
  Type & set__image_source_and_service(
    const bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator> & _arg)
  {
    this->image_source_and_service = _arg;
    return *this;
  }
  Type & set__image(
    const bosdyn_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__input_choice(
    const int8_t & _arg)
  {
    this->input_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t INPUT_NOT_SET =
    0;
  static constexpr int8_t INPUT_IMAGE_SOURCE_AND_SERVICE_SET =
    1;
  static constexpr int8_t INPUT_IMAGE_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetworkComputeInputDataOneOfInput_ & other) const
  {
    if (this->image_source_and_service != other.image_source_and_service) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->input_choice != other.input_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetworkComputeInputDataOneOfInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetworkComputeInputDataOneOfInput_

// alias to use template instance with default allocator
using NetworkComputeInputDataOneOfInput =
  bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NetworkComputeInputDataOneOfInput_<ContainerAllocator>::INPUT_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NetworkComputeInputDataOneOfInput_<ContainerAllocator>::INPUT_IMAGE_SOURCE_AND_SERVICE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NetworkComputeInputDataOneOfInput_<ContainerAllocator>::INPUT_IMAGE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__STRUCT_HPP_
