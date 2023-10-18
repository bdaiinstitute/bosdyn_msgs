// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'auto_grasp_command'
#include "bosdyn_msgs/msg/detail/door_command_auto_grasp_command__struct.hpp"
// Member 'warmstart_command'
#include "bosdyn_msgs/msg/detail/door_command_warmstart_command__struct.hpp"
// Member 'auto_push_command'
#include "bosdyn_msgs/msg/detail/door_command_auto_push_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DoorCommandRequestOneOfCommand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DoorCommandRequestOneOfCommand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoorCommandRequestOneOfCommand_
{
  using Type = DoorCommandRequestOneOfCommand_<ContainerAllocator>;

  explicit DoorCommandRequestOneOfCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : auto_grasp_command(_init),
    warmstart_command(_init),
    auto_push_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  explicit DoorCommandRequestOneOfCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : auto_grasp_command(_alloc, _init),
    warmstart_command(_alloc, _init),
    auto_push_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  // field types and members
  using _auto_grasp_command_type =
    bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator>;
  _auto_grasp_command_type auto_grasp_command;
  using _warmstart_command_type =
    bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator>;
  _warmstart_command_type warmstart_command;
  using _auto_push_command_type =
    bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator>;
  _auto_push_command_type auto_push_command;
  using _command_choice_type =
    int8_t;
  _command_choice_type command_choice;

  // setters for named parameter idiom
  Type & set__auto_grasp_command(
    const bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator> & _arg)
  {
    this->auto_grasp_command = _arg;
    return *this;
  }
  Type & set__warmstart_command(
    const bosdyn_msgs::msg::DoorCommandWarmstartCommand_<ContainerAllocator> & _arg)
  {
    this->warmstart_command = _arg;
    return *this;
  }
  Type & set__auto_push_command(
    const bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator> & _arg)
  {
    this->auto_push_command = _arg;
    return *this;
  }
  Type & set__command_choice(
    const int8_t & _arg)
  {
    this->command_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t COMMAND_NOT_SET =
    0;
  static constexpr int8_t COMMAND_AUTO_GRASP_COMMAND_SET =
    1;
  static constexpr int8_t COMMAND_WARMSTART_COMMAND_SET =
    2;
  static constexpr int8_t COMMAND_AUTO_PUSH_COMMAND_SET =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DoorCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DoorCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoorCommandRequestOneOfCommand_ & other) const
  {
    if (this->auto_grasp_command != other.auto_grasp_command) {
      return false;
    }
    if (this->warmstart_command != other.warmstart_command) {
      return false;
    }
    if (this->auto_push_command != other.auto_push_command) {
      return false;
    }
    if (this->command_choice != other.command_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoorCommandRequestOneOfCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoorCommandRequestOneOfCommand_

// alias to use template instance with default allocator
using DoorCommandRequestOneOfCommand =
  bosdyn_msgs::msg::DoorCommandRequestOneOfCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DoorCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DoorCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_AUTO_GRASP_COMMAND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DoorCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_WARMSTART_COMMAND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DoorCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_AUTO_PUSH_COMMAND_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
