// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmCartesianCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_feedback_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmCartesianCommandFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmCartesianCommandFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmCartesianCommandFeedback_
{
  using Type = ArmCartesianCommandFeedback_<ContainerAllocator>;

  explicit ArmCartesianCommandFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->measured_pos_tracking_error = 0.0;
      this->measured_rot_tracking_error = 0.0;
      this->measured_pos_distance_to_goal = 0.0;
      this->measured_rot_distance_to_goal = 0.0;
    }
  }

  explicit ArmCartesianCommandFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->measured_pos_tracking_error = 0.0;
      this->measured_rot_tracking_error = 0.0;
      this->measured_pos_distance_to_goal = 0.0;
      this->measured_rot_distance_to_goal = 0.0;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::ArmCartesianCommandFeedbackStatus_<ContainerAllocator>;
  _status_type status;
  using _measured_pos_tracking_error_type =
    double;
  _measured_pos_tracking_error_type measured_pos_tracking_error;
  using _measured_rot_tracking_error_type =
    double;
  _measured_rot_tracking_error_type measured_rot_tracking_error;
  using _measured_pos_distance_to_goal_type =
    double;
  _measured_pos_distance_to_goal_type measured_pos_distance_to_goal;
  using _measured_rot_distance_to_goal_type =
    double;
  _measured_rot_distance_to_goal_type measured_rot_distance_to_goal;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::ArmCartesianCommandFeedbackStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__measured_pos_tracking_error(
    const double & _arg)
  {
    this->measured_pos_tracking_error = _arg;
    return *this;
  }
  Type & set__measured_rot_tracking_error(
    const double & _arg)
  {
    this->measured_rot_tracking_error = _arg;
    return *this;
  }
  Type & set__measured_pos_distance_to_goal(
    const double & _arg)
  {
    this->measured_pos_distance_to_goal = _arg;
    return *this;
  }
  Type & set__measured_rot_distance_to_goal(
    const double & _arg)
  {
    this->measured_rot_distance_to_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmCartesianCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmCartesianCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::ArmCartesianCommandFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmCartesianCommandFeedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->measured_pos_tracking_error != other.measured_pos_tracking_error) {
      return false;
    }
    if (this->measured_rot_tracking_error != other.measured_rot_tracking_error) {
      return false;
    }
    if (this->measured_pos_distance_to_goal != other.measured_pos_distance_to_goal) {
      return false;
    }
    if (this->measured_rot_distance_to_goal != other.measured_rot_distance_to_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmCartesianCommandFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmCartesianCommandFeedback_

// alias to use template instance with default allocator
using ArmCartesianCommandFeedback =
  bosdyn_msgs::msg::ArmCartesianCommandFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_FEEDBACK__STRUCT_HPP_
