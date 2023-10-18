// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CustomParam.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'value'
#include "bosdyn_msgs/msg/detail/custom_param_one_of_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CustomParam __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CustomParam __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomParam_
{
  using Type = CustomParam_<ContainerAllocator>;

  explicit CustomParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_init)
  {
    (void)_init;
  }

  explicit CustomParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _value_type =
    bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const bosdyn_msgs::msg::CustomParamOneOfValue_<ContainerAllocator> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CustomParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CustomParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CustomParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CustomParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CustomParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CustomParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CustomParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CustomParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CustomParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CustomParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CustomParam
    std::shared_ptr<bosdyn_msgs::msg::CustomParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CustomParam
    std::shared_ptr<bosdyn_msgs::msg::CustomParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomParam_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomParam_

// alias to use template instance with default allocator
using CustomParam =
  bosdyn_msgs::msg::CustomParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM__STRUCT_HPP_
