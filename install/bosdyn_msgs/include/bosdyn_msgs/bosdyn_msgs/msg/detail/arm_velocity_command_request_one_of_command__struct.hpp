// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cylindrical_velocity'
#include "bosdyn_msgs/msg/detail/arm_velocity_command_cylindrical_velocity__struct.hpp"
// Member 'cartesian_velocity'
#include "bosdyn_msgs/msg/detail/arm_velocity_command_cartesian_velocity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandRequestOneOfCommand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandRequestOneOfCommand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmVelocityCommandRequestOneOfCommand_
{
  using Type = ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>;

  explicit ArmVelocityCommandRequestOneOfCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cylindrical_velocity(_init),
    cartesian_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  explicit ArmVelocityCommandRequestOneOfCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cylindrical_velocity(_alloc, _init),
    cartesian_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  // field types and members
  using _cylindrical_velocity_type =
    bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator>;
  _cylindrical_velocity_type cylindrical_velocity;
  using _cartesian_velocity_type =
    bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator>;
  _cartesian_velocity_type cartesian_velocity;
  using _command_choice_type =
    int8_t;
  _command_choice_type command_choice;

  // setters for named parameter idiom
  Type & set__cylindrical_velocity(
    const bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator> & _arg)
  {
    this->cylindrical_velocity = _arg;
    return *this;
  }
  Type & set__cartesian_velocity(
    const bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator> & _arg)
  {
    this->cartesian_velocity = _arg;
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
  static constexpr int8_t COMMAND_CYLINDRICAL_VELOCITY_SET =
    1;
  static constexpr int8_t COMMAND_CARTESIAN_VELOCITY_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVelocityCommandRequestOneOfCommand_ & other) const
  {
    if (this->cylindrical_velocity != other.cylindrical_velocity) {
      return false;
    }
    if (this->cartesian_velocity != other.cartesian_velocity) {
      return false;
    }
    if (this->command_choice != other.command_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVelocityCommandRequestOneOfCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVelocityCommandRequestOneOfCommand_

// alias to use template instance with default allocator
using ArmVelocityCommandRequestOneOfCommand =
  bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_CYLINDRICAL_VELOCITY_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_CARTESIAN_VELOCITY_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
