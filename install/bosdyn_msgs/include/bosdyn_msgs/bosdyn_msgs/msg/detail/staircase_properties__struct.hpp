// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StaircaseProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_PROPERTIES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'staircase'
#include "bosdyn_msgs/msg/detail/staircase__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StaircaseProperties __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StaircaseProperties __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaircaseProperties_
{
  using Type = StaircaseProperties_<ContainerAllocator>;

  explicit StaircaseProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : staircase(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->staircase_is_set = false;
    }
  }

  explicit StaircaseProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : staircase(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->staircase_is_set = false;
    }
  }

  // field types and members
  using _staircase_type =
    bosdyn_msgs::msg::Staircase_<ContainerAllocator>;
  _staircase_type staircase;
  using _staircase_is_set_type =
    bool;
  _staircase_is_set_type staircase_is_set;

  // setters for named parameter idiom
  Type & set__staircase(
    const bosdyn_msgs::msg::Staircase_<ContainerAllocator> & _arg)
  {
    this->staircase = _arg;
    return *this;
  }
  Type & set__staircase_is_set(
    const bool & _arg)
  {
    this->staircase_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StaircaseProperties
    std::shared_ptr<bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StaircaseProperties
    std::shared_ptr<bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaircaseProperties_ & other) const
  {
    if (this->staircase != other.staircase) {
      return false;
    }
    if (this->staircase_is_set != other.staircase_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaircaseProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaircaseProperties_

// alias to use template instance with default allocator
using StaircaseProperties =
  bosdyn_msgs::msg::StaircaseProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_PROPERTIES__STRUCT_HPP_
