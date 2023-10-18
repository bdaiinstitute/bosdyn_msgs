// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CustomParamOneOfValue.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ONE_OF_VALUE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ONE_OF_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dict_value'
#include "bosdyn_msgs/msg/detail/serialized_message__struct.hpp"
// Member 'list_value'
#include "bosdyn_msgs/msg/detail/list_param__struct.hpp"
// Member 'int_value'
#include "bosdyn_msgs/msg/detail/int64_param__struct.hpp"
// Member 'double_value'
#include "bosdyn_msgs/msg/detail/double_param__struct.hpp"
// Member 'string_value'
#include "bosdyn_msgs/msg/detail/string_param__struct.hpp"
// Member 'roi_value'
#include "bosdyn_msgs/msg/detail/region_of_interest_param__struct.hpp"
// Member 'bool_value'
#include "bosdyn_msgs/msg/detail/bool_param__struct.hpp"
// Member 'one_of_value'
#include "bosdyn_msgs/msg/detail/one_of_param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CustomParamOneOfValue __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CustomParamOneOfValue __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomParamOneOfValue_
{
  using Type = CustomParamOneOfValue_<ContainerAllocator>;

  explicit CustomParamOneOfValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dict_value(_init),
    list_value(_init),
    int_value(_init),
    double_value(_init),
    string_value(_init),
    roi_value(_init),
    bool_value(_init),
    one_of_value(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value_choice = 0;
    }
  }

  explicit CustomParamOneOfValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dict_value(_alloc, _init),
    list_value(_alloc, _init),
    int_value(_alloc, _init),
    double_value(_alloc, _init),
    string_value(_alloc, _init),
    roi_value(_alloc, _init),
    bool_value(_alloc, _init),
    one_of_value(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value_choice = 0;
    }
  }

  // field types and members
  using _dict_value_type =
    bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>;
  _dict_value_type dict_value;
  using _list_value_type =
    bosdyn_msgs::msg::ListParam_<ContainerAllocator>;
  _list_value_type list_value;
  using _int_value_type =
    bosdyn_msgs::msg::Int64Param_<ContainerAllocator>;
  _int_value_type int_value;
  using _double_value_type =
    bosdyn_msgs::msg::DoubleParam_<ContainerAllocator>;
  _double_value_type double_value;
  using _string_value_type =
    bosdyn_msgs::msg::StringParam_<ContainerAllocator>;
  _string_value_type string_value;
  using _roi_value_type =
    bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator>;
  _roi_value_type roi_value;
  using _bool_value_type =
    bosdyn_msgs::msg::BoolParam_<ContainerAllocator>;
  _bool_value_type bool_value;
  using _one_of_value_type =
    bosdyn_msgs::msg::OneOfParam_<ContainerAllocator>;
  _one_of_value_type one_of_value;
  using _value_choice_type =
    int8_t;
  _value_choice_type value_choice;

  // setters for named parameter idiom
  Type & set__dict_value(
    const bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator> & _arg)
  {
    this->dict_value = _arg;
    return *this;
  }
  Type & set__list_value(
    const bosdyn_msgs::msg::ListParam_<ContainerAllocator> & _arg)
  {
    this->list_value = _arg;
    return *this;
  }
  Type & set__int_value(
    const bosdyn_msgs::msg::Int64Param_<ContainerAllocator> & _arg)
  {
    this->int_value = _arg;
    return *this;
  }
  Type & set__double_value(
    const bosdyn_msgs::msg::DoubleParam_<ContainerAllocator> & _arg)
  {
    this->double_value = _arg;
    return *this;
  }
  Type & set__string_value(
    const bosdyn_msgs::msg::StringParam_<ContainerAllocator> & _arg)
  {
    this->string_value = _arg;
    return *this;
  }
  Type & set__roi_value(
    const bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator> & _arg)
  {
    this->roi_value = _arg;
    return *this;
  }
  Type & set__bool_value(
    const bosdyn_msgs::msg::BoolParam_<ContainerAllocator> & _arg)
  {
    this->bool_value = _arg;
    return *this;
  }
  Type & set__one_of_value(
    const bosdyn_msgs::msg::OneOfParam_<ContainerAllocator> & _arg)
  {
    this->one_of_value = _arg;
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
  static constexpr int8_t VALUE_DICT_VALUE_SET =
    1;
  static constexpr int8_t VALUE_LIST_VALUE_SET =
    2;
  static constexpr int8_t VALUE_INT_VALUE_SET =
    3;
  static constexpr int8_t VALUE_DOUBLE_VALUE_SET =
    4;
  static constexpr int8_t VALUE_STRING_VALUE_SET =
    5;
  static constexpr int8_t VALUE_ROI_VALUE_SET =
    6;
  static constexpr int8_t VALUE_BOOL_VALUE_SET =
    7;
  static constexpr int8_t VALUE_ONE_OF_VALUE_SET =
    8;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CustomParamOneOfValue
    std::shared_ptr<bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CustomParamOneOfValue
    std::shared_ptr<bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomParamOneOfValue_ & other) const
  {
    if (this->dict_value != other.dict_value) {
      return false;
    }
    if (this->list_value != other.list_value) {
      return false;
    }
    if (this->int_value != other.int_value) {
      return false;
    }
    if (this->double_value != other.double_value) {
      return false;
    }
    if (this->string_value != other.string_value) {
      return false;
    }
    if (this->roi_value != other.roi_value) {
      return false;
    }
    if (this->bool_value != other.bool_value) {
      return false;
    }
    if (this->one_of_value != other.one_of_value) {
      return false;
    }
    if (this->value_choice != other.value_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomParamOneOfValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomParamOneOfValue_

// alias to use template instance with default allocator
using CustomParamOneOfValue =
  bosdyn_msgs::msg::CustomParamOneOfValue_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamOneOfValue_<ContainerAllocator>::VALUE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamOneOfValue_<ContainerAllocator>::VALUE_DICT_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamOneOfValue_<ContainerAllocator>::VALUE_LIST_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamOneOfValue_<ContainerAllocator>::VALUE_INT_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamOneOfValue_<ContainerAllocator>::VALUE_DOUBLE_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamOneOfValue_<ContainerAllocator>::VALUE_STRING_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamOneOfValue_<ContainerAllocator>::VALUE_ROI_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamOneOfValue_<ContainerAllocator>::VALUE_BOOL_VALUE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamOneOfValue_<ContainerAllocator>::VALUE_ONE_OF_VALUE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_ONE_OF_VALUE__STRUCT_HPP_
