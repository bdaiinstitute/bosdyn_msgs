// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionAfterOneOfAction.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_ONE_OF_ACTION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_ONE_OF_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'record_event'
#include "bosdyn_msgs/msg/detail/action_after_record_event__struct.hpp"
// Member 'auto_return'
#include "bosdyn_msgs/msg/detail/action_after_auto_return__struct.hpp"
// Member 'controlled_motors_off'
#include "bosdyn_msgs/msg/detail/action_after_controlled_motors_off__struct.hpp"
// Member 'immediate_robot_off'
#include "bosdyn_msgs/msg/detail/action_after_immediate_robot_off__struct.hpp"
// Member 'lease_stale'
#include "bosdyn_msgs/msg/detail/action_after_lease_stale__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionAfterOneOfAction __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionAfterOneOfAction __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionAfterOneOfAction_
{
  using Type = ActionAfterOneOfAction_<ContainerAllocator>;

  explicit ActionAfterOneOfAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : record_event(_init),
    auto_return(_init),
    controlled_motors_off(_init),
    immediate_robot_off(_init),
    lease_stale(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_choice = 0;
    }
  }

  explicit ActionAfterOneOfAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : record_event(_alloc, _init),
    auto_return(_alloc, _init),
    controlled_motors_off(_alloc, _init),
    immediate_robot_off(_alloc, _init),
    lease_stale(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_choice = 0;
    }
  }

  // field types and members
  using _record_event_type =
    bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator>;
  _record_event_type record_event;
  using _auto_return_type =
    bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator>;
  _auto_return_type auto_return;
  using _controlled_motors_off_type =
    bosdyn_msgs::msg::ActionAfterControlledMotorsOff_<ContainerAllocator>;
  _controlled_motors_off_type controlled_motors_off;
  using _immediate_robot_off_type =
    bosdyn_msgs::msg::ActionAfterImmediateRobotOff_<ContainerAllocator>;
  _immediate_robot_off_type immediate_robot_off;
  using _lease_stale_type =
    bosdyn_msgs::msg::ActionAfterLeaseStale_<ContainerAllocator>;
  _lease_stale_type lease_stale;
  using _action_choice_type =
    int8_t;
  _action_choice_type action_choice;

  // setters for named parameter idiom
  Type & set__record_event(
    const bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator> & _arg)
  {
    this->record_event = _arg;
    return *this;
  }
  Type & set__auto_return(
    const bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator> & _arg)
  {
    this->auto_return = _arg;
    return *this;
  }
  Type & set__controlled_motors_off(
    const bosdyn_msgs::msg::ActionAfterControlledMotorsOff_<ContainerAllocator> & _arg)
  {
    this->controlled_motors_off = _arg;
    return *this;
  }
  Type & set__immediate_robot_off(
    const bosdyn_msgs::msg::ActionAfterImmediateRobotOff_<ContainerAllocator> & _arg)
  {
    this->immediate_robot_off = _arg;
    return *this;
  }
  Type & set__lease_stale(
    const bosdyn_msgs::msg::ActionAfterLeaseStale_<ContainerAllocator> & _arg)
  {
    this->lease_stale = _arg;
    return *this;
  }
  Type & set__action_choice(
    const int8_t & _arg)
  {
    this->action_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t ACTION_NOT_SET =
    0;
  static constexpr int8_t ACTION_RECORD_EVENT_SET =
    1;
  static constexpr int8_t ACTION_AUTO_RETURN_SET =
    2;
  static constexpr int8_t ACTION_CONTROLLED_MOTORS_OFF_SET =
    3;
  static constexpr int8_t ACTION_IMMEDIATE_ROBOT_OFF_SET =
    4;
  static constexpr int8_t ACTION_LEASE_STALE_SET =
    5;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionAfterOneOfAction
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionAfterOneOfAction
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterOneOfAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionAfterOneOfAction_ & other) const
  {
    if (this->record_event != other.record_event) {
      return false;
    }
    if (this->auto_return != other.auto_return) {
      return false;
    }
    if (this->controlled_motors_off != other.controlled_motors_off) {
      return false;
    }
    if (this->immediate_robot_off != other.immediate_robot_off) {
      return false;
    }
    if (this->lease_stale != other.lease_stale) {
      return false;
    }
    if (this->action_choice != other.action_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionAfterOneOfAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionAfterOneOfAction_

// alias to use template instance with default allocator
using ActionAfterOneOfAction =
  bosdyn_msgs::msg::ActionAfterOneOfAction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionAfterOneOfAction_<ContainerAllocator>::ACTION_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionAfterOneOfAction_<ContainerAllocator>::ACTION_RECORD_EVENT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionAfterOneOfAction_<ContainerAllocator>::ACTION_AUTO_RETURN_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionAfterOneOfAction_<ContainerAllocator>::ACTION_CONTROLLED_MOTORS_OFF_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionAfterOneOfAction_<ContainerAllocator>::ACTION_IMMEDIATE_ROBOT_OFF_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionAfterOneOfAction_<ContainerAllocator>::ACTION_LEASE_STALE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_ONE_OF_ACTION__STRUCT_HPP_
