// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SE2Pose.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_POSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SE2Pose __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SE2Pose __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SE2Pose_
{
  using Type = SE2Pose_<ContainerAllocator>;

  explicit SE2Pose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_is_set = false;
      this->angle = 0.0;
    }
  }

  explicit SE2Pose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_is_set = false;
      this->angle = 0.0;
    }
  }

  // field types and members
  using _position_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _position_type position;
  using _position_is_set_type =
    bool;
  _position_is_set_type position_is_set;
  using _angle_type =
    double;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__position(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__position_is_set(
    const bool & _arg)
  {
    this->position_is_set = _arg;
    return *this;
  }
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SE2Pose_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SE2Pose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE2Pose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE2Pose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE2Pose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE2Pose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE2Pose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE2Pose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE2Pose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE2Pose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SE2Pose
    std::shared_ptr<bosdyn_msgs::msg::SE2Pose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SE2Pose
    std::shared_ptr<bosdyn_msgs::msg::SE2Pose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SE2Pose_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->position_is_set != other.position_is_set) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SE2Pose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SE2Pose_

// alias to use template instance with default allocator
using SE2Pose =
  bosdyn_msgs::msg::SE2Pose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_POSE__STRUCT_HPP_
