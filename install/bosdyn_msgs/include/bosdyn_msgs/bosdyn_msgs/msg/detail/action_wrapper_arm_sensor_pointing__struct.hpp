// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperArmSensorPointing.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ARM_SENSOR_POINTING__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ARM_SENSOR_POINTING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_trajectory'
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__struct.hpp"
// Member 'wrist_tform_tool'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'pose_trajectory_rt_target'
#include "bosdyn_msgs/msg/detail/se3_trajectory__struct.hpp"
// Member 'target_tform_measured_offset'
#include "bosdyn_msgs/msg/detail/se2_pose__struct.hpp"
// Member 'body_assist_params'
#include "bosdyn_msgs/msg/detail/body_control_params_body_assist_for_manipulation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperArmSensorPointing __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperArmSensorPointing __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionWrapperArmSensorPointing_
{
  using Type = ActionWrapperArmSensorPointing_<ContainerAllocator>;

  explicit ActionWrapperArmSensorPointing_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_trajectory(_init),
    wrist_tform_tool(_init),
    pose_trajectory_rt_target(_init),
    target_tform_measured_offset(_init),
    body_assist_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_trajectory_is_set = false;
      this->wrist_tform_tool_is_set = false;
      this->pose_trajectory_rt_target_is_set = false;
      this->target_tform_measured_offset_is_set = false;
      this->body_assist_params_is_set = false;
      this->force_stow_override = false;
    }
  }

  explicit ActionWrapperArmSensorPointing_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_trajectory(_alloc, _init),
    wrist_tform_tool(_alloc, _init),
    pose_trajectory_rt_target(_alloc, _init),
    target_tform_measured_offset(_alloc, _init),
    body_assist_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_trajectory_is_set = false;
      this->wrist_tform_tool_is_set = false;
      this->pose_trajectory_rt_target_is_set = false;
      this->target_tform_measured_offset_is_set = false;
      this->body_assist_params_is_set = false;
      this->force_stow_override = false;
    }
  }

  // field types and members
  using _joint_trajectory_type =
    bosdyn_msgs::msg::ArmJointTrajectory_<ContainerAllocator>;
  _joint_trajectory_type joint_trajectory;
  using _joint_trajectory_is_set_type =
    bool;
  _joint_trajectory_is_set_type joint_trajectory_is_set;
  using _wrist_tform_tool_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _wrist_tform_tool_type wrist_tform_tool;
  using _wrist_tform_tool_is_set_type =
    bool;
  _wrist_tform_tool_is_set_type wrist_tform_tool_is_set;
  using _pose_trajectory_rt_target_type =
    bosdyn_msgs::msg::SE3Trajectory_<ContainerAllocator>;
  _pose_trajectory_rt_target_type pose_trajectory_rt_target;
  using _pose_trajectory_rt_target_is_set_type =
    bool;
  _pose_trajectory_rt_target_is_set_type pose_trajectory_rt_target_is_set;
  using _target_tform_measured_offset_type =
    bosdyn_msgs::msg::SE2Pose_<ContainerAllocator>;
  _target_tform_measured_offset_type target_tform_measured_offset;
  using _target_tform_measured_offset_is_set_type =
    bool;
  _target_tform_measured_offset_is_set_type target_tform_measured_offset_is_set;
  using _body_assist_params_type =
    bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator>;
  _body_assist_params_type body_assist_params;
  using _body_assist_params_is_set_type =
    bool;
  _body_assist_params_is_set_type body_assist_params_is_set;
  using _force_stow_override_type =
    bool;
  _force_stow_override_type force_stow_override;

  // setters for named parameter idiom
  Type & set__joint_trajectory(
    const bosdyn_msgs::msg::ArmJointTrajectory_<ContainerAllocator> & _arg)
  {
    this->joint_trajectory = _arg;
    return *this;
  }
  Type & set__joint_trajectory_is_set(
    const bool & _arg)
  {
    this->joint_trajectory_is_set = _arg;
    return *this;
  }
  Type & set__wrist_tform_tool(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->wrist_tform_tool = _arg;
    return *this;
  }
  Type & set__wrist_tform_tool_is_set(
    const bool & _arg)
  {
    this->wrist_tform_tool_is_set = _arg;
    return *this;
  }
  Type & set__pose_trajectory_rt_target(
    const bosdyn_msgs::msg::SE3Trajectory_<ContainerAllocator> & _arg)
  {
    this->pose_trajectory_rt_target = _arg;
    return *this;
  }
  Type & set__pose_trajectory_rt_target_is_set(
    const bool & _arg)
  {
    this->pose_trajectory_rt_target_is_set = _arg;
    return *this;
  }
  Type & set__target_tform_measured_offset(
    const bosdyn_msgs::msg::SE2Pose_<ContainerAllocator> & _arg)
  {
    this->target_tform_measured_offset = _arg;
    return *this;
  }
  Type & set__target_tform_measured_offset_is_set(
    const bool & _arg)
  {
    this->target_tform_measured_offset_is_set = _arg;
    return *this;
  }
  Type & set__body_assist_params(
    const bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator> & _arg)
  {
    this->body_assist_params = _arg;
    return *this;
  }
  Type & set__body_assist_params_is_set(
    const bool & _arg)
  {
    this->body_assist_params_is_set = _arg;
    return *this;
  }
  Type & set__force_stow_override(
    const bool & _arg)
  {
    this->force_stow_override = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperArmSensorPointing
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperArmSensorPointing
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionWrapperArmSensorPointing_ & other) const
  {
    if (this->joint_trajectory != other.joint_trajectory) {
      return false;
    }
    if (this->joint_trajectory_is_set != other.joint_trajectory_is_set) {
      return false;
    }
    if (this->wrist_tform_tool != other.wrist_tform_tool) {
      return false;
    }
    if (this->wrist_tform_tool_is_set != other.wrist_tform_tool_is_set) {
      return false;
    }
    if (this->pose_trajectory_rt_target != other.pose_trajectory_rt_target) {
      return false;
    }
    if (this->pose_trajectory_rt_target_is_set != other.pose_trajectory_rt_target_is_set) {
      return false;
    }
    if (this->target_tform_measured_offset != other.target_tform_measured_offset) {
      return false;
    }
    if (this->target_tform_measured_offset_is_set != other.target_tform_measured_offset_is_set) {
      return false;
    }
    if (this->body_assist_params != other.body_assist_params) {
      return false;
    }
    if (this->body_assist_params_is_set != other.body_assist_params_is_set) {
      return false;
    }
    if (this->force_stow_override != other.force_stow_override) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionWrapperArmSensorPointing_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionWrapperArmSensorPointing_

// alias to use template instance with default allocator
using ActionWrapperArmSensorPointing =
  bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ARM_SENSOR_POINTING__STRUCT_HPP_
