// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SynchronizedCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'arm_command'
#include "bosdyn_msgs/msg/detail/arm_command_request__struct.hpp"
// Member 'mobility_command'
#include "bosdyn_msgs/msg/detail/mobility_command_request__struct.hpp"
// Member 'gripper_command'
#include "bosdyn_msgs/msg/detail/gripper_command_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SynchronizedCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SynchronizedCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SynchronizedCommandRequest_
{
  using Type = SynchronizedCommandRequest_<ContainerAllocator>;

  explicit SynchronizedCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_command(_init),
    mobility_command(_init),
    gripper_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_command_is_set = false;
      this->mobility_command_is_set = false;
      this->gripper_command_is_set = false;
    }
  }

  explicit SynchronizedCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_command(_alloc, _init),
    mobility_command(_alloc, _init),
    gripper_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_command_is_set = false;
      this->mobility_command_is_set = false;
      this->gripper_command_is_set = false;
    }
  }

  // field types and members
  using _arm_command_type =
    bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator>;
  _arm_command_type arm_command;
  using _arm_command_is_set_type =
    bool;
  _arm_command_is_set_type arm_command_is_set;
  using _mobility_command_type =
    bosdyn_msgs::msg::MobilityCommandRequest_<ContainerAllocator>;
  _mobility_command_type mobility_command;
  using _mobility_command_is_set_type =
    bool;
  _mobility_command_is_set_type mobility_command_is_set;
  using _gripper_command_type =
    bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator>;
  _gripper_command_type gripper_command;
  using _gripper_command_is_set_type =
    bool;
  _gripper_command_is_set_type gripper_command_is_set;

  // setters for named parameter idiom
  Type & set__arm_command(
    const bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator> & _arg)
  {
    this->arm_command = _arg;
    return *this;
  }
  Type & set__arm_command_is_set(
    const bool & _arg)
  {
    this->arm_command_is_set = _arg;
    return *this;
  }
  Type & set__mobility_command(
    const bosdyn_msgs::msg::MobilityCommandRequest_<ContainerAllocator> & _arg)
  {
    this->mobility_command = _arg;
    return *this;
  }
  Type & set__mobility_command_is_set(
    const bool & _arg)
  {
    this->mobility_command_is_set = _arg;
    return *this;
  }
  Type & set__gripper_command(
    const bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator> & _arg)
  {
    this->gripper_command = _arg;
    return *this;
  }
  Type & set__gripper_command_is_set(
    const bool & _arg)
  {
    this->gripper_command_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SynchronizedCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SynchronizedCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::SynchronizedCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SynchronizedCommandRequest_ & other) const
  {
    if (this->arm_command != other.arm_command) {
      return false;
    }
    if (this->arm_command_is_set != other.arm_command_is_set) {
      return false;
    }
    if (this->mobility_command != other.mobility_command) {
      return false;
    }
    if (this->mobility_command_is_set != other.mobility_command_is_set) {
      return false;
    }
    if (this->gripper_command != other.gripper_command) {
      return false;
    }
    if (this->gripper_command_is_set != other.gripper_command_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SynchronizedCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SynchronizedCommandRequest_

// alias to use template instance with default allocator
using SynchronizedCommandRequest =
  bosdyn_msgs::msg::SynchronizedCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_REQUEST__STRUCT_HPP_
