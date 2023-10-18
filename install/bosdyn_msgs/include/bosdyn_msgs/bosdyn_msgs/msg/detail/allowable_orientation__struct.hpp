// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AllowableOrientation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'constraint'
#include "bosdyn_msgs/msg/detail/allowable_orientation_one_of_constraint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AllowableOrientation __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AllowableOrientation __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllowableOrientation_
{
  using Type = AllowableOrientation_<ContainerAllocator>;

  explicit AllowableOrientation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : constraint(_init)
  {
    (void)_init;
  }

  explicit AllowableOrientation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : constraint(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _constraint_type =
    bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator>;
  _constraint_type constraint;

  // setters for named parameter idiom
  Type & set__constraint(
    const bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator> & _arg)
  {
    this->constraint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AllowableOrientation
    std::shared_ptr<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AllowableOrientation
    std::shared_ptr<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllowableOrientation_ & other) const
  {
    if (this->constraint != other.constraint) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllowableOrientation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllowableOrientation_

// alias to use template instance with default allocator
using AllowableOrientation =
  bosdyn_msgs::msg::AllowableOrientation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION__STRUCT_HPP_
