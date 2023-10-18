// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PtzDescriptionLimits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION_LIMITS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION_LIMITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PtzDescriptionLimits __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PtzDescriptionLimits __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PtzDescriptionLimits_
{
  using Type = PtzDescriptionLimits_<ContainerAllocator>;

  explicit PtzDescriptionLimits_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min = 0.0f;
      this->min_is_set = false;
      this->max = 0.0f;
      this->max_is_set = false;
    }
  }

  explicit PtzDescriptionLimits_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min = 0.0f;
      this->min_is_set = false;
      this->max = 0.0f;
      this->max_is_set = false;
    }
  }

  // field types and members
  using _min_type =
    float;
  _min_type min;
  using _min_is_set_type =
    bool;
  _min_is_set_type min_is_set;
  using _max_type =
    float;
  _max_type max;
  using _max_is_set_type =
    bool;
  _max_is_set_type max_is_set;

  // setters for named parameter idiom
  Type & set__min(
    const float & _arg)
  {
    this->min = _arg;
    return *this;
  }
  Type & set__min_is_set(
    const bool & _arg)
  {
    this->min_is_set = _arg;
    return *this;
  }
  Type & set__max(
    const float & _arg)
  {
    this->max = _arg;
    return *this;
  }
  Type & set__max_is_set(
    const bool & _arg)
  {
    this->max_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PtzDescriptionLimits
    std::shared_ptr<bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PtzDescriptionLimits
    std::shared_ptr<bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PtzDescriptionLimits_ & other) const
  {
    if (this->min != other.min) {
      return false;
    }
    if (this->min_is_set != other.min_is_set) {
      return false;
    }
    if (this->max != other.max) {
      return false;
    }
    if (this->max_is_set != other.max_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PtzDescriptionLimits_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PtzDescriptionLimits_

// alias to use template instance with default allocator
using PtzDescriptionLimits =
  bosdyn_msgs::msg::PtzDescriptionLimits_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION_LIMITS__STRUCT_HPP_
