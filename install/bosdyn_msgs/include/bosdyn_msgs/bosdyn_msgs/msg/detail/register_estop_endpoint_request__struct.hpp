// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RegisterEstopEndpointRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_REQUEST__STRUCT_HPP_

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
// Member 'target_endpoint'
// Member 'new_endpoint'
#include "bosdyn_msgs/msg/detail/estop_endpoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RegisterEstopEndpointRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RegisterEstopEndpointRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegisterEstopEndpointRequest_
{
  using Type = RegisterEstopEndpointRequest_<ContainerAllocator>;

  explicit RegisterEstopEndpointRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    target_endpoint(_init),
    new_endpoint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->target_endpoint_is_set = false;
      this->target_config_id = "";
      this->new_endpoint_is_set = false;
    }
  }

  explicit RegisterEstopEndpointRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    target_endpoint(_alloc, _init),
    target_config_id(_alloc),
    new_endpoint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->target_endpoint_is_set = false;
      this->target_config_id = "";
      this->new_endpoint_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _target_endpoint_type =
    bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>;
  _target_endpoint_type target_endpoint;
  using _target_endpoint_is_set_type =
    bool;
  _target_endpoint_is_set_type target_endpoint_is_set;
  using _target_config_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_config_id_type target_config_id;
  using _new_endpoint_type =
    bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>;
  _new_endpoint_type new_endpoint;
  using _new_endpoint_is_set_type =
    bool;
  _new_endpoint_is_set_type new_endpoint_is_set;

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
  Type & set__target_endpoint(
    const bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator> & _arg)
  {
    this->target_endpoint = _arg;
    return *this;
  }
  Type & set__target_endpoint_is_set(
    const bool & _arg)
  {
    this->target_endpoint_is_set = _arg;
    return *this;
  }
  Type & set__target_config_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_config_id = _arg;
    return *this;
  }
  Type & set__new_endpoint(
    const bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator> & _arg)
  {
    this->new_endpoint = _arg;
    return *this;
  }
  Type & set__new_endpoint_is_set(
    const bool & _arg)
  {
    this->new_endpoint_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RegisterEstopEndpointRequest
    std::shared_ptr<bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RegisterEstopEndpointRequest
    std::shared_ptr<bosdyn_msgs::msg::RegisterEstopEndpointRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterEstopEndpointRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->target_endpoint != other.target_endpoint) {
      return false;
    }
    if (this->target_endpoint_is_set != other.target_endpoint_is_set) {
      return false;
    }
    if (this->target_config_id != other.target_config_id) {
      return false;
    }
    if (this->new_endpoint != other.new_endpoint) {
      return false;
    }
    if (this->new_endpoint_is_set != other.new_endpoint_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterEstopEndpointRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterEstopEndpointRequest_

// alias to use template instance with default allocator
using RegisterEstopEndpointRequest =
  bosdyn_msgs::msg::RegisterEstopEndpointRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_REQUEST__STRUCT_HPP_
