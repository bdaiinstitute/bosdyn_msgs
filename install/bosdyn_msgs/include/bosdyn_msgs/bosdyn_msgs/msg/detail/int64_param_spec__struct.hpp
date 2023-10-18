// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Int64ParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INT64_PARAM_SPEC__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INT64_PARAM_SPEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'units'
#include "bosdyn_msgs/msg/detail/units__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Int64ParamSpec __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Int64ParamSpec __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Int64ParamSpec_
{
  using Type = Int64ParamSpec_<ContainerAllocator>;

  explicit Int64ParamSpec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : units(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_value = 0ll;
      this->default_value_is_set = false;
      this->units_is_set = false;
      this->min_value = 0ll;
      this->min_value_is_set = false;
      this->max_value = 0ll;
      this->max_value_is_set = false;
    }
  }

  explicit Int64ParamSpec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : units(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_value = 0ll;
      this->default_value_is_set = false;
      this->units_is_set = false;
      this->min_value = 0ll;
      this->min_value_is_set = false;
      this->max_value = 0ll;
      this->max_value_is_set = false;
    }
  }

  // field types and members
  using _default_value_type =
    int64_t;
  _default_value_type default_value;
  using _default_value_is_set_type =
    bool;
  _default_value_is_set_type default_value_is_set;
  using _units_type =
    bosdyn_msgs::msg::Units_<ContainerAllocator>;
  _units_type units;
  using _units_is_set_type =
    bool;
  _units_is_set_type units_is_set;
  using _min_value_type =
    int64_t;
  _min_value_type min_value;
  using _min_value_is_set_type =
    bool;
  _min_value_is_set_type min_value_is_set;
  using _max_value_type =
    int64_t;
  _max_value_type max_value;
  using _max_value_is_set_type =
    bool;
  _max_value_is_set_type max_value_is_set;

  // setters for named parameter idiom
  Type & set__default_value(
    const int64_t & _arg)
  {
    this->default_value = _arg;
    return *this;
  }
  Type & set__default_value_is_set(
    const bool & _arg)
  {
    this->default_value_is_set = _arg;
    return *this;
  }
  Type & set__units(
    const bosdyn_msgs::msg::Units_<ContainerAllocator> & _arg)
  {
    this->units = _arg;
    return *this;
  }
  Type & set__units_is_set(
    const bool & _arg)
  {
    this->units_is_set = _arg;
    return *this;
  }
  Type & set__min_value(
    const int64_t & _arg)
  {
    this->min_value = _arg;
    return *this;
  }
  Type & set__min_value_is_set(
    const bool & _arg)
  {
    this->min_value_is_set = _arg;
    return *this;
  }
  Type & set__max_value(
    const int64_t & _arg)
  {
    this->max_value = _arg;
    return *this;
  }
  Type & set__max_value_is_set(
    const bool & _arg)
  {
    this->max_value_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Int64ParamSpec
    std::shared_ptr<bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Int64ParamSpec
    std::shared_ptr<bosdyn_msgs::msg::Int64ParamSpec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Int64ParamSpec_ & other) const
  {
    if (this->default_value != other.default_value) {
      return false;
    }
    if (this->default_value_is_set != other.default_value_is_set) {
      return false;
    }
    if (this->units != other.units) {
      return false;
    }
    if (this->units_is_set != other.units_is_set) {
      return false;
    }
    if (this->min_value != other.min_value) {
      return false;
    }
    if (this->min_value_is_set != other.min_value_is_set) {
      return false;
    }
    if (this->max_value != other.max_value) {
      return false;
    }
    if (this->max_value_is_set != other.max_value_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Int64ParamSpec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Int64ParamSpec_

// alias to use template instance with default allocator
using Int64ParamSpec =
  bosdyn_msgs::msg::Int64ParamSpec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INT64_PARAM_SPEC__STRUCT_HPP_
