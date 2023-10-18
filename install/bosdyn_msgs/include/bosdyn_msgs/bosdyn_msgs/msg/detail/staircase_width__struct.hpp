// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StaircaseWidth.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WIDTH__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WIDTH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bounded_width'
#include "bosdyn_msgs/msg/detail/staircase_width_bounded_width__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StaircaseWidth __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StaircaseWidth __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaircaseWidth_
{
  using Type = StaircaseWidth_<ContainerAllocator>;

  explicit StaircaseWidth_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bounded_width(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
    }
  }

  explicit StaircaseWidth_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bounded_width(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
    }
  }

  // field types and members
  using _width_type =
    double;
  _width_type width;
  using _bounded_width_type =
    bosdyn_msgs::msg::StaircaseWidthBoundedWidth_<ContainerAllocator>;
  _bounded_width_type bounded_width;

  // setters for named parameter idiom
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__bounded_width(
    const bosdyn_msgs::msg::StaircaseWidthBoundedWidth_<ContainerAllocator> & _arg)
  {
    this->bounded_width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StaircaseWidth
    std::shared_ptr<bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StaircaseWidth
    std::shared_ptr<bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaircaseWidth_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->bounded_width != other.bounded_width) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaircaseWidth_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaircaseWidth_

// alias to use template instance with default allocator
using StaircaseWidth =
  bosdyn_msgs::msg::StaircaseWidth_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WIDTH__STRUCT_HPP_
