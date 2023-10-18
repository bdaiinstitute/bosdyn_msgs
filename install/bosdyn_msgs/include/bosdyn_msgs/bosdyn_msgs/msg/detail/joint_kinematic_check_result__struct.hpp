// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/JointKinematicCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'error'
#include "bosdyn_msgs/msg/detail/joint_kinematic_check_result_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__JointKinematicCheckResult __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__JointKinematicCheckResult __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointKinematicCheckResult_
{
  using Type = JointKinematicCheckResult_<ContainerAllocator>;

  explicit JointKinematicCheckResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0.0f;
      this->old_offset = 0.0f;
      this->health_score = 0.0f;
    }
  }

  explicit JointKinematicCheckResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0.0f;
      this->old_offset = 0.0f;
      this->health_score = 0.0f;
    }
  }

  // field types and members
  using _error_type =
    bosdyn_msgs::msg::JointKinematicCheckResultError_<ContainerAllocator>;
  _error_type error;
  using _offset_type =
    float;
  _offset_type offset;
  using _old_offset_type =
    float;
  _old_offset_type old_offset;
  using _health_score_type =
    float;
  _health_score_type health_score;

  // setters for named parameter idiom
  Type & set__error(
    const bosdyn_msgs::msg::JointKinematicCheckResultError_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__offset(
    const float & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__old_offset(
    const float & _arg)
  {
    this->old_offset = _arg;
    return *this;
  }
  Type & set__health_score(
    const float & _arg)
  {
    this->health_score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__JointKinematicCheckResult
    std::shared_ptr<bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__JointKinematicCheckResult
    std::shared_ptr<bosdyn_msgs::msg::JointKinematicCheckResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointKinematicCheckResult_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->old_offset != other.old_offset) {
      return false;
    }
    if (this->health_score != other.health_score) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointKinematicCheckResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointKinematicCheckResult_

// alias to use template instance with default allocator
using JointKinematicCheckResult =
  bosdyn_msgs::msg::JointKinematicCheckResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__STRUCT_HPP_
