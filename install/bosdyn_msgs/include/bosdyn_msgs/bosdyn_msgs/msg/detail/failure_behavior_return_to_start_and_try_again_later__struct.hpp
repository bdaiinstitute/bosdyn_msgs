// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FailureBehaviorReturnToStartAndTryAgainLater.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_RETURN_TO_START_AND_TRY_AGAIN_LATER__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_RETURN_TO_START_AND_TRY_AGAIN_LATER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'try_again_delay'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTryAgainLater __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTryAgainLater __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FailureBehaviorReturnToStartAndTryAgainLater_
{
  using Type = FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator>;

  explicit FailureBehaviorReturnToStartAndTryAgainLater_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : try_again_delay(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->try_again_delay_is_set = false;
    }
  }

  explicit FailureBehaviorReturnToStartAndTryAgainLater_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : try_again_delay(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->try_again_delay_is_set = false;
    }
  }

  // field types and members
  using _try_again_delay_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _try_again_delay_type try_again_delay;
  using _try_again_delay_is_set_type =
    bool;
  _try_again_delay_is_set_type try_again_delay_is_set;

  // setters for named parameter idiom
  Type & set__try_again_delay(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->try_again_delay = _arg;
    return *this;
  }
  Type & set__try_again_delay_is_set(
    const bool & _arg)
  {
    this->try_again_delay_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTryAgainLater
    std::shared_ptr<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTryAgainLater
    std::shared_ptr<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FailureBehaviorReturnToStartAndTryAgainLater_ & other) const
  {
    if (this->try_again_delay != other.try_again_delay) {
      return false;
    }
    if (this->try_again_delay_is_set != other.try_again_delay_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const FailureBehaviorReturnToStartAndTryAgainLater_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FailureBehaviorReturnToStartAndTryAgainLater_

// alias to use template instance with default allocator
using FailureBehaviorReturnToStartAndTryAgainLater =
  bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_RETURN_TO_START_AND_TRY_AGAIN_LATER__STRUCT_HPP_
