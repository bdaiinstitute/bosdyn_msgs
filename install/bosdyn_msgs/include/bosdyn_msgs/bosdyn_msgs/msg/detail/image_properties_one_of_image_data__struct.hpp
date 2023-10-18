// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImagePropertiesOneOfImageData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES_ONE_OF_IMAGE_DATA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES_ONE_OF_IMAGE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'coordinates'
#include "bosdyn_msgs/msg/detail/polygon__struct.hpp"
// Member 'keypoints'
#include "bosdyn_msgs/msg/detail/keypoint_set__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImagePropertiesOneOfImageData __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImagePropertiesOneOfImageData __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImagePropertiesOneOfImageData_
{
  using Type = ImagePropertiesOneOfImageData_<ContainerAllocator>;

  explicit ImagePropertiesOneOfImageData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates(_init),
    keypoints(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_data_choice = 0;
    }
  }

  explicit ImagePropertiesOneOfImageData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates(_alloc, _init),
    keypoints(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_data_choice = 0;
    }
  }

  // field types and members
  using _coordinates_type =
    bosdyn_msgs::msg::Polygon_<ContainerAllocator>;
  _coordinates_type coordinates;
  using _keypoints_type =
    bosdyn_msgs::msg::KeypointSet_<ContainerAllocator>;
  _keypoints_type keypoints;
  using _image_data_choice_type =
    int8_t;
  _image_data_choice_type image_data_choice;

  // setters for named parameter idiom
  Type & set__coordinates(
    const bosdyn_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->coordinates = _arg;
    return *this;
  }
  Type & set__keypoints(
    const bosdyn_msgs::msg::KeypointSet_<ContainerAllocator> & _arg)
  {
    this->keypoints = _arg;
    return *this;
  }
  Type & set__image_data_choice(
    const int8_t & _arg)
  {
    this->image_data_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t IMAGE_DATA_NOT_SET =
    0;
  static constexpr int8_t IMAGE_DATA_COORDINATES_SET =
    1;
  static constexpr int8_t IMAGE_DATA_KEYPOINTS_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImagePropertiesOneOfImageData
    std::shared_ptr<bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImagePropertiesOneOfImageData
    std::shared_ptr<bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImagePropertiesOneOfImageData_ & other) const
  {
    if (this->coordinates != other.coordinates) {
      return false;
    }
    if (this->keypoints != other.keypoints) {
      return false;
    }
    if (this->image_data_choice != other.image_data_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImagePropertiesOneOfImageData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImagePropertiesOneOfImageData_

// alias to use template instance with default allocator
using ImagePropertiesOneOfImageData =
  bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ImagePropertiesOneOfImageData_<ContainerAllocator>::IMAGE_DATA_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ImagePropertiesOneOfImageData_<ContainerAllocator>::IMAGE_DATA_COORDINATES_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ImagePropertiesOneOfImageData_<ContainerAllocator>::IMAGE_DATA_KEYPOINTS_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES_ONE_OF_IMAGE_DATA__STRUCT_HPP_
