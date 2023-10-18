// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SE2VelocityLimit.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_LIMIT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_LIMIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'max_vel'
// Member 'min_vel'
#include "bosdyn_msgs/msg/detail/se2_velocity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SE2VelocityLimit __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SE2VelocityLimit __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SE2VelocityLimit_
{
  using Type = SE2VelocityLimit_<ContainerAllocator>;

  explicit SE2VelocityLimit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : max_vel(_init),
    min_vel(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_vel_is_set = false;
      this->min_vel_is_set = false;
    }
  }

  explicit SE2VelocityLimit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : max_vel(_alloc, _init),
    min_vel(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_vel_is_set = false;
      this->min_vel_is_set = false;
    }
  }

  // field types and members
  using _max_vel_type =
    bosdyn_msgs::msg::SE2Velocity_<ContainerAllocator>;
  _max_vel_type max_vel;
  using _max_vel_is_set_type =
    bool;
  _max_vel_is_set_type max_vel_is_set;
  using _min_vel_type =
    bosdyn_msgs::msg::SE2Velocity_<ContainerAllocator>;
  _min_vel_type min_vel;
  using _min_vel_is_set_type =
    bool;
  _min_vel_is_set_type min_vel_is_set;

  // setters for named parameter idiom
  Type & set__max_vel(
    const bosdyn_msgs::msg::SE2Velocity_<ContainerAllocator> & _arg)
  {
    this->max_vel = _arg;
    return *this;
  }
  Type & set__max_vel_is_set(
    const bool & _arg)
  {
    this->max_vel_is_set = _arg;
    return *this;
  }
  Type & set__min_vel(
    const bosdyn_msgs::msg::SE2Velocity_<ContainerAllocator> & _arg)
  {
    this->min_vel = _arg;
    return *this;
  }
  Type & set__min_vel_is_set(
    const bool & _arg)
  {
    this->min_vel_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SE2VelocityLimit
    std::shared_ptr<bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SE2VelocityLimit
    std::shared_ptr<bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SE2VelocityLimit_ & other) const
  {
    if (this->max_vel != other.max_vel) {
      return false;
    }
    if (this->max_vel_is_set != other.max_vel_is_set) {
      return false;
    }
    if (this->min_vel != other.min_vel) {
      return false;
    }
    if (this->min_vel_is_set != other.min_vel_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SE2VelocityLimit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SE2VelocityLimit_

// alias to use template instance with default allocator
using SE2VelocityLimit =
  bosdyn_msgs::msg::SE2VelocityLimit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_LIMIT__STRUCT_HPP_
