// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Repeat.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REPEAT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REPEAT__STRUCT_HPP_

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
# define DEPRECATED__bosdyn_msgs__msg__Repeat __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Repeat __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Repeat_
{
  using Type = Repeat_<ContainerAllocator>;

  explicit Repeat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_starts = 0l;
      this->child_is_set = false;
      this->start_counter_state_name = "";
      this->respect_child_failure = false;
    }
  }

  explicit Repeat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_alloc, _init),
    start_counter_state_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_starts = 0l;
      this->child_is_set = false;
      this->start_counter_state_name = "";
      this->respect_child_failure = false;
    }
  }

  // field types and members
  using _max_starts_type =
    int32_t;
  _max_starts_type max_starts;
  using _child_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _child_type child;
  using _child_is_set_type =
    bool;
  _child_is_set_type child_is_set;
  using _start_counter_state_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_counter_state_name_type start_counter_state_name;
  using _respect_child_failure_type =
    bool;
  _respect_child_failure_type respect_child_failure;

  // setters for named parameter idiom
  Type & set__max_starts(
    const int32_t & _arg)
  {
    this->max_starts = _arg;
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
  Type & set__start_counter_state_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_counter_state_name = _arg;
    return *this;
  }
  Type & set__respect_child_failure(
    const bool & _arg)
  {
    this->respect_child_failure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Repeat_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Repeat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Repeat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Repeat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Repeat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Repeat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Repeat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Repeat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Repeat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Repeat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Repeat
    std::shared_ptr<bosdyn_msgs::msg::Repeat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Repeat
    std::shared_ptr<bosdyn_msgs::msg::Repeat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Repeat_ & other) const
  {
    if (this->max_starts != other.max_starts) {
      return false;
    }
    if (this->child != other.child) {
      return false;
    }
    if (this->child_is_set != other.child_is_set) {
      return false;
    }
    if (this->start_counter_state_name != other.start_counter_state_name) {
      return false;
    }
    if (this->respect_child_failure != other.respect_child_failure) {
      return false;
    }
    return true;
  }
  bool operator!=(const Repeat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Repeat_

// alias to use template instance with default allocator
using Repeat =
  bosdyn_msgs::msg::Repeat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REPEAT__STRUCT_HPP_
