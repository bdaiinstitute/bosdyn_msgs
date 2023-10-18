// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ClawGripperCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory'
#include "bosdyn_msgs/msg/detail/scalar_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ClawGripperCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ClawGripperCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClawGripperCommandRequest_
{
  using Type = ClawGripperCommandRequest_<ContainerAllocator>;

  explicit ClawGripperCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trajectory_is_set = false;
      this->maximum_open_close_velocity = 0.0;
      this->maximum_open_close_velocity_is_set = false;
      this->maximum_open_close_acceleration = 0.0;
      this->maximum_open_close_acceleration_is_set = false;
      this->maximum_torque = 0.0;
      this->maximum_torque_is_set = false;
      this->disable_force_on_contact = false;
    }
  }

  explicit ClawGripperCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trajectory_is_set = false;
      this->maximum_open_close_velocity = 0.0;
      this->maximum_open_close_velocity_is_set = false;
      this->maximum_open_close_acceleration = 0.0;
      this->maximum_open_close_acceleration_is_set = false;
      this->maximum_torque = 0.0;
      this->maximum_torque_is_set = false;
      this->disable_force_on_contact = false;
    }
  }

  // field types and members
  using _trajectory_type =
    bosdyn_msgs::msg::ScalarTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;
  using _trajectory_is_set_type =
    bool;
  _trajectory_is_set_type trajectory_is_set;
  using _maximum_open_close_velocity_type =
    double;
  _maximum_open_close_velocity_type maximum_open_close_velocity;
  using _maximum_open_close_velocity_is_set_type =
    bool;
  _maximum_open_close_velocity_is_set_type maximum_open_close_velocity_is_set;
  using _maximum_open_close_acceleration_type =
    double;
  _maximum_open_close_acceleration_type maximum_open_close_acceleration;
  using _maximum_open_close_acceleration_is_set_type =
    bool;
  _maximum_open_close_acceleration_is_set_type maximum_open_close_acceleration_is_set;
  using _maximum_torque_type =
    double;
  _maximum_torque_type maximum_torque;
  using _maximum_torque_is_set_type =
    bool;
  _maximum_torque_is_set_type maximum_torque_is_set;
  using _disable_force_on_contact_type =
    bool;
  _disable_force_on_contact_type disable_force_on_contact;

  // setters for named parameter idiom
  Type & set__trajectory(
    const bosdyn_msgs::msg::ScalarTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__trajectory_is_set(
    const bool & _arg)
  {
    this->trajectory_is_set = _arg;
    return *this;
  }
  Type & set__maximum_open_close_velocity(
    const double & _arg)
  {
    this->maximum_open_close_velocity = _arg;
    return *this;
  }
  Type & set__maximum_open_close_velocity_is_set(
    const bool & _arg)
  {
    this->maximum_open_close_velocity_is_set = _arg;
    return *this;
  }
  Type & set__maximum_open_close_acceleration(
    const double & _arg)
  {
    this->maximum_open_close_acceleration = _arg;
    return *this;
  }
  Type & set__maximum_open_close_acceleration_is_set(
    const bool & _arg)
  {
    this->maximum_open_close_acceleration_is_set = _arg;
    return *this;
  }
  Type & set__maximum_torque(
    const double & _arg)
  {
    this->maximum_torque = _arg;
    return *this;
  }
  Type & set__maximum_torque_is_set(
    const bool & _arg)
  {
    this->maximum_torque_is_set = _arg;
    return *this;
  }
  Type & set__disable_force_on_contact(
    const bool & _arg)
  {
    this->disable_force_on_contact = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ClawGripperCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ClawGripperCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClawGripperCommandRequest_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->trajectory_is_set != other.trajectory_is_set) {
      return false;
    }
    if (this->maximum_open_close_velocity != other.maximum_open_close_velocity) {
      return false;
    }
    if (this->maximum_open_close_velocity_is_set != other.maximum_open_close_velocity_is_set) {
      return false;
    }
    if (this->maximum_open_close_acceleration != other.maximum_open_close_acceleration) {
      return false;
    }
    if (this->maximum_open_close_acceleration_is_set != other.maximum_open_close_acceleration_is_set) {
      return false;
    }
    if (this->maximum_torque != other.maximum_torque) {
      return false;
    }
    if (this->maximum_torque_is_set != other.maximum_torque_is_set) {
      return false;
    }
    if (this->disable_force_on_contact != other.disable_force_on_contact) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClawGripperCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClawGripperCommandRequest_

// alias to use template instance with default allocator
using ClawGripperCommandRequest =
  bosdyn_msgs::msg::ClawGripperCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_REQUEST__STRUCT_HPP_
