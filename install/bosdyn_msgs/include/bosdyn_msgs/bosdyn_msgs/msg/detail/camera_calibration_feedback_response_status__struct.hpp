// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CameraCalibrationFeedbackResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_FEEDBACK_RESPONSE_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_FEEDBACK_RESPONSE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CameraCalibrationFeedbackResponseStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CameraCalibrationFeedbackResponseStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraCalibrationFeedbackResponseStatus_
{
  using Type = CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>;

  explicit CameraCalibrationFeedbackResponseStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit CameraCalibrationFeedbackResponseStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int8_t STATUS_PROCESSING =
    1;
  static constexpr int8_t STATUS_SUCCESS =
    2;
  static constexpr int8_t STATUS_USER_CANCELED =
    3;
  static constexpr int8_t STATUS_POWER_ERROR =
    4;
  static constexpr int8_t STATUS_LEASE_ERROR =
    5;
  static constexpr int8_t STATUS_ROBOT_COMMAND_ERROR =
    6;
  static constexpr int8_t STATUS_CALIBRATION_ERROR =
    7;
  static constexpr int8_t STATUS_INTERNAL_ERROR =
    8;
  static constexpr int8_t STATUS_CAMERA_FOCUS_ERROR =
    9;
  static constexpr int8_t STATUS_TARGET_NOT_CENTERED =
    10;
  static constexpr int8_t STATUS_TARGET_NOT_IN_VIEW =
    11;
  static constexpr int8_t STATUS_TARGET_NOT_GRAVITY_ALIGNED =
    12;
  static constexpr int8_t STATUS_TARGET_UPSIDE_DOWN =
    13;
  static constexpr int8_t STATUS_NEVER_RUN =
    14;
  static constexpr int8_t STATUS_CAMERA_NOT_DETECTED =
    15;
  static constexpr int8_t STATUS_INTRINSIC_WRITE_FAILED =
    16;
  static constexpr int8_t STATUS_EXTRINSIC_WRITE_FAILED =
    17;
  static constexpr int8_t STATUS_CALIBRATION_VERIFICATION_FAILED =
    18;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CameraCalibrationFeedbackResponseStatus
    std::shared_ptr<bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CameraCalibrationFeedbackResponseStatus
    std::shared_ptr<bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraCalibrationFeedbackResponseStatus_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraCalibrationFeedbackResponseStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraCalibrationFeedbackResponseStatus_

// alias to use template instance with default allocator
using CameraCalibrationFeedbackResponseStatus =
  bosdyn_msgs::msg::CameraCalibrationFeedbackResponseStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_PROCESSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_USER_CANCELED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_POWER_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_LEASE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_ROBOT_COMMAND_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_CALIBRATION_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_INTERNAL_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_CAMERA_FOCUS_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_TARGET_NOT_CENTERED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_TARGET_NOT_IN_VIEW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_TARGET_NOT_GRAVITY_ALIGNED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_TARGET_UPSIDE_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_NEVER_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_CAMERA_NOT_DETECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_INTRINSIC_WRITE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_EXTRINSIC_WRITE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CameraCalibrationFeedbackResponseStatus_<ContainerAllocator>::STATUS_CALIBRATION_VERIFICATION_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_FEEDBACK_RESPONSE_STATUS__STRUCT_HPP_
