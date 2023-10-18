// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RegisterPayloadRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGISTER_PAYLOAD_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGISTER_PAYLOAD_REQUEST__STRUCT_HPP_

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
// Member 'payload'
#include "bosdyn_msgs/msg/detail/payload__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RegisterPayloadRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RegisterPayloadRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegisterPayloadRequest_
{
  using Type = RegisterPayloadRequest_<ContainerAllocator>;

  explicit RegisterPayloadRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    payload(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->payload_is_set = false;
      this->payload_secret = "";
    }
  }

  explicit RegisterPayloadRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    payload(_alloc, _init),
    payload_secret(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->payload_is_set = false;
      this->payload_secret = "";
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _payload_type =
    bosdyn_msgs::msg::Payload_<ContainerAllocator>;
  _payload_type payload;
  using _payload_is_set_type =
    bool;
  _payload_is_set_type payload_is_set;
  using _payload_secret_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _payload_secret_type payload_secret;

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
  Type & set__payload(
    const bosdyn_msgs::msg::Payload_<ContainerAllocator> & _arg)
  {
    this->payload = _arg;
    return *this;
  }
  Type & set__payload_is_set(
    const bool & _arg)
  {
    this->payload_is_set = _arg;
    return *this;
  }
  Type & set__payload_secret(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->payload_secret = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RegisterPayloadRequest
    std::shared_ptr<bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RegisterPayloadRequest
    std::shared_ptr<bosdyn_msgs::msg::RegisterPayloadRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterPayloadRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    if (this->payload_is_set != other.payload_is_set) {
      return false;
    }
    if (this->payload_secret != other.payload_secret) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterPayloadRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterPayloadRequest_

// alias to use template instance with default allocator
using RegisterPayloadRequest =
  bosdyn_msgs::msg::RegisterPayloadRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGISTER_PAYLOAD_REQUEST__STRUCT_HPP_
