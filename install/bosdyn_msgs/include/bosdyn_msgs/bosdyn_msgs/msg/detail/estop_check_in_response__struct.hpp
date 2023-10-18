// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EstopCheckInResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_RESPONSE__STRUCT_HPP_

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
#include "bosdyn_msgs/msg/detail/estop_check_in_request__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/estop_check_in_response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EstopCheckInResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EstopCheckInResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstopCheckInResponse_
{
  using Type = EstopCheckInResponse_<ContainerAllocator>;

  explicit EstopCheckInResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    request(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->request_is_set = false;
      this->challenge = 0ull;
    }
  }

  explicit EstopCheckInResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    request(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->request_is_set = false;
      this->challenge = 0ull;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _request_type =
    bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator>;
  _request_type request;
  using _request_is_set_type =
    bool;
  _request_is_set_type request_is_set;
  using _challenge_type =
    uint64_t;
  _challenge_type challenge;
  using _status_type =
    bosdyn_msgs::msg::EstopCheckInResponseStatus_<ContainerAllocator>;
  _status_type status;

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
  Type & set__request(
    const bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator> & _arg)
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
  Type & set__challenge(
    const uint64_t & _arg)
  {
    this->challenge = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::EstopCheckInResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EstopCheckInResponse
    std::shared_ptr<bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EstopCheckInResponse
    std::shared_ptr<bosdyn_msgs::msg::EstopCheckInResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstopCheckInResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->request_is_set != other.request_is_set) {
      return false;
    }
    if (this->challenge != other.challenge) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstopCheckInResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstopCheckInResponse_

// alias to use template instance with default allocator
using EstopCheckInResponse =
  bosdyn_msgs::msg::EstopCheckInResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_RESPONSE__STRUCT_HPP_
