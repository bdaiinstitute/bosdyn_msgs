// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionAfter.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'action'
#include "bosdyn_msgs/msg/detail/action_after_one_of_action__struct.hpp"
// Member 'after'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionAfter __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionAfter __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionAfter_
{
  using Type = ActionAfter_<ContainerAllocator>;

  explicit ActionAfter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_init),
    after(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->after_is_set = false;
    }
  }

  explicit ActionAfter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc, _init),
    after(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->after_is_set = false;
    }
  }

  // field types and members
  using _action_type =
    bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator>;
  _action_type action;
  using _after_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _after_type after;
  using _after_is_set_type =
    bool;
  _after_is_set_type after_is_set;

  // setters for named parameter idiom
  Type & set__action(
    const bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__after(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->after = _arg;
    return *this;
  }
  Type & set__after_is_set(
    const bool & _arg)
  {
    this->after_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionAfter_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionAfter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionAfter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionAfter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionAfter
    std::shared_ptr<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionAfter
    std::shared_ptr<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionAfter_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->after != other.after) {
      return false;
    }
    if (this->after_is_set != other.after_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionAfter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionAfter_

// alias to use template instance with default allocator
using ActionAfter =
  bosdyn_msgs::msg::ActionAfter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER__STRUCT_HPP_
