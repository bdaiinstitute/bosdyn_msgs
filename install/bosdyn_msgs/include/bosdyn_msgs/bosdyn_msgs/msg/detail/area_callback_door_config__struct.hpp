// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackDoorConfig.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DOOR_CONFIG__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DOOR_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'forward_command'
// Member 'reverse_command'
#include "bosdyn_msgs/msg/detail/door_command_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AreaCallbackDoorConfig __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AreaCallbackDoorConfig __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AreaCallbackDoorConfig_
{
  using Type = AreaCallbackDoorConfig_<ContainerAllocator>;

  explicit AreaCallbackDoorConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : forward_command(_init),
    reverse_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forward_command_is_set = false;
      this->reverse_command_is_set = false;
    }
  }

  explicit AreaCallbackDoorConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : forward_command(_alloc, _init),
    reverse_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forward_command_is_set = false;
      this->reverse_command_is_set = false;
    }
  }

  // field types and members
  using _forward_command_type =
    bosdyn_msgs::msg::DoorCommandRequest_<ContainerAllocator>;
  _forward_command_type forward_command;
  using _forward_command_is_set_type =
    bool;
  _forward_command_is_set_type forward_command_is_set;
  using _reverse_command_type =
    bosdyn_msgs::msg::DoorCommandRequest_<ContainerAllocator>;
  _reverse_command_type reverse_command;
  using _reverse_command_is_set_type =
    bool;
  _reverse_command_is_set_type reverse_command_is_set;

  // setters for named parameter idiom
  Type & set__forward_command(
    const bosdyn_msgs::msg::DoorCommandRequest_<ContainerAllocator> & _arg)
  {
    this->forward_command = _arg;
    return *this;
  }
  Type & set__forward_command_is_set(
    const bool & _arg)
  {
    this->forward_command_is_set = _arg;
    return *this;
  }
  Type & set__reverse_command(
    const bosdyn_msgs::msg::DoorCommandRequest_<ContainerAllocator> & _arg)
  {
    this->reverse_command = _arg;
    return *this;
  }
  Type & set__reverse_command_is_set(
    const bool & _arg)
  {
    this->reverse_command_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AreaCallbackDoorConfig
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AreaCallbackDoorConfig
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackDoorConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AreaCallbackDoorConfig_ & other) const
  {
    if (this->forward_command != other.forward_command) {
      return false;
    }
    if (this->forward_command_is_set != other.forward_command_is_set) {
      return false;
    }
    if (this->reverse_command != other.reverse_command) {
      return false;
    }
    if (this->reverse_command_is_set != other.reverse_command_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const AreaCallbackDoorConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AreaCallbackDoorConfig_

// alias to use template instance with default allocator
using AreaCallbackDoorConfig =
  bosdyn_msgs::msg::AreaCallbackDoorConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DOOR_CONFIG__STRUCT_HPP_
