// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmParams_
{
  using Type = ArmParams_<ContainerAllocator>;

  explicit ArmParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disable_body_force_limiter = false;
      this->disable_body_force_limiter_is_set = false;
    }
  }

  explicit ArmParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disable_body_force_limiter = false;
      this->disable_body_force_limiter_is_set = false;
    }
  }

  // field types and members
  using _disable_body_force_limiter_type =
    bool;
  _disable_body_force_limiter_type disable_body_force_limiter;
  using _disable_body_force_limiter_is_set_type =
    bool;
  _disable_body_force_limiter_is_set_type disable_body_force_limiter_is_set;

  // setters for named parameter idiom
  Type & set__disable_body_force_limiter(
    const bool & _arg)
  {
    this->disable_body_force_limiter = _arg;
    return *this;
  }
  Type & set__disable_body_force_limiter_is_set(
    const bool & _arg)
  {
    this->disable_body_force_limiter_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmParams
    std::shared_ptr<bosdyn_msgs::msg::ArmParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmParams
    std::shared_ptr<bosdyn_msgs::msg::ArmParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmParams_ & other) const
  {
    if (this->disable_body_force_limiter != other.disable_body_force_limiter) {
      return false;
    }
    if (this->disable_body_force_limiter_is_set != other.disable_body_force_limiter_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmParams_

// alias to use template instance with default allocator
using ArmParams =
  bosdyn_msgs::msg::ArmParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_PARAMS__STRUCT_HPP_
