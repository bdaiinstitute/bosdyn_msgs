// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TriggerServiceFaultRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TRIGGER_SERVICE_FAULT_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TRIGGER_SERVICE_FAULT_REQUEST__STRUCT_HPP_

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
// Member 'fault'
#include "bosdyn_msgs/msg/detail/service_fault__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TriggerServiceFaultRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TriggerServiceFaultRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TriggerServiceFaultRequest_
{
  using Type = TriggerServiceFaultRequest_<ContainerAllocator>;

  explicit TriggerServiceFaultRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    fault(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->fault_is_set = false;
    }
  }

  explicit TriggerServiceFaultRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fault(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->fault_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _fault_type =
    bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>;
  _fault_type fault;
  using _fault_is_set_type =
    bool;
  _fault_is_set_type fault_is_set;

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
  Type & set__fault(
    const bosdyn_msgs::msg::ServiceFault_<ContainerAllocator> & _arg)
  {
    this->fault = _arg;
    return *this;
  }
  Type & set__fault_is_set(
    const bool & _arg)
  {
    this->fault_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TriggerServiceFaultRequest
    std::shared_ptr<bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TriggerServiceFaultRequest
    std::shared_ptr<bosdyn_msgs::msg::TriggerServiceFaultRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TriggerServiceFaultRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->fault != other.fault) {
      return false;
    }
    if (this->fault_is_set != other.fault_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TriggerServiceFaultRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TriggerServiceFaultRequest_

// alias to use template instance with default allocator
using TriggerServiceFaultRequest =
  bosdyn_msgs::msg::TriggerServiceFaultRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TRIGGER_SERVICE_FAULT_REQUEST__STRUCT_HPP_
