// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Bounds.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOUNDS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOUNDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Bounds __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Bounds __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bounds_
{
  using Type = Bounds_<ContainerAllocator>;

  explicit Bounds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lower = 0.0;
      this->upper = 0.0;
    }
  }

  explicit Bounds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lower = 0.0;
      this->upper = 0.0;
    }
  }

  // field types and members
  using _lower_type =
    double;
  _lower_type lower;
  using _upper_type =
    double;
  _upper_type upper;

  // setters for named parameter idiom
  Type & set__lower(
    const double & _arg)
  {
    this->lower = _arg;
    return *this;
  }
  Type & set__upper(
    const double & _arg)
  {
    this->upper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Bounds_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Bounds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Bounds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Bounds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Bounds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Bounds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Bounds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Bounds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Bounds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Bounds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Bounds
    std::shared_ptr<bosdyn_msgs::msg::Bounds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Bounds
    std::shared_ptr<bosdyn_msgs::msg::Bounds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bounds_ & other) const
  {
    if (this->lower != other.lower) {
      return false;
    }
    if (this->upper != other.upper) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bounds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bounds_

// alias to use template instance with default allocator
using Bounds =
  bosdyn_msgs::msg::Bounds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOUNDS__STRUCT_HPP_
