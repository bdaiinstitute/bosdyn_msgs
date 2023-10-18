// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Vec3TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY_POINT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'time_since_reference'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Vec3TrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Vec3TrajectoryPoint __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vec3TrajectoryPoint_
{
  using Type = Vec3TrajectoryPoint_<ContainerAllocator>;

  explicit Vec3TrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init),
    time_since_reference(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_is_set = false;
      this->linear_speed = 0.0;
      this->time_since_reference_is_set = false;
    }
  }

  explicit Vec3TrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init),
    time_since_reference(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_is_set = false;
      this->linear_speed = 0.0;
      this->time_since_reference_is_set = false;
    }
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _point_type point;
  using _point_is_set_type =
    bool;
  _point_is_set_type point_is_set;
  using _linear_speed_type =
    double;
  _linear_speed_type linear_speed;
  using _time_since_reference_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_since_reference_type time_since_reference;
  using _time_since_reference_is_set_type =
    bool;
  _time_since_reference_is_set_type time_since_reference_is_set;

  // setters for named parameter idiom
  Type & set__point(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__point_is_set(
    const bool & _arg)
  {
    this->point_is_set = _arg;
    return *this;
  }
  Type & set__linear_speed(
    const double & _arg)
  {
    this->linear_speed = _arg;
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
    bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Vec3TrajectoryPoint
    std::shared_ptr<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Vec3TrajectoryPoint
    std::shared_ptr<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vec3TrajectoryPoint_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->point_is_set != other.point_is_set) {
      return false;
    }
    if (this->linear_speed != other.linear_speed) {
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
  bool operator!=(const Vec3TrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vec3TrajectoryPoint_

// alias to use template instance with default allocator
using Vec3TrajectoryPoint =
  bosdyn_msgs::msg::Vec3TrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY_POINT__STRUCT_HPP_
