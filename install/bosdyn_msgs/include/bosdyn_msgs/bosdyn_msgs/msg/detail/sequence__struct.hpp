// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Sequence.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SEQUENCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SEQUENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'children'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Sequence __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Sequence __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sequence_
{
  using Type = Sequence_<ContainerAllocator>;

  explicit Sequence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->always_restart = false;
    }
  }

  explicit Sequence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->always_restart = false;
    }
  }

  // field types and members
  using _always_restart_type =
    bool;
  _always_restart_type always_restart;
  using _children_type =
    std::vector<bosdyn_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Node_<ContainerAllocator>>>;
  _children_type children;

  // setters for named parameter idiom
  Type & set__always_restart(
    const bool & _arg)
  {
    this->always_restart = _arg;
    return *this;
  }
  Type & set__children(
    const std::vector<bosdyn_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Node_<ContainerAllocator>>> & _arg)
  {
    this->children = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Sequence_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Sequence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Sequence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Sequence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Sequence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Sequence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Sequence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Sequence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Sequence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Sequence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Sequence
    std::shared_ptr<bosdyn_msgs::msg::Sequence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Sequence
    std::shared_ptr<bosdyn_msgs::msg::Sequence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sequence_ & other) const
  {
    if (this->always_restart != other.always_restart) {
      return false;
    }
    if (this->children != other.children) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sequence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sequence_

// alias to use template instance with default allocator
using Sequence =
  bosdyn_msgs::msg::Sequence_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SEQUENCE__STRUCT_HPP_
