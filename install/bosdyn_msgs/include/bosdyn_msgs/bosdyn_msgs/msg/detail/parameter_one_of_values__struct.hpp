// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ParameterOneOfValues.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ParameterOneOfValues __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ParameterOneOfValues __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParameterOneOfValues_
{
  using Type = ParameterOneOfValues_<ContainerAllocator>;

  explicit ParameterOneOfValues_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->int_value = 0ll;
      this->float_value = 0.0;
      this->string_value = "";
      this->bool_value = false;
      this->uint_value = 0ull;
      this->values_choice = 0;
    }
  }

  explicit ParameterOneOfValues_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    duration(_alloc, _init),
    string_value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->int_value = 0ll;
      this->float_value = 0.0;
      this->string_value = "";
      this->bool_value = false;
      this->uint_value = 0ull;
      this->values_choice = 0;
    }
  }

  // field types and members
  using _int_value_type =
    int64_t;
  _int_value_type int_value;
  using _float_value_type =
    double;
  _float_value_type float_value;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;
  using _string_value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _string_value_type string_value;
  using _bool_value_type =
    bool;
  _bool_value_type bool_value;
  using _uint_value_type =
    uint64_t;
  _uint_value_type uint_value;
  using _values_choice_type =
    int8_t;
  _values_choice_type values_choice;

  // setters for named parameter idiom
  Type & set__int_value(
    const int64_t & _arg)
  {
    this->int_value = _arg;
    return *this;
  }
  Type & set__float_value(
    const double & _arg)
  {
    this->float_value = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__string_value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->string_value = _arg;
    return *this;
  }
  Type & set__bool_value(
    const bool & _arg)
  {
    this->bool_value = _arg;
    return *this;
  }
  Type & set__uint_value(
    const uint64_t & _arg)
  {
    this->uint_value = _arg;
    return *this;
  }
  Type & set__values_choice(
    const int8_t & _arg)
  {
    this->values_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t VALUES_NOT_SET =
    0;
  static constexpr int8_t VALUES_INT_VALUE_SET =
    1;
  static constexpr int8_t VALUES_FLOAT_VALUE_SET =
    2;
  static constexpr int8_t VALUES_TIMESTAMP_SET =
    3;
  static constexpr int8_t VALUES_DURATION_SET =
    4;
  static constexpr int8_t VALUES_STRING_VALUE_SET =
    5;
  static constexpr int8_t VALUES_BOOL_VALUE_SET =
    6;
  static constexpr int8_t VALUES_UINT_VALUE_SET =
    7;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ParameterOneOfValues
    std::shared_ptr<bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ParameterOneOfValues
    std::shared_ptr<bosdyn_msgs::msg::ParameterOneOfValues_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParameterOneOfValues_ & other) const
  {
    if (this->int_value != other.int_value) {
      return false;
    }
    if (this->float_value != other.float_value) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->string_value != other.string_value) {
      return false;
    }
    if (this->bool_value != other.bool_value) {
      return false;
    }
    if (this->uint_value != other.uint_value) {
      return false;
    }
    if (this->values_choice != other.values_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParameterOneOfValues_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParameterOneOfValues_

// alias to use template instance with default allocator
using ParameterOneOfValues =
  bosdyn_msgs::msg::ParameterOneOfValues_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ParameterOneOfValues_<ContainerAllocator>::VALUES_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ParameterOneOfValues_<ContainerAllocator>::VALUES_INT_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ParameterOneOfValues_<ContainerAllocator>::VALUES_FLOAT_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ParameterOneOfValues_<ContainerAllocator>::VALUES_TIMESTAMP_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ParameterOneOfValues_<ContainerAllocator>::VALUES_DURATION_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ParameterOneOfValues_<ContainerAllocator>::VALUES_STRING_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ParameterOneOfValues_<ContainerAllocator>::VALUES_BOOL_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ParameterOneOfValues_<ContainerAllocator>::VALUES_UINT_VALUE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__STRUCT_HPP_
