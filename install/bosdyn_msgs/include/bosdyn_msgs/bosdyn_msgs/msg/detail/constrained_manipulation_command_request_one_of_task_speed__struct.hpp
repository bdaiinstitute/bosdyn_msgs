// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequestOneOfTaskSpeed.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_SPEED__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskSpeed __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskSpeed __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstrainedManipulationCommandRequestOneOfTaskSpeed_
{
  using Type = ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>;

  explicit ConstrainedManipulationCommandRequestOneOfTaskSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tangential_speed = 0.0;
      this->rotational_speed = 0.0;
      this->task_speed_choice = 0;
    }
  }

  explicit ConstrainedManipulationCommandRequestOneOfTaskSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tangential_speed = 0.0;
      this->rotational_speed = 0.0;
      this->task_speed_choice = 0;
    }
  }

  // field types and members
  using _tangential_speed_type =
    double;
  _tangential_speed_type tangential_speed;
  using _rotational_speed_type =
    double;
  _rotational_speed_type rotational_speed;
  using _task_speed_choice_type =
    int8_t;
  _task_speed_choice_type task_speed_choice;

  // setters for named parameter idiom
  Type & set__tangential_speed(
    const double & _arg)
  {
    this->tangential_speed = _arg;
    return *this;
  }
  Type & set__rotational_speed(
    const double & _arg)
  {
    this->rotational_speed = _arg;
    return *this;
  }
  Type & set__task_speed_choice(
    const int8_t & _arg)
  {
    this->task_speed_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TASK_SPEED_NOT_SET =
    0;
  static constexpr int8_t TASK_SPEED_TANGENTIAL_SPEED_SET =
    1;
  static constexpr int8_t TASK_SPEED_ROTATIONAL_SPEED_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskSpeed
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskSpeed
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstrainedManipulationCommandRequestOneOfTaskSpeed_ & other) const
  {
    if (this->tangential_speed != other.tangential_speed) {
      return false;
    }
    if (this->rotational_speed != other.rotational_speed) {
      return false;
    }
    if (this->task_speed_choice != other.task_speed_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstrainedManipulationCommandRequestOneOfTaskSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstrainedManipulationCommandRequestOneOfTaskSpeed_

// alias to use template instance with default allocator
using ConstrainedManipulationCommandRequestOneOfTaskSpeed =
  bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>::TASK_SPEED_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>::TASK_SPEED_TANGENTIAL_SPEED_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>::TASK_SPEED_ROTATIONAL_SPEED_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST_ONE_OF_TASK_SPEED__STRUCT_HPP_
