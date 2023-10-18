// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ScalarTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SCALAR_TRAJECTORY_POINT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SCALAR_TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_since_reference'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ScalarTrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ScalarTrajectoryPoint __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScalarTrajectoryPoint_
{
  using Type = ScalarTrajectoryPoint_<ContainerAllocator>;

  explicit ScalarTrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_since_reference(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point = 0.0;
      this->velocity = 0.0;
      this->velocity_is_set = false;
      this->time_since_reference_is_set = false;
    }
  }

  explicit ScalarTrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_since_reference(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point = 0.0;
      this->velocity = 0.0;
      this->velocity_is_set = false;
      this->time_since_reference_is_set = false;
    }
  }

  // field types and members
  using _point_type =
    double;
  _point_type point;
  using _velocity_type =
    double;
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
  Type & set__point(
    const double & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
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
    bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ScalarTrajectoryPoint
    std::shared_ptr<bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ScalarTrajectoryPoint
    std::shared_ptr<bosdyn_msgs::msg::ScalarTrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScalarTrajectoryPoint_ & other) const
  {
    if (this->point != other.point) {
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
  bool operator!=(const ScalarTrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScalarTrajectoryPoint_

// alias to use template instance with default allocator
using ScalarTrajectoryPoint =
  bosdyn_msgs::msg::ScalarTrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SCALAR_TRAJECTORY_POINT__STRUCT_HPP_
