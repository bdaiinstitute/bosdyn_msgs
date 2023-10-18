// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Keypoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEYPOINT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'coordinates'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Keypoint __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Keypoint __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Keypoint_
{
  using Type = Keypoint_<ContainerAllocator>;

  explicit Keypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coordinates_is_set = false;
      this->score = 0.0f;
      this->size = 0.0f;
      this->angle = 0.0f;
    }
  }

  explicit Keypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coordinates_is_set = false;
      this->score = 0.0f;
      this->size = 0.0f;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _coordinates_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _coordinates_type coordinates;
  using _coordinates_is_set_type =
    bool;
  _coordinates_is_set_type coordinates_is_set;
  using _binary_descriptor_type =
    std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>>;
  _binary_descriptor_type binary_descriptor;
  using _score_type =
    float;
  _score_type score;
  using _size_type =
    float;
  _size_type size;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__coordinates(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->coordinates = _arg;
    return *this;
  }
  Type & set__coordinates_is_set(
    const bool & _arg)
  {
    this->coordinates_is_set = _arg;
    return *this;
  }
  Type & set__binary_descriptor(
    const std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>> & _arg)
  {
    this->binary_descriptor = _arg;
    return *this;
  }
  Type & set__score(
    const float & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__size(
    const float & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Keypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Keypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Keypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Keypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Keypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Keypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Keypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Keypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Keypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Keypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Keypoint
    std::shared_ptr<bosdyn_msgs::msg::Keypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Keypoint
    std::shared_ptr<bosdyn_msgs::msg::Keypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Keypoint_ & other) const
  {
    if (this->coordinates != other.coordinates) {
      return false;
    }
    if (this->coordinates_is_set != other.coordinates_is_set) {
      return false;
    }
    if (this->binary_descriptor != other.binary_descriptor) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Keypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Keypoint_

// alias to use template instance with default allocator
using Keypoint =
  bosdyn_msgs::msg::Keypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEYPOINT__STRUCT_HPP_
