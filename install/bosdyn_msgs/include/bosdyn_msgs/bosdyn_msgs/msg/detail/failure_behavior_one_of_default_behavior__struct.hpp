// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FailureBehaviorOneOfDefaultBehavior.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_ONE_OF_DEFAULT_BEHAVIOR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_ONE_OF_DEFAULT_BEHAVIOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'safe_power_off'
#include "bosdyn_msgs/msg/detail/failure_behavior_safe_power_off__struct.hpp"
// Member 'proceed_if_able'
#include "bosdyn_msgs/msg/detail/failure_behavior_proceed_if_able__struct.hpp"
// Member 'return_to_start_and_try_again_later'
#include "bosdyn_msgs/msg/detail/failure_behavior_return_to_start_and_try_again_later__struct.hpp"
// Member 'return_to_start_and_terminate'
#include "bosdyn_msgs/msg/detail/failure_behavior_return_to_start_and_terminate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FailureBehaviorOneOfDefaultBehavior_
{
  using Type = FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>;

  explicit FailureBehaviorOneOfDefaultBehavior_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : safe_power_off(_init),
    proceed_if_able(_init),
    return_to_start_and_try_again_later(_init),
    return_to_start_and_terminate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_behavior_choice = 0;
    }
  }

  explicit FailureBehaviorOneOfDefaultBehavior_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : safe_power_off(_alloc, _init),
    proceed_if_able(_alloc, _init),
    return_to_start_and_try_again_later(_alloc, _init),
    return_to_start_and_terminate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_behavior_choice = 0;
    }
  }

  // field types and members
  using _safe_power_off_type =
    bosdyn_msgs::msg::FailureBehaviorSafePowerOff_<ContainerAllocator>;
  _safe_power_off_type safe_power_off;
  using _proceed_if_able_type =
    bosdyn_msgs::msg::FailureBehaviorProceedIfAble_<ContainerAllocator>;
  _proceed_if_able_type proceed_if_able;
  using _return_to_start_and_try_again_later_type =
    bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator>;
  _return_to_start_and_try_again_later_type return_to_start_and_try_again_later;
  using _return_to_start_and_terminate_type =
    bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTerminate_<ContainerAllocator>;
  _return_to_start_and_terminate_type return_to_start_and_terminate;
  using _default_behavior_choice_type =
    int8_t;
  _default_behavior_choice_type default_behavior_choice;

  // setters for named parameter idiom
  Type & set__safe_power_off(
    const bosdyn_msgs::msg::FailureBehaviorSafePowerOff_<ContainerAllocator> & _arg)
  {
    this->safe_power_off = _arg;
    return *this;
  }
  Type & set__proceed_if_able(
    const bosdyn_msgs::msg::FailureBehaviorProceedIfAble_<ContainerAllocator> & _arg)
  {
    this->proceed_if_able = _arg;
    return *this;
  }
  Type & set__return_to_start_and_try_again_later(
    const bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator> & _arg)
  {
    this->return_to_start_and_try_again_later = _arg;
    return *this;
  }
  Type & set__return_to_start_and_terminate(
    const bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTerminate_<ContainerAllocator> & _arg)
  {
    this->return_to_start_and_terminate = _arg;
    return *this;
  }
  Type & set__default_behavior_choice(
    const int8_t & _arg)
  {
    this->default_behavior_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t DEFAULT_BEHAVIOR_NOT_SET =
    0;
  static constexpr int8_t DEFAULT_BEHAVIOR_SAFE_POWER_OFF_SET =
    1;
  static constexpr int8_t DEFAULT_BEHAVIOR_PROCEED_IF_ABLE_SET =
    2;
  static constexpr int8_t DEFAULT_BEHAVIOR_RETURN_TO_START_AND_TRY_AGAIN_LATER_SET =
    3;
  static constexpr int8_t DEFAULT_BEHAVIOR_RETURN_TO_START_AND_TERMINATE_SET =
    4;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior
    std::shared_ptr<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior
    std::shared_ptr<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FailureBehaviorOneOfDefaultBehavior_ & other) const
  {
    if (this->safe_power_off != other.safe_power_off) {
      return false;
    }
    if (this->proceed_if_able != other.proceed_if_able) {
      return false;
    }
    if (this->return_to_start_and_try_again_later != other.return_to_start_and_try_again_later) {
      return false;
    }
    if (this->return_to_start_and_terminate != other.return_to_start_and_terminate) {
      return false;
    }
    if (this->default_behavior_choice != other.default_behavior_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const FailureBehaviorOneOfDefaultBehavior_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FailureBehaviorOneOfDefaultBehavior_

// alias to use template instance with default allocator
using FailureBehaviorOneOfDefaultBehavior =
  bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>::DEFAULT_BEHAVIOR_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>::DEFAULT_BEHAVIOR_SAFE_POWER_OFF_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>::DEFAULT_BEHAVIOR_PROCEED_IF_ABLE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>::DEFAULT_BEHAVIOR_RETURN_TO_START_AND_TRY_AGAIN_LATER_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>::DEFAULT_BEHAVIOR_RETURN_TO_START_AND_TERMINATE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_ONE_OF_DEFAULT_BEHAVIOR__STRUCT_HPP_
