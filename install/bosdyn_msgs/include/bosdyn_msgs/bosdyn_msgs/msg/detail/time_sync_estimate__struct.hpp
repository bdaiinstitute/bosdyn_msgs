// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncEstimate.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ESTIMATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ESTIMATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'round_trip_time'
// Member 'clock_skew'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TimeSyncEstimate __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TimeSyncEstimate __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeSyncEstimate_
{
  using Type = TimeSyncEstimate_<ContainerAllocator>;

  explicit TimeSyncEstimate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : round_trip_time(_init),
    clock_skew(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->round_trip_time_is_set = false;
      this->clock_skew_is_set = false;
    }
  }

  explicit TimeSyncEstimate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : round_trip_time(_alloc, _init),
    clock_skew(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->round_trip_time_is_set = false;
      this->clock_skew_is_set = false;
    }
  }

  // field types and members
  using _round_trip_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _round_trip_time_type round_trip_time;
  using _round_trip_time_is_set_type =
    bool;
  _round_trip_time_is_set_type round_trip_time_is_set;
  using _clock_skew_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _clock_skew_type clock_skew;
  using _clock_skew_is_set_type =
    bool;
  _clock_skew_is_set_type clock_skew_is_set;

  // setters for named parameter idiom
  Type & set__round_trip_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->round_trip_time = _arg;
    return *this;
  }
  Type & set__round_trip_time_is_set(
    const bool & _arg)
  {
    this->round_trip_time_is_set = _arg;
    return *this;
  }
  Type & set__clock_skew(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->clock_skew = _arg;
    return *this;
  }
  Type & set__clock_skew_is_set(
    const bool & _arg)
  {
    this->clock_skew_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TimeSyncEstimate
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TimeSyncEstimate
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeSyncEstimate_ & other) const
  {
    if (this->round_trip_time != other.round_trip_time) {
      return false;
    }
    if (this->round_trip_time_is_set != other.round_trip_time_is_set) {
      return false;
    }
    if (this->clock_skew != other.clock_skew) {
      return false;
    }
    if (this->clock_skew_is_set != other.clock_skew_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeSyncEstimate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeSyncEstimate_

// alias to use template instance with default allocator
using TimeSyncEstimate =
  bosdyn_msgs::msg::TimeSyncEstimate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ESTIMATE__STRUCT_HPP_
