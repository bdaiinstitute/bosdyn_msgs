// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RestartWhenPaused.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESTART_WHEN_PAUSED__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RESTART_WHEN_PAUSED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RestartWhenPaused __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RestartWhenPaused __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RestartWhenPaused_
{
  using Type = RestartWhenPaused_<ContainerAllocator>;

  explicit RestartWhenPaused_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_is_set = false;
    }
  }

  explicit RestartWhenPaused_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_is_set = false;
    }
  }

  // field types and members
  using _child_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _child_type child;
  using _child_is_set_type =
    bool;
  _child_is_set_type child_is_set;

  // setters for named parameter idiom
  Type & set__child(
    const bosdyn_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->child = _arg;
    return *this;
  }
  Type & set__child_is_set(
    const bool & _arg)
  {
    this->child_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RestartWhenPaused
    std::shared_ptr<bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RestartWhenPaused
    std::shared_ptr<bosdyn_msgs::msg::RestartWhenPaused_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RestartWhenPaused_ & other) const
  {
    if (this->child != other.child) {
      return false;
    }
    if (this->child_is_set != other.child_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const RestartWhenPaused_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RestartWhenPaused_

// alias to use template instance with default allocator
using RestartWhenPaused =
  bosdyn_msgs::msg::RestartWhenPaused_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESTART_WHEN_PAUSED__STRUCT_HPP_
