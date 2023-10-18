// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfTaskSpecification.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TASK_SPECIFICATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TASK_SPECIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tool_pose_task'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_tool_pose_task__struct.hpp"
// Member 'tool_gaze_task'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_tool_gaze_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsRequestOneOfTaskSpecification_
{
  using Type = InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>;

  explicit InverseKinematicsRequestOneOfTaskSpecification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tool_pose_task(_init),
    tool_gaze_task(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_specification_choice = 0;
    }
  }

  explicit InverseKinematicsRequestOneOfTaskSpecification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tool_pose_task(_alloc, _init),
    tool_gaze_task(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_specification_choice = 0;
    }
  }

  // field types and members
  using _tool_pose_task_type =
    bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator>;
  _tool_pose_task_type tool_pose_task;
  using _tool_gaze_task_type =
    bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask_<ContainerAllocator>;
  _tool_gaze_task_type tool_gaze_task;
  using _task_specification_choice_type =
    int8_t;
  _task_specification_choice_type task_specification_choice;

  // setters for named parameter idiom
  Type & set__tool_pose_task(
    const bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask_<ContainerAllocator> & _arg)
  {
    this->tool_pose_task = _arg;
    return *this;
  }
  Type & set__tool_gaze_task(
    const bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask_<ContainerAllocator> & _arg)
  {
    this->tool_gaze_task = _arg;
    return *this;
  }
  Type & set__task_specification_choice(
    const int8_t & _arg)
  {
    this->task_specification_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TASK_SPECIFICATION_NOT_SET =
    0;
  static constexpr int8_t TASK_SPECIFICATION_TOOL_POSE_TASK_SET =
    1;
  static constexpr int8_t TASK_SPECIFICATION_TOOL_GAZE_TASK_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsRequestOneOfTaskSpecification_ & other) const
  {
    if (this->tool_pose_task != other.tool_pose_task) {
      return false;
    }
    if (this->tool_gaze_task != other.tool_gaze_task) {
      return false;
    }
    if (this->task_specification_choice != other.task_specification_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsRequestOneOfTaskSpecification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsRequestOneOfTaskSpecification_

// alias to use template instance with default allocator
using InverseKinematicsRequestOneOfTaskSpecification =
  bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>::TASK_SPECIFICATION_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>::TASK_SPECIFICATION_TOOL_POSE_TASK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>::TASK_SPECIFICATION_TOOL_GAZE_TASK_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TASK_SPECIFICATION__STRUCT_HPP_
