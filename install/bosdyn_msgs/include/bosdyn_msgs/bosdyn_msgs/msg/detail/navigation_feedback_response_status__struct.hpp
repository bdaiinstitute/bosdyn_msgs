// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponseStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponseStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationFeedbackResponseStatus_
{
  using Type = NavigationFeedbackResponseStatus_<ContainerAllocator>;

  explicit NavigationFeedbackResponseStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit NavigationFeedbackResponseStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int8_t STATUS_FOLLOWING_ROUTE =
    1;
  static constexpr int8_t STATUS_REACHED_GOAL =
    2;
  static constexpr int8_t STATUS_NO_ROUTE =
    3;
  static constexpr int8_t STATUS_NO_LOCALIZATION =
    4;
  static constexpr int8_t STATUS_LOST =
    5;
  static constexpr int8_t STATUS_STUCK =
    6;
  static constexpr int8_t STATUS_COMMAND_TIMED_OUT =
    7;
  static constexpr int8_t STATUS_ROBOT_IMPAIRED =
    8;
  static constexpr int8_t STATUS_CONSTRAINT_FAULT =
    9;
  static constexpr int8_t STATUS_COMMAND_OVERRIDDEN =
    10;
  static constexpr int8_t STATUS_NOT_LOCALIZED_TO_ROUTE =
    11;
  static constexpr int8_t STATUS_LEASE_ERROR =
    12;
  static constexpr int8_t STATUS_AREA_CALLBACK_ERROR =
    13;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponseStatus
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponseStatus
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationFeedbackResponseStatus_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationFeedbackResponseStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationFeedbackResponseStatus_

// alias to use template instance with default allocator
using NavigationFeedbackResponseStatus =
  bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_FOLLOWING_ROUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_REACHED_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_NO_ROUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_NO_LOCALIZATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_STUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_COMMAND_TIMED_OUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_ROBOT_IMPAIRED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_CONSTRAINT_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_COMMAND_OVERRIDDEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_NOT_LOCALIZED_TO_ROUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_LEASE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFeedbackResponseStatus_<ContainerAllocator>::STATUS_AREA_CALLBACK_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_STATUS__STRUCT_HPP_
