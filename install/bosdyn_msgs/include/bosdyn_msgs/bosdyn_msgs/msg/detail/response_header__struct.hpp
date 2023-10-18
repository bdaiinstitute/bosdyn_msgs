// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ResponseHeader.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESPONSE_HEADER__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RESPONSE_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request_header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'request_received_timestamp'
// Member 'response_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'error'
#include "bosdyn_msgs/msg/detail/common_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ResponseHeader __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ResponseHeader __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResponseHeader_
{
  using Type = ResponseHeader_<ContainerAllocator>;

  explicit ResponseHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_header(_init),
    request_received_timestamp(_init),
    response_timestamp(_init),
    error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_header_is_set = false;
      this->request_received_timestamp_is_set = false;
      this->response_timestamp_is_set = false;
      this->error_is_set = false;
    }
  }

  explicit ResponseHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_header(_alloc, _init),
    request_received_timestamp(_alloc, _init),
    response_timestamp(_alloc, _init),
    error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_header_is_set = false;
      this->request_received_timestamp_is_set = false;
      this->response_timestamp_is_set = false;
      this->error_is_set = false;
    }
  }

  // field types and members
  using _request_header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _request_header_type request_header;
  using _request_header_is_set_type =
    bool;
  _request_header_is_set_type request_header_is_set;
  using _request_received_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _request_received_timestamp_type request_received_timestamp;
  using _request_received_timestamp_is_set_type =
    bool;
  _request_received_timestamp_is_set_type request_received_timestamp_is_set;
  using _response_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _response_timestamp_type response_timestamp;
  using _response_timestamp_is_set_type =
    bool;
  _response_timestamp_is_set_type response_timestamp_is_set;
  using _error_type =
    bosdyn_msgs::msg::CommonError_<ContainerAllocator>;
  _error_type error;
  using _error_is_set_type =
    bool;
  _error_is_set_type error_is_set;

  // setters for named parameter idiom
  Type & set__request_header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->request_header = _arg;
    return *this;
  }
  Type & set__request_header_is_set(
    const bool & _arg)
  {
    this->request_header_is_set = _arg;
    return *this;
  }
  Type & set__request_received_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->request_received_timestamp = _arg;
    return *this;
  }
  Type & set__request_received_timestamp_is_set(
    const bool & _arg)
  {
    this->request_received_timestamp_is_set = _arg;
    return *this;
  }
  Type & set__response_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->response_timestamp = _arg;
    return *this;
  }
  Type & set__response_timestamp_is_set(
    const bool & _arg)
  {
    this->response_timestamp_is_set = _arg;
    return *this;
  }
  Type & set__error(
    const bosdyn_msgs::msg::CommonError_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__error_is_set(
    const bool & _arg)
  {
    this->error_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ResponseHeader
    std::shared_ptr<bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ResponseHeader
    std::shared_ptr<bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResponseHeader_ & other) const
  {
    if (this->request_header != other.request_header) {
      return false;
    }
    if (this->request_header_is_set != other.request_header_is_set) {
      return false;
    }
    if (this->request_received_timestamp != other.request_received_timestamp) {
      return false;
    }
    if (this->request_received_timestamp_is_set != other.request_received_timestamp_is_set) {
      return false;
    }
    if (this->response_timestamp != other.response_timestamp) {
      return false;
    }
    if (this->response_timestamp_is_set != other.response_timestamp_is_set) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->error_is_set != other.error_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResponseHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResponseHeader_

// alias to use template instance with default allocator
using ResponseHeader =
  bosdyn_msgs::msg::ResponseHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESPONSE_HEADER__STRUCT_HPP_
