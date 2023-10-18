// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ConditionOperand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/condition_operand_one_of_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ConditionOperand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ConditionOperand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConditionOperand_
{
  using Type = ConditionOperand_<ContainerAllocator>;

  explicit ConditionOperand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    (void)_init;
  }

  explicit ConditionOperand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _type_type =
    bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ConditionOperand
    std::shared_ptr<bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ConditionOperand
    std::shared_ptr<bosdyn_msgs::msg::ConditionOperand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConditionOperand_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConditionOperand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConditionOperand_

// alias to use template instance with default allocator
using ConditionOperand =
  bosdyn_msgs::msg::ConditionOperand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND__STRUCT_HPP_
