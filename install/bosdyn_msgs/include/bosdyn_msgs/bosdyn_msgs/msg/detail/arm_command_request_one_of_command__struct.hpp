// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'arm_cartesian_command'
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request__struct.hpp"
// Member 'arm_joint_move_command'
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_request__struct.hpp"
// Member 'named_arm_position_command'
#include "bosdyn_msgs/msg/detail/named_arm_positions_command_request__struct.hpp"
// Member 'arm_velocity_command'
#include "bosdyn_msgs/msg/detail/arm_velocity_command_request__struct.hpp"
// Member 'arm_gaze_command'
#include "bosdyn_msgs/msg/detail/gaze_command_request__struct.hpp"
// Member 'arm_stop_command'
#include "bosdyn_msgs/msg/detail/arm_stop_command_request__struct.hpp"
// Member 'arm_drag_command'
#include "bosdyn_msgs/msg/detail/arm_drag_command_request__struct.hpp"
// Member 'arm_impedance_command'
#include "bosdyn_msgs/msg/detail/arm_impedance_command_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmCommandRequestOneOfCommand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmCommandRequestOneOfCommand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmCommandRequestOneOfCommand_
{
  using Type = ArmCommandRequestOneOfCommand_<ContainerAllocator>;

  explicit ArmCommandRequestOneOfCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_cartesian_command(_init),
    arm_joint_move_command(_init),
    named_arm_position_command(_init),
    arm_velocity_command(_init),
    arm_gaze_command(_init),
    arm_stop_command(_init),
    arm_drag_command(_init),
    arm_impedance_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  explicit ArmCommandRequestOneOfCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_cartesian_command(_alloc, _init),
    arm_joint_move_command(_alloc, _init),
    named_arm_position_command(_alloc, _init),
    arm_velocity_command(_alloc, _init),
    arm_gaze_command(_alloc, _init),
    arm_stop_command(_alloc, _init),
    arm_drag_command(_alloc, _init),
    arm_impedance_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  // field types and members
  using _arm_cartesian_command_type =
    bosdyn_msgs::msg::ArmCartesianCommandRequest_<ContainerAllocator>;
  _arm_cartesian_command_type arm_cartesian_command;
  using _arm_joint_move_command_type =
    bosdyn_msgs::msg::ArmJointMoveCommandRequest_<ContainerAllocator>;
  _arm_joint_move_command_type arm_joint_move_command;
  using _named_arm_position_command_type =
    bosdyn_msgs::msg::NamedArmPositionsCommandRequest_<ContainerAllocator>;
  _named_arm_position_command_type named_arm_position_command;
  using _arm_velocity_command_type =
    bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator>;
  _arm_velocity_command_type arm_velocity_command;
  using _arm_gaze_command_type =
    bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator>;
  _arm_gaze_command_type arm_gaze_command;
  using _arm_stop_command_type =
    bosdyn_msgs::msg::ArmStopCommandRequest_<ContainerAllocator>;
  _arm_stop_command_type arm_stop_command;
  using _arm_drag_command_type =
    bosdyn_msgs::msg::ArmDragCommandRequest_<ContainerAllocator>;
  _arm_drag_command_type arm_drag_command;
  using _arm_impedance_command_type =
    bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator>;
  _arm_impedance_command_type arm_impedance_command;
  using _command_choice_type =
    int8_t;
  _command_choice_type command_choice;

  // setters for named parameter idiom
  Type & set__arm_cartesian_command(
    const bosdyn_msgs::msg::ArmCartesianCommandRequest_<ContainerAllocator> & _arg)
  {
    this->arm_cartesian_command = _arg;
    return *this;
  }
  Type & set__arm_joint_move_command(
    const bosdyn_msgs::msg::ArmJointMoveCommandRequest_<ContainerAllocator> & _arg)
  {
    this->arm_joint_move_command = _arg;
    return *this;
  }
  Type & set__named_arm_position_command(
    const bosdyn_msgs::msg::NamedArmPositionsCommandRequest_<ContainerAllocator> & _arg)
  {
    this->named_arm_position_command = _arg;
    return *this;
  }
  Type & set__arm_velocity_command(
    const bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator> & _arg)
  {
    this->arm_velocity_command = _arg;
    return *this;
  }
  Type & set__arm_gaze_command(
    const bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator> & _arg)
  {
    this->arm_gaze_command = _arg;
    return *this;
  }
  Type & set__arm_stop_command(
    const bosdyn_msgs::msg::ArmStopCommandRequest_<ContainerAllocator> & _arg)
  {
    this->arm_stop_command = _arg;
    return *this;
  }
  Type & set__arm_drag_command(
    const bosdyn_msgs::msg::ArmDragCommandRequest_<ContainerAllocator> & _arg)
  {
    this->arm_drag_command = _arg;
    return *this;
  }
  Type & set__arm_impedance_command(
    const bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator> & _arg)
  {
    this->arm_impedance_command = _arg;
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
  static constexpr int8_t COMMAND_ARM_CARTESIAN_COMMAND_SET =
    1;
  static constexpr int8_t COMMAND_ARM_JOINT_MOVE_COMMAND_SET =
    2;
  static constexpr int8_t COMMAND_NAMED_ARM_POSITION_COMMAND_SET =
    3;
  static constexpr int8_t COMMAND_ARM_VELOCITY_COMMAND_SET =
    4;
  static constexpr int8_t COMMAND_ARM_GAZE_COMMAND_SET =
    5;
  static constexpr int8_t COMMAND_ARM_STOP_COMMAND_SET =
    6;
  static constexpr int8_t COMMAND_ARM_DRAG_COMMAND_SET =
    7;
  static constexpr int8_t COMMAND_ARM_IMPEDANCE_COMMAND_SET =
    8;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmCommandRequestOneOfCommand_ & other) const
  {
    if (this->arm_cartesian_command != other.arm_cartesian_command) {
      return false;
    }
    if (this->arm_joint_move_command != other.arm_joint_move_command) {
      return false;
    }
    if (this->named_arm_position_command != other.named_arm_position_command) {
      return false;
    }
    if (this->arm_velocity_command != other.arm_velocity_command) {
      return false;
    }
    if (this->arm_gaze_command != other.arm_gaze_command) {
      return false;
    }
    if (this->arm_stop_command != other.arm_stop_command) {
      return false;
    }
    if (this->arm_drag_command != other.arm_drag_command) {
      return false;
    }
    if (this->arm_impedance_command != other.arm_impedance_command) {
      return false;
    }
    if (this->command_choice != other.command_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmCommandRequestOneOfCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmCommandRequestOneOfCommand_

// alias to use template instance with default allocator
using ArmCommandRequestOneOfCommand =
  bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_ARM_CARTESIAN_COMMAND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_ARM_JOINT_MOVE_COMMAND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_NAMED_ARM_POSITION_COMMAND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_ARM_VELOCITY_COMMAND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_ARM_GAZE_COMMAND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_ARM_STOP_COMMAND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_ARM_DRAG_COMMAND_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_ARM_IMPEDANCE_COMMAND_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
