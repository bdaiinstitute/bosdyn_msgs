// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Vec3Trajectory.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "bosdyn_msgs/msg/detail/vec3_trajectory_point__struct.hpp"
// Member 'reference_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'pos_interpolation'
#include "bosdyn_msgs/msg/detail/positional_interpolation__struct.hpp"
// Member 'starting_velocity'
// Member 'ending_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Vec3Trajectory __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Vec3Trajectory __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vec3Trajectory_
{
  using Type = Vec3Trajectory_<ContainerAllocator>;

  explicit Vec3Trajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_time(_init),
    pos_interpolation(_init),
    starting_velocity(_init),
    ending_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_time_is_set = false;
      this->starting_velocity_is_set = false;
      this->ending_velocity_is_set = false;
    }
  }

  explicit Vec3Trajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_time(_alloc, _init),
    pos_interpolation(_alloc, _init),
    starting_velocity(_alloc, _init),
    ending_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_time_is_set = false;
      this->starting_velocity_is_set = false;
      this->ending_velocity_is_set = false;
    }
  }

  // field types and members
  using _points_type =
    std::vector<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator>>>;
  _points_type points;
  using _reference_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _reference_time_type reference_time;
  using _reference_time_is_set_type =
    bool;
  _reference_time_is_set_type reference_time_is_set;
  using _pos_interpolation_type =
    bosdyn_msgs::msg::PositionalInterpolation_<ContainerAllocator>;
  _pos_interpolation_type pos_interpolation;
  using _starting_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _starting_velocity_type starting_velocity;
  using _starting_velocity_is_set_type =
    bool;
  _starting_velocity_is_set_type starting_velocity_is_set;
  using _ending_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ending_velocity_type ending_velocity;
  using _ending_velocity_is_set_type =
    bool;
  _ending_velocity_is_set_type ending_velocity_is_set;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Vec3TrajectoryPoint_<ContainerAllocator>>> & _arg)
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
  Type & set__pos_interpolation(
    const bosdyn_msgs::msg::PositionalInterpolation_<ContainerAllocator> & _arg)
  {
    this->pos_interpolation = _arg;
    return *this;
  }
  Type & set__starting_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->starting_velocity = _arg;
    return *this;
  }
  Type & set__starting_velocity_is_set(
    const bool & _arg)
  {
    this->starting_velocity_is_set = _arg;
    return *this;
  }
  Type & set__ending_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ending_velocity = _arg;
    return *this;
  }
  Type & set__ending_velocity_is_set(
    const bool & _arg)
  {
    this->ending_velocity_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Vec3Trajectory
    std::shared_ptr<bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Vec3Trajectory
    std::shared_ptr<bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vec3Trajectory_ & other) const
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
    if (this->pos_interpolation != other.pos_interpolation) {
      return false;
    }
    if (this->starting_velocity != other.starting_velocity) {
      return false;
    }
    if (this->starting_velocity_is_set != other.starting_velocity_is_set) {
      return false;
    }
    if (this->ending_velocity != other.ending_velocity) {
      return false;
    }
    if (this->ending_velocity_is_set != other.ending_velocity_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vec3Trajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vec3Trajectory_

// alias to use template instance with default allocator
using Vec3Trajectory =
  bosdyn_msgs::msg::Vec3Trajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY__STRUCT_HPP_
