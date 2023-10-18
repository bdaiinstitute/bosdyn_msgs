// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PowerCommandStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PowerCommandStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PowerCommandStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerCommandStatus_
{
  using Type = PowerCommandStatus_<ContainerAllocator>;

  explicit PowerCommandStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit PowerCommandStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int8_t STATUS_SUCCESS =
    2;
  static constexpr int8_t STATUS_SHORE_POWER_CONNECTED =
    3;
  static constexpr int8_t STATUS_BATTERY_MISSING =
    4;
  static constexpr int8_t STATUS_COMMAND_IN_PROGRESS =
    5;
  static constexpr int8_t STATUS_ESTOPPED =
    6;
  static constexpr int8_t STATUS_FAULTED =
    7;
  static constexpr int8_t STATUS_INTERNAL_ERROR =
    8;
  static constexpr int8_t STATUS_LICENSE_ERROR =
    9;
  static constexpr int8_t INCOMPATIBLE_HARDWARE_ERROR =
    10;
  static constexpr int8_t STATUS_OVERRIDDEN =
    11;
  static constexpr int8_t STATUS_KEEPALIVE_MOTORS_OFF =
    12;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PowerCommandStatus
    std::shared_ptr<bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PowerCommandStatus
    std::shared_ptr<bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerCommandStatus_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerCommandStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerCommandStatus_

// alias to use template instance with default allocator
using PowerCommandStatus =
  bosdyn_msgs::msg::PowerCommandStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_IN_PROGRESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_SHORE_POWER_CONNECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_BATTERY_MISSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_COMMAND_IN_PROGRESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_ESTOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_FAULTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_INTERNAL_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_LICENSE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::INCOMPATIBLE_HARDWARE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_OVERRIDDEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PowerCommandStatus_<ContainerAllocator>::STATUS_KEEPALIVE_MOTORS_OFF;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_STATUS__STRUCT_HPP_
