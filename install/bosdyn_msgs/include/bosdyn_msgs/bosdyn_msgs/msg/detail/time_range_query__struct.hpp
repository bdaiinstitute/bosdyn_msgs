// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TimeRangeQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'from_timestamp'
// Member 'to_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TimeRangeQuery __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TimeRangeQuery __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeRangeQuery_
{
  using Type = TimeRangeQuery_<ContainerAllocator>;

  explicit TimeRangeQuery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : from_timestamp(_init),
    to_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->from_timestamp_is_set = false;
      this->to_timestamp_is_set = false;
    }
  }

  explicit TimeRangeQuery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : from_timestamp(_alloc, _init),
    to_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->from_timestamp_is_set = false;
      this->to_timestamp_is_set = false;
    }
  }

  // field types and members
  using _from_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _from_timestamp_type from_timestamp;
  using _from_timestamp_is_set_type =
    bool;
  _from_timestamp_is_set_type from_timestamp_is_set;
  using _to_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _to_timestamp_type to_timestamp;
  using _to_timestamp_is_set_type =
    bool;
  _to_timestamp_is_set_type to_timestamp_is_set;

  // setters for named parameter idiom
  Type & set__from_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->from_timestamp = _arg;
    return *this;
  }
  Type & set__from_timestamp_is_set(
    const bool & _arg)
  {
    this->from_timestamp_is_set = _arg;
    return *this;
  }
  Type & set__to_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->to_timestamp = _arg;
    return *this;
  }
  Type & set__to_timestamp_is_set(
    const bool & _arg)
  {
    this->to_timestamp_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TimeRangeQuery
    std::shared_ptr<bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TimeRangeQuery
    std::shared_ptr<bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeRangeQuery_ & other) const
  {
    if (this->from_timestamp != other.from_timestamp) {
      return false;
    }
    if (this->from_timestamp_is_set != other.from_timestamp_is_set) {
      return false;
    }
    if (this->to_timestamp != other.to_timestamp) {
      return false;
    }
    if (this->to_timestamp_is_set != other.to_timestamp_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeRangeQuery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeRangeQuery_

// alias to use template instance with default allocator
using TimeRangeQuery =
  bosdyn_msgs::msg::TimeRangeQuery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__STRUCT_HPP_
