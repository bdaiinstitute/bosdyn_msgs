// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ConditionOperandOneOfType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND_ONE_OF_TYPE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND_ONE_OF_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'var'
#include "bosdyn_msgs/msg/detail/variable_declaration__struct.hpp"
// Member 'constant'
#include "bosdyn_msgs/msg/detail/constant_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ConditionOperandOneOfType __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ConditionOperandOneOfType __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConditionOperandOneOfType_
{
  using Type = ConditionOperandOneOfType_<ContainerAllocator>;

  explicit ConditionOperandOneOfType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : var(_init),
    constant(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type_choice = 0;
    }
  }

  explicit ConditionOperandOneOfType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : var(_alloc, _init),
    constant(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type_choice = 0;
    }
  }

  // field types and members
  using _var_type =
    bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>;
  _var_type var;
  using _constant_type =
    bosdyn_msgs::msg::ConstantValue_<ContainerAllocator>;
  _constant_type constant;
  using _type_choice_type =
    int8_t;
  _type_choice_type type_choice;

  // setters for named parameter idiom
  Type & set__var(
    const bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator> & _arg)
  {
    this->var = _arg;
    return *this;
  }
  Type & set__constant(
    const bosdyn_msgs::msg::ConstantValue_<ContainerAllocator> & _arg)
  {
    this->constant = _arg;
    return *this;
  }
  Type & set__type_choice(
    const int8_t & _arg)
  {
    this->type_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TYPE_NOT_SET =
    0;
  static constexpr int8_t TYPE_VAR_SET =
    1;
  static constexpr int8_t TYPE_CONST_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ConditionOperandOneOfType
    std::shared_ptr<bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ConditionOperandOneOfType
    std::shared_ptr<bosdyn_msgs::msg::ConditionOperandOneOfType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConditionOperandOneOfType_ & other) const
  {
    if (this->var != other.var) {
      return false;
    }
    if (this->constant != other.constant) {
      return false;
    }
    if (this->type_choice != other.type_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConditionOperandOneOfType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConditionOperandOneOfType_

// alias to use template instance with default allocator
using ConditionOperandOneOfType =
  bosdyn_msgs::msg::ConditionOperandOneOfType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConditionOperandOneOfType_<ContainerAllocator>::TYPE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConditionOperandOneOfType_<ContainerAllocator>::TYPE_VAR_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConditionOperandOneOfType_<ContainerAllocator>::TYPE_CONST_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONDITION_OPERAND_ONE_OF_TYPE__STRUCT_HPP_
