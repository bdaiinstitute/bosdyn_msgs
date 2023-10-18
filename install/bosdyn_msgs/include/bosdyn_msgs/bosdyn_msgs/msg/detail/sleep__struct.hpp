// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Sleep.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SLEEP__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SLEEP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Sleep __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Sleep __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sleep_
{
  using Type = Sleep_<ContainerAllocator>;

  explicit Sleep_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seconds = 0.0f;
      this->restart_after_stop = false;
    }
  }

  explicit Sleep_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seconds = 0.0f;
      this->restart_after_stop = false;
    }
  }

  // field types and members
  using _seconds_type =
    float;
  _seconds_type seconds;
  using _restart_after_stop_type =
    bool;
  _restart_after_stop_type restart_after_stop;

  // setters for named parameter idiom
  Type & set__seconds(
    const float & _arg)
  {
    this->seconds = _arg;
    return *this;
  }
  Type & set__restart_after_stop(
    const bool & _arg)
  {
    this->restart_after_stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Sleep_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Sleep_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Sleep_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Sleep_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Sleep_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Sleep_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Sleep_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Sleep_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Sleep_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Sleep_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Sleep
    std::shared_ptr<bosdyn_msgs::msg::Sleep_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Sleep
    std::shared_ptr<bosdyn_msgs::msg::Sleep_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sleep_ & other) const
  {
    if (this->seconds != other.seconds) {
      return false;
    }
    if (this->restart_after_stop != other.restart_after_stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sleep_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sleep_

// alias to use template instance with default allocator
using Sleep =
  bosdyn_msgs::msg::Sleep_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SLEEP__STRUCT_HPP_
