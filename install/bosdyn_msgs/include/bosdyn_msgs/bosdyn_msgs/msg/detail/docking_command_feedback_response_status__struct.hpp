// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DockingCommandFeedbackResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_RESPONSE_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_RESPONSE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DockingCommandFeedbackResponseStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DockingCommandFeedbackResponseStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockingCommandFeedbackResponseStatus_
{
  using Type = DockingCommandFeedbackResponseStatus_<ContainerAllocator>;

  explicit DockingCommandFeedbackResponseStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit DockingCommandFeedbackResponseStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    int8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const int8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t STATUS_UNKNOWN =
    0;
  static constexpr int8_t STATUS_IN_PROGRESS =
    1;
  static constexpr int8_t STATUS_DOCKED =
    2;
  static constexpr int8_t STATUS_AT_PREP_POSE =
    3;
  static constexpr int8_t STATUS_MISALIGNED =
    4;
  static constexpr int8_t STATUS_OLD_DOCKING_COMMAND =
    5;
  static constexpr int8_t STATUS_ERROR_DOCK_LOST =
    6;
  static constexpr int8_t STATUS_ERROR_LEASE =
    7;
  static constexpr int8_t STATUS_ERROR_COMMAND_TIMED_OUT =
    8;
  static constexpr int8_t STATUS_ERROR_NO_TIMESYNC =
    9;
  static constexpr int8_t STATUS_ERROR_TOO_DISTANT =
    10;
  static constexpr int8_t STATUS_ERROR_NOT_AVAILABLE =
    11;
  static constexpr int8_t STATUS_ERROR_UNREFINED_PRIOR =
    12;
  static constexpr int8_t STATUS_ERROR_STUCK =
    13;
  static constexpr int8_t STATUS_ERROR_SYSTEM =
    14;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DockingCommandFeedbackResponseStatus
    std::shared_ptr<bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DockingCommandFeedbackResponseStatus
    std::shared_ptr<bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockingCommandFeedbackResponseStatus_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockingCommandFeedbackResponseStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockingCommandFeedbackResponseStatus_

// alias to use template instance with default allocator
using DockingCommandFeedbackResponseStatus =
  bosdyn_msgs::msg::DockingCommandFeedbackResponseStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_IN_PROGRESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_DOCKED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_AT_PREP_POSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_MISALIGNED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_OLD_DOCKING_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_ERROR_DOCK_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_ERROR_LEASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_ERROR_COMMAND_TIMED_OUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_ERROR_NO_TIMESYNC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_ERROR_TOO_DISTANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_ERROR_NOT_AVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_ERROR_UNREFINED_PRIOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_ERROR_STUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DockingCommandFeedbackResponseStatus_<ContainerAllocator>::STATUS_ERROR_SYSTEM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_RESPONSE_STATUS__STRUCT_HPP_
