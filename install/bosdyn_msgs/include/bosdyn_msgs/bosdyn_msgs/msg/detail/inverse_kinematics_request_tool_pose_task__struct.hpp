// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestToolPoseTask.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_POSE_TASK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_POSE_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'task_tform_desired_tool'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestToolPoseTask __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestToolPoseTask __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsRequestToolPoseTask_
{
  using Type = InverseKinematicsRequestToolPoseTask_<ContainerAllocator>;

  explicit InverseKinematicsRequestToolPoseTask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_tform_desired_tool(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_tform_desired_tool_is_set = false;
    }
  }

  explicit InverseKinematicsRequestToolPoseTask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_tform_desired_tool(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_tform_desired_tool_is_set = false;
    }
  }

  // field types and members
  using _task_tform_desired_tool_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _task_tform_desired_tool_type task_tform_desired_tool;
  using _task_tform_desired_tool_is_set_type =
    bool;
  _task_tform_desired_tool_is_set_type task_tform_desired_tool_is_set;

  // setters for named parameter idiom
  Type & set__task_tform_desired_tool(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->task_tform_desired_tool = _arg;
    return *this;
  }
  Type & set__task_tform_desired_tool_is_set(
    const bool & _arg)
  {
    this->task_tform_desired_tool_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestToolPoseTask
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestToolPoseTask
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsRequestToolPoseTask_ & other) const
  {
    if (this->task_tform_desired_tool != other.task_tform_desired_tool) {
      return false;
    }
    if (this->task_tform_desired_tool_is_set != other.task_tform_desired_tool_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsRequestToolPoseTask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsRequestToolPoseTask_

// alias to use template instance with default allocator
using InverseKinematicsRequestToolPoseTask =
  bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_POSE_TASK__STRUCT_HPP_
