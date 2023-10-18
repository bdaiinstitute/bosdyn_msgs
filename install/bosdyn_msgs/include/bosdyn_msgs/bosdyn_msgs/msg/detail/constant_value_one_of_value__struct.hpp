// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ConstantValueOneOfValue.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTANT_VALUE_ONE_OF_VALUE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTANT_VALUE_ONE_OF_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ConstantValueOneOfValue __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ConstantValueOneOfValue __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstantValueOneOfValue_
{
  using Type = ConstantValueOneOfValue_<ContainerAllocator>;

  explicit ConstantValueOneOfValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->float_value = 0.0;
      this->string_value = "";
      this->int_value = 0ll;
      this->bool_value = false;
      this->value_choice = 0;
    }
  }

  explicit ConstantValueOneOfValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : string_value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->float_value = 0.0;
      this->string_value = "";
      this->int_value = 0ll;
      this->bool_value = false;
      this->value_choice = 0;
    }
  }

  // field types and members
  using _float_value_type =
    double;
  _float_value_type float_value;
  using _string_value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _string_value_type string_value;
  using _int_value_type =
    int64_t;
  _int_value_type int_value;
  using _bool_value_type =
    bool;
  _bool_value_type bool_value;
  using _value_choice_type =
    int8_t;
  _value_choice_type value_choice;

  // setters for named parameter idiom
  Type & set__float_value(
    const double & _arg)
  {
    this->float_value = _arg;
    return *this;
  }
  Type & set__string_value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->string_value = _arg;
    return *this;
  }
  Type & set__int_value(
    const int64_t & _arg)
  {
    this->int_value = _arg;
    return *this;
  }
  Type & set__bool_value(
    const bool & _arg)
  {
    this->bool_value = _arg;
    return *this;
  }
  Type & set__value_choice(
    const int8_t & _arg)
  {
    this->value_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t VALUE_NOT_SET =
    0;
  static constexpr int8_t VALUE_FLOAT_VALUE_SET =
    1;
  static constexpr int8_t VALUE_STRING_VALUE_SET =
    2;
  static constexpr int8_t VALUE_INT_VALUE_SET =
    3;
  static constexpr int8_t VALUE_BOOL_VALUE_SET =
    4;
  static constexpr int8_t VALUE_MSG_VALUE_SET =
    5;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ConstantValueOneOfValue
    std::shared_ptr<bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ConstantValueOneOfValue
    std::shared_ptr<bosdyn_msgs::msg::ConstantValueOneOfValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstantValueOneOfValue_ & other) const
  {
    if (this->float_value != other.float_value) {
      return false;
    }
    if (this->string_value != other.string_value) {
      return false;
    }
    if (this->int_value != other.int_value) {
      return false;
    }
    if (this->bool_value != other.bool_value) {
      return false;
    }
    if (this->value_choice != other.value_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstantValueOneOfValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstantValueOneOfValue_

// alias to use template instance with default allocator
using ConstantValueOneOfValue =
  bosdyn_msgs::msg::ConstantValueOneOfValue_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstantValueOneOfValue_<ContainerAllocator>::VALUE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstantValueOneOfValue_<ContainerAllocator>::VALUE_FLOAT_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstantValueOneOfValue_<ContainerAllocator>::VALUE_STRING_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstantValueOneOfValue_<ContainerAllocator>::VALUE_INT_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstantValueOneOfValue_<ContainerAllocator>::VALUE_BOOL_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstantValueOneOfValue_<ContainerAllocator>::VALUE_MSG_VALUE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTANT_VALUE_ONE_OF_VALUE__STRUCT_HPP_
