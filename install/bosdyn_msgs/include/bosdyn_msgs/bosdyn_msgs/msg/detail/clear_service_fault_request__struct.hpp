// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ClearServiceFaultRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLEAR_SERVICE_FAULT_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLEAR_SERVICE_FAULT_REQUEST__STRUCT_HPP_

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
// Member 'fault_id'
#include "bosdyn_msgs/msg/detail/service_fault_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ClearServiceFaultRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ClearServiceFaultRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClearServiceFaultRequest_
{
  using Type = ClearServiceFaultRequest_<ContainerAllocator>;

  explicit ClearServiceFaultRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    fault_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->fault_id_is_set = false;
      this->clear_all_service_faults = false;
      this->clear_all_payload_faults = false;
    }
  }

  explicit ClearServiceFaultRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fault_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->fault_id_is_set = false;
      this->clear_all_service_faults = false;
      this->clear_all_payload_faults = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _fault_id_type =
    bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator>;
  _fault_id_type fault_id;
  using _fault_id_is_set_type =
    bool;
  _fault_id_is_set_type fault_id_is_set;
  using _clear_all_service_faults_type =
    bool;
  _clear_all_service_faults_type clear_all_service_faults;
  using _clear_all_payload_faults_type =
    bool;
  _clear_all_payload_faults_type clear_all_payload_faults;

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
  Type & set__fault_id(
    const bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator> & _arg)
  {
    this->fault_id = _arg;
    return *this;
  }
  Type & set__fault_id_is_set(
    const bool & _arg)
  {
    this->fault_id_is_set = _arg;
    return *this;
  }
  Type & set__clear_all_service_faults(
    const bool & _arg)
  {
    this->clear_all_service_faults = _arg;
    return *this;
  }
  Type & set__clear_all_payload_faults(
    const bool & _arg)
  {
    this->clear_all_payload_faults = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ClearServiceFaultRequest
    std::shared_ptr<bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ClearServiceFaultRequest
    std::shared_ptr<bosdyn_msgs::msg::ClearServiceFaultRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearServiceFaultRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->fault_id != other.fault_id) {
      return false;
    }
    if (this->fault_id_is_set != other.fault_id_is_set) {
      return false;
    }
    if (this->clear_all_service_faults != other.clear_all_service_faults) {
      return false;
    }
    if (this->clear_all_payload_faults != other.clear_all_payload_faults) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearServiceFaultRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearServiceFaultRequest_

// alias to use template instance with default allocator
using ClearServiceFaultRequest =
  bosdyn_msgs::msg::ClearServiceFaultRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLEAR_SERVICE_FAULT_REQUEST__STRUCT_HPP_
