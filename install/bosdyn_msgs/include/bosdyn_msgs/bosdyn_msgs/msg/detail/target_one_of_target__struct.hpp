// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TargetOneOfTarget.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'navigate_to'
#include "bosdyn_msgs/msg/detail/target_navigate_to__struct.hpp"
// Member 'navigate_route'
#include "bosdyn_msgs/msg/detail/target_navigate_route__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TargetOneOfTarget __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TargetOneOfTarget __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetOneOfTarget_
{
  using Type = TargetOneOfTarget_<ContainerAllocator>;

  explicit TargetOneOfTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : navigate_to(_init),
    navigate_route(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_choice = 0;
    }
  }

  explicit TargetOneOfTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : navigate_to(_alloc, _init),
    navigate_route(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_choice = 0;
    }
  }

  // field types and members
  using _navigate_to_type =
    bosdyn_msgs::msg::TargetNavigateTo_<ContainerAllocator>;
  _navigate_to_type navigate_to;
  using _navigate_route_type =
    bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator>;
  _navigate_route_type navigate_route;
  using _target_choice_type =
    int8_t;
  _target_choice_type target_choice;

  // setters for named parameter idiom
  Type & set__navigate_to(
    const bosdyn_msgs::msg::TargetNavigateTo_<ContainerAllocator> & _arg)
  {
    this->navigate_to = _arg;
    return *this;
  }
  Type & set__navigate_route(
    const bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator> & _arg)
  {
    this->navigate_route = _arg;
    return *this;
  }
  Type & set__target_choice(
    const int8_t & _arg)
  {
    this->target_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TARGET_NOT_SET =
    0;
  static constexpr int8_t TARGET_NAVIGATE_TO_SET =
    1;
  static constexpr int8_t TARGET_NAVIGATE_ROUTE_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TargetOneOfTarget
    std::shared_ptr<bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TargetOneOfTarget
    std::shared_ptr<bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetOneOfTarget_ & other) const
  {
    if (this->navigate_to != other.navigate_to) {
      return false;
    }
    if (this->navigate_route != other.navigate_route) {
      return false;
    }
    if (this->target_choice != other.target_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetOneOfTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetOneOfTarget_

// alias to use template instance with default allocator
using TargetOneOfTarget =
  bosdyn_msgs::msg::TargetOneOfTarget_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TargetOneOfTarget_<ContainerAllocator>::TARGET_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TargetOneOfTarget_<ContainerAllocator>::TARGET_NAVIGATE_TO_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TargetOneOfTarget_<ContainerAllocator>::TARGET_NAVIGATE_ROUTE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET_ONE_OF_TARGET__STRUCT_HPP_
