// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TimeRange.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start'
// Member 'end'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TimeRange __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TimeRange __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeRange_
{
  using Type = TimeRange_<ContainerAllocator>;

  explicit TimeRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init),
    end(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_is_set = false;
      this->end_is_set = false;
    }
  }

  explicit TimeRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc, _init),
    end(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_is_set = false;
      this->end_is_set = false;
    }
  }

  // field types and members
  using _start_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_type start;
  using _start_is_set_type =
    bool;
  _start_is_set_type start_is_set;
  using _end_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_type end;
  using _end_is_set_type =
    bool;
  _end_is_set_type end_is_set;

  // setters for named parameter idiom
  Type & set__start(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__start_is_set(
    const bool & _arg)
  {
    this->start_is_set = _arg;
    return *this;
  }
  Type & set__end(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end = _arg;
    return *this;
  }
  Type & set__end_is_set(
    const bool & _arg)
  {
    this->end_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TimeRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TimeRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TimeRange
    std::shared_ptr<bosdyn_msgs::msg::TimeRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TimeRange
    std::shared_ptr<bosdyn_msgs::msg::TimeRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeRange_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->start_is_set != other.start_is_set) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    if (this->end_is_set != other.end_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeRange_

// alias to use template instance with default allocator
using TimeRange =
  bosdyn_msgs::msg::TimeRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE__STRUCT_HPP_
