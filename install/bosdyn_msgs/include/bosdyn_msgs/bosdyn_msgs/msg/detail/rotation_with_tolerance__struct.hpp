// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RotationWithTolerance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'rotation_ewrt_frame'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RotationWithTolerance __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RotationWithTolerance __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RotationWithTolerance_
{
  using Type = RotationWithTolerance_<ContainerAllocator>;

  explicit RotationWithTolerance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rotation_ewrt_frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rotation_ewrt_frame_is_set = false;
      this->threshold_radians = 0.0f;
    }
  }

  explicit RotationWithTolerance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rotation_ewrt_frame(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rotation_ewrt_frame_is_set = false;
      this->threshold_radians = 0.0f;
    }
  }

  // field types and members
  using _rotation_ewrt_frame_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _rotation_ewrt_frame_type rotation_ewrt_frame;
  using _rotation_ewrt_frame_is_set_type =
    bool;
  _rotation_ewrt_frame_is_set_type rotation_ewrt_frame_is_set;
  using _threshold_radians_type =
    float;
  _threshold_radians_type threshold_radians;

  // setters for named parameter idiom
  Type & set__rotation_ewrt_frame(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->rotation_ewrt_frame = _arg;
    return *this;
  }
  Type & set__rotation_ewrt_frame_is_set(
    const bool & _arg)
  {
    this->rotation_ewrt_frame_is_set = _arg;
    return *this;
  }
  Type & set__threshold_radians(
    const float & _arg)
  {
    this->threshold_radians = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RotationWithTolerance
    std::shared_ptr<bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RotationWithTolerance
    std::shared_ptr<bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotationWithTolerance_ & other) const
  {
    if (this->rotation_ewrt_frame != other.rotation_ewrt_frame) {
      return false;
    }
    if (this->rotation_ewrt_frame_is_set != other.rotation_ewrt_frame_is_set) {
      return false;
    }
    if (this->threshold_radians != other.threshold_radians) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotationWithTolerance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotationWithTolerance_

// alias to use template instance with default allocator
using RotationWithTolerance =
  bosdyn_msgs::msg::RotationWithTolerance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__STRUCT_HPP_
