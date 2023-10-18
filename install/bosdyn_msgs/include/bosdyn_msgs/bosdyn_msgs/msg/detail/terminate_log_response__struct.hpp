// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TerminateLogResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TERMINATE_LOG_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TERMINATE_LOG_RESPONSE__STRUCT_HPP_

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
#include "bosdyn_msgs/msg/detail/terminate_log_response_status__struct.hpp"
// Member 'log_status'
#include "bosdyn_msgs/msg/detail/log_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TerminateLogResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TerminateLogResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TerminateLogResponse_
{
  using Type = TerminateLogResponse_<ContainerAllocator>;

  explicit TerminateLogResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    log_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->log_status_is_set = false;
    }
  }

  explicit TerminateLogResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    log_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->log_status_is_set = false;
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
    bosdyn_msgs::msg::TerminateLogResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _log_status_type =
    bosdyn_msgs::msg::LogStatus_<ContainerAllocator>;
  _log_status_type log_status;
  using _log_status_is_set_type =
    bool;
  _log_status_is_set_type log_status_is_set;

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
    const bosdyn_msgs::msg::TerminateLogResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__log_status(
    const bosdyn_msgs::msg::LogStatus_<ContainerAllocator> & _arg)
  {
    this->log_status = _arg;
    return *this;
  }
  Type & set__log_status_is_set(
    const bool & _arg)
  {
    this->log_status_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TerminateLogResponse
    std::shared_ptr<bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TerminateLogResponse
    std::shared_ptr<bosdyn_msgs::msg::TerminateLogResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TerminateLogResponse_ & other) const
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
    if (this->log_status != other.log_status) {
      return false;
    }
    if (this->log_status_is_set != other.log_status_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TerminateLogResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TerminateLogResponse_

// alias to use template instance with default allocator
using TerminateLogResponse =
  bosdyn_msgs::msg::TerminateLogResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TERMINATE_LOG_RESPONSE__STRUCT_HPP_
