// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ClearBehaviorFaults.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULTS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ClearBehaviorFaults __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ClearBehaviorFaults __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClearBehaviorFaults_
{
  using Type = ClearBehaviorFaults_<ContainerAllocator>;

  explicit ClearBehaviorFaults_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->robot_state_blackboard_name = "";
      this->cleared_cause_fall_blackboard_name = "";
      this->cleared_cause_hardware_blackboard_name = "";
      this->cleared_cause_lease_timeout_blackboard_name = "";
    }
  }

  explicit ClearBehaviorFaults_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    host(_alloc),
    robot_state_blackboard_name(_alloc),
    cleared_cause_fall_blackboard_name(_alloc),
    cleared_cause_hardware_blackboard_name(_alloc),
    cleared_cause_lease_timeout_blackboard_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->robot_state_blackboard_name = "";
      this->cleared_cause_fall_blackboard_name = "";
      this->cleared_cause_hardware_blackboard_name = "";
      this->cleared_cause_lease_timeout_blackboard_name = "";
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _robot_state_blackboard_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_state_blackboard_name_type robot_state_blackboard_name;
  using _cleared_cause_fall_blackboard_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cleared_cause_fall_blackboard_name_type cleared_cause_fall_blackboard_name;
  using _cleared_cause_hardware_blackboard_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cleared_cause_hardware_blackboard_name_type cleared_cause_hardware_blackboard_name;
  using _cleared_cause_lease_timeout_blackboard_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cleared_cause_lease_timeout_blackboard_name_type cleared_cause_lease_timeout_blackboard_name;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->host = _arg;
    return *this;
  }
  Type & set__robot_state_blackboard_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_state_blackboard_name = _arg;
    return *this;
  }
  Type & set__cleared_cause_fall_blackboard_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cleared_cause_fall_blackboard_name = _arg;
    return *this;
  }
  Type & set__cleared_cause_hardware_blackboard_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cleared_cause_hardware_blackboard_name = _arg;
    return *this;
  }
  Type & set__cleared_cause_lease_timeout_blackboard_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cleared_cause_lease_timeout_blackboard_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ClearBehaviorFaults
    std::shared_ptr<bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ClearBehaviorFaults
    std::shared_ptr<bosdyn_msgs::msg::ClearBehaviorFaults_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearBehaviorFaults_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->robot_state_blackboard_name != other.robot_state_blackboard_name) {
      return false;
    }
    if (this->cleared_cause_fall_blackboard_name != other.cleared_cause_fall_blackboard_name) {
      return false;
    }
    if (this->cleared_cause_hardware_blackboard_name != other.cleared_cause_hardware_blackboard_name) {
      return false;
    }
    if (this->cleared_cause_lease_timeout_blackboard_name != other.cleared_cause_lease_timeout_blackboard_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearBehaviorFaults_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearBehaviorFaults_

// alias to use template instance with default allocator
using ClearBehaviorFaults =
  bosdyn_msgs::msg::ClearBehaviorFaults_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULTS__STRUCT_HPP_
