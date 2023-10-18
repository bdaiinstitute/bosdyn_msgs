// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UpdateServiceRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_SERVICE_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_SERVICE_REQUEST__STRUCT_HPP_

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
// Member 'endpoint'
#include "bosdyn_msgs/msg/detail/endpoint__struct.hpp"
// Member 'service_entry'
#include "bosdyn_msgs/msg/detail/service_entry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UpdateServiceRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UpdateServiceRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpdateServiceRequest_
{
  using Type = UpdateServiceRequest_<ContainerAllocator>;

  explicit UpdateServiceRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    endpoint(_init),
    service_entry(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->endpoint_is_set = false;
      this->service_entry_is_set = false;
    }
  }

  explicit UpdateServiceRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    endpoint(_alloc, _init),
    service_entry(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->endpoint_is_set = false;
      this->service_entry_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _endpoint_type =
    bosdyn_msgs::msg::Endpoint_<ContainerAllocator>;
  _endpoint_type endpoint;
  using _endpoint_is_set_type =
    bool;
  _endpoint_is_set_type endpoint_is_set;
  using _service_entry_type =
    bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator>;
  _service_entry_type service_entry;
  using _service_entry_is_set_type =
    bool;
  _service_entry_is_set_type service_entry_is_set;

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
  Type & set__endpoint(
    const bosdyn_msgs::msg::Endpoint_<ContainerAllocator> & _arg)
  {
    this->endpoint = _arg;
    return *this;
  }
  Type & set__endpoint_is_set(
    const bool & _arg)
  {
    this->endpoint_is_set = _arg;
    return *this;
  }
  Type & set__service_entry(
    const bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator> & _arg)
  {
    this->service_entry = _arg;
    return *this;
  }
  Type & set__service_entry_is_set(
    const bool & _arg)
  {
    this->service_entry_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateServiceRequest
    std::shared_ptr<bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateServiceRequest
    std::shared_ptr<bosdyn_msgs::msg::UpdateServiceRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateServiceRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->endpoint != other.endpoint) {
      return false;
    }
    if (this->endpoint_is_set != other.endpoint_is_set) {
      return false;
    }
    if (this->service_entry != other.service_entry) {
      return false;
    }
    if (this->service_entry_is_set != other.service_entry_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateServiceRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateServiceRequest_

// alias to use template instance with default allocator
using UpdateServiceRequest =
  bosdyn_msgs::msg::UpdateServiceRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_SERVICE_REQUEST__STRUCT_HPP_
