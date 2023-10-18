// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequestOneOfTaskTargetPosition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_TARGET_POSITION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_TARGET_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_
{
  using Type = ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>;

  explicit ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_linear_position = 0.0;
      this->target_angle = 0.0;
      this->task_target_position_choice = 0;
    }
  }

  explicit ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_linear_position = 0.0;
      this->target_angle = 0.0;
      this->task_target_position_choice = 0;
    }
  }

  // field types and members
  using _target_linear_position_type =
    double;
  _target_linear_position_type target_linear_position;
  using _target_angle_type =
    double;
  _target_angle_type target_angle;
  using _task_target_position_choice_type =
    int8_t;
  _task_target_position_choice_type task_target_position_choice;

  // setters for named parameter idiom
  Type & set__target_linear_position(
    const double & _arg)
  {
    this->target_linear_position = _arg;
    return *this;
  }
  Type & set__target_angle(
    const double & _arg)
  {
    this->target_angle = _arg;
    return *this;
  }
  Type & set__task_target_position_choice(
    const int8_t & _arg)
  {
    this->task_target_position_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TASK_TARGET_POSITION_NOT_SET =
    0;
  static constexpr int8_t TASK_TARGET_POSITION_TARGET_LINEAR_POSITION_SET =
    1;
  static constexpr int8_t TASK_TARGET_POSITION_TARGET_ANGLE_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_ & other) const
  {
    if (this->target_linear_position != other.target_linear_position) {
      return false;
    }
    if (this->target_angle != other.target_angle) {
      return false;
    }
    if (this->task_target_position_choice != other.task_target_position_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_

// alias to use template instance with default allocator
using ConstrainedManipulationCommandRequestOneOfTaskTargetPosition =
  bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>::TASK_TARGET_POSITION_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>::TASK_TARGET_POSITION_TARGET_LINEAR_POSITION_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>::TASK_TARGET_POSITION_TARGET_ANGLE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_TARGET_POSITION__STRUCT_HPP_
