// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CustomParamSpecOneOfSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC_ONE_OF_SPEC__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC_ONE_OF_SPEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dict_spec'
#include "bosdyn_msgs/msg/detail/serialized_message__struct.hpp"
// Member 'list_spec'
#include "bosdyn_msgs/msg/detail/list_param_spec__struct.hpp"
// Member 'int_spec'
#include "bosdyn_msgs/msg/detail/int64_param_spec__struct.hpp"
// Member 'double_spec'
#include "bosdyn_msgs/msg/detail/double_param_spec__struct.hpp"
// Member 'string_spec'
#include "bosdyn_msgs/msg/detail/string_param_spec__struct.hpp"
// Member 'roi_spec'
#include "bosdyn_msgs/msg/detail/region_of_interest_param_spec__struct.hpp"
// Member 'bool_spec'
#include "bosdyn_msgs/msg/detail/bool_param_spec__struct.hpp"
// Member 'one_of_spec'
#include "bosdyn_msgs/msg/detail/one_of_param_spec__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CustomParamSpecOneOfSpec __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CustomParamSpecOneOfSpec __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomParamSpecOneOfSpec_
{
  using Type = CustomParamSpecOneOfSpec_<ContainerAllocator>;

  explicit CustomParamSpecOneOfSpec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dict_spec(_init),
    list_spec(_init),
    int_spec(_init),
    double_spec(_init),
    string_spec(_init),
    roi_spec(_init),
    bool_spec(_init),
    one_of_spec(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spec_choice = 0;
    }
  }

  explicit CustomParamSpecOneOfSpec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dict_spec(_alloc, _init),
    list_spec(_alloc, _init),
    int_spec(_alloc, _init),
    double_spec(_alloc, _init),
    string_spec(_alloc, _init),
    roi_spec(_alloc, _init),
    bool_spec(_alloc, _init),
    one_of_spec(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spec_choice = 0;
    }
  }

  // field types and members
  using _dict_spec_type =
    bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>;
  _dict_spec_type dict_spec;
  using _list_spec_type =
    bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator>;
  _list_spec_type list_spec;
  using _int_spec_type =
    bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator>;
  _int_spec_type int_spec;
  using _double_spec_type =
    bosdyn_msgs::msg::DoubleParamSpec_<ContainerAllocator>;
  _double_spec_type double_spec;
  using _string_spec_type =
    bosdyn_msgs::msg::StringParamSpec_<ContainerAllocator>;
  _string_spec_type string_spec;
  using _roi_spec_type =
    bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator>;
  _roi_spec_type roi_spec;
  using _bool_spec_type =
    bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator>;
  _bool_spec_type bool_spec;
  using _one_of_spec_type =
    bosdyn_msgs::msg::OneOfParamSpec_<ContainerAllocator>;
  _one_of_spec_type one_of_spec;
  using _spec_choice_type =
    int8_t;
  _spec_choice_type spec_choice;

  // setters for named parameter idiom
  Type & set__dict_spec(
    const bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator> & _arg)
  {
    this->dict_spec = _arg;
    return *this;
  }
  Type & set__list_spec(
    const bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator> & _arg)
  {
    this->list_spec = _arg;
    return *this;
  }
  Type & set__int_spec(
    const bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator> & _arg)
  {
    this->int_spec = _arg;
    return *this;
  }
  Type & set__double_spec(
    const bosdyn_msgs::msg::DoubleParamSpec_<ContainerAllocator> & _arg)
  {
    this->double_spec = _arg;
    return *this;
  }
  Type & set__string_spec(
    const bosdyn_msgs::msg::StringParamSpec_<ContainerAllocator> & _arg)
  {
    this->string_spec = _arg;
    return *this;
  }
  Type & set__roi_spec(
    const bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator> & _arg)
  {
    this->roi_spec = _arg;
    return *this;
  }
  Type & set__bool_spec(
    const bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator> & _arg)
  {
    this->bool_spec = _arg;
    return *this;
  }
  Type & set__one_of_spec(
    const bosdyn_msgs::msg::OneOfParamSpec_<ContainerAllocator> & _arg)
  {
    this->one_of_spec = _arg;
    return *this;
  }
  Type & set__spec_choice(
    const int8_t & _arg)
  {
    this->spec_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SPEC_NOT_SET =
    0;
  static constexpr int8_t SPEC_DICT_SPEC_SET =
    1;
  static constexpr int8_t SPEC_LIST_SPEC_SET =
    2;
  static constexpr int8_t SPEC_INT_SPEC_SET =
    3;
  static constexpr int8_t SPEC_DOUBLE_SPEC_SET =
    4;
  static constexpr int8_t SPEC_STRING_SPEC_SET =
    5;
  static constexpr int8_t SPEC_ROI_SPEC_SET =
    6;
  static constexpr int8_t SPEC_BOOL_SPEC_SET =
    7;
  static constexpr int8_t SPEC_ONE_OF_SPEC_SET =
    8;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CustomParamSpecOneOfSpec
    std::shared_ptr<bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CustomParamSpecOneOfSpec
    std::shared_ptr<bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomParamSpecOneOfSpec_ & other) const
  {
    if (this->dict_spec != other.dict_spec) {
      return false;
    }
    if (this->list_spec != other.list_spec) {
      return false;
    }
    if (this->int_spec != other.int_spec) {
      return false;
    }
    if (this->double_spec != other.double_spec) {
      return false;
    }
    if (this->string_spec != other.string_spec) {
      return false;
    }
    if (this->roi_spec != other.roi_spec) {
      return false;
    }
    if (this->bool_spec != other.bool_spec) {
      return false;
    }
    if (this->one_of_spec != other.one_of_spec) {
      return false;
    }
    if (this->spec_choice != other.spec_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomParamSpecOneOfSpec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomParamSpecOneOfSpec_

// alias to use template instance with default allocator
using CustomParamSpecOneOfSpec =
  bosdyn_msgs::msg::CustomParamSpecOneOfSpec_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamSpecOneOfSpec_<ContainerAllocator>::SPEC_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamSpecOneOfSpec_<ContainerAllocator>::SPEC_DICT_SPEC_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamSpecOneOfSpec_<ContainerAllocator>::SPEC_LIST_SPEC_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamSpecOneOfSpec_<ContainerAllocator>::SPEC_INT_SPEC_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamSpecOneOfSpec_<ContainerAllocator>::SPEC_DOUBLE_SPEC_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamSpecOneOfSpec_<ContainerAllocator>::SPEC_STRING_SPEC_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamSpecOneOfSpec_<ContainerAllocator>::SPEC_ROI_SPEC_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamSpecOneOfSpec_<ContainerAllocator>::SPEC_BOOL_SPEC_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CustomParamSpecOneOfSpec_<ContainerAllocator>::SPEC_ONE_OF_SPEC_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_SPEC_ONE_OF_SPEC__STRUCT_HPP_
