// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Condition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONDITION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONDITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lhs'
// Member 'rhs'
#include "bosdyn_msgs/msg/detail/condition_operand__struct.hpp"
// Member 'operation'
#include "bosdyn_msgs/msg/detail/condition_compare__struct.hpp"
// Member 'handle_staleness'
#include "bosdyn_msgs/msg/detail/condition_handle_staleness__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Condition __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Condition __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Condition_
{
  using Type = Condition_<ContainerAllocator>;

  explicit Condition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lhs(_init),
    rhs(_init),
    operation(_init),
    handle_staleness(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lhs_is_set = false;
      this->rhs_is_set = false;
    }
  }

  explicit Condition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lhs(_alloc, _init),
    rhs(_alloc, _init),
    operation(_alloc, _init),
    handle_staleness(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lhs_is_set = false;
      this->rhs_is_set = false;
    }
  }

  // field types and members
  using _lhs_type =
    bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator>;
  _lhs_type lhs;
  using _lhs_is_set_type =
    bool;
  _lhs_is_set_type lhs_is_set;
  using _rhs_type =
    bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator>;
  _rhs_type rhs;
  using _rhs_is_set_type =
    bool;
  _rhs_is_set_type rhs_is_set;
  using _operation_type =
    bosdyn_msgs::msg::ConditionCompare_<ContainerAllocator>;
  _operation_type operation;
  using _handle_staleness_type =
    bosdyn_msgs::msg::ConditionHandleStaleness_<ContainerAllocator>;
  _handle_staleness_type handle_staleness;

  // setters for named parameter idiom
  Type & set__lhs(
    const bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator> & _arg)
  {
    this->lhs = _arg;
    return *this;
  }
  Type & set__lhs_is_set(
    const bool & _arg)
  {
    this->lhs_is_set = _arg;
    return *this;
  }
  Type & set__rhs(
    const bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator> & _arg)
  {
    this->rhs = _arg;
    return *this;
  }
  Type & set__rhs_is_set(
    const bool & _arg)
  {
    this->rhs_is_set = _arg;
    return *this;
  }
  Type & set__operation(
    const bosdyn_msgs::msg::ConditionCompare_<ContainerAllocator> & _arg)
  {
    this->operation = _arg;
    return *this;
  }
  Type & set__handle_staleness(
    const bosdyn_msgs::msg::ConditionHandleStaleness_<ContainerAllocator> & _arg)
  {
    this->handle_staleness = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Condition_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Condition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Condition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Condition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Condition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Condition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Condition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Condition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Condition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Condition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Condition
    std::shared_ptr<bosdyn_msgs::msg::Condition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Condition
    std::shared_ptr<bosdyn_msgs::msg::Condition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Condition_ & other) const
  {
    if (this->lhs != other.lhs) {
      return false;
    }
    if (this->lhs_is_set != other.lhs_is_set) {
      return false;
    }
    if (this->rhs != other.rhs) {
      return false;
    }
    if (this->rhs_is_set != other.rhs_is_set) {
      return false;
    }
    if (this->operation != other.operation) {
      return false;
    }
    if (this->handle_staleness != other.handle_staleness) {
      return false;
    }
    return true;
  }
  bool operator!=(const Condition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Condition_

// alias to use template instance with default allocator
using Condition =
  bosdyn_msgs::msg::Condition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONDITION__STRUCT_HPP_
