// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GripperCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'command'
#include "bosdyn_msgs/msg/detail/gripper_command_request_one_of_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GripperCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GripperCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperCommandRequest_
{
  using Type = GripperCommandRequest_<ContainerAllocator>;

  explicit GripperCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_init)
  {
    (void)_init;
  }

  explicit GripperCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _command_type =
    bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const bosdyn_msgs::msg::GripperCommandRequestOneOfCommand_<ContainerAllocator> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GripperCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GripperCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::GripperCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCommandRequest_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCommandRequest_

// alias to use template instance with default allocator
using GripperCommandRequest =
  bosdyn_msgs::msg::GripperCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_COMMAND_REQUEST__STRUCT_HPP_
