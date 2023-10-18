// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EventSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENT_SPEC__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EVENT_SPEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'log_preserve_hint'
#include "bosdyn_msgs/msg/detail/event_log_preserve_hint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EventSpec __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EventSpec __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventSpec_
{
  using Type = EventSpec_<ContainerAllocator>;

  explicit EventSpec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : log_preserve_hint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->type = "";
      this->level = 0l;
      this->level_is_set = false;
    }
  }

  explicit EventSpec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc),
    type(_alloc),
    log_preserve_hint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->type = "";
      this->level = 0l;
      this->level_is_set = false;
    }
  }

  // field types and members
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _level_type =
    int32_t;
  _level_type level;
  using _level_is_set_type =
    bool;
  _level_is_set_type level_is_set;
  using _log_preserve_hint_type =
    bosdyn_msgs::msg::EventLogPreserveHint_<ContainerAllocator>;
  _log_preserve_hint_type log_preserve_hint;

  // setters for named parameter idiom
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__level(
    const int32_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__level_is_set(
    const bool & _arg)
  {
    this->level_is_set = _arg;
    return *this;
  }
  Type & set__log_preserve_hint(
    const bosdyn_msgs::msg::EventLogPreserveHint_<ContainerAllocator> & _arg)
  {
    this->log_preserve_hint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EventSpec_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EventSpec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EventSpec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EventSpec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EventSpec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EventSpec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EventSpec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EventSpec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EventSpec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EventSpec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EventSpec
    std::shared_ptr<bosdyn_msgs::msg::EventSpec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EventSpec
    std::shared_ptr<bosdyn_msgs::msg::EventSpec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventSpec_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->level_is_set != other.level_is_set) {
      return false;
    }
    if (this->log_preserve_hint != other.log_preserve_hint) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventSpec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventSpec_

// alias to use template instance with default allocator
using EventSpec =
  bosdyn_msgs::msg::EventSpec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENT_SPEC__STRUCT_HPP_
