// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EventsComments.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_range'
#include "bosdyn_msgs/msg/detail/time_range__struct.hpp"
// Member 'events'
#include "bosdyn_msgs/msg/detail/event__struct.hpp"
// Member 'operator_comments'
#include "bosdyn_msgs/msg/detail/operator_comment__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EventsComments __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EventsComments __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventsComments_
{
  using Type = EventsComments_<ContainerAllocator>;

  explicit EventsComments_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_range_is_set = false;
      this->events_limited = false;
      this->operator_comments_limited = false;
    }
  }

  explicit EventsComments_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_range_is_set = false;
      this->events_limited = false;
      this->operator_comments_limited = false;
    }
  }

  // field types and members
  using _time_range_type =
    bosdyn_msgs::msg::TimeRange_<ContainerAllocator>;
  _time_range_type time_range;
  using _time_range_is_set_type =
    bool;
  _time_range_is_set_type time_range_is_set;
  using _events_type =
    std::vector<bosdyn_msgs::msg::Event_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Event_<ContainerAllocator>>>;
  _events_type events;
  using _operator_comments_type =
    std::vector<bosdyn_msgs::msg::OperatorComment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::OperatorComment_<ContainerAllocator>>>;
  _operator_comments_type operator_comments;
  using _events_limited_type =
    bool;
  _events_limited_type events_limited;
  using _operator_comments_limited_type =
    bool;
  _operator_comments_limited_type operator_comments_limited;

  // setters for named parameter idiom
  Type & set__time_range(
    const bosdyn_msgs::msg::TimeRange_<ContainerAllocator> & _arg)
  {
    this->time_range = _arg;
    return *this;
  }
  Type & set__time_range_is_set(
    const bool & _arg)
  {
    this->time_range_is_set = _arg;
    return *this;
  }
  Type & set__events(
    const std::vector<bosdyn_msgs::msg::Event_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Event_<ContainerAllocator>>> & _arg)
  {
    this->events = _arg;
    return *this;
  }
  Type & set__operator_comments(
    const std::vector<bosdyn_msgs::msg::OperatorComment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::OperatorComment_<ContainerAllocator>>> & _arg)
  {
    this->operator_comments = _arg;
    return *this;
  }
  Type & set__events_limited(
    const bool & _arg)
  {
    this->events_limited = _arg;
    return *this;
  }
  Type & set__operator_comments_limited(
    const bool & _arg)
  {
    this->operator_comments_limited = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EventsComments_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EventsComments_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EventsComments_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EventsComments_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EventsComments_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EventsComments_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EventsComments_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EventsComments_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EventsComments_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EventsComments_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EventsComments
    std::shared_ptr<bosdyn_msgs::msg::EventsComments_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EventsComments
    std::shared_ptr<bosdyn_msgs::msg::EventsComments_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventsComments_ & other) const
  {
    if (this->time_range != other.time_range) {
      return false;
    }
    if (this->time_range_is_set != other.time_range_is_set) {
      return false;
    }
    if (this->events != other.events) {
      return false;
    }
    if (this->operator_comments != other.operator_comments) {
      return false;
    }
    if (this->events_limited != other.events_limited) {
      return false;
    }
    if (this->operator_comments_limited != other.operator_comments_limited) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventsComments_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventsComments_

// alias to use template instance with default allocator
using EventsComments =
  bosdyn_msgs::msg::EventsComments_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS__STRUCT_HPP_
