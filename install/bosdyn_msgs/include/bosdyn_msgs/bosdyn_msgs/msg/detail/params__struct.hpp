// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Params.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'max_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Params __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Params __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Params_
{
  using Type = Params_<ContainerAllocator>;

  explicit Params_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : max_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_displacement = 0.0f;
      this->max_duration_is_set = false;
    }
  }

  explicit Params_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : max_duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_displacement = 0.0f;
      this->max_duration_is_set = false;
    }
  }

  // field types and members
  using _max_displacement_type =
    float;
  _max_displacement_type max_displacement;
  using _max_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _max_duration_type max_duration;
  using _max_duration_is_set_type =
    bool;
  _max_duration_is_set_type max_duration_is_set;

  // setters for named parameter idiom
  Type & set__max_displacement(
    const float & _arg)
  {
    this->max_displacement = _arg;
    return *this;
  }
  Type & set__max_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->max_duration = _arg;
    return *this;
  }
  Type & set__max_duration_is_set(
    const bool & _arg)
  {
    this->max_duration_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Params_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Params_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Params_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Params_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Params_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Params_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Params_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Params_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Params_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Params_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Params
    std::shared_ptr<bosdyn_msgs::msg::Params_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Params
    std::shared_ptr<bosdyn_msgs::msg::Params_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Params_ & other) const
  {
    if (this->max_displacement != other.max_displacement) {
      return false;
    }
    if (this->max_duration != other.max_duration) {
      return false;
    }
    if (this->max_duration_is_set != other.max_duration_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Params_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Params_

// alias to use template instance with default allocator
using Params =
  bosdyn_msgs::msg::Params_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARAMS__STRUCT_HPP_
