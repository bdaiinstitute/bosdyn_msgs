// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LeaseUseResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LEASE_USE_RESULT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LEASE_USE_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/lease_use_result_status__struct.hpp"
// Member 'owner'
#include "bosdyn_msgs/msg/detail/lease_owner__struct.hpp"
// Member 'attempted_lease'
// Member 'previous_lease'
// Member 'latest_known_lease'
// Member 'latest_resources'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LeaseUseResult __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LeaseUseResult __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LeaseUseResult_
{
  using Type = LeaseUseResult_<ContainerAllocator>;

  explicit LeaseUseResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    owner(_init),
    attempted_lease(_init),
    previous_lease(_init),
    latest_known_lease(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->owner_is_set = false;
      this->attempted_lease_is_set = false;
      this->previous_lease_is_set = false;
      this->latest_known_lease_is_set = false;
    }
  }

  explicit LeaseUseResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    owner(_alloc, _init),
    attempted_lease(_alloc, _init),
    previous_lease(_alloc, _init),
    latest_known_lease(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->owner_is_set = false;
      this->attempted_lease_is_set = false;
      this->previous_lease_is_set = false;
      this->latest_known_lease_is_set = false;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::LeaseUseResultStatus_<ContainerAllocator>;
  _status_type status;
  using _owner_type =
    bosdyn_msgs::msg::LeaseOwner_<ContainerAllocator>;
  _owner_type owner;
  using _owner_is_set_type =
    bool;
  _owner_is_set_type owner_is_set;
  using _attempted_lease_type =
    bosdyn_msgs::msg::Lease_<ContainerAllocator>;
  _attempted_lease_type attempted_lease;
  using _attempted_lease_is_set_type =
    bool;
  _attempted_lease_is_set_type attempted_lease_is_set;
  using _previous_lease_type =
    bosdyn_msgs::msg::Lease_<ContainerAllocator>;
  _previous_lease_type previous_lease;
  using _previous_lease_is_set_type =
    bool;
  _previous_lease_is_set_type previous_lease_is_set;
  using _latest_known_lease_type =
    bosdyn_msgs::msg::Lease_<ContainerAllocator>;
  _latest_known_lease_type latest_known_lease;
  using _latest_known_lease_is_set_type =
    bool;
  _latest_known_lease_is_set_type latest_known_lease_is_set;
  using _latest_resources_type =
    std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>>;
  _latest_resources_type latest_resources;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::LeaseUseResultStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__owner(
    const bosdyn_msgs::msg::LeaseOwner_<ContainerAllocator> & _arg)
  {
    this->owner = _arg;
    return *this;
  }
  Type & set__owner_is_set(
    const bool & _arg)
  {
    this->owner_is_set = _arg;
    return *this;
  }
  Type & set__attempted_lease(
    const bosdyn_msgs::msg::Lease_<ContainerAllocator> & _arg)
  {
    this->attempted_lease = _arg;
    return *this;
  }
  Type & set__attempted_lease_is_set(
    const bool & _arg)
  {
    this->attempted_lease_is_set = _arg;
    return *this;
  }
  Type & set__previous_lease(
    const bosdyn_msgs::msg::Lease_<ContainerAllocator> & _arg)
  {
    this->previous_lease = _arg;
    return *this;
  }
  Type & set__previous_lease_is_set(
    const bool & _arg)
  {
    this->previous_lease_is_set = _arg;
    return *this;
  }
  Type & set__latest_known_lease(
    const bosdyn_msgs::msg::Lease_<ContainerAllocator> & _arg)
  {
    this->latest_known_lease = _arg;
    return *this;
  }
  Type & set__latest_known_lease_is_set(
    const bool & _arg)
  {
    this->latest_known_lease_is_set = _arg;
    return *this;
  }
  Type & set__latest_resources(
    const std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>> & _arg)
  {
    this->latest_resources = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LeaseUseResult
    std::shared_ptr<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LeaseUseResult
    std::shared_ptr<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LeaseUseResult_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->owner != other.owner) {
      return false;
    }
    if (this->owner_is_set != other.owner_is_set) {
      return false;
    }
    if (this->attempted_lease != other.attempted_lease) {
      return false;
    }
    if (this->attempted_lease_is_set != other.attempted_lease_is_set) {
      return false;
    }
    if (this->previous_lease != other.previous_lease) {
      return false;
    }
    if (this->previous_lease_is_set != other.previous_lease_is_set) {
      return false;
    }
    if (this->latest_known_lease != other.latest_known_lease) {
      return false;
    }
    if (this->latest_known_lease_is_set != other.latest_known_lease_is_set) {
      return false;
    }
    if (this->latest_resources != other.latest_resources) {
      return false;
    }
    return true;
  }
  bool operator!=(const LeaseUseResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LeaseUseResult_

// alias to use template instance with default allocator
using LeaseUseResult =
  bosdyn_msgs::msg::LeaseUseResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LEASE_USE_RESULT__STRUCT_HPP_
