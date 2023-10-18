// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StraightStaircaseStair.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_STAIR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_STAIR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StraightStaircaseStair __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StraightStaircaseStair __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StraightStaircaseStair_
{
  using Type = StraightStaircaseStair_<ContainerAllocator>;

  explicit StraightStaircaseStair_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rise = 0.0f;
      this->run = 0.0f;
    }
  }

  explicit StraightStaircaseStair_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rise = 0.0f;
      this->run = 0.0f;
    }
  }

  // field types and members
  using _rise_type =
    float;
  _rise_type rise;
  using _run_type =
    float;
  _run_type run;

  // setters for named parameter idiom
  Type & set__rise(
    const float & _arg)
  {
    this->rise = _arg;
    return *this;
  }
  Type & set__run(
    const float & _arg)
  {
    this->run = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StraightStaircaseStair
    std::shared_ptr<bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StraightStaircaseStair
    std::shared_ptr<bosdyn_msgs::msg::StraightStaircaseStair_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StraightStaircaseStair_ & other) const
  {
    if (this->rise != other.rise) {
      return false;
    }
    if (this->run != other.run) {
      return false;
    }
    return true;
  }
  bool operator!=(const StraightStaircaseStair_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StraightStaircaseStair_

// alias to use template instance with default allocator
using StraightStaircaseStair =
  bosdyn_msgs::msg::StraightStaircaseStair_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_STAIR__STRUCT_HPP_
