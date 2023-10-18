// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY_POINT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "bosdyn_msgs/msg/detail/arm_joint_position__struct.hpp"
// Member 'velocity'
#include "bosdyn_msgs/msg/detail/arm_joint_velocity__struct.hpp"
// Member 'time_since_reference'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmJointTrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmJointTrajectoryPoint __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmJointTrajectoryPoint_
{
  using Type = ArmJointTrajectoryPoint_<ContainerAllocator>;

  explicit ArmJointTrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    velocity(_init),
    time_since_reference(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_is_set = false;
      this->velocity_is_set = false;
      this->time_since_reference_is_set = false;
    }
  }

  explicit ArmJointTrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    velocity(_alloc, _init),
    time_since_reference(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_is_set = false;
      this->velocity_is_set = false;
      this->time_since_reference_is_set = false;
    }
  }

  // field types and members
  using _position_type =
    bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator>;
  _position_type position;
  using _position_is_set_type =
    bool;
  _position_is_set_type position_is_set;
  using _velocity_type =
    bosdyn_msgs::msg::ArmJointVelocity_<ContainerAllocator>;
  _velocity_type velocity;
  using _velocity_is_set_type =
    bool;
  _velocity_is_set_type velocity_is_set;
  using _time_since_reference_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_since_reference_type time_since_reference;
  using _time_since_reference_is_set_type =
    bool;
  _time_since_reference_is_set_type time_since_reference_is_set;

  // setters for named parameter idiom
  Type & set__position(
    const bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator> & _arg)
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
  Type & set__velocity(
    const bosdyn_msgs::msg::ArmJointVelocity_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__velocity_is_set(
    const bool & _arg)
  {
    this->velocity_is_set = _arg;
    return *this;
  }
  Type & set__time_since_reference(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_since_reference = _arg;
    return *this;
  }
  Type & set__time_since_reference_is_set(
    const bool & _arg)
  {
    this->time_since_reference_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmJointTrajectoryPoint
    std::shared_ptr<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmJointTrajectoryPoint
    std::shared_ptr<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmJointTrajectoryPoint_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->position_is_set != other.position_is_set) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->velocity_is_set != other.velocity_is_set) {
      return false;
    }
    if (this->time_since_reference != other.time_since_reference) {
      return false;
    }
    if (this->time_since_reference_is_set != other.time_since_reference_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmJointTrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmJointTrajectoryPoint_

// alias to use template instance with default allocator
using ArmJointTrajectoryPoint =
  bosdyn_msgs::msg::ArmJointTrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY_POINT__STRUCT_HPP_
