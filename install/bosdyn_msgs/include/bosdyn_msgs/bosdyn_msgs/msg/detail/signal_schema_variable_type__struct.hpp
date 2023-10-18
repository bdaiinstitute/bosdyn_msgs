// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SignalSchemaVariableType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE_TYPE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SignalSchemaVariableType __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SignalSchemaVariableType __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalSchemaVariableType_
{
  using Type = SignalSchemaVariableType_<ContainerAllocator>;

  explicit SignalSchemaVariableType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit SignalSchemaVariableType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    int8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const int8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TYPE_UNKNOWN =
    0;
  static constexpr int8_t TYPE_INT8 =
    1;
  static constexpr int8_t TYPE_INT16 =
    2;
  static constexpr int8_t TYPE_INT32 =
    3;
  static constexpr int8_t TYPE_INT64 =
    4;
  static constexpr int8_t TYPE_UINT8 =
    5;
  static constexpr int8_t TYPE_UINT16 =
    6;
  static constexpr int8_t TYPE_UINT32 =
    7;
  static constexpr int8_t TYPE_UINT64 =
    8;
  static constexpr int8_t TYPE_FLOAT32 =
    9;
  static constexpr int8_t TYPE_FLOAT64 =
    10;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SignalSchemaVariableType
    std::shared_ptr<bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SignalSchemaVariableType
    std::shared_ptr<bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalSchemaVariableType_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalSchemaVariableType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalSchemaVariableType_

// alias to use template instance with default allocator
using SignalSchemaVariableType =
  bosdyn_msgs::msg::SignalSchemaVariableType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_INT8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_INT16;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_INT32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_INT64;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_UINT8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_UINT16;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_UINT32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_UINT64;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_FLOAT32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SignalSchemaVariableType_<ContainerAllocator>::TYPE_FLOAT64;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE_TYPE__STRUCT_HPP_
