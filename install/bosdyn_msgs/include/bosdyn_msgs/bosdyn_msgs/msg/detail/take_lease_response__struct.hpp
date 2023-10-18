// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TakeLeaseResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TAKE_LEASE_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TAKE_LEASE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/take_lease_response_status__struct.hpp"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"
// Member 'lease_owner'
#include "bosdyn_msgs/msg/detail/lease_owner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TakeLeaseResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TakeLeaseResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TakeLeaseResponse_
{
  using Type = TakeLeaseResponse_<ContainerAllocator>;

  explicit TakeLeaseResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    lease(_init),
    lease_owner(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->lease_is_set = false;
      this->lease_owner_is_set = false;
    }
  }

  explicit TakeLeaseResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    lease(_alloc, _init),
    lease_owner(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->lease_is_set = false;
      this->lease_owner_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _status_type =
    bosdyn_msgs::msg::TakeLeaseResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _lease_type =
    bosdyn_msgs::msg::Lease_<ContainerAllocator>;
  _lease_type lease;
  using _lease_is_set_type =
    bool;
  _lease_is_set_type lease_is_set;
  using _lease_owner_type =
    bosdyn_msgs::msg::LeaseOwner_<ContainerAllocator>;
  _lease_owner_type lease_owner;
  using _lease_owner_is_set_type =
    bool;
  _lease_owner_is_set_type lease_owner_is_set;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::TakeLeaseResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__lease(
    const bosdyn_msgs::msg::Lease_<ContainerAllocator> & _arg)
  {
    this->lease = _arg;
    return *this;
  }
  Type & set__lease_is_set(
    const bool & _arg)
  {
    this->lease_is_set = _arg;
    return *this;
  }
  Type & set__lease_owner(
    const bosdyn_msgs::msg::LeaseOwner_<ContainerAllocator> & _arg)
  {
    this->lease_owner = _arg;
    return *this;
  }
  Type & set__lease_owner_is_set(
    const bool & _arg)
  {
    this->lease_owner_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TakeLeaseResponse
    std::shared_ptr<bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TakeLeaseResponse
    std::shared_ptr<bosdyn_msgs::msg::TakeLeaseResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeLeaseResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->lease != other.lease) {
      return false;
    }
    if (this->lease_is_set != other.lease_is_set) {
      return false;
    }
    if (this->lease_owner != other.lease_owner) {
      return false;
    }
    if (this->lease_owner_is_set != other.lease_owner_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeLeaseResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeLeaseResponse_

// alias to use template instance with default allocator
using TakeLeaseResponse =
  bosdyn_msgs::msg::TakeLeaseResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TAKE_LEASE_RESPONSE__STRUCT_HPP_
