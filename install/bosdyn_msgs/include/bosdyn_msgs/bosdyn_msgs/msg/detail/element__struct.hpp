// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Element.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ELEMENT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ELEMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
#include "bosdyn_msgs/msg/detail/target__struct.hpp"
// Member 'target_failure_behavior'
// Member 'action_failure_behavior'
#include "bosdyn_msgs/msg/detail/failure_behavior__struct.hpp"
// Member 'action'
#include "bosdyn_msgs/msg/detail/action__struct.hpp"
// Member 'action_wrapper'
#include "bosdyn_msgs/msg/detail/action_wrapper__struct.hpp"
// Member 'battery_monitor'
#include "bosdyn_msgs/msg/detail/battery_monitor__struct.hpp"
// Member 'action_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Element __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Element __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Element_
{
  using Type = Element_<ContainerAllocator>;

  explicit Element_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init),
    target_failure_behavior(_init),
    action(_init),
    action_wrapper(_init),
    action_failure_behavior(_init),
    battery_monitor(_init),
    action_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->target_is_set = false;
      this->target_failure_behavior_is_set = false;
      this->action_is_set = false;
      this->action_wrapper_is_set = false;
      this->action_failure_behavior_is_set = false;
      this->is_skipped = false;
      this->battery_monitor_is_set = false;
      this->action_duration_is_set = false;
      this->id = "";
    }
  }

  explicit Element_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    target(_alloc, _init),
    target_failure_behavior(_alloc, _init),
    action(_alloc, _init),
    action_wrapper(_alloc, _init),
    action_failure_behavior(_alloc, _init),
    battery_monitor(_alloc, _init),
    action_duration(_alloc, _init),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->target_is_set = false;
      this->target_failure_behavior_is_set = false;
      this->action_is_set = false;
      this->action_wrapper_is_set = false;
      this->action_failure_behavior_is_set = false;
      this->is_skipped = false;
      this->battery_monitor_is_set = false;
      this->action_duration_is_set = false;
      this->id = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _target_type =
    bosdyn_msgs::msg::Target_<ContainerAllocator>;
  _target_type target;
  using _target_is_set_type =
    bool;
  _target_is_set_type target_is_set;
  using _target_failure_behavior_type =
    bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator>;
  _target_failure_behavior_type target_failure_behavior;
  using _target_failure_behavior_is_set_type =
    bool;
  _target_failure_behavior_is_set_type target_failure_behavior_is_set;
  using _action_type =
    bosdyn_msgs::msg::Action_<ContainerAllocator>;
  _action_type action;
  using _action_is_set_type =
    bool;
  _action_is_set_type action_is_set;
  using _action_wrapper_type =
    bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator>;
  _action_wrapper_type action_wrapper;
  using _action_wrapper_is_set_type =
    bool;
  _action_wrapper_is_set_type action_wrapper_is_set;
  using _action_failure_behavior_type =
    bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator>;
  _action_failure_behavior_type action_failure_behavior;
  using _action_failure_behavior_is_set_type =
    bool;
  _action_failure_behavior_is_set_type action_failure_behavior_is_set;
  using _is_skipped_type =
    bool;
  _is_skipped_type is_skipped;
  using _battery_monitor_type =
    bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator>;
  _battery_monitor_type battery_monitor;
  using _battery_monitor_is_set_type =
    bool;
  _battery_monitor_is_set_type battery_monitor_is_set;
  using _action_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _action_duration_type action_duration;
  using _action_duration_is_set_type =
    bool;
  _action_duration_is_set_type action_duration_is_set;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__target(
    const bosdyn_msgs::msg::Target_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__target_is_set(
    const bool & _arg)
  {
    this->target_is_set = _arg;
    return *this;
  }
  Type & set__target_failure_behavior(
    const bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator> & _arg)
  {
    this->target_failure_behavior = _arg;
    return *this;
  }
  Type & set__target_failure_behavior_is_set(
    const bool & _arg)
  {
    this->target_failure_behavior_is_set = _arg;
    return *this;
  }
  Type & set__action(
    const bosdyn_msgs::msg::Action_<ContainerAllocator> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__action_is_set(
    const bool & _arg)
  {
    this->action_is_set = _arg;
    return *this;
  }
  Type & set__action_wrapper(
    const bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator> & _arg)
  {
    this->action_wrapper = _arg;
    return *this;
  }
  Type & set__action_wrapper_is_set(
    const bool & _arg)
  {
    this->action_wrapper_is_set = _arg;
    return *this;
  }
  Type & set__action_failure_behavior(
    const bosdyn_msgs::msg::FailureBehavior_<ContainerAllocator> & _arg)
  {
    this->action_failure_behavior = _arg;
    return *this;
  }
  Type & set__action_failure_behavior_is_set(
    const bool & _arg)
  {
    this->action_failure_behavior_is_set = _arg;
    return *this;
  }
  Type & set__is_skipped(
    const bool & _arg)
  {
    this->is_skipped = _arg;
    return *this;
  }
  Type & set__battery_monitor(
    const bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator> & _arg)
  {
    this->battery_monitor = _arg;
    return *this;
  }
  Type & set__battery_monitor_is_set(
    const bool & _arg)
  {
    this->battery_monitor_is_set = _arg;
    return *this;
  }
  Type & set__action_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->action_duration = _arg;
    return *this;
  }
  Type & set__action_duration_is_set(
    const bool & _arg)
  {
    this->action_duration_is_set = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Element_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Element_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Element_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Element_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Element_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Element_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Element_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Element_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Element_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Element_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Element
    std::shared_ptr<bosdyn_msgs::msg::Element_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Element
    std::shared_ptr<bosdyn_msgs::msg::Element_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Element_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->target_is_set != other.target_is_set) {
      return false;
    }
    if (this->target_failure_behavior != other.target_failure_behavior) {
      return false;
    }
    if (this->target_failure_behavior_is_set != other.target_failure_behavior_is_set) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->action_is_set != other.action_is_set) {
      return false;
    }
    if (this->action_wrapper != other.action_wrapper) {
      return false;
    }
    if (this->action_wrapper_is_set != other.action_wrapper_is_set) {
      return false;
    }
    if (this->action_failure_behavior != other.action_failure_behavior) {
      return false;
    }
    if (this->action_failure_behavior_is_set != other.action_failure_behavior_is_set) {
      return false;
    }
    if (this->is_skipped != other.is_skipped) {
      return false;
    }
    if (this->battery_monitor != other.battery_monitor) {
      return false;
    }
    if (this->battery_monitor_is_set != other.battery_monitor_is_set) {
      return false;
    }
    if (this->action_duration != other.action_duration) {
      return false;
    }
    if (this->action_duration_is_set != other.action_duration_is_set) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Element_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Element_

// alias to use template instance with default allocator
using Element =
  bosdyn_msgs::msg::Element_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ELEMENT__STRUCT_HPP_
