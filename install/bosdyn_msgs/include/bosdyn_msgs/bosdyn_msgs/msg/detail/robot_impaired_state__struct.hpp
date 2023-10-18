// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RobotImpairedState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_IMPAIRED_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_IMPAIRED_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'impaired_status'
#include "bosdyn_msgs/msg/detail/robot_impaired_state_impaired_status__struct.hpp"
// Member 'system_faults'
#include "bosdyn_msgs/msg/detail/system_fault__struct.hpp"
// Member 'service_faults'
#include "bosdyn_msgs/msg/detail/service_fault__struct.hpp"
// Member 'behavior_faults'
#include "bosdyn_msgs/msg/detail/behavior_fault__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RobotImpairedState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RobotImpairedState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotImpairedState_
{
  using Type = RobotImpairedState_<ContainerAllocator>;

  explicit RobotImpairedState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : impaired_status(_init)
  {
    (void)_init;
  }

  explicit RobotImpairedState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : impaired_status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _impaired_status_type =
    bosdyn_msgs::msg::RobotImpairedStateImpairedStatus_<ContainerAllocator>;
  _impaired_status_type impaired_status;
  using _system_faults_type =
    std::vector<bosdyn_msgs::msg::SystemFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SystemFault_<ContainerAllocator>>>;
  _system_faults_type system_faults;
  using _service_faults_type =
    std::vector<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>>;
  _service_faults_type service_faults;
  using _behavior_faults_type =
    std::vector<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator>>>;
  _behavior_faults_type behavior_faults;

  // setters for named parameter idiom
  Type & set__impaired_status(
    const bosdyn_msgs::msg::RobotImpairedStateImpairedStatus_<ContainerAllocator> & _arg)
  {
    this->impaired_status = _arg;
    return *this;
  }
  Type & set__system_faults(
    const std::vector<bosdyn_msgs::msg::SystemFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SystemFault_<ContainerAllocator>>> & _arg)
  {
    this->system_faults = _arg;
    return *this;
  }
  Type & set__service_faults(
    const std::vector<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>> & _arg)
  {
    this->service_faults = _arg;
    return *this;
  }
  Type & set__behavior_faults(
    const std::vector<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::BehaviorFault_<ContainerAllocator>>> & _arg)
  {
    this->behavior_faults = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RobotImpairedState
    std::shared_ptr<bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RobotImpairedState
    std::shared_ptr<bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotImpairedState_ & other) const
  {
    if (this->impaired_status != other.impaired_status) {
      return false;
    }
    if (this->system_faults != other.system_faults) {
      return false;
    }
    if (this->service_faults != other.service_faults) {
      return false;
    }
    if (this->behavior_faults != other.behavior_faults) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotImpairedState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotImpairedState_

// alias to use template instance with default allocator
using RobotImpairedState =
  bosdyn_msgs::msg::RobotImpairedState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_IMPAIRED_STATE__STRUCT_HPP_
