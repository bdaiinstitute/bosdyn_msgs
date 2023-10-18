// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandWarmstartCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_WARMSTART_COMMAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_WARMSTART_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'hinge_side'
#include "bosdyn_msgs/msg/detail/door_command_hinge_side__struct.hpp"
// Member 'swing_direction'
#include "bosdyn_msgs/msg/detail/door_command_swing_direction__struct.hpp"
// Member 'handle_type'
#include "bosdyn_msgs/msg/detail/door_command_handle_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DoorCommandWarmstartCommand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DoorCommandWarmstartCommand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoorCommandWarmstartCommand_
{
  using Type = DoorCommandWarmstartCommand_<ContainerAllocator>;

  explicit DoorCommandWarmstartCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : hinge_side(_init),
    swing_direction(_init),
    handle_type(_init)
  {
    (void)_init;
  }

  explicit DoorCommandWarmstartCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : hinge_side(_alloc, _init),
    swing_direction(_alloc, _init),
    handle_type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _hinge_side_type =
    bosdyn_msgs::msg::DoorCommandHingeSide_<ContainerAllocator>;
  _hinge_side_type hinge_side;
  using _swing_direction_type =
    bosdyn_msgs::msg::DoorCommandSwingDirection_<ContainerAllocator>;
  _swing_direction_type swing_direction;
  using _handle_type_type =
    bosdyn_msgs::msg::DoorCommandHandleType_<ContainerAllocator>;
  _handle_type_type handle_type;

  // setters for named parameter idiom
  Type & set__hinge_side(
    const bosdyn_msgs::msg::DoorCommandHingeSide_<ContainerAllocator> & _arg)
  {
    this->hinge_side = _arg;
    return *this;
  }
  Type & set__swing_direction(
    const bosdyn_msgs::msg::DoorCommandSwingDirection_<ContainerAllocator> & _arg)
  {
    this->swing_direction = _arg;
    return *this;
  }
  Type & set__handle_type(
    const bosdyn_msgs::msg::DoorCommandHandleType_<ContainerAllocator> & _arg)
  {
    this->handle_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DoorCommandWarmstartCommand
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DoorCommandWarmstartCommand
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoorCommandWarmstartCommand_ & other) const
  {
    if (this->hinge_side != other.hinge_side) {
      return false;
    }
    if (this->swing_direction != other.swing_direction) {
      return false;
    }
    if (this->handle_type != other.handle_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoorCommandWarmstartCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoorCommandWarmstartCommand_

// alias to use template instance with default allocator
using DoorCommandWarmstartCommand =
  bosdyn_msgs::msg::DoorCommandWarmstartCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_WARMSTART_COMMAND__STRUCT_HPP_
