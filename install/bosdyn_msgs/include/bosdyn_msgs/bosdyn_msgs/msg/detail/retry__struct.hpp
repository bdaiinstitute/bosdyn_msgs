// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Retry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RETRY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RETRY__STRUCT_HPP_

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
# define DEPRECATED__bosdyn_msgs__msg__Retry __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Retry __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Retry_
{
  using Type = Retry_<ContainerAllocator>;

  explicit Retry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_attempts = 0l;
      this->child_is_set = false;
      this->attempt_counter_state_name = "";
    }
  }

  explicit Retry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_alloc, _init),
    attempt_counter_state_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_attempts = 0l;
      this->child_is_set = false;
      this->attempt_counter_state_name = "";
    }
  }

  // field types and members
  using _max_attempts_type =
    int32_t;
  _max_attempts_type max_attempts;
  using _child_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _child_type child;
  using _child_is_set_type =
    bool;
  _child_is_set_type child_is_set;
  using _attempt_counter_state_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _attempt_counter_state_name_type attempt_counter_state_name;

  // setters for named parameter idiom
  Type & set__max_attempts(
    const int32_t & _arg)
  {
    this->max_attempts = _arg;
    return *this;
  }
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
  Type & set__attempt_counter_state_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->attempt_counter_state_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Retry_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Retry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Retry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Retry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Retry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Retry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Retry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Retry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Retry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Retry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Retry
    std::shared_ptr<bosdyn_msgs::msg::Retry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Retry
    std::shared_ptr<bosdyn_msgs::msg::Retry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Retry_ & other) const
  {
    if (this->max_attempts != other.max_attempts) {
      return false;
    }
    if (this->child != other.child) {
      return false;
    }
    if (this->child_is_set != other.child_is_set) {
      return false;
    }
    if (this->attempt_counter_state_name != other.attempt_counter_state_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Retry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Retry_

// alias to use template instance with default allocator
using Retry =
  bosdyn_msgs::msg::Retry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RETRY__STRUCT_HPP_
