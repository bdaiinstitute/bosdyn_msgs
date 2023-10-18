// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SpotCheckCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"
// Member 'command'
#include "bosdyn_msgs/msg/detail/spot_check_command_request_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SpotCheckCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SpotCheckCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpotCheckCommandRequest_
{
  using Type = SpotCheckCommandRequest_<ContainerAllocator>;

  explicit SpotCheckCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    lease(_init),
    command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->lease_is_set = false;
    }
  }

  explicit SpotCheckCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    lease(_alloc, _init),
    command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->lease_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _lease_type =
    bosdyn_msgs::msg::Lease_<ContainerAllocator>;
  _lease_type lease;
  using _lease_is_set_type =
    bool;
  _lease_is_set_type lease_is_set;
  using _command_type =
    bosdyn_msgs::msg::SpotCheckCommandRequestCommand_<ContainerAllocator>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
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
  Type & set__command(
    const bosdyn_msgs::msg::SpotCheckCommandRequestCommand_<ContainerAllocator> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCheckCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCheckCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpotCheckCommandRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->lease != other.lease) {
      return false;
    }
    if (this->lease_is_set != other.lease_is_set) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpotCheckCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpotCheckCommandRequest_

// alias to use template instance with default allocator
using SpotCheckCommandRequest =
  bosdyn_msgs::msg::SpotCheckCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_COMMAND_REQUEST__STRUCT_HPP_
