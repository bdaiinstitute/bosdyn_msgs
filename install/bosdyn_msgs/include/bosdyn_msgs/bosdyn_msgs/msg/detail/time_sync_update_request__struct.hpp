// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncUpdateRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_REQUEST__STRUCT_HPP_

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
// Member 'previous_round_trip'
#include "bosdyn_msgs/msg/detail/time_sync_round_trip__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TimeSyncUpdateRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TimeSyncUpdateRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeSyncUpdateRequest_
{
  using Type = TimeSyncUpdateRequest_<ContainerAllocator>;

  explicit TimeSyncUpdateRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    previous_round_trip(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->previous_round_trip_is_set = false;
      this->clock_identifier = "";
    }
  }

  explicit TimeSyncUpdateRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    previous_round_trip(_alloc, _init),
    clock_identifier(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->previous_round_trip_is_set = false;
      this->clock_identifier = "";
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _previous_round_trip_type =
    bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator>;
  _previous_round_trip_type previous_round_trip;
  using _previous_round_trip_is_set_type =
    bool;
  _previous_round_trip_is_set_type previous_round_trip_is_set;
  using _clock_identifier_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _clock_identifier_type clock_identifier;

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
  Type & set__previous_round_trip(
    const bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator> & _arg)
  {
    this->previous_round_trip = _arg;
    return *this;
  }
  Type & set__previous_round_trip_is_set(
    const bool & _arg)
  {
    this->previous_round_trip_is_set = _arg;
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
    bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TimeSyncUpdateRequest
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TimeSyncUpdateRequest
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncUpdateRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeSyncUpdateRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->previous_round_trip != other.previous_round_trip) {
      return false;
    }
    if (this->previous_round_trip_is_set != other.previous_round_trip_is_set) {
      return false;
    }
    if (this->clock_identifier != other.clock_identifier) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeSyncUpdateRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeSyncUpdateRequest_

// alias to use template instance with default allocator
using TimeSyncUpdateRequest =
  bosdyn_msgs::msg::TimeSyncUpdateRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_REQUEST__STRUCT_HPP_
