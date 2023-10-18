// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RobotCommandOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_ONE_OF_COMMAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_ONE_OF_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'full_body_command'
#include "bosdyn_msgs/msg/detail/full_body_command_request__struct.hpp"
// Member 'synchronized_command'
#include "bosdyn_msgs/msg/detail/synchronized_command_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RobotCommandOneOfCommand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RobotCommandOneOfCommand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCommandOneOfCommand_
{
  using Type = RobotCommandOneOfCommand_<ContainerAllocator>;

  explicit RobotCommandOneOfCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : full_body_command(_init),
    synchronized_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  explicit RobotCommandOneOfCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : full_body_command(_alloc, _init),
    synchronized_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  // field types and members
  using _full_body_command_type =
    bosdyn_msgs::msg::FullBodyCommandRequest_<ContainerAllocator>;
  _full_body_command_type full_body_command;
  using _synchronized_command_type =
    bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator>;
  _synchronized_command_type synchronized_command;
  using _command_choice_type =
    int8_t;
  _command_choice_type command_choice;

  // setters for named parameter idiom
  Type & set__full_body_command(
    const bosdyn_msgs::msg::FullBodyCommandRequest_<ContainerAllocator> & _arg)
  {
    this->full_body_command = _arg;
    return *this;
  }
  Type & set__synchronized_command(
    const bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator> & _arg)
  {
    this->synchronized_command = _arg;
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
  static constexpr int8_t COMMAND_FULL_BODY_COMMAND_SET =
    1;
  static constexpr int8_t COMMAND_SYNCHRONIZED_COMMAND_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RobotCommandOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RobotCommandOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::RobotCommandOneOfCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommandOneOfCommand_ & other) const
  {
    if (this->full_body_command != other.full_body_command) {
      return false;
    }
    if (this->synchronized_command != other.synchronized_command) {
      return false;
    }
    if (this->command_choice != other.command_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommandOneOfCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommandOneOfCommand_

// alias to use template instance with default allocator
using RobotCommandOneOfCommand =
  bosdyn_msgs::msg::RobotCommandOneOfCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotCommandOneOfCommand_<ContainerAllocator>::COMMAND_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotCommandOneOfCommand_<ContainerAllocator>::COMMAND_FULL_BODY_COMMAND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotCommandOneOfCommand_<ContainerAllocator>::COMMAND_SYNCHRONIZED_COMMAND_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_ONE_OF_COMMAND__STRUCT_HPP_
