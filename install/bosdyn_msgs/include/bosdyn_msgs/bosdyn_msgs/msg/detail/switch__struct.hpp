// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Switch.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SWITCH__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SWITCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pivot_value'
#include "bosdyn_msgs/msg/detail/value__struct.hpp"
// Member 'int_children'
#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_node__struct.hpp"
// Member 'default_child'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Switch __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Switch __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Switch_
{
  using Type = Switch_<ContainerAllocator>;

  explicit Switch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pivot_value(_init),
    default_child(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pivot_value_is_set = false;
      this->always_restart = false;
      this->default_child_is_set = false;
    }
  }

  explicit Switch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pivot_value(_alloc, _init),
    default_child(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pivot_value_is_set = false;
      this->always_restart = false;
      this->default_child_is_set = false;
    }
  }

  // field types and members
  using _pivot_value_type =
    bosdyn_msgs::msg::Value_<ContainerAllocator>;
  _pivot_value_type pivot_value;
  using _pivot_value_is_set_type =
    bool;
  _pivot_value_is_set_type pivot_value_is_set;
  using _always_restart_type =
    bool;
  _always_restart_type always_restart;
  using _int_children_type =
    std::vector<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode_<ContainerAllocator>>>;
  _int_children_type int_children;
  using _default_child_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _default_child_type default_child;
  using _default_child_is_set_type =
    bool;
  _default_child_is_set_type default_child_is_set;

  // setters for named parameter idiom
  Type & set__pivot_value(
    const bosdyn_msgs::msg::Value_<ContainerAllocator> & _arg)
  {
    this->pivot_value = _arg;
    return *this;
  }
  Type & set__pivot_value_is_set(
    const bool & _arg)
  {
    this->pivot_value_is_set = _arg;
    return *this;
  }
  Type & set__always_restart(
    const bool & _arg)
  {
    this->always_restart = _arg;
    return *this;
  }
  Type & set__int_children(
    const std::vector<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode_<ContainerAllocator>>> & _arg)
  {
    this->int_children = _arg;
    return *this;
  }
  Type & set__default_child(
    const bosdyn_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->default_child = _arg;
    return *this;
  }
  Type & set__default_child_is_set(
    const bool & _arg)
  {
    this->default_child_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Switch_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Switch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Switch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Switch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Switch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Switch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Switch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Switch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Switch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Switch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Switch
    std::shared_ptr<bosdyn_msgs::msg::Switch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Switch
    std::shared_ptr<bosdyn_msgs::msg::Switch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Switch_ & other) const
  {
    if (this->pivot_value != other.pivot_value) {
      return false;
    }
    if (this->pivot_value_is_set != other.pivot_value_is_set) {
      return false;
    }
    if (this->always_restart != other.always_restart) {
      return false;
    }
    if (this->int_children != other.int_children) {
      return false;
    }
    if (this->default_child != other.default_child) {
      return false;
    }
    if (this->default_child_is_set != other.default_child_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Switch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Switch_

// alias to use template instance with default allocator
using Switch =
  bosdyn_msgs::msg::Switch_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SWITCH__STRUCT_HPP_
