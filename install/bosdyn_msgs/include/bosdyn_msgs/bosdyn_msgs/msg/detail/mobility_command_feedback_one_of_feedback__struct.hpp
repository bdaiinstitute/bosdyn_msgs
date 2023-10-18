// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MobilityCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'se2_trajectory_feedback'
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback__struct.hpp"
// Member 'se2_velocity_feedback'
#include "bosdyn_msgs/msg/detail/se2_velocity_command_feedback__struct.hpp"
// Member 'sit_feedback'
#include "bosdyn_msgs/msg/detail/sit_command_feedback__struct.hpp"
// Member 'stand_feedback'
#include "bosdyn_msgs/msg/detail/stand_command_feedback__struct.hpp"
// Member 'stance_feedback'
#include "bosdyn_msgs/msg/detail/stance_command_feedback__struct.hpp"
// Member 'stop_feedback'
#include "bosdyn_msgs/msg/detail/stop_command_feedback__struct.hpp"
// Member 'follow_arm_feedback'
#include "bosdyn_msgs/msg/detail/follow_arm_command_feedback__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityCommandFeedbackOneOfFeedback_
{
  using Type = MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>;

  explicit MobilityCommandFeedbackOneOfFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : se2_trajectory_feedback(_init),
    se2_velocity_feedback(_init),
    sit_feedback(_init),
    stand_feedback(_init),
    stance_feedback(_init),
    stop_feedback(_init),
    follow_arm_feedback(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_choice = 0;
    }
  }

  explicit MobilityCommandFeedbackOneOfFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : se2_trajectory_feedback(_alloc, _init),
    se2_velocity_feedback(_alloc, _init),
    sit_feedback(_alloc, _init),
    stand_feedback(_alloc, _init),
    stance_feedback(_alloc, _init),
    stop_feedback(_alloc, _init),
    follow_arm_feedback(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_choice = 0;
    }
  }

  // field types and members
  using _se2_trajectory_feedback_type =
    bosdyn_msgs::msg::SE2TrajectoryCommandFeedback_<ContainerAllocator>;
  _se2_trajectory_feedback_type se2_trajectory_feedback;
  using _se2_velocity_feedback_type =
    bosdyn_msgs::msg::SE2VelocityCommandFeedback_<ContainerAllocator>;
  _se2_velocity_feedback_type se2_velocity_feedback;
  using _sit_feedback_type =
    bosdyn_msgs::msg::SitCommandFeedback_<ContainerAllocator>;
  _sit_feedback_type sit_feedback;
  using _stand_feedback_type =
    bosdyn_msgs::msg::StandCommandFeedback_<ContainerAllocator>;
  _stand_feedback_type stand_feedback;
  using _stance_feedback_type =
    bosdyn_msgs::msg::StanceCommandFeedback_<ContainerAllocator>;
  _stance_feedback_type stance_feedback;
  using _stop_feedback_type =
    bosdyn_msgs::msg::StopCommandFeedback_<ContainerAllocator>;
  _stop_feedback_type stop_feedback;
  using _follow_arm_feedback_type =
    bosdyn_msgs::msg::FollowArmCommandFeedback_<ContainerAllocator>;
  _follow_arm_feedback_type follow_arm_feedback;
  using _feedback_choice_type =
    int8_t;
  _feedback_choice_type feedback_choice;

  // setters for named parameter idiom
  Type & set__se2_trajectory_feedback(
    const bosdyn_msgs::msg::SE2TrajectoryCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->se2_trajectory_feedback = _arg;
    return *this;
  }
  Type & set__se2_velocity_feedback(
    const bosdyn_msgs::msg::SE2VelocityCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->se2_velocity_feedback = _arg;
    return *this;
  }
  Type & set__sit_feedback(
    const bosdyn_msgs::msg::SitCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->sit_feedback = _arg;
    return *this;
  }
  Type & set__stand_feedback(
    const bosdyn_msgs::msg::StandCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->stand_feedback = _arg;
    return *this;
  }
  Type & set__stance_feedback(
    const bosdyn_msgs::msg::StanceCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->stance_feedback = _arg;
    return *this;
  }
  Type & set__stop_feedback(
    const bosdyn_msgs::msg::StopCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->stop_feedback = _arg;
    return *this;
  }
  Type & set__follow_arm_feedback(
    const bosdyn_msgs::msg::FollowArmCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->follow_arm_feedback = _arg;
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
  static constexpr int8_t FEEDBACK_SE2_TRAJECTORY_FEEDBACK_SET =
    1;
  static constexpr int8_t FEEDBACK_SE2_VELOCITY_FEEDBACK_SET =
    2;
  static constexpr int8_t FEEDBACK_SIT_FEEDBACK_SET =
    3;
  static constexpr int8_t FEEDBACK_STAND_FEEDBACK_SET =
    4;
  static constexpr int8_t FEEDBACK_STANCE_FEEDBACK_SET =
    5;
  static constexpr int8_t FEEDBACK_STOP_FEEDBACK_SET =
    6;
  static constexpr int8_t FEEDBACK_FOLLOW_ARM_FEEDBACK_SET =
    7;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityCommandFeedbackOneOfFeedback_ & other) const
  {
    if (this->se2_trajectory_feedback != other.se2_trajectory_feedback) {
      return false;
    }
    if (this->se2_velocity_feedback != other.se2_velocity_feedback) {
      return false;
    }
    if (this->sit_feedback != other.sit_feedback) {
      return false;
    }
    if (this->stand_feedback != other.stand_feedback) {
      return false;
    }
    if (this->stance_feedback != other.stance_feedback) {
      return false;
    }
    if (this->stop_feedback != other.stop_feedback) {
      return false;
    }
    if (this->follow_arm_feedback != other.follow_arm_feedback) {
      return false;
    }
    if (this->feedback_choice != other.feedback_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityCommandFeedbackOneOfFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityCommandFeedbackOneOfFeedback_

// alias to use template instance with default allocator
using MobilityCommandFeedbackOneOfFeedback =
  bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_SE2_TRAJECTORY_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_SE2_VELOCITY_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_SIT_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_STAND_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_STANCE_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_STOP_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_FOLLOW_ARM_FEEDBACK_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_HPP_
