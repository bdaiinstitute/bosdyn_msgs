// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BehaviorFault.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'onset_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'cause'
#include "bosdyn_msgs/msg/detail/behavior_fault_cause__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/behavior_fault_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BehaviorFault __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BehaviorFault __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorFault_
{
  using Type = BehaviorFault_<ContainerAllocator>;

  explicit BehaviorFault_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : onset_timestamp(_init),
    cause(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_fault_id = 0ul;
      this->onset_timestamp_is_set = false;
    }
  }

  explicit BehaviorFault_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : onset_timestamp(_alloc, _init),
    cause(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_fault_id = 0ul;
      this->onset_timestamp_is_set = false;
    }
  }

  // field types and members
  using _behavior_fault_id_type =
    uint32_t;
  _behavior_fault_id_type behavior_fault_id;
  using _onset_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _onset_timestamp_type onset_timestamp;
  using _onset_timestamp_is_set_type =
    bool;
  _onset_timestamp_is_set_type onset_timestamp_is_set;
  using _cause_type =
    bosdyn_msgs::msg::BehaviorFaultCause_<ContainerAllocator>;
  _cause_type cause;
  using _status_type =
    bosdyn_msgs::msg::BehaviorFaultStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__behavior_fault_id(
    const uint32_t & _arg)
  {
    this->behavior_fault_id = _arg;
    return *this;
  }
  Type & set__onset_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->onset_timestamp = _arg;
    return *this;
  }
  Type & set__onset_timestamp_is_set(
    const bool & _arg)
  {
    this->onset_timestamp_is_set = _arg;
    return *this;
  }
  Type & set__cause(
    const bosdyn_msgs::msg::BehaviorFaultCause_<ContainerAllocator> & _arg)
  {
    this->cause = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::BehaviorFaultStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BehaviorFault
    std::shared_ptr<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BehaviorFault
    std::shared_ptr<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorFault_ & other) const
  {
    if (this->behavior_fault_id != other.behavior_fault_id) {
      return false;
    }
    if (this->onset_timestamp != other.onset_timestamp) {
      return false;
    }
    if (this->onset_timestamp_is_set != other.onset_timestamp_is_set) {
      return false;
    }
    if (this->cause != other.cause) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorFault_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorFault_

// alias to use template instance with default allocator
using BehaviorFault =
  bosdyn_msgs::msg::BehaviorFault_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT__STRUCT_HPP_
