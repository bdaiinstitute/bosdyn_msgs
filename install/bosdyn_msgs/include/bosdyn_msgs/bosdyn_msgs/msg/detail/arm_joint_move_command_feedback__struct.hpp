// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmJointMoveCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback_status__struct.hpp"
// Member 'planner_status'
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback_planner_status__struct.hpp"
// Member 'planned_points'
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory_point__struct.hpp"
// Member 'time_to_goal'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmJointMoveCommandFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmJointMoveCommandFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmJointMoveCommandFeedback_
{
  using Type = ArmJointMoveCommandFeedback_<ContainerAllocator>;

  explicit ArmJointMoveCommandFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    planner_status(_init),
    time_to_goal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_to_goal_is_set = false;
    }
  }

  explicit ArmJointMoveCommandFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    planner_status(_alloc, _init),
    time_to_goal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_to_goal_is_set = false;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::ArmJointMoveCommandFeedbackStatus_<ContainerAllocator>;
  _status_type status;
  using _planner_status_type =
    bosdyn_msgs::msg::ArmJointMoveCommandFeedbackPlannerStatus_<ContainerAllocator>;
  _planner_status_type planner_status;
  using _planned_points_type =
    std::vector<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator>>>;
  _planned_points_type planned_points;
  using _time_to_goal_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_to_goal_type time_to_goal;
  using _time_to_goal_is_set_type =
    bool;
  _time_to_goal_is_set_type time_to_goal_is_set;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::ArmJointMoveCommandFeedbackStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__planner_status(
    const bosdyn_msgs::msg::ArmJointMoveCommandFeedbackPlannerStatus_<ContainerAllocator> & _arg)
  {
    this->planner_status = _arg;
    return *this;
  }
  Type & set__planned_points(
    const std::vector<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ArmJointTrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->planned_points = _arg;
    return *this;
  }
  Type & set__time_to_goal(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_to_goal = _arg;
    return *this;
  }
  Type & set__time_to_goal_is_set(
    const bool & _arg)
  {
    this->time_to_goal_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmJointMoveCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmJointMoveCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmJointMoveCommandFeedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->planner_status != other.planner_status) {
      return false;
    }
    if (this->planned_points != other.planned_points) {
      return false;
    }
    if (this->time_to_goal != other.time_to_goal) {
      return false;
    }
    if (this->time_to_goal_is_set != other.time_to_goal_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmJointMoveCommandFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmJointMoveCommandFeedback_

// alias to use template instance with default allocator
using ArmJointMoveCommandFeedback =
  bosdyn_msgs::msg::ArmJointMoveCommandFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__STRUCT_HPP_
