// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Value.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VALUE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'source'
#include "bosdyn_msgs/msg/detail/value_one_of_source__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Value __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Value __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Value_
{
  using Type = Value_<ContainerAllocator>;

  explicit Value_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_init)
  {
    (void)_init;
  }

  explicit Value_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _source_type =
    bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator>;
  _source_type source;

  // setters for named parameter idiom
  Type & set__source(
    const bosdyn_msgs::msg::ValueOneOfSource_<ContainerAllocator> & _arg)
  {
    this->source = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Value_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Value_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Value_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Value_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Value_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Value_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Value_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Value_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Value_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Value_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Value
    std::shared_ptr<bosdyn_msgs::msg::Value_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Value
    std::shared_ptr<bosdyn_msgs::msg::Value_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Value_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const Value_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Value_

// alias to use template instance with default allocator
using Value =
  bosdyn_msgs::msg::Value_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VALUE__STRUCT_HPP_
