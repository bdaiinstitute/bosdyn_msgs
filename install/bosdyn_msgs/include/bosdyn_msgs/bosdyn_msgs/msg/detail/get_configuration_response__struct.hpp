// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GetConfigurationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_CONFIGURATION_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_CONFIGURATION_RESPONSE__STRUCT_HPP_

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
// Member 'request'
#include "bosdyn_msgs/msg/detail/configure_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GetConfigurationResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GetConfigurationResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GetConfigurationResponse_
{
  using Type = GetConfigurationResponse_<ContainerAllocator>;

  explicit GetConfigurationResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->enabled = false;
      this->request_is_set = false;
    }
  }

  explicit GetConfigurationResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    request(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->enabled = false;
      this->request_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _request_type =
    bosdyn_msgs::msg::ConfigureRequest_<ContainerAllocator>;
  _request_type request;
  using _request_is_set_type =
    bool;
  _request_is_set_type request_is_set;

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
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__request(
    const bosdyn_msgs::msg::ConfigureRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__request_is_set(
    const bool & _arg)
  {
    this->request_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GetConfigurationResponse
    std::shared_ptr<bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GetConfigurationResponse
    std::shared_ptr<bosdyn_msgs::msg::GetConfigurationResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetConfigurationResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->request_is_set != other.request_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetConfigurationResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetConfigurationResponse_

// alias to use template instance with default allocator
using GetConfigurationResponse =
  bosdyn_msgs::msg::GetConfigurationResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_CONFIGURATION_RESPONSE__STRUCT_HPP_
