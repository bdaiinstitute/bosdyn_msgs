// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmJointPosition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_POSITION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmJointPosition __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmJointPosition __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmJointPosition_
{
  using Type = ArmJointPosition_<ContainerAllocator>;

  explicit ArmJointPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sh0 = 0.0;
      this->sh0_is_set = false;
      this->sh1 = 0.0;
      this->sh1_is_set = false;
      this->el0 = 0.0;
      this->el0_is_set = false;
      this->el1 = 0.0;
      this->el1_is_set = false;
      this->wr0 = 0.0;
      this->wr0_is_set = false;
      this->wr1 = 0.0;
      this->wr1_is_set = false;
    }
  }

  explicit ArmJointPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sh0 = 0.0;
      this->sh0_is_set = false;
      this->sh1 = 0.0;
      this->sh1_is_set = false;
      this->el0 = 0.0;
      this->el0_is_set = false;
      this->el1 = 0.0;
      this->el1_is_set = false;
      this->wr0 = 0.0;
      this->wr0_is_set = false;
      this->wr1 = 0.0;
      this->wr1_is_set = false;
    }
  }

  // field types and members
  using _sh0_type =
    double;
  _sh0_type sh0;
  using _sh0_is_set_type =
    bool;
  _sh0_is_set_type sh0_is_set;
  using _sh1_type =
    double;
  _sh1_type sh1;
  using _sh1_is_set_type =
    bool;
  _sh1_is_set_type sh1_is_set;
  using _el0_type =
    double;
  _el0_type el0;
  using _el0_is_set_type =
    bool;
  _el0_is_set_type el0_is_set;
  using _el1_type =
    double;
  _el1_type el1;
  using _el1_is_set_type =
    bool;
  _el1_is_set_type el1_is_set;
  using _wr0_type =
    double;
  _wr0_type wr0;
  using _wr0_is_set_type =
    bool;
  _wr0_is_set_type wr0_is_set;
  using _wr1_type =
    double;
  _wr1_type wr1;
  using _wr1_is_set_type =
    bool;
  _wr1_is_set_type wr1_is_set;

  // setters for named parameter idiom
  Type & set__sh0(
    const double & _arg)
  {
    this->sh0 = _arg;
    return *this;
  }
  Type & set__sh0_is_set(
    const bool & _arg)
  {
    this->sh0_is_set = _arg;
    return *this;
  }
  Type & set__sh1(
    const double & _arg)
  {
    this->sh1 = _arg;
    return *this;
  }
  Type & set__sh1_is_set(
    const bool & _arg)
  {
    this->sh1_is_set = _arg;
    return *this;
  }
  Type & set__el0(
    const double & _arg)
  {
    this->el0 = _arg;
    return *this;
  }
  Type & set__el0_is_set(
    const bool & _arg)
  {
    this->el0_is_set = _arg;
    return *this;
  }
  Type & set__el1(
    const double & _arg)
  {
    this->el1 = _arg;
    return *this;
  }
  Type & set__el1_is_set(
    const bool & _arg)
  {
    this->el1_is_set = _arg;
    return *this;
  }
  Type & set__wr0(
    const double & _arg)
  {
    this->wr0 = _arg;
    return *this;
  }
  Type & set__wr0_is_set(
    const bool & _arg)
  {
    this->wr0_is_set = _arg;
    return *this;
  }
  Type & set__wr1(
    const double & _arg)
  {
    this->wr1 = _arg;
    return *this;
  }
  Type & set__wr1_is_set(
    const bool & _arg)
  {
    this->wr1_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmJointPosition
    std::shared_ptr<bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmJointPosition
    std::shared_ptr<bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmJointPosition_ & other) const
  {
    if (this->sh0 != other.sh0) {
      return false;
    }
    if (this->sh0_is_set != other.sh0_is_set) {
      return false;
    }
    if (this->sh1 != other.sh1) {
      return false;
    }
    if (this->sh1_is_set != other.sh1_is_set) {
      return false;
    }
    if (this->el0 != other.el0) {
      return false;
    }
    if (this->el0_is_set != other.el0_is_set) {
      return false;
    }
    if (this->el1 != other.el1) {
      return false;
    }
    if (this->el1_is_set != other.el1_is_set) {
      return false;
    }
    if (this->wr0 != other.wr0) {
      return false;
    }
    if (this->wr0_is_set != other.wr0_is_set) {
      return false;
    }
    if (this->wr1 != other.wr1) {
      return false;
    }
    if (this->wr1_is_set != other.wr1_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmJointPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmJointPosition_

// alias to use template instance with default allocator
using ArmJointPosition =
  bosdyn_msgs::msg::ArmJointPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_POSITION__STRUCT_HPP_
