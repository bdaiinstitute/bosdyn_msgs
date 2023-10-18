// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SimpleParallel.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIMPLE_PARALLEL__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SIMPLE_PARALLEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'primary'
// Member 'secondary'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SimpleParallel __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SimpleParallel __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SimpleParallel_
{
  using Type = SimpleParallel_<ContainerAllocator>;

  explicit SimpleParallel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : primary(_init),
    secondary(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->primary_is_set = false;
      this->secondary_is_set = false;
      this->run_secondary_node_once = false;
    }
  }

  explicit SimpleParallel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : primary(_alloc, _init),
    secondary(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->primary_is_set = false;
      this->secondary_is_set = false;
      this->run_secondary_node_once = false;
    }
  }

  // field types and members
  using _primary_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _primary_type primary;
  using _primary_is_set_type =
    bool;
  _primary_is_set_type primary_is_set;
  using _secondary_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _secondary_type secondary;
  using _secondary_is_set_type =
    bool;
  _secondary_is_set_type secondary_is_set;
  using _run_secondary_node_once_type =
    bool;
  _run_secondary_node_once_type run_secondary_node_once;

  // setters for named parameter idiom
  Type & set__primary(
    const bosdyn_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->primary = _arg;
    return *this;
  }
  Type & set__primary_is_set(
    const bool & _arg)
  {
    this->primary_is_set = _arg;
    return *this;
  }
  Type & set__secondary(
    const bosdyn_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->secondary = _arg;
    return *this;
  }
  Type & set__secondary_is_set(
    const bool & _arg)
  {
    this->secondary_is_set = _arg;
    return *this;
  }
  Type & set__run_secondary_node_once(
    const bool & _arg)
  {
    this->run_secondary_node_once = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SimpleParallel
    std::shared_ptr<bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SimpleParallel
    std::shared_ptr<bosdyn_msgs::msg::SimpleParallel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleParallel_ & other) const
  {
    if (this->primary != other.primary) {
      return false;
    }
    if (this->primary_is_set != other.primary_is_set) {
      return false;
    }
    if (this->secondary != other.secondary) {
      return false;
    }
    if (this->secondary_is_set != other.secondary_is_set) {
      return false;
    }
    if (this->run_secondary_node_once != other.run_secondary_node_once) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleParallel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleParallel_

// alias to use template instance with default allocator
using SimpleParallel =
  bosdyn_msgs::msg::SimpleParallel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIMPLE_PARALLEL__STRUCT_HPP_
