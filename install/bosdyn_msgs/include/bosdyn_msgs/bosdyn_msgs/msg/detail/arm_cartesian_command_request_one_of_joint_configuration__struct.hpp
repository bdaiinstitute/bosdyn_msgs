// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmCartesianCommandRequestOneOfJointConfiguration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST_ONE_OF_JOINT_CONFIGURATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST_ONE_OF_JOINT_CONFIGURATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'preferred_joint_configuration'
#include "bosdyn_msgs/msg/detail/arm_joint_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmCartesianCommandRequestOneOfJointConfiguration_
{
  using Type = ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator>;

  explicit ArmCartesianCommandRequestOneOfJointConfiguration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preferred_joint_configuration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force_remain_near_current_joint_configuration = false;
      this->joint_configuration_choice = 0;
    }
  }

  explicit ArmCartesianCommandRequestOneOfJointConfiguration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preferred_joint_configuration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force_remain_near_current_joint_configuration = false;
      this->joint_configuration_choice = 0;
    }
  }

  // field types and members
  using _force_remain_near_current_joint_configuration_type =
    bool;
  _force_remain_near_current_joint_configuration_type force_remain_near_current_joint_configuration;
  using _preferred_joint_configuration_type =
    bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator>;
  _preferred_joint_configuration_type preferred_joint_configuration;
  using _joint_configuration_choice_type =
    int8_t;
  _joint_configuration_choice_type joint_configuration_choice;

  // setters for named parameter idiom
  Type & set__force_remain_near_current_joint_configuration(
    const bool & _arg)
  {
    this->force_remain_near_current_joint_configuration = _arg;
    return *this;
  }
  Type & set__preferred_joint_configuration(
    const bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator> & _arg)
  {
    this->preferred_joint_configuration = _arg;
    return *this;
  }
  Type & set__joint_configuration_choice(
    const int8_t & _arg)
  {
    this->joint_configuration_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t JOINT_CONFIGURATION_NOT_SET =
    0;
  static constexpr int8_t JOINT_CONFIGURATION_FORCE_REMAIN_NEAR_CURRENT_JOINT_CONFIGURATION_SET =
    1;
  static constexpr int8_t JOINT_CONFIGURATION_PREFERRED_JOINT_CONFIGURATION_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration
    std::shared_ptr<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration
    std::shared_ptr<bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmCartesianCommandRequestOneOfJointConfiguration_ & other) const
  {
    if (this->force_remain_near_current_joint_configuration != other.force_remain_near_current_joint_configuration) {
      return false;
    }
    if (this->preferred_joint_configuration != other.preferred_joint_configuration) {
      return false;
    }
    if (this->joint_configuration_choice != other.joint_configuration_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmCartesianCommandRequestOneOfJointConfiguration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmCartesianCommandRequestOneOfJointConfiguration_

// alias to use template instance with default allocator
using ArmCartesianCommandRequestOneOfJointConfiguration =
  bosdyn_msgs::msg::ArmCartesianCommandRequestOneOfJointConfiguration_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator>::JOINT_CONFIGURATION_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator>::JOINT_CONFIGURATION_FORCE_REMAIN_NEAR_CURRENT_JOINT_CONFIGURATION_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArmCartesianCommandRequestOneOfJointConfiguration_<ContainerAllocator>::JOINT_CONFIGURATION_PREFERRED_JOINT_CONFIGURATION_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_CARTESIAN_COMMAND_REQUEST_ONE_OF_JOINT_CONFIGURATION__STRUCT_HPP_
