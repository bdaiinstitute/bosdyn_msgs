// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ValueOneOfSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VALUE_ONE_OF_SOURCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VALUE_ONE_OF_SOURCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'constant'
#include "bosdyn_msgs/msg/detail/constant_value__struct.hpp"
// Member 'runtime_var'
// Member 'parameter'
#include "bosdyn_msgs/msg/detail/variable_declaration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ValueOneOfSource __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ValueOneOfSource __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ValueOneOfSource_
{
  using Type = ValueOneOfSource_<ContainerAllocator>;

  explicit ValueOneOfSource_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : constant(_init),
    runtime_var(_init),
    parameter(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source_choice = 0;
    }
  }

  explicit ValueOneOfSource_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : constant(_alloc, _init),
    runtime_var(_alloc, _init),
    parameter(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source_choice = 0;
    }
  }

  // field types and members
  using _constant_type =
    bosdyn_msgs::msg::ConstantValue_<ContainerAllocator>;
  _constant_type constant;
  using _runtime_var_type =
    bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>;
  _runtime_var_type runtime_var;
  using _parameter_type =
    bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>;
  _parameter_type parameter;
  using _source_choice_type =
    int8_t;
  _source_choice_type source_choice;

  // setters for named parameter idiom
  Type & set__constant(
    const bosdyn_msgs::msg::ConstantValue_<ContainerAllocator> & _arg)
  {
    this->constant = _arg;
    return *this;
  }
  Type & set__runtime_var(
    const bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator> & _arg)
  {
    this->runtime_var = _arg;
    return *this;
  }
  Type & set__parameter(
    const bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator> & _arg)
  {
    this->parameter = _arg;
    return *this;
  }
  Type & set__source_choice(
    const int8_t & _arg)
  {
    this->source_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SOURCE_NOT_SET =
    0;
  static constexpr int8_t SOURCE_CONSTANT_SET =
    1;
  static constexpr int8_t SOURCE_RUNTIME_VAR_SET =
    2;
  static constexpr int8_t SOURCE_PARAMETER_SET =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ValueOneOfSource
    std::shared_ptr<bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ValueOneOfSource
    std::shared_ptr<bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ValueOneOfSource_ & other) const
  {
    if (this->constant != other.constant) {
      return false;
    }
    if (this->runtime_var != other.runtime_var) {
      return false;
    }
    if (this->parameter != other.parameter) {
      return false;
    }
    if (this->source_choice != other.source_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ValueOneOfSource_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ValueOneOfSource_

// alias to use template instance with default allocator
using ValueOneOfSource =
  bosdyn_msgs::msg::ValueOneOfSource_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ValueOneOfSource_<ContainerAllocator>::SOURCE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ValueOneOfSource_<ContainerAllocator>::SOURCE_CONSTANT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ValueOneOfSource_<ContainerAllocator>::SOURCE_RUNTIME_VAR_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ValueOneOfSource_<ContainerAllocator>::SOURCE_PARAMETER_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VALUE_ONE_OF_SOURCE__STRUCT_HPP_
