// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GetStateRequestOneOfLowerBound.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST_ONE_OF_LOWER_BOUND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST_ONE_OF_LOWER_BOUND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GetStateRequestOneOfLowerBound __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GetStateRequestOneOfLowerBound __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GetStateRequestOneOfLowerBound_
{
  using Type = GetStateRequestOneOfLowerBound_<ContainerAllocator>;

  explicit GetStateRequestOneOfLowerBound_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->history_lower_tick_bound = 0ll;
      this->history_past_ticks = 0ll;
      this->lower_bound_choice = 0;
    }
  }

  explicit GetStateRequestOneOfLowerBound_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->history_lower_tick_bound = 0ll;
      this->history_past_ticks = 0ll;
      this->lower_bound_choice = 0;
    }
  }

  // field types and members
  using _history_lower_tick_bound_type =
    int64_t;
  _history_lower_tick_bound_type history_lower_tick_bound;
  using _history_past_ticks_type =
    int64_t;
  _history_past_ticks_type history_past_ticks;
  using _lower_bound_choice_type =
    int8_t;
  _lower_bound_choice_type lower_bound_choice;

  // setters for named parameter idiom
  Type & set__history_lower_tick_bound(
    const int64_t & _arg)
  {
    this->history_lower_tick_bound = _arg;
    return *this;
  }
  Type & set__history_past_ticks(
    const int64_t & _arg)
  {
    this->history_past_ticks = _arg;
    return *this;
  }
  Type & set__lower_bound_choice(
    const int8_t & _arg)
  {
    this->lower_bound_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t LOWER_BOUND_NOT_SET =
    0;
  static constexpr int8_t LOWER_BOUND_HISTORY_LOWER_TICK_BOUND_SET =
    1;
  static constexpr int8_t LOWER_BOUND_HISTORY_PAST_TICKS_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GetStateRequestOneOfLowerBound
    std::shared_ptr<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GetStateRequestOneOfLowerBound
    std::shared_ptr<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetStateRequestOneOfLowerBound_ & other) const
  {
    if (this->history_lower_tick_bound != other.history_lower_tick_bound) {
      return false;
    }
    if (this->history_past_ticks != other.history_past_ticks) {
      return false;
    }
    if (this->lower_bound_choice != other.lower_bound_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetStateRequestOneOfLowerBound_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetStateRequestOneOfLowerBound_

// alias to use template instance with default allocator
using GetStateRequestOneOfLowerBound =
  bosdyn_msgs::msg::GetStateRequestOneOfLowerBound_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t GetStateRequestOneOfLowerBound_<ContainerAllocator>::LOWER_BOUND_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t GetStateRequestOneOfLowerBound_<ContainerAllocator>::LOWER_BOUND_HISTORY_LOWER_TICK_BOUND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t GetStateRequestOneOfLowerBound_<ContainerAllocator>::LOWER_BOUND_HISTORY_PAST_TICKS_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST_ONE_OF_LOWER_BOUND__STRUCT_HPP_
