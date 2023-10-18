// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PlaybackModeOneOfMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONE_OF_MODE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONE_OF_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'once'
#include "bosdyn_msgs/msg/detail/playback_mode_once__struct.hpp"
// Member 'periodic'
#include "bosdyn_msgs/msg/detail/playback_mode_periodic__struct.hpp"
// Member 'continuous'
#include "bosdyn_msgs/msg/detail/playback_mode_continuous__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PlaybackModeOneOfMode __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PlaybackModeOneOfMode __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlaybackModeOneOfMode_
{
  using Type = PlaybackModeOneOfMode_<ContainerAllocator>;

  explicit PlaybackModeOneOfMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : once(_init),
    periodic(_init),
    continuous(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_choice = 0;
    }
  }

  explicit PlaybackModeOneOfMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : once(_alloc, _init),
    periodic(_alloc, _init),
    continuous(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_choice = 0;
    }
  }

  // field types and members
  using _once_type =
    bosdyn_msgs::msg::PlaybackModeOnce_<ContainerAllocator>;
  _once_type once;
  using _periodic_type =
    bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator>;
  _periodic_type periodic;
  using _continuous_type =
    bosdyn_msgs::msg::PlaybackModeContinuous_<ContainerAllocator>;
  _continuous_type continuous;
  using _mode_choice_type =
    int8_t;
  _mode_choice_type mode_choice;

  // setters for named parameter idiom
  Type & set__once(
    const bosdyn_msgs::msg::PlaybackModeOnce_<ContainerAllocator> & _arg)
  {
    this->once = _arg;
    return *this;
  }
  Type & set__periodic(
    const bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator> & _arg)
  {
    this->periodic = _arg;
    return *this;
  }
  Type & set__continuous(
    const bosdyn_msgs::msg::PlaybackModeContinuous_<ContainerAllocator> & _arg)
  {
    this->continuous = _arg;
    return *this;
  }
  Type & set__mode_choice(
    const int8_t & _arg)
  {
    this->mode_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t MODE_NOT_SET =
    0;
  static constexpr int8_t MODE_ONCE_SET =
    1;
  static constexpr int8_t MODE_PERIODIC_SET =
    2;
  static constexpr int8_t MODE_CONTINUOUS_SET =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PlaybackModeOneOfMode
    std::shared_ptr<bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PlaybackModeOneOfMode
    std::shared_ptr<bosdyn_msgs::msg::PlaybackModeOneOfMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaybackModeOneOfMode_ & other) const
  {
    if (this->once != other.once) {
      return false;
    }
    if (this->periodic != other.periodic) {
      return false;
    }
    if (this->continuous != other.continuous) {
      return false;
    }
    if (this->mode_choice != other.mode_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaybackModeOneOfMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaybackModeOneOfMode_

// alias to use template instance with default allocator
using PlaybackModeOneOfMode =
  bosdyn_msgs::msg::PlaybackModeOneOfMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlaybackModeOneOfMode_<ContainerAllocator>::MODE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlaybackModeOneOfMode_<ContainerAllocator>::MODE_ONCE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlaybackModeOneOfMode_<ContainerAllocator>::MODE_PERIODIC_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlaybackModeOneOfMode_<ContainerAllocator>::MODE_CONTINUOUS_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_ONE_OF_MODE__STRUCT_HPP_
