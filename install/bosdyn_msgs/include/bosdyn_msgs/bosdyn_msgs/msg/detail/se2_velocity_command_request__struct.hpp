// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SE2VelocityCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_COMMAND_REQUEST__STRUCT_HPP_

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
// Member 'velocity'
// Member 'slew_rate_limit'
#include "bosdyn_msgs/msg/detail/se2_velocity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SE2VelocityCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SE2VelocityCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SE2VelocityCommandRequest_
{
  using Type = SE2VelocityCommandRequest_<ContainerAllocator>;

  explicit SE2VelocityCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_time(_init),
    velocity(_init),
    slew_rate_limit(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_time_is_set = false;
      this->se2_frame_name = "";
      this->velocity_is_set = false;
      this->slew_rate_limit_is_set = false;
    }
  }

  explicit SE2VelocityCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_time(_alloc, _init),
    se2_frame_name(_alloc),
    velocity(_alloc, _init),
    slew_rate_limit(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_time_is_set = false;
      this->se2_frame_name = "";
      this->velocity_is_set = false;
      this->slew_rate_limit_is_set = false;
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
  using _velocity_type =
    bosdyn_msgs::msg::SE2Velocity_<ContainerAllocator>;
  _velocity_type velocity;
  using _velocity_is_set_type =
    bool;
  _velocity_is_set_type velocity_is_set;
  using _slew_rate_limit_type =
    bosdyn_msgs::msg::SE2Velocity_<ContainerAllocator>;
  _slew_rate_limit_type slew_rate_limit;
  using _slew_rate_limit_is_set_type =
    bool;
  _slew_rate_limit_is_set_type slew_rate_limit_is_set;

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
  Type & set__velocity(
    const bosdyn_msgs::msg::SE2Velocity_<ContainerAllocator> & _arg)
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
  Type & set__slew_rate_limit(
    const bosdyn_msgs::msg::SE2Velocity_<ContainerAllocator> & _arg)
  {
    this->slew_rate_limit = _arg;
    return *this;
  }
  Type & set__slew_rate_limit_is_set(
    const bool & _arg)
  {
    this->slew_rate_limit_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SE2VelocityCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SE2VelocityCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SE2VelocityCommandRequest_ & other) const
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
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->velocity_is_set != other.velocity_is_set) {
      return false;
    }
    if (this->slew_rate_limit != other.slew_rate_limit) {
      return false;
    }
    if (this->slew_rate_limit_is_set != other.slew_rate_limit_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SE2VelocityCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SE2VelocityCommandRequest_

// alias to use template instance with default allocator
using SE2VelocityCommandRequest =
  bosdyn_msgs::msg::SE2VelocityCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_COMMAND_REQUEST__STRUCT_HPP_
