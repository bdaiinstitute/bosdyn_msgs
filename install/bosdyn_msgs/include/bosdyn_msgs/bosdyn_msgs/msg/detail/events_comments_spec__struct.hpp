// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EventsCommentsSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS_SPEC__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS_SPEC__STRUCT_HPP_

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
#include "bosdyn_msgs/msg/detail/event_spec__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EventsCommentsSpec __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EventsCommentsSpec __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventsCommentsSpec_
{
  using Type = EventsCommentsSpec_<ContainerAllocator>;

  explicit EventsCommentsSpec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_range_is_set = false;
      this->comments = false;
      this->max_events = 0ul;
      this->max_comments = 0ul;
    }
  }

  explicit EventsCommentsSpec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_range_is_set = false;
      this->comments = false;
      this->max_events = 0ul;
      this->max_comments = 0ul;
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
    std::vector<bosdyn_msgs::msg::EventSpec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EventSpec_<ContainerAllocator>>>;
  _events_type events;
  using _comments_type =
    bool;
  _comments_type comments;
  using _max_events_type =
    uint32_t;
  _max_events_type max_events;
  using _max_comments_type =
    uint32_t;
  _max_comments_type max_comments;

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
    const std::vector<bosdyn_msgs::msg::EventSpec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EventSpec_<ContainerAllocator>>> & _arg)
  {
    this->events = _arg;
    return *this;
  }
  Type & set__comments(
    const bool & _arg)
  {
    this->comments = _arg;
    return *this;
  }
  Type & set__max_events(
    const uint32_t & _arg)
  {
    this->max_events = _arg;
    return *this;
  }
  Type & set__max_comments(
    const uint32_t & _arg)
  {
    this->max_comments = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EventsCommentsSpec
    std::shared_ptr<bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EventsCommentsSpec
    std::shared_ptr<bosdyn_msgs::msg::EventsCommentsSpec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventsCommentsSpec_ & other) const
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
    if (this->comments != other.comments) {
      return false;
    }
    if (this->max_events != other.max_events) {
      return false;
    }
    if (this->max_comments != other.max_comments) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventsCommentsSpec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventsCommentsSpec_

// alias to use template instance with default allocator
using EventsCommentsSpec =
  bosdyn_msgs::msg::EventsCommentsSpec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS_SPEC__STRUCT_HPP_
