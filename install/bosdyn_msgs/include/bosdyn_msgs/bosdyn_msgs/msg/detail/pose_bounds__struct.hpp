// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PoseBounds.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POSE_BOUNDS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POSE_BOUNDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PoseBounds __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PoseBounds __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseBounds_
{
  using Type = PoseBounds_<ContainerAllocator>;

  explicit PoseBounds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_bounds = 0.0;
      this->y_bounds = 0.0;
      this->z_bounds = 0.0;
      this->yaw_bounds = 0.0;
    }
  }

  explicit PoseBounds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_bounds = 0.0;
      this->y_bounds = 0.0;
      this->z_bounds = 0.0;
      this->yaw_bounds = 0.0;
    }
  }

  // field types and members
  using _x_bounds_type =
    double;
  _x_bounds_type x_bounds;
  using _y_bounds_type =
    double;
  _y_bounds_type y_bounds;
  using _z_bounds_type =
    double;
  _z_bounds_type z_bounds;
  using _yaw_bounds_type =
    double;
  _yaw_bounds_type yaw_bounds;

  // setters for named parameter idiom
  Type & set__x_bounds(
    const double & _arg)
  {
    this->x_bounds = _arg;
    return *this;
  }
  Type & set__y_bounds(
    const double & _arg)
  {
    this->y_bounds = _arg;
    return *this;
  }
  Type & set__z_bounds(
    const double & _arg)
  {
    this->z_bounds = _arg;
    return *this;
  }
  Type & set__yaw_bounds(
    const double & _arg)
  {
    this->yaw_bounds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PoseBounds_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PoseBounds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PoseBounds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PoseBounds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PoseBounds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PoseBounds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PoseBounds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PoseBounds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PoseBounds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PoseBounds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PoseBounds
    std::shared_ptr<bosdyn_msgs::msg::PoseBounds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PoseBounds
    std::shared_ptr<bosdyn_msgs::msg::PoseBounds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseBounds_ & other) const
  {
    if (this->x_bounds != other.x_bounds) {
      return false;
    }
    if (this->y_bounds != other.y_bounds) {
      return false;
    }
    if (this->z_bounds != other.z_bounds) {
      return false;
    }
    if (this->yaw_bounds != other.yaw_bounds) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseBounds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseBounds_

// alias to use template instance with default allocator
using PoseBounds =
  bosdyn_msgs::msg::PoseBounds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POSE_BOUNDS__STRUCT_HPP_
