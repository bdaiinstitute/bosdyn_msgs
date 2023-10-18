// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncUpdateResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_RESPONSE__STRUCT_HPP_

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
// Member 'previous_estimate'
#include "bosdyn_msgs/msg/detail/time_sync_estimate__struct.hpp"
// Member 'state'
#include "bosdyn_msgs/msg/detail/time_sync_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TimeSyncUpdateResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TimeSyncUpdateResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeSyncUpdateResponse_
{
  using Type = TimeSyncUpdateResponse_<ContainerAllocator>;

  explicit TimeSyncUpdateResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    previous_estimate(_init),
    state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->previous_estimate_is_set = false;
      this->state_is_set = false;
      this->clock_identifier = "";
    }
  }

  explicit TimeSyncUpdateResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    previous_estimate(_alloc, _init),
    state(_alloc, _init),
    clock_identifier(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->previous_estimate_is_set = false;
      this->state_is_set = false;
      this->clock_identifier = "";
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _previous_estimate_type =
    bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator>;
  _previous_estimate_type previous_estimate;
  using _previous_estimate_is_set_type =
    bool;
  _previous_estimate_is_set_type previous_estimate_is_set;
  using _state_type =
    bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator>;
  _state_type state;
  using _state_is_set_type =
    bool;
  _state_is_set_type state_is_set;
  using _clock_identifier_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _clock_identifier_type clock_identifier;

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
  Type & set__previous_estimate(
    const bosdyn_msgs::msg::TimeSyncEstimate_<ContainerAllocator> & _arg)
  {
    this->previous_estimate = _arg;
    return *this;
  }
  Type & set__previous_estimate_is_set(
    const bool & _arg)
  {
    this->previous_estimate_is_set = _arg;
    return *this;
  }
  Type & set__state(
    const bosdyn_msgs::msg::TimeSyncState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__state_is_set(
    const bool & _arg)
  {
    this->state_is_set = _arg;
    return *this;
  }
  Type & set__clock_identifier(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->clock_identifier = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TimeSyncUpdateResponse
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TimeSyncUpdateResponse
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncUpdateResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeSyncUpdateResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->previous_estimate != other.previous_estimate) {
      return false;
    }
    if (this->previous_estimate_is_set != other.previous_estimate_is_set) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->state_is_set != other.state_is_set) {
      return false;
    }
    if (this->clock_identifier != other.clock_identifier) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeSyncUpdateResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeSyncUpdateResponse_

// alias to use template instance with default allocator
using TimeSyncUpdateResponse =
  bosdyn_msgs::msg::TimeSyncUpdateResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_RESPONSE__STRUCT_HPP_
