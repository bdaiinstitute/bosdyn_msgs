// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ForDuration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOR_DURATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOR_DURATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'child'
// Member 'timeout_child'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ForDuration __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ForDuration __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ForDuration_
{
  using Type = ForDuration_<ContainerAllocator>;

  explicit ForDuration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : duration(_init),
    child(_init),
    timeout_child(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration_is_set = false;
      this->child_is_set = false;
      this->time_remaining_name = "";
      this->timeout_child_is_set = false;
    }
  }

  explicit ForDuration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : duration(_alloc, _init),
    child(_alloc, _init),
    time_remaining_name(_alloc),
    timeout_child(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration_is_set = false;
      this->child_is_set = false;
      this->time_remaining_name = "";
      this->timeout_child_is_set = false;
    }
  }

  // field types and members
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;
  using _duration_is_set_type =
    bool;
  _duration_is_set_type duration_is_set;
  using _child_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _child_type child;
  using _child_is_set_type =
    bool;
  _child_is_set_type child_is_set;
  using _time_remaining_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _time_remaining_name_type time_remaining_name;
  using _timeout_child_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _timeout_child_type timeout_child;
  using _timeout_child_is_set_type =
    bool;
  _timeout_child_is_set_type timeout_child_is_set;

  // setters for named parameter idiom
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__duration_is_set(
    const bool & _arg)
  {
    this->duration_is_set = _arg;
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
  Type & set__time_remaining_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->time_remaining_name = _arg;
    return *this;
  }
  Type & set__timeout_child(
    const bosdyn_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->timeout_child = _arg;
    return *this;
  }
  Type & set__timeout_child_is_set(
    const bool & _arg)
  {
    this->timeout_child_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ForDuration_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ForDuration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ForDuration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ForDuration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ForDuration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ForDuration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ForDuration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ForDuration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ForDuration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ForDuration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ForDuration
    std::shared_ptr<bosdyn_msgs::msg::ForDuration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ForDuration
    std::shared_ptr<bosdyn_msgs::msg::ForDuration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ForDuration_ & other) const
  {
    if (this->duration != other.duration) {
      return false;
    }
    if (this->duration_is_set != other.duration_is_set) {
      return false;
    }
    if (this->child != other.child) {
      return false;
    }
    if (this->child_is_set != other.child_is_set) {
      return false;
    }
    if (this->time_remaining_name != other.time_remaining_name) {
      return false;
    }
    if (this->timeout_child != other.timeout_child) {
      return false;
    }
    if (this->timeout_child_is_set != other.timeout_child_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ForDuration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ForDuration_

// alias to use template instance with default allocator
using ForDuration =
  bosdyn_msgs::msg::ForDuration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOR_DURATION__STRUCT_HPP_
