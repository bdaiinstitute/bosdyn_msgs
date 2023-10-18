// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SafePowerOffCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'unsafe_action'
#include "bosdyn_msgs/msg/detail/safe_power_off_command_request_unsafe_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SafePowerOffCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SafePowerOffCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafePowerOffCommandRequest_
{
  using Type = SafePowerOffCommandRequest_<ContainerAllocator>;

  explicit SafePowerOffCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unsafe_action(_init)
  {
    (void)_init;
  }

  explicit SafePowerOffCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unsafe_action(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _unsafe_action_type =
    bosdyn_msgs::msg::SafePowerOffCommandRequestUnsafeAction_<ContainerAllocator>;
  _unsafe_action_type unsafe_action;

  // setters for named parameter idiom
  Type & set__unsafe_action(
    const bosdyn_msgs::msg::SafePowerOffCommandRequestUnsafeAction_<ContainerAllocator> & _arg)
  {
    this->unsafe_action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SafePowerOffCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SafePowerOffCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafePowerOffCommandRequest_ & other) const
  {
    if (this->unsafe_action != other.unsafe_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafePowerOffCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafePowerOffCommandRequest_

// alias to use template instance with default allocator
using SafePowerOffCommandRequest =
  bosdyn_msgs::msg::SafePowerOffCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_REQUEST__STRUCT_HPP_
