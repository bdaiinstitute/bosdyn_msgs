// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BatteryChangePoseCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BATTERY_CHANGE_POSE_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BATTERY_CHANGE_POSE_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'direction_hint'
#include "bosdyn_msgs/msg/detail/battery_change_pose_command_request_direction_hint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BatteryChangePoseCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BatteryChangePoseCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryChangePoseCommandRequest_
{
  using Type = BatteryChangePoseCommandRequest_<ContainerAllocator>;

  explicit BatteryChangePoseCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction_hint(_init)
  {
    (void)_init;
  }

  explicit BatteryChangePoseCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction_hint(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _direction_hint_type =
    bosdyn_msgs::msg::BatteryChangePoseCommandRequestDirectionHint_<ContainerAllocator>;
  _direction_hint_type direction_hint;

  // setters for named parameter idiom
  Type & set__direction_hint(
    const bosdyn_msgs::msg::BatteryChangePoseCommandRequestDirectionHint_<ContainerAllocator> & _arg)
  {
    this->direction_hint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BatteryChangePoseCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BatteryChangePoseCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryChangePoseCommandRequest_ & other) const
  {
    if (this->direction_hint != other.direction_hint) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryChangePoseCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryChangePoseCommandRequest_

// alias to use template instance with default allocator
using BatteryChangePoseCommandRequest =
  bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BATTERY_CHANGE_POSE_COMMAND_REQUEST__STRUCT_HPP_
