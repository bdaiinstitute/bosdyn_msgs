// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageSourceOneOfCameraModels.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_ONE_OF_CAMERA_MODELS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_ONE_OF_CAMERA_MODELS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pinhole'
#include "bosdyn_msgs/msg/detail/image_source_pinhole_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageSourceOneOfCameraModels __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageSourceOneOfCameraModels __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageSourceOneOfCameraModels_
{
  using Type = ImageSourceOneOfCameraModels_<ContainerAllocator>;

  explicit ImageSourceOneOfCameraModels_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pinhole(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_models_choice = 0;
    }
  }

  explicit ImageSourceOneOfCameraModels_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pinhole(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_models_choice = 0;
    }
  }

  // field types and members
  using _pinhole_type =
    bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator>;
  _pinhole_type pinhole;
  using _camera_models_choice_type =
    int8_t;
  _camera_models_choice_type camera_models_choice;

  // setters for named parameter idiom
  Type & set__pinhole(
    const bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator> & _arg)
  {
    this->pinhole = _arg;
    return *this;
  }
  Type & set__camera_models_choice(
    const int8_t & _arg)
  {
    this->camera_models_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t CAMERA_MODELS_NOT_SET =
    0;
  static constexpr int8_t CAMERA_MODELS_PINHOLE_SET =
    1;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourceOneOfCameraModels
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourceOneOfCameraModels
    std::shared_ptr<bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageSourceOneOfCameraModels_ & other) const
  {
    if (this->pinhole != other.pinhole) {
      return false;
    }
    if (this->camera_models_choice != other.camera_models_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageSourceOneOfCameraModels_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageSourceOneOfCameraModels_

// alias to use template instance with default allocator
using ImageSourceOneOfCameraModels =
  bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ImageSourceOneOfCameraModels_<ContainerAllocator>::CAMERA_MODELS_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ImageSourceOneOfCameraModels_<ContainerAllocator>::CAMERA_MODELS_PINHOLE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_ONE_OF_CAMERA_MODELS__STRUCT_HPP_
