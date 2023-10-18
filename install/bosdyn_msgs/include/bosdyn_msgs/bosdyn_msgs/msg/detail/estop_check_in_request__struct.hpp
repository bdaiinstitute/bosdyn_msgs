// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EstopCheckInRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_REQUEST__STRUCT_HPP_

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
#include "bosdyn_msgs/msg/detail/estop_endpoint__struct.hpp"
// Member 'stop_level'
#include "bosdyn_msgs/msg/detail/estop_stop_level__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EstopCheckInRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EstopCheckInRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstopCheckInRequest_
{
  using Type = EstopCheckInRequest_<ContainerAllocator>;

  explicit EstopCheckInRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    endpoint(_init),
    stop_level(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->endpoint_is_set = false;
      this->challenge = 0ull;
      this->response = 0ull;
    }
  }

  explicit EstopCheckInRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    endpoint(_alloc, _init),
    stop_level(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->endpoint_is_set = false;
      this->challenge = 0ull;
      this->response = 0ull;
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
    bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>;
  _endpoint_type endpoint;
  using _endpoint_is_set_type =
    bool;
  _endpoint_is_set_type endpoint_is_set;
  using _challenge_type =
    uint64_t;
  _challenge_type challenge;
  using _response_type =
    uint64_t;
  _response_type response;
  using _stop_level_type =
    bosdyn_msgs::msg::EstopStopLevel_<ContainerAllocator>;
  _stop_level_type stop_level;

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
    const bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator> & _arg)
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
  Type & set__challenge(
    const uint64_t & _arg)
  {
    this->challenge = _arg;
    return *this;
  }
  Type & set__response(
    const uint64_t & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__stop_level(
    const bosdyn_msgs::msg::EstopStopLevel_<ContainerAllocator> & _arg)
  {
    this->stop_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EstopCheckInRequest
    std::shared_ptr<bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EstopCheckInRequest
    std::shared_ptr<bosdyn_msgs::msg::EstopCheckInRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstopCheckInRequest_ & other) const
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
    if (this->challenge != other.challenge) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    if (this->stop_level != other.stop_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstopCheckInRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstopCheckInRequest_

// alias to use template instance with default allocator
using EstopCheckInRequest =
  bosdyn_msgs::msg::EstopCheckInRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_REQUEST__STRUCT_HPP_
