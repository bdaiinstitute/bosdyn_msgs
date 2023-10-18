// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_feedback_status__struct.hpp"
// Member 'desired_wrench_odom_frame'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstrainedManipulationCommandFeedback_
{
  using Type = ConstrainedManipulationCommandFeedback_<ContainerAllocator>;

  explicit ConstrainedManipulationCommandFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    desired_wrench_odom_frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_wrench_odom_frame_is_set = false;
      this->estimation_activated = false;
      this->estimation_activated_is_set = false;
    }
  }

  explicit ConstrainedManipulationCommandFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    desired_wrench_odom_frame(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_wrench_odom_frame_is_set = false;
      this->estimation_activated = false;
      this->estimation_activated_is_set = false;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>;
  _status_type status;
  using _desired_wrench_odom_frame_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _desired_wrench_odom_frame_type desired_wrench_odom_frame;
  using _desired_wrench_odom_frame_is_set_type =
    bool;
  _desired_wrench_odom_frame_is_set_type desired_wrench_odom_frame_is_set;
  using _estimation_activated_type =
    bool;
  _estimation_activated_type estimation_activated;
  using _estimation_activated_is_set_type =
    bool;
  _estimation_activated_is_set_type estimation_activated_is_set;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__desired_wrench_odom_frame(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->desired_wrench_odom_frame = _arg;
    return *this;
  }
  Type & set__desired_wrench_odom_frame_is_set(
    const bool & _arg)
  {
    this->desired_wrench_odom_frame_is_set = _arg;
    return *this;
  }
  Type & set__estimation_activated(
    const bool & _arg)
  {
    this->estimation_activated = _arg;
    return *this;
  }
  Type & set__estimation_activated_is_set(
    const bool & _arg)
  {
    this->estimation_activated_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstrainedManipulationCommandFeedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->desired_wrench_odom_frame != other.desired_wrench_odom_frame) {
      return false;
    }
    if (this->desired_wrench_odom_frame_is_set != other.desired_wrench_odom_frame_is_set) {
      return false;
    }
    if (this->estimation_activated != other.estimation_activated) {
      return false;
    }
    if (this->estimation_activated_is_set != other.estimation_activated_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstrainedManipulationCommandFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstrainedManipulationCommandFeedback_

// alias to use template instance with default allocator
using ConstrainedManipulationCommandFeedback =
  bosdyn_msgs::msg::ConstrainedManipulationCommandFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK__STRUCT_HPP_
