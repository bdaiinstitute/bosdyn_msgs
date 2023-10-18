// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
#include "bosdyn_msgs/msg/detail/target_one_of_target__struct.hpp"
// Member 'relocalize'
#include "bosdyn_msgs/msg/detail/target_relocalize__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Target __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Target __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Target_
{
  using Type = Target_<ContainerAllocator>;

  explicit Target_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init),
    relocalize(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relocalize_is_set = false;
    }
  }

  explicit Target_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init),
    relocalize(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relocalize_is_set = false;
    }
  }

  // field types and members
  using _target_type =
    bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator>;
  _target_type target;
  using _relocalize_type =
    bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator>;
  _relocalize_type relocalize;
  using _relocalize_is_set_type =
    bool;
  _relocalize_is_set_type relocalize_is_set;

  // setters for named parameter idiom
  Type & set__target(
    const bosdyn_msgs::msg::TargetOneOfTarget_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__relocalize(
    const bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator> & _arg)
  {
    this->relocalize = _arg;
    return *this;
  }
  Type & set__relocalize_is_set(
    const bool & _arg)
  {
    this->relocalize_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Target_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Target_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Target_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Target_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Target_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Target_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Target_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Target_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Target_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Target_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Target
    std::shared_ptr<bosdyn_msgs::msg::Target_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Target
    std::shared_ptr<bosdyn_msgs::msg::Target_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Target_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    if (this->relocalize != other.relocalize) {
      return false;
    }
    if (this->relocalize_is_set != other.relocalize_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Target_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Target_

// alias to use template instance with default allocator
using Target =
  bosdyn_msgs::msg::Target_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET__STRUCT_HPP_
