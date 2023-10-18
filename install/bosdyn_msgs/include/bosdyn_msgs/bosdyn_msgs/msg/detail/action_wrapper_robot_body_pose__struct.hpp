// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperRobotBodyPose.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ROBOT_BODY_POSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ROBOT_BODY_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_tform_body'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperRobotBodyPose __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperRobotBodyPose __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionWrapperRobotBodyPose_
{
  using Type = ActionWrapperRobotBodyPose_<ContainerAllocator>;

  explicit ActionWrapperRobotBodyPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_tform_body(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_tform_body_is_set = false;
    }
  }

  explicit ActionWrapperRobotBodyPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_tform_body(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_tform_body_is_set = false;
    }
  }

  // field types and members
  using _target_tform_body_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _target_tform_body_type target_tform_body;
  using _target_tform_body_is_set_type =
    bool;
  _target_tform_body_is_set_type target_tform_body_is_set;

  // setters for named parameter idiom
  Type & set__target_tform_body(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->target_tform_body = _arg;
    return *this;
  }
  Type & set__target_tform_body_is_set(
    const bool & _arg)
  {
    this->target_tform_body_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperRobotBodyPose
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperRobotBodyPose
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionWrapperRobotBodyPose_ & other) const
  {
    if (this->target_tform_body != other.target_tform_body) {
      return false;
    }
    if (this->target_tform_body_is_set != other.target_tform_body_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionWrapperRobotBodyPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionWrapperRobotBodyPose_

// alias to use template instance with default allocator
using ActionWrapperRobotBodyPose =
  bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ROBOT_BODY_POSE__STRUCT_HPP_
