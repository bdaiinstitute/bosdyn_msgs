// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'command'
#include "bosdyn_msgs/msg/detail/arm_velocity_command_request_one_of_command__struct.hpp"
// Member 'angular_velocity_of_hand_rt_odom_in_hand'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmVelocityCommandRequest_
{
  using Type = ArmVelocityCommandRequest_<ContainerAllocator>;

  explicit ArmVelocityCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_init),
    angular_velocity_of_hand_rt_odom_in_hand(_init),
    end_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angular_velocity_of_hand_rt_odom_in_hand_is_set = false;
      this->maximum_acceleration = 0.0;
      this->maximum_acceleration_is_set = false;
      this->end_time_is_set = false;
    }
  }

  explicit ArmVelocityCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc, _init),
    angular_velocity_of_hand_rt_odom_in_hand(_alloc, _init),
    end_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angular_velocity_of_hand_rt_odom_in_hand_is_set = false;
      this->maximum_acceleration = 0.0;
      this->maximum_acceleration_is_set = false;
      this->end_time_is_set = false;
    }
  }

  // field types and members
  using _command_type =
    bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator>;
  _command_type command;
  using _angular_velocity_of_hand_rt_odom_in_hand_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_of_hand_rt_odom_in_hand_type angular_velocity_of_hand_rt_odom_in_hand;
  using _angular_velocity_of_hand_rt_odom_in_hand_is_set_type =
    bool;
  _angular_velocity_of_hand_rt_odom_in_hand_is_set_type angular_velocity_of_hand_rt_odom_in_hand_is_set;
  using _maximum_acceleration_type =
    double;
  _maximum_acceleration_type maximum_acceleration;
  using _maximum_acceleration_is_set_type =
    bool;
  _maximum_acceleration_is_set_type maximum_acceleration_is_set;
  using _end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_time_type end_time;
  using _end_time_is_set_type =
    bool;
  _end_time_is_set_type end_time_is_set;

  // setters for named parameter idiom
  Type & set__command(
    const bosdyn_msgs::msg::ArmVelocityCommandRequestOneOfCommand_<ContainerAllocator> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__angular_velocity_of_hand_rt_odom_in_hand(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity_of_hand_rt_odom_in_hand = _arg;
    return *this;
  }
  Type & set__angular_velocity_of_hand_rt_odom_in_hand_is_set(
    const bool & _arg)
  {
    this->angular_velocity_of_hand_rt_odom_in_hand_is_set = _arg;
    return *this;
  }
  Type & set__maximum_acceleration(
    const double & _arg)
  {
    this->maximum_acceleration = _arg;
    return *this;
  }
  Type & set__maximum_acceleration_is_set(
    const bool & _arg)
  {
    this->maximum_acceleration_is_set = _arg;
    return *this;
  }
  Type & set__end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__end_time_is_set(
    const bool & _arg)
  {
    this->end_time_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVelocityCommandRequest_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->angular_velocity_of_hand_rt_odom_in_hand != other.angular_velocity_of_hand_rt_odom_in_hand) {
      return false;
    }
    if (this->angular_velocity_of_hand_rt_odom_in_hand_is_set != other.angular_velocity_of_hand_rt_odom_in_hand_is_set) {
      return false;
    }
    if (this->maximum_acceleration != other.maximum_acceleration) {
      return false;
    }
    if (this->maximum_acceleration_is_set != other.maximum_acceleration_is_set) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->end_time_is_set != other.end_time_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVelocityCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVelocityCommandRequest_

// alias to use template instance with default allocator
using ArmVelocityCommandRequest =
  bosdyn_msgs::msg::ArmVelocityCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST__STRUCT_HPP_
