// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GripperCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'claw_gripper_command'
#include "bosdyn_msgs/msg/detail/claw_gripper_command_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GripperCommandRequestOneOfCommand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GripperCommandRequestOneOfCommand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperCommandRequestOneOfCommand_
{
  using Type = GripperCommandRequestOneOfCommand_<ContainerAllocator>;

  explicit GripperCommandRequestOneOfCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : claw_gripper_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  explicit GripperCommandRequestOneOfCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : claw_gripper_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  // field types and members
  using _claw_gripper_command_type =
    bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator>;
  _claw_gripper_command_type claw_gripper_command;
  using _command_choice_type =
    int8_t;
  _command_choice_type command_choice;

  // setters for named parameter idiom
  Type & set__claw_gripper_command(
    const bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator> & _arg)
  {
    this->claw_gripper_command = _arg;
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
  static constexpr int8_t COMMAND_CLAW_GRIPPER_COMMAND_SET =
    1;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GripperCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GripperCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCommandRequestOneOfCommand_ & other) const
  {
    if (this->claw_gripper_command != other.claw_gripper_command) {
      return false;
    }
    if (this->command_choice != other.command_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCommandRequestOneOfCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCommandRequestOneOfCommand_

// alias to use template instance with default allocator
using GripperCommandRequestOneOfCommand =
  bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t GripperCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t GripperCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_CLAW_GRIPPER_COMMAND_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
