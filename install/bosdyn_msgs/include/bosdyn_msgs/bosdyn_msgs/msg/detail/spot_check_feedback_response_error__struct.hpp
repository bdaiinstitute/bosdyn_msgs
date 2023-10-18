// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SpotCheckFeedbackResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE_ERROR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponseError __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponseError __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpotCheckFeedbackResponseError_
{
  using Type = SpotCheckFeedbackResponseError_<ContainerAllocator>;

  explicit SpotCheckFeedbackResponseError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit SpotCheckFeedbackResponseError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int8_t ERROR_UNKNOWN =
    0;
  static constexpr int8_t ERROR_NONE =
    1;
  static constexpr int8_t ERROR_UNEXPECTED_POWER_CHANGE =
    2;
  static constexpr int8_t ERROR_INIT_IMU_CHECK =
    3;
  static constexpr int8_t ERROR_INIT_NOT_SITTING =
    4;
  static constexpr int8_t ERROR_LOADCELL_TIMEOUT =
    5;
  static constexpr int8_t ERROR_POWER_ON_FAILURE =
    6;
  static constexpr int8_t ERROR_ENDSTOP_TIMEOUT =
    7;
  static constexpr int8_t ERROR_FAILED_STAND =
    8;
  static constexpr int8_t ERROR_CAMERA_TIMEOUT =
    9;
  static constexpr int8_t ERROR_GROUND_CHECK =
    10;
  static constexpr int8_t ERROR_POWER_OFF_FAILURE =
    11;
  static constexpr int8_t ERROR_REVERT_FAILURE =
    12;
  static constexpr int8_t ERROR_FGKC_FAILURE =
    13;
  static constexpr int8_t ERROR_GRIPPER_CAL_TIMEOUT =
    14;
  static constexpr int8_t ERROR_ARM_CHECK_COLLISION =
    15;
  static constexpr int8_t ERROR_ARM_CHECK_TIMEOUT =
    16;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponseError
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponseError
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpotCheckFeedbackResponseError_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpotCheckFeedbackResponseError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpotCheckFeedbackResponseError_

// alias to use template instance with default allocator
using SpotCheckFeedbackResponseError =
  bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_UNEXPECTED_POWER_CHANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_INIT_IMU_CHECK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_INIT_NOT_SITTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_LOADCELL_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_POWER_ON_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_ENDSTOP_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_FAILED_STAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_CAMERA_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_GROUND_CHECK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_POWER_OFF_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_REVERT_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_FGKC_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_GRIPPER_CAL_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_ARM_CHECK_COLLISION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseError_<ContainerAllocator>::ERROR_ARM_CHECK_TIMEOUT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE_ERROR__STRUCT_HPP_
