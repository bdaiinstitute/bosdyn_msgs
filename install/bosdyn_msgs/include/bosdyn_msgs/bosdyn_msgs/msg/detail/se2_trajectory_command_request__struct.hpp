// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SE2TrajectoryCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'trajectory'
#include "bosdyn_msgs/msg/detail/se2_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SE2TrajectoryCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SE2TrajectoryCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SE2TrajectoryCommandRequest_
{
  using Type = SE2TrajectoryCommandRequest_<ContainerAllocator>;

  explicit SE2TrajectoryCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_time(_init),
    trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_time_is_set = false;
      this->se2_frame_name = "";
      this->trajectory_is_set = false;
    }
  }

  explicit SE2TrajectoryCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_time(_alloc, _init),
    se2_frame_name(_alloc),
    trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_time_is_set = false;
      this->se2_frame_name = "";
      this->trajectory_is_set = false;
    }
  }

  // field types and members
  using _end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_time_type end_time;
  using _end_time_is_set_type =
    bool;
  _end_time_is_set_type end_time_is_set;
  using _se2_frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _se2_frame_name_type se2_frame_name;
  using _trajectory_type =
    bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator>;
  _trajectory_type trajectory;
  using _trajectory_is_set_type =
    bool;
  _trajectory_is_set_type trajectory_is_set;

  // setters for named parameter idiom
  Type & set__end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__end_time_is_set(
    const bool & _arg)
  {
    this->end_time_is_set = _arg;
    return *this;
  }
  Type & set__se2_frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->se2_frame_name = _arg;
    return *this;
  }
  Type & set__trajectory(
    const bosdyn_msgs::msg::SE2Trajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__trajectory_is_set(
    const bool & _arg)
  {
    this->trajectory_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SE2TrajectoryCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SE2TrajectoryCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SE2TrajectoryCommandRequest_ & other) const
  {
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->end_time_is_set != other.end_time_is_set) {
      return false;
    }
    if (this->se2_frame_name != other.se2_frame_name) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->trajectory_is_set != other.trajectory_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SE2TrajectoryCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SE2TrajectoryCommandRequest_

// alias to use template instance with default allocator
using SE2TrajectoryCommandRequest =
  bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY_COMMAND_REQUEST__STRUCT_HPP_
