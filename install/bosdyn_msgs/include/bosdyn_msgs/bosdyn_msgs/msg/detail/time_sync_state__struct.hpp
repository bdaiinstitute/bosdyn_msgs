// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'best_estimate'
#include "bosdyn_msgs/msg/detail/time_sync_estimate__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/time_sync_state_status__struct.hpp"
// Member 'measurement_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TimeSyncState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TimeSyncState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeSyncState_
{
  using Type = TimeSyncState_<ContainerAllocator>;

  explicit TimeSyncState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : best_estimate(_init),
    status(_init),
    measurement_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->best_estimate_is_set = false;
      this->measurement_time_is_set = false;
    }
  }

  explicit TimeSyncState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : best_estimate(_alloc, _init),
    status(_alloc, _init),
    measurement_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->best_estimate_is_set = false;
      this->measurement_time_is_set = false;
    }
  }

  // field types and members
  using _best_estimate_type =
    bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator>;
  _best_estimate_type best_estimate;
  using _best_estimate_is_set_type =
    bool;
  _best_estimate_is_set_type best_estimate_is_set;
  using _status_type =
    bosdyn_msgs::msg::TimeSyncStateStatus_<ContainerAllocator>;
  _status_type status;
  using _measurement_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _measurement_time_type measurement_time;
  using _measurement_time_is_set_type =
    bool;
  _measurement_time_is_set_type measurement_time_is_set;

  // setters for named parameter idiom
  Type & set__best_estimate(
    const bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator> & _arg)
  {
    this->best_estimate = _arg;
    return *this;
  }
  Type & set__best_estimate_is_set(
    const bool & _arg)
  {
    this->best_estimate_is_set = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::TimeSyncStateStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__measurement_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->measurement_time = _arg;
    return *this;
  }
  Type & set__measurement_time_is_set(
    const bool & _arg)
  {
    this->measurement_time_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TimeSyncState
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TimeSyncState
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeSyncState_ & other) const
  {
    if (this->best_estimate != other.best_estimate) {
      return false;
    }
    if (this->best_estimate_is_set != other.best_estimate_is_set) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->measurement_time != other.measurement_time) {
      return false;
    }
    if (this->measurement_time_is_set != other.measurement_time_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeSyncState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeSyncState_

// alias to use template instance with default allocator
using TimeSyncState =
  bosdyn_msgs::msg::TimeSyncState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__STRUCT_HPP_
