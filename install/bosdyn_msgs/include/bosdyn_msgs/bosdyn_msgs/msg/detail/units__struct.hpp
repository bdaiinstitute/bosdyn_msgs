// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Units.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UNITS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UNITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'units'
#include "bosdyn_msgs/msg/detail/units_one_of_units__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Units __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Units __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Units_
{
  using Type = Units_<ContainerAllocator>;

  explicit Units_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : units(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_relative = false;
    }
  }

  explicit Units_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : units(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_relative = false;
    }
  }

  // field types and members
  using _units_type =
    bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator>;
  _units_type units;
  using _is_relative_type =
    bool;
  _is_relative_type is_relative;

  // setters for named parameter idiom
  Type & set__units(
    const bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator> & _arg)
  {
    this->units = _arg;
    return *this;
  }
  Type & set__is_relative(
    const bool & _arg)
  {
    this->is_relative = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Units_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Units_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Units_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Units_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Units_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Units_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Units_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Units_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Units_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Units_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Units
    std::shared_ptr<bosdyn_msgs::msg::Units_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Units
    std::shared_ptr<bosdyn_msgs::msg::Units_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Units_ & other) const
  {
    if (this->units != other.units) {
      return false;
    }
    if (this->is_relative != other.is_relative) {
      return false;
    }
    return true;
  }
  bool operator!=(const Units_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Units_

// alias to use template instance with default allocator
using Units =
  bosdyn_msgs::msg::Units_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UNITS__STRUCT_HPP_
