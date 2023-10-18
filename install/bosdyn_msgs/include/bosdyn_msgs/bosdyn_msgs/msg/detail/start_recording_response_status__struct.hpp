// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StartRecordingResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StartRecordingResponseStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StartRecordingResponseStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StartRecordingResponseStatus_
{
  using Type = StartRecordingResponseStatus_<ContainerAllocator>;

  explicit StartRecordingResponseStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit StartRecordingResponseStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int8_t STATUS_OK =
    1;
  static constexpr int8_t STATUS_COULD_NOT_CREATE_WAYPOINT =
    2;
  static constexpr int8_t STATUS_FOLLOWING_ROUTE =
    3;
  static constexpr int8_t STATUS_NOT_LOCALIZED_TO_EXISTING_MAP =
    4;
  static constexpr int8_t STATUS_MISSING_FIDUCIALS =
    5;
  static constexpr int8_t STATUS_MAP_TOO_LARGE_LICENSE =
    6;
  static constexpr int8_t STATUS_REMOTE_CLOUD_FAILURE_NOT_IN_DIRECTORY =
    7;
  static constexpr int8_t STATUS_REMOTE_CLOUD_FAILURE_NO_DATA =
    8;
  static constexpr int8_t STATUS_FIDUCIAL_POSE_NOT_OK =
    9;
  static constexpr int8_t STATUS_TOO_FAR_FROM_EXISTING_MAP =
    10;
  static constexpr int8_t STATUS_ROBOT_IMPAIRED =
    11;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StartRecordingResponseStatus
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StartRecordingResponseStatus
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartRecordingResponseStatus_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartRecordingResponseStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartRecordingResponseStatus_

// alias to use template instance with default allocator
using StartRecordingResponseStatus =
  bosdyn_msgs::msg::StartRecordingResponseStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_COULD_NOT_CREATE_WAYPOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_FOLLOWING_ROUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_NOT_LOCALIZED_TO_EXISTING_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_MISSING_FIDUCIALS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_MAP_TOO_LARGE_LICENSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_REMOTE_CLOUD_FAILURE_NOT_IN_DIRECTORY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_REMOTE_CLOUD_FAILURE_NO_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_FIDUCIAL_POSE_NOT_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_TOO_FAR_FROM_EXISTING_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StartRecordingResponseStatus_<ContainerAllocator>::STATUS_ROBOT_IMPAIRED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE_STATUS__STRUCT_HPP_
