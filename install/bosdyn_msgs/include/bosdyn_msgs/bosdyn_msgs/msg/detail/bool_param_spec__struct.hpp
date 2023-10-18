// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BoolParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOOL_PARAM_SPEC__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOOL_PARAM_SPEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BoolParamSpec __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BoolParamSpec __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoolParamSpec_
{
  using Type = BoolParamSpec_<ContainerAllocator>;

  explicit BoolParamSpec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_value = false;
      this->default_value_is_set = false;
    }
  }

  explicit BoolParamSpec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_value = false;
      this->default_value_is_set = false;
    }
  }

  // field types and members
  using _default_value_type =
    bool;
  _default_value_type default_value;
  using _default_value_is_set_type =
    bool;
  _default_value_is_set_type default_value_is_set;

  // setters for named parameter idiom
  Type & set__default_value(
    const bool & _arg)
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

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BoolParamSpec
    std::shared_ptr<bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BoolParamSpec
    std::shared_ptr<bosdyn_msgs::msg::BoolParamSpec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoolParamSpec_ & other) const
  {
    if (this->default_value != other.default_value) {
      return false;
    }
    if (this->default_value_is_set != other.default_value_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoolParamSpec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoolParamSpec_

// alias to use template instance with default allocator
using BoolParamSpec =
  bosdyn_msgs::msg::BoolParamSpec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOOL_PARAM_SPEC__STRUCT_HPP_
