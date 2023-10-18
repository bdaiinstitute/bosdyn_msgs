// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SE2Trajectory.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "bosdyn_msgs/msg/detail/se2_trajectory_point__struct.hpp"
// Member 'reference_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'interpolation'
#include "bosdyn_msgs/msg/detail/positional_interpolation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SE2Trajectory __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SE2Trajectory __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SE2Trajectory_
{
  using Type = SE2Trajectory_<ContainerAllocator>;

  explicit SE2Trajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_time(_init),
    interpolation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_time_is_set = false;
    }
  }

  explicit SE2Trajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_time(_alloc, _init),
    interpolation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_time_is_set = false;
    }
  }

  // field types and members
  using _points_type =
    std::vector<bosdyn_msgs::msg::SE2TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SE2TrajectoryPoint_<ContainerAllocator>>>;
  _points_type points;
  using _reference_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _reference_time_type reference_time;
  using _reference_time_is_set_type =
    bool;
  _reference_time_is_set_type reference_time_is_set;
  using _interpolation_type =
    bosdyn_msgs::msg::PositionalInterpolation_<ContainerAllocator>;
  _interpolation_type interpolation;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<bosdyn_msgs::msg::SE2TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SE2TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__reference_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->reference_time = _arg;
    return *this;
  }
  Type & set__reference_time_is_set(
    const bool & _arg)
  {
    this->reference_time_is_set = _arg;
    return *this;
  }
  Type & set__interpolation(
    const bosdyn_msgs::msg::PositionalInterpolation_<ContainerAllocator> & _arg)
  {
    this->interpolation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SE2Trajectory
    std::shared_ptr<bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SE2Trajectory
    std::shared_ptr<bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SE2Trajectory_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    if (this->reference_time != other.reference_time) {
      return false;
    }
    if (this->reference_time_is_set != other.reference_time_is_set) {
      return false;
    }
    if (this->interpolation != other.interpolation) {
      return false;
    }
    return true;
  }
  bool operator!=(const SE2Trajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SE2Trajectory_

// alias to use template instance with default allocator
using SE2Trajectory =
  bosdyn_msgs::msg::SE2Trajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY__STRUCT_HPP_
