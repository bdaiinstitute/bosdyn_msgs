// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandFeedbackStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstrainedManipulationCommandFeedbackStatus_
{
  using Type = ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>;

  explicit ConstrainedManipulationCommandFeedbackStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit ConstrainedManipulationCommandFeedbackStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    int8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const int8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t STATUS_UNKNOWN =
    0;
  static constexpr int8_t STATUS_RUNNING =
    1;
  static constexpr int8_t STATUS_ARM_IS_STUCK =
    2;
  static constexpr int8_t STATUS_GRASP_IS_LOST =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstrainedManipulationCommandFeedbackStatus_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstrainedManipulationCommandFeedbackStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstrainedManipulationCommandFeedbackStatus_

// alias to use template instance with default allocator
using ConstrainedManipulationCommandFeedbackStatus =
  bosdyn_msgs::msg::ConstrainedManipulationCommandFeedbackStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>::STATUS_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>::STATUS_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>::STATUS_ARM_IS_STUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstrainedManipulationCommandFeedbackStatus_<ContainerAllocator>::STATUS_GRASP_IS_LOST;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK_STATUS__STRUCT_HPP_
