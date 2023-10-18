// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'arm_cartesian_feedback'
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_feedback__struct.hpp"
// Member 'arm_joint_move_feedback'
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback__struct.hpp"
// Member 'named_arm_position_feedback'
#include "bosdyn_msgs/msg/detail/named_arm_positions_command_feedback__struct.hpp"
// Member 'arm_velocity_feedback'
#include "bosdyn_msgs/msg/detail/arm_velocity_command_feedback__struct.hpp"
// Member 'arm_gaze_feedback'
#include "bosdyn_msgs/msg/detail/gaze_command_feedback__struct.hpp"
// Member 'arm_stop_feedback'
#include "bosdyn_msgs/msg/detail/arm_stop_command_feedback__struct.hpp"
// Member 'arm_drag_feedback'
#include "bosdyn_msgs/msg/detail/arm_drag_command_feedback__struct.hpp"
// Member 'arm_impedance_feedback'
#include "bosdyn_msgs/msg/detail/arm_impedance_command_feedback__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmCommandFeedbackOneOfFeedback_
{
  using Type = ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>;

  explicit ArmCommandFeedbackOneOfFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_cartesian_feedback(_init),
    arm_joint_move_feedback(_init),
    named_arm_position_feedback(_init),
    arm_velocity_feedback(_init),
    arm_gaze_feedback(_init),
    arm_stop_feedback(_init),
    arm_drag_feedback(_init),
    arm_impedance_feedback(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_choice = 0;
    }
  }

  explicit ArmCommandFeedbackOneOfFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_cartesian_feedback(_alloc, _init),
    arm_joint_move_feedback(_alloc, _init),
    named_arm_position_feedback(_alloc, _init),
    arm_velocity_feedback(_alloc, _init),
    arm_gaze_feedback(_alloc, _init),
    arm_stop_feedback(_alloc, _init),
    arm_drag_feedback(_alloc, _init),
    arm_impedance_feedback(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_choice = 0;
    }
  }

  // field types and members
  using _arm_cartesian_feedback_type =
    bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator>;
  _arm_cartesian_feedback_type arm_cartesian_feedback;
  using _arm_joint_move_feedback_type =
    bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator>;
  _arm_joint_move_feedback_type arm_joint_move_feedback;
  using _named_arm_position_feedback_type =
    bosdyn_msgs::msg::NamedArmPositionsCommandFeedback_<ContainerAllocator>;
  _named_arm_position_feedback_type named_arm_position_feedback;
  using _arm_velocity_feedback_type =
    bosdyn_msgs::msg::ArmVelocityCommandFeedback_<ContainerAllocator>;
  _arm_velocity_feedback_type arm_velocity_feedback;
  using _arm_gaze_feedback_type =
    bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator>;
  _arm_gaze_feedback_type arm_gaze_feedback;
  using _arm_stop_feedback_type =
    bosdyn_msgs::msg::ArmStopCommandFeedback_<ContainerAllocator>;
  _arm_stop_feedback_type arm_stop_feedback;
  using _arm_drag_feedback_type =
    bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator>;
  _arm_drag_feedback_type arm_drag_feedback;
  using _arm_impedance_feedback_type =
    bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator>;
  _arm_impedance_feedback_type arm_impedance_feedback;
  using _feedback_choice_type =
    int8_t;
  _feedback_choice_type feedback_choice;

  // setters for named parameter idiom
  Type & set__arm_cartesian_feedback(
    const bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->arm_cartesian_feedback = _arg;
    return *this;
  }
  Type & set__arm_joint_move_feedback(
    const bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->arm_joint_move_feedback = _arg;
    return *this;
  }
  Type & set__named_arm_position_feedback(
    const bosdyn_msgs::msg::NamedArmPositionsCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->named_arm_position_feedback = _arg;
    return *this;
  }
  Type & set__arm_velocity_feedback(
    const bosdyn_msgs::msg::ArmVelocityCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->arm_velocity_feedback = _arg;
    return *this;
  }
  Type & set__arm_gaze_feedback(
    const bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->arm_gaze_feedback = _arg;
    return *this;
  }
  Type & set__arm_stop_feedback(
    const bosdyn_msgs::msg::ArmStopCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->arm_stop_feedback = _arg;
    return *this;
  }
  Type & set__arm_drag_feedback(
    const bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->arm_drag_feedback = _arg;
    return *this;
  }
  Type & set__arm_impedance_feedback(
    const bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->arm_impedance_feedback = _arg;
    return *this;
  }
  Type & set__feedback_choice(
    const int8_t & _arg)
  {
    this->feedback_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t FEEDBACK_NOT_SET =
    0;
  static constexpr int8_t FEEDBACK_ARM_CARTESIAN_FEEDBACK_SET =
    1;
  static constexpr int8_t FEEDBACK_ARM_JOINT_MOVE_FEEDBACK_SET =
    2;
  static constexpr int8_t FEEDBACK_NAMED_ARM_POSITION_FEEDBACK_SET =
    3;
  static constexpr int8_t FEEDBACK_ARM_VELOCITY_FEEDBACK_SET =
    4;
  static constexpr int8_t FEEDBACK_ARM_GAZE_FEEDBACK_SET =
    5;
  static constexpr int8_t FEEDBACK_ARM_STOP_FEEDBACK_SET =
    6;
  static constexpr int8_t FEEDBACK_ARM_DRAG_FEEDBACK_SET =
    7;
  static constexpr int8_t FEEDBACK_ARM_IMPEDANCE_FEEDBACK_SET =
    8;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmCommandFeedbackOneOfFeedback_ & other) const
  {
    if (this->arm_cartesian_feedback != other.arm_cartesian_feedback) {
      return false;
    }
    if (this->arm_joint_move_feedback != other.arm_joint_move_feedback) {
      return false;
    }
    if (this->named_arm_position_feedback != other.named_arm_position_feedback) {
      return false;
    }
    if (this->arm_velocity_feedback != other.arm_velocity_feedback) {
      return false;
    }
    if (this->arm_gaze_feedback != other.arm_gaze_feedback) {
      return false;
    }
    if (this->arm_stop_feedback != other.arm_stop_feedback) {
      return false;
    }
    if (this->arm_drag_feedback != other.arm_drag_feedback) {
      return false;
    }
    if (this->arm_impedance_feedback != other.arm_impedance_feedback) {
      return false;
    }
    if (this->feedback_choice != other.feedback_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmCommandFeedbackOneOfFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmCommandFeedbackOneOfFeedback_

// alias to use template instance with default allocator
using ArmCommandFeedbackOneOfFeedback =
  bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_ARM_CARTESIAN_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_ARM_JOINT_MOVE_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_NAMED_ARM_POSITION_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_ARM_VELOCITY_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_ARM_GAZE_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_ARM_STOP_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_ARM_DRAG_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_ARM_IMPEDANCE_FEEDBACK_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_HPP_
