// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DefineBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEFINE_BLACKBOARD__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DEFINE_BLACKBOARD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'blackboard_variables'
#include "bosdyn_msgs/msg/detail/key_value__struct.hpp"
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DefineBlackboard __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DefineBlackboard __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DefineBlackboard_
{
  using Type = DefineBlackboard_<ContainerAllocator>;

  explicit DefineBlackboard_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_is_set = false;
    }
  }

  explicit DefineBlackboard_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_is_set = false;
    }
  }

  // field types and members
  using _blackboard_variables_type =
    std::vector<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _blackboard_variables_type blackboard_variables;
  using _child_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _child_type child;
  using _child_is_set_type =
    bool;
  _child_is_set_type child_is_set;

  // setters for named parameter idiom
  Type & set__blackboard_variables(
    const std::vector<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->blackboard_variables = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DefineBlackboard
    std::shared_ptr<bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DefineBlackboard
    std::shared_ptr<bosdyn_msgs::msg::DefineBlackboard_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DefineBlackboard_ & other) const
  {
    if (this->blackboard_variables != other.blackboard_variables) {
      return false;
    }
    if (this->child != other.child) {
      return false;
    }
    if (this->child_is_set != other.child_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const DefineBlackboard_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DefineBlackboard_

// alias to use template instance with default allocator
using DefineBlackboard =
  bosdyn_msgs::msg::DefineBlackboard_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEFINE_BLACKBOARD__STRUCT_HPP_
