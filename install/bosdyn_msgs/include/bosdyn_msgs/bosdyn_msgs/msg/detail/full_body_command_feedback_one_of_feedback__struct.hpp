// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FullBodyCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stop_feedback'
#include "bosdyn_msgs/msg/detail/stop_command_feedback__struct.hpp"
// Member 'freeze_feedback'
#include "bosdyn_msgs/msg/detail/freeze_command_feedback__struct.hpp"
// Member 'selfright_feedback'
#include "bosdyn_msgs/msg/detail/self_right_command_feedback__struct.hpp"
// Member 'safe_power_off_feedback'
#include "bosdyn_msgs/msg/detail/safe_power_off_command_feedback__struct.hpp"
// Member 'battery_change_pose_feedback'
#include "bosdyn_msgs/msg/detail/battery_change_pose_command_feedback__struct.hpp"
// Member 'payload_estimation_feedback'
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback__struct.hpp"
// Member 'constrained_manipulation_feedback'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_feedback__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FullBodyCommandFeedbackOneOfFeedback_
{
  using Type = FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>;

  explicit FullBodyCommandFeedbackOneOfFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stop_feedback(_init),
    freeze_feedback(_init),
    selfright_feedback(_init),
    safe_power_off_feedback(_init),
    battery_change_pose_feedback(_init),
    payload_estimation_feedback(_init),
    constrained_manipulation_feedback(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_choice = 0;
    }
  }

  explicit FullBodyCommandFeedbackOneOfFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stop_feedback(_alloc, _init),
    freeze_feedback(_alloc, _init),
    selfright_feedback(_alloc, _init),
    safe_power_off_feedback(_alloc, _init),
    battery_change_pose_feedback(_alloc, _init),
    payload_estimation_feedback(_alloc, _init),
    constrained_manipulation_feedback(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_choice = 0;
    }
  }

  // field types and members
  using _stop_feedback_type =
    bosdyn_msgs::msg::StopCommandFeedback_<ContainerAllocator>;
  _stop_feedback_type stop_feedback;
  using _freeze_feedback_type =
    bosdyn_msgs::msg::FreezeCommandFeedback_<ContainerAllocator>;
  _freeze_feedback_type freeze_feedback;
  using _selfright_feedback_type =
    bosdyn_msgs::msg::SelfRightCommandFeedback_<ContainerAllocator>;
  _selfright_feedback_type selfright_feedback;
  using _safe_power_off_feedback_type =
    bosdyn_msgs::msg::SafePowerOffCommandFeedback_<ContainerAllocator>;
  _safe_power_off_feedback_type safe_power_off_feedback;
  using _battery_change_pose_feedback_type =
    bosdyn_msgs::msg::BatteryChangePoseCommandFeedback_<ContainerAllocator>;
  _battery_change_pose_feedback_type battery_change_pose_feedback;
  using _payload_estimation_feedback_type =
    bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator>;
  _payload_estimation_feedback_type payload_estimation_feedback;
  using _constrained_manipulation_feedback_type =
    bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator>;
  _constrained_manipulation_feedback_type constrained_manipulation_feedback;
  using _feedback_choice_type =
    int8_t;
  _feedback_choice_type feedback_choice;

  // setters for named parameter idiom
  Type & set__stop_feedback(
    const bosdyn_msgs::msg::StopCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->stop_feedback = _arg;
    return *this;
  }
  Type & set__freeze_feedback(
    const bosdyn_msgs::msg::FreezeCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->freeze_feedback = _arg;
    return *this;
  }
  Type & set__selfright_feedback(
    const bosdyn_msgs::msg::SelfRightCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->selfright_feedback = _arg;
    return *this;
  }
  Type & set__safe_power_off_feedback(
    const bosdyn_msgs::msg::SafePowerOffCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->safe_power_off_feedback = _arg;
    return *this;
  }
  Type & set__battery_change_pose_feedback(
    const bosdyn_msgs::msg::BatteryChangePoseCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->battery_change_pose_feedback = _arg;
    return *this;
  }
  Type & set__payload_estimation_feedback(
    const bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->payload_estimation_feedback = _arg;
    return *this;
  }
  Type & set__constrained_manipulation_feedback(
    const bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator> & _arg)
  {
    this->constrained_manipulation_feedback = _arg;
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
  static constexpr int8_t FEEDBACK_STOP_FEEDBACK_SET =
    1;
  static constexpr int8_t FEEDBACK_FREEZE_FEEDBACK_SET =
    2;
  static constexpr int8_t FEEDBACK_SELFRIGHT_FEEDBACK_SET =
    3;
  static constexpr int8_t FEEDBACK_SAFE_POWER_OFF_FEEDBACK_SET =
    4;
  static constexpr int8_t FEEDBACK_BATTERY_CHANGE_POSE_FEEDBACK_SET =
    5;
  static constexpr int8_t FEEDBACK_PAYLOAD_ESTIMATION_FEEDBACK_SET =
    6;
  static constexpr int8_t FEEDBACK_CONSTRAINED_MANIPULATION_FEEDBACK_SET =
    7;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback
    std::shared_ptr<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback
    std::shared_ptr<bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FullBodyCommandFeedbackOneOfFeedback_ & other) const
  {
    if (this->stop_feedback != other.stop_feedback) {
      return false;
    }
    if (this->freeze_feedback != other.freeze_feedback) {
      return false;
    }
    if (this->selfright_feedback != other.selfright_feedback) {
      return false;
    }
    if (this->safe_power_off_feedback != other.safe_power_off_feedback) {
      return false;
    }
    if (this->battery_change_pose_feedback != other.battery_change_pose_feedback) {
      return false;
    }
    if (this->payload_estimation_feedback != other.payload_estimation_feedback) {
      return false;
    }
    if (this->constrained_manipulation_feedback != other.constrained_manipulation_feedback) {
      return false;
    }
    if (this->feedback_choice != other.feedback_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const FullBodyCommandFeedbackOneOfFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FullBodyCommandFeedbackOneOfFeedback_

// alias to use template instance with default allocator
using FullBodyCommandFeedbackOneOfFeedback =
  bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_STOP_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_FREEZE_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_SELFRIGHT_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_SAFE_POWER_OFF_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_BATTERY_CHANGE_POSE_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_PAYLOAD_ESTIMATION_FEEDBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandFeedbackOneOfFeedback_<ContainerAllocator>::FEEDBACK_CONSTRAINED_MANIPULATION_FEEDBACK_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_HPP_
