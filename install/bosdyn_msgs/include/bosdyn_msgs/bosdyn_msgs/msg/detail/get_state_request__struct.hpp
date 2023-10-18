// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GetStateRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST__STRUCT_HPP_

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
// Member 'lower_bound'
#include "bosdyn_msgs/msg/detail/get_state_request_one_of_lower_bound__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GetStateRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GetStateRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GetStateRequest_
{
  using Type = GetStateRequest_<ContainerAllocator>;

  explicit GetStateRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    lower_bound(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->history_upper_tick_bound = 0ll;
      this->history_upper_tick_bound_is_set = false;
    }
  }

  explicit GetStateRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    lower_bound(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->history_upper_tick_bound = 0ll;
      this->history_upper_tick_bound_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _history_upper_tick_bound_type =
    int64_t;
  _history_upper_tick_bound_type history_upper_tick_bound;
  using _history_upper_tick_bound_is_set_type =
    bool;
  _history_upper_tick_bound_is_set_type history_upper_tick_bound_is_set;
  using _lower_bound_type =
    bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator>;
  _lower_bound_type lower_bound;

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
  Type & set__history_upper_tick_bound(
    const int64_t & _arg)
  {
    this->history_upper_tick_bound = _arg;
    return *this;
  }
  Type & set__history_upper_tick_bound_is_set(
    const bool & _arg)
  {
    this->history_upper_tick_bound_is_set = _arg;
    return *this;
  }
  Type & set__lower_bound(
    const bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator> & _arg)
  {
    this->lower_bound = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GetStateRequest
    std::shared_ptr<bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GetStateRequest
    std::shared_ptr<bosdyn_msgs::msg::GetStateRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetStateRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->history_upper_tick_bound != other.history_upper_tick_bound) {
      return false;
    }
    if (this->history_upper_tick_bound_is_set != other.history_upper_tick_bound_is_set) {
      return false;
    }
    if (this->lower_bound != other.lower_bound) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetStateRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetStateRequest_

// alias to use template instance with default allocator
using GetStateRequest =
  bosdyn_msgs::msg::GetStateRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST__STRUCT_HPP_
