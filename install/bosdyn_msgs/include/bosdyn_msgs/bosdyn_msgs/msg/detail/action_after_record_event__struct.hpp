// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionAfterRecordEvent.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_RECORD_EVENT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_RECORD_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'events'
#include "bosdyn_msgs/msg/detail/event__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionAfterRecordEvent __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionAfterRecordEvent __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionAfterRecordEvent_
{
  using Type = ActionAfterRecordEvent_<ContainerAllocator>;

  explicit ActionAfterRecordEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ActionAfterRecordEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _events_type =
    std::vector<bosdyn_msgs::msg::Event_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Event_<ContainerAllocator>>>;
  _events_type events;

  // setters for named parameter idiom
  Type & set__events(
    const std::vector<bosdyn_msgs::msg::Event_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Event_<ContainerAllocator>>> & _arg)
  {
    this->events = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionAfterRecordEvent
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionAfterRecordEvent
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterRecordEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionAfterRecordEvent_ & other) const
  {
    if (this->events != other.events) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionAfterRecordEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionAfterRecordEvent_

// alias to use template instance with default allocator
using ActionAfterRecordEvent =
  bosdyn_msgs::msg::ActionAfterRecordEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_RECORD_EVENT__STRUCT_HPP_
