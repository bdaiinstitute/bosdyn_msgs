// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GazeCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/gaze_command_feedback_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GazeCommandFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GazeCommandFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GazeCommandFeedback_
{
  using Type = GazeCommandFeedback_<ContainerAllocator>;

  explicit GazeCommandFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gazing_at_target = false;
      this->gaze_to_target_rotation_measured = 0.0f;
      this->hand_position_at_goal = false;
      this->hand_distance_to_goal_measured = 0.0f;
      this->hand_roll_at_goal = false;
      this->hand_roll_to_target_roll_measured = 0.0f;
    }
  }

  explicit GazeCommandFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gazing_at_target = false;
      this->gaze_to_target_rotation_measured = 0.0f;
      this->hand_position_at_goal = false;
      this->hand_distance_to_goal_measured = 0.0f;
      this->hand_roll_at_goal = false;
      this->hand_roll_to_target_roll_measured = 0.0f;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::GazeCommandFeedbackStatus_<ContainerAllocator>;
  _status_type status;
  using _gazing_at_target_type =
    bool;
  _gazing_at_target_type gazing_at_target;
  using _gaze_to_target_rotation_measured_type =
    float;
  _gaze_to_target_rotation_measured_type gaze_to_target_rotation_measured;
  using _hand_position_at_goal_type =
    bool;
  _hand_position_at_goal_type hand_position_at_goal;
  using _hand_distance_to_goal_measured_type =
    float;
  _hand_distance_to_goal_measured_type hand_distance_to_goal_measured;
  using _hand_roll_at_goal_type =
    bool;
  _hand_roll_at_goal_type hand_roll_at_goal;
  using _hand_roll_to_target_roll_measured_type =
    float;
  _hand_roll_to_target_roll_measured_type hand_roll_to_target_roll_measured;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::GazeCommandFeedbackStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__gazing_at_target(
    const bool & _arg)
  {
    this->gazing_at_target = _arg;
    return *this;
  }
  Type & set__gaze_to_target_rotation_measured(
    const float & _arg)
  {
    this->gaze_to_target_rotation_measured = _arg;
    return *this;
  }
  Type & set__hand_position_at_goal(
    const bool & _arg)
  {
    this->hand_position_at_goal = _arg;
    return *this;
  }
  Type & set__hand_distance_to_goal_measured(
    const float & _arg)
  {
    this->hand_distance_to_goal_measured = _arg;
    return *this;
  }
  Type & set__hand_roll_at_goal(
    const bool & _arg)
  {
    this->hand_roll_at_goal = _arg;
    return *this;
  }
  Type & set__hand_roll_to_target_roll_measured(
    const float & _arg)
  {
    this->hand_roll_to_target_roll_measured = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GazeCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GazeCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::GazeCommandFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GazeCommandFeedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->gazing_at_target != other.gazing_at_target) {
      return false;
    }
    if (this->gaze_to_target_rotation_measured != other.gaze_to_target_rotation_measured) {
      return false;
    }
    if (this->hand_position_at_goal != other.hand_position_at_goal) {
      return false;
    }
    if (this->hand_distance_to_goal_measured != other.hand_distance_to_goal_measured) {
      return false;
    }
    if (this->hand_roll_at_goal != other.hand_roll_at_goal) {
      return false;
    }
    if (this->hand_roll_to_target_roll_measured != other.hand_roll_to_target_roll_measured) {
      return false;
    }
    return true;
  }
  bool operator!=(const GazeCommandFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GazeCommandFeedback_

// alias to use template instance with default allocator
using GazeCommandFeedback =
  bosdyn_msgs::msg::GazeCommandFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_FEEDBACK__STRUCT_HPP_
