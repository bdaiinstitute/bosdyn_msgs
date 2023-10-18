// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandCylindricalVelocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'linear_velocity'
#include "bosdyn_msgs/msg/detail/cylindrical_coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandCylindricalVelocity __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandCylindricalVelocity __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmVelocityCommandCylindricalVelocity_
{
  using Type = ArmVelocityCommandCylindricalVelocity_<ContainerAllocator>;

  explicit ArmVelocityCommandCylindricalVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity_is_set = false;
      this->max_linear_velocity = 0.0;
      this->max_linear_velocity_is_set = false;
    }
  }

  explicit ArmVelocityCommandCylindricalVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity_is_set = false;
      this->max_linear_velocity = 0.0;
      this->max_linear_velocity_is_set = false;
    }
  }

  // field types and members
  using _linear_velocity_type =
    bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator>;
  _linear_velocity_type linear_velocity;
  using _linear_velocity_is_set_type =
    bool;
  _linear_velocity_is_set_type linear_velocity_is_set;
  using _max_linear_velocity_type =
    double;
  _max_linear_velocity_type max_linear_velocity;
  using _max_linear_velocity_is_set_type =
    bool;
  _max_linear_velocity_is_set_type max_linear_velocity_is_set;

  // setters for named parameter idiom
  Type & set__linear_velocity(
    const bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator> & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__linear_velocity_is_set(
    const bool & _arg)
  {
    this->linear_velocity_is_set = _arg;
    return *this;
  }
  Type & set__max_linear_velocity(
    const double & _arg)
  {
    this->max_linear_velocity = _arg;
    return *this;
  }
  Type & set__max_linear_velocity_is_set(
    const bool & _arg)
  {
    this->max_linear_velocity_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandCylindricalVelocity
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandCylindricalVelocity
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVelocityCommandCylindricalVelocity_ & other) const
  {
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->linear_velocity_is_set != other.linear_velocity_is_set) {
      return false;
    }
    if (this->max_linear_velocity != other.max_linear_velocity) {
      return false;
    }
    if (this->max_linear_velocity_is_set != other.max_linear_velocity_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVelocityCommandCylindricalVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVelocityCommandCylindricalVelocity_

// alias to use template instance with default allocator
using ArmVelocityCommandCylindricalVelocity =
  bosdyn_msgs::msg::ArmVelocityCommandCylindricalVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CYLINDRICAL_VELOCITY__STRUCT_HPP_
