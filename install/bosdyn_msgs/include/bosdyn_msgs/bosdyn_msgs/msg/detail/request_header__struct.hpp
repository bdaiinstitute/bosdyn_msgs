// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RequestHeader __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RequestHeader __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RequestHeader_
{
  using Type = RequestHeader_<ContainerAllocator>;

  explicit RequestHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_timestamp_is_set = false;
      this->client_name = "";
      this->disable_rpc_logging = false;
    }
  }

  explicit RequestHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_timestamp(_alloc, _init),
    client_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_timestamp_is_set = false;
      this->client_name = "";
      this->disable_rpc_logging = false;
    }
  }

  // field types and members
  using _request_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _request_timestamp_type request_timestamp;
  using _request_timestamp_is_set_type =
    bool;
  _request_timestamp_is_set_type request_timestamp_is_set;
  using _client_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _client_name_type client_name;
  using _disable_rpc_logging_type =
    bool;
  _disable_rpc_logging_type disable_rpc_logging;

  // setters for named parameter idiom
  Type & set__request_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->request_timestamp = _arg;
    return *this;
  }
  Type & set__request_timestamp_is_set(
    const bool & _arg)
  {
    this->request_timestamp_is_set = _arg;
    return *this;
  }
  Type & set__client_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->client_name = _arg;
    return *this;
  }
  Type & set__disable_rpc_logging(
    const bool & _arg)
  {
    this->disable_rpc_logging = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RequestHeader
    std::shared_ptr<bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RequestHeader
    std::shared_ptr<bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestHeader_ & other) const
  {
    if (this->request_timestamp != other.request_timestamp) {
      return false;
    }
    if (this->request_timestamp_is_set != other.request_timestamp_is_set) {
      return false;
    }
    if (this->client_name != other.client_name) {
      return false;
    }
    if (this->disable_rpc_logging != other.disable_rpc_logging) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestHeader_

// alias to use template instance with default allocator
using RequestHeader =
  bosdyn_msgs::msg::RequestHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_HPP_
