// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PlaybackModePeriodic.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_PERIODIC__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_PERIODIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'interval'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PlaybackModePeriodic __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PlaybackModePeriodic __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlaybackModePeriodic_
{
  using Type = PlaybackModePeriodic_<ContainerAllocator>;

  explicit PlaybackModePeriodic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : interval(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interval_is_set = false;
      this->repetitions = 0l;
    }
  }

  explicit PlaybackModePeriodic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : interval(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interval_is_set = false;
      this->repetitions = 0l;
    }
  }

  // field types and members
  using _interval_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _interval_type interval;
  using _interval_is_set_type =
    bool;
  _interval_is_set_type interval_is_set;
  using _repetitions_type =
    int32_t;
  _repetitions_type repetitions;

  // setters for named parameter idiom
  Type & set__interval(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->interval = _arg;
    return *this;
  }
  Type & set__interval_is_set(
    const bool & _arg)
  {
    this->interval_is_set = _arg;
    return *this;
  }
  Type & set__repetitions(
    const int32_t & _arg)
  {
    this->repetitions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PlaybackModePeriodic
    std::shared_ptr<bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PlaybackModePeriodic
    std::shared_ptr<bosdyn_msgs::msg::PlaybackModePeriodic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaybackModePeriodic_ & other) const
  {
    if (this->interval != other.interval) {
      return false;
    }
    if (this->interval_is_set != other.interval_is_set) {
      return false;
    }
    if (this->repetitions != other.repetitions) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaybackModePeriodic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaybackModePeriodic_

// alias to use template instance with default allocator
using PlaybackModePeriodic =
  bosdyn_msgs::msg::PlaybackModePeriodic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAYBACK_MODE_PERIODIC__STRUCT_HPP_
