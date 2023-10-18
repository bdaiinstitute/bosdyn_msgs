// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FailureBehavior.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'prompt_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'default_behavior'
#include "bosdyn_msgs/msg/detail/failure_behavior_one_of_default_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FailureBehavior __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FailureBehavior __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FailureBehavior_
{
  using Type = FailureBehavior_<ContainerAllocator>;

  explicit FailureBehavior_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prompt_duration(_init),
    default_behavior(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->retry_count = 0l;
      this->prompt_duration_is_set = false;
    }
  }

  explicit FailureBehavior_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prompt_duration(_alloc, _init),
    default_behavior(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->retry_count = 0l;
      this->prompt_duration_is_set = false;
    }
  }

  // field types and members
  using _retry_count_type =
    int32_t;
  _retry_count_type retry_count;
  using _prompt_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _prompt_duration_type prompt_duration;
  using _prompt_duration_is_set_type =
    bool;
  _prompt_duration_is_set_type prompt_duration_is_set;
  using _default_behavior_type =
    bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator>;
  _default_behavior_type default_behavior;

  // setters for named parameter idiom
  Type & set__retry_count(
    const int32_t & _arg)
  {
    this->retry_count = _arg;
    return *this;
  }
  Type & set__prompt_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->prompt_duration = _arg;
    return *this;
  }
  Type & set__prompt_duration_is_set(
    const bool & _arg)
  {
    this->prompt_duration_is_set = _arg;
    return *this;
  }
  Type & set__default_behavior(
    const bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior_<ContainerAllocator> & _arg)
  {
    this->default_behavior = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FailureBehavior
    std::shared_ptr<bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FailureBehavior
    std::shared_ptr<bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FailureBehavior_ & other) const
  {
    if (this->retry_count != other.retry_count) {
      return false;
    }
    if (this->prompt_duration != other.prompt_duration) {
      return false;
    }
    if (this->prompt_duration_is_set != other.prompt_duration_is_set) {
      return false;
    }
    if (this->default_behavior != other.default_behavior) {
      return false;
    }
    return true;
  }
  bool operator!=(const FailureBehavior_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FailureBehavior_

// alias to use template instance with default allocator
using FailureBehavior =
  bosdyn_msgs::msg::FailureBehavior_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR__STRUCT_HPP_
