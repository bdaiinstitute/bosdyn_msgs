// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CameraPinholeIntrinsics.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_PINHOLE_INTRINSICS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_PINHOLE_INTRINSICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'focal_length'
// Member 'center_point'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CameraPinholeIntrinsics __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CameraPinholeIntrinsics __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraPinholeIntrinsics_
{
  using Type = CameraPinholeIntrinsics_<ContainerAllocator>;

  explicit CameraPinholeIntrinsics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : focal_length(_init),
    center_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->focal_length_is_set = false;
      this->center_point_is_set = false;
      this->k1 = 0.0f;
      this->k2 = 0.0f;
      this->k3 = 0.0f;
      this->k4 = 0.0f;
    }
  }

  explicit CameraPinholeIntrinsics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : focal_length(_alloc, _init),
    center_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->focal_length_is_set = false;
      this->center_point_is_set = false;
      this->k1 = 0.0f;
      this->k2 = 0.0f;
      this->k3 = 0.0f;
      this->k4 = 0.0f;
    }
  }

  // field types and members
  using _focal_length_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _focal_length_type focal_length;
  using _focal_length_is_set_type =
    bool;
  _focal_length_is_set_type focal_length_is_set;
  using _center_point_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _center_point_type center_point;
  using _center_point_is_set_type =
    bool;
  _center_point_is_set_type center_point_is_set;
  using _k1_type =
    float;
  _k1_type k1;
  using _k2_type =
    float;
  _k2_type k2;
  using _k3_type =
    float;
  _k3_type k3;
  using _k4_type =
    float;
  _k4_type k4;

  // setters for named parameter idiom
  Type & set__focal_length(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->focal_length = _arg;
    return *this;
  }
  Type & set__focal_length_is_set(
    const bool & _arg)
  {
    this->focal_length_is_set = _arg;
    return *this;
  }
  Type & set__center_point(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->center_point = _arg;
    return *this;
  }
  Type & set__center_point_is_set(
    const bool & _arg)
  {
    this->center_point_is_set = _arg;
    return *this;
  }
  Type & set__k1(
    const float & _arg)
  {
    this->k1 = _arg;
    return *this;
  }
  Type & set__k2(
    const float & _arg)
  {
    this->k2 = _arg;
    return *this;
  }
  Type & set__k3(
    const float & _arg)
  {
    this->k3 = _arg;
    return *this;
  }
  Type & set__k4(
    const float & _arg)
  {
    this->k4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CameraPinholeIntrinsics
    std::shared_ptr<bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CameraPinholeIntrinsics
    std::shared_ptr<bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraPinholeIntrinsics_ & other) const
  {
    if (this->focal_length != other.focal_length) {
      return false;
    }
    if (this->focal_length_is_set != other.focal_length_is_set) {
      return false;
    }
    if (this->center_point != other.center_point) {
      return false;
    }
    if (this->center_point_is_set != other.center_point_is_set) {
      return false;
    }
    if (this->k1 != other.k1) {
      return false;
    }
    if (this->k2 != other.k2) {
      return false;
    }
    if (this->k3 != other.k3) {
      return false;
    }
    if (this->k4 != other.k4) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraPinholeIntrinsics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraPinholeIntrinsics_

// alias to use template instance with default allocator
using CameraPinholeIntrinsics =
  bosdyn_msgs::msg::CameraPinholeIntrinsics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_PINHOLE_INTRINSICS__STRUCT_HPP_
