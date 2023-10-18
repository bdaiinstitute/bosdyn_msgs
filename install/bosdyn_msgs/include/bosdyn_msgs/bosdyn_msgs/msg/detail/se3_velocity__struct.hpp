// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SE3Velocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE3_VELOCITY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE3_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SE3Velocity __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SE3Velocity __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SE3Velocity_
{
  using Type = SE3Velocity_<ContainerAllocator>;

  explicit SE3Velocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear(_init),
    angular(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_is_set = false;
      this->angular_is_set = false;
    }
  }

  explicit SE3Velocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear(_alloc, _init),
    angular(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_is_set = false;
      this->angular_is_set = false;
    }
  }

  // field types and members
  using _linear_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_type linear;
  using _linear_is_set_type =
    bool;
  _linear_is_set_type linear_is_set;
  using _angular_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_type angular;
  using _angular_is_set_type =
    bool;
  _angular_is_set_type angular_is_set;

  // setters for named parameter idiom
  Type & set__linear(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear = _arg;
    return *this;
  }
  Type & set__linear_is_set(
    const bool & _arg)
  {
    this->linear_is_set = _arg;
    return *this;
  }
  Type & set__angular(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular = _arg;
    return *this;
  }
  Type & set__angular_is_set(
    const bool & _arg)
  {
    this->angular_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SE3Velocity
    std::shared_ptr<bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SE3Velocity
    std::shared_ptr<bosdyn_msgs::msg::SE3Velocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SE3Velocity_ & other) const
  {
    if (this->linear != other.linear) {
      return false;
    }
    if (this->linear_is_set != other.linear_is_set) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    if (this->angular_is_set != other.angular_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SE3Velocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SE3Velocity_

// alias to use template instance with default allocator
using SE3Velocity =
  bosdyn_msgs::msg::SE3Velocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE3_VELOCITY__STRUCT_HPP_
