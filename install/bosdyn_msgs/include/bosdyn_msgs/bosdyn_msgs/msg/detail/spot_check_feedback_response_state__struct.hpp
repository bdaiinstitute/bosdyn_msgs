// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SpotCheckFeedbackResponseState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponseState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponseState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpotCheckFeedbackResponseState_
{
  using Type = SpotCheckFeedbackResponseState_<ContainerAllocator>;

  explicit SpotCheckFeedbackResponseState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit SpotCheckFeedbackResponseState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int8_t STATE_UNKNOWN =
    0;
  static constexpr int8_t STATE_USER_ABORTED =
    1;
  static constexpr int8_t STATE_STARTING =
    2;
  static constexpr int8_t STATE_LOADCELL_CAL =
    3;
  static constexpr int8_t STATE_ENDSTOP_CAL =
    4;
  static constexpr int8_t STATE_CAMERA_CHECK =
    5;
  static constexpr int8_t STATE_BODY_POSING =
    6;
  static constexpr int8_t STATE_FINISHED =
    7;
  static constexpr int8_t STATE_REVERTING_CAL =
    8;
  static constexpr int8_t STATE_ERROR =
    9;
  static constexpr int8_t STATE_WAITING_FOR_COMMAND =
    10;
  static constexpr int8_t STATE_HIP_RANGE_OF_MOTION_CHECK =
    11;
  static constexpr int8_t STATE_GRIPPER_CAL =
    12;
  static constexpr int8_t STATE_SIT_DOWN_AFTER_RUN =
    13;
  static constexpr int8_t STATE_ARM_JOINT_CHECK =
    14;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponseState
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponseState
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpotCheckFeedbackResponseState_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpotCheckFeedbackResponseState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpotCheckFeedbackResponseState_

// alias to use template instance with default allocator
using SpotCheckFeedbackResponseState =
  bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_USER_ABORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_STARTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_LOADCELL_CAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_ENDSTOP_CAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_CAMERA_CHECK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_BODY_POSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_FINISHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_REVERTING_CAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_WAITING_FOR_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_HIP_RANGE_OF_MOTION_CHECK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_GRIPPER_CAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_SIT_DOWN_AFTER_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SpotCheckFeedbackResponseState_<ContainerAllocator>::STATE_ARM_JOINT_CHECK;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE_STATE__STRUCT_HPP_
