// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MobilityCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'feedback'
#include "bosdyn_msgs/msg/detail/mobility_command_feedback_one_of_feedback__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/robot_command_feedback_status_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MobilityCommandFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MobilityCommandFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityCommandFeedback_
{
  using Type = MobilityCommandFeedback_<ContainerAllocator>;

  explicit MobilityCommandFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_init),
    status(_init)
  {
    (void)_init;
  }

  explicit MobilityCommandFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc, _init),
    status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _feedback_type =
    bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator>;
  _feedback_type feedback;
  using _status_type =
    bosdyn_msgs::msg::RobotCommandFeedbackStatusStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__feedback(
    const bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::RobotCommandFeedbackStatusStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MobilityCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MobilityCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityCommandFeedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityCommandFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityCommandFeedback_

// alias to use template instance with default allocator
using MobilityCommandFeedback =
  bosdyn_msgs::msg::MobilityCommandFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK__STRUCT_HPP_
