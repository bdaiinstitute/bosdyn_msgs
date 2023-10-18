// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SqueezeGrasp.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SQUEEZE_GRASP__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SQUEEZE_GRASP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SqueezeGrasp __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SqueezeGrasp __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SqueezeGrasp_
{
  using Type = SqueezeGrasp_<ContainerAllocator>;

  explicit SqueezeGrasp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->squeeze_grasp_disallowed = false;
    }
  }

  explicit SqueezeGrasp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->squeeze_grasp_disallowed = false;
    }
  }

  // field types and members
  using _squeeze_grasp_disallowed_type =
    bool;
  _squeeze_grasp_disallowed_type squeeze_grasp_disallowed;

  // setters for named parameter idiom
  Type & set__squeeze_grasp_disallowed(
    const bool & _arg)
  {
    this->squeeze_grasp_disallowed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SqueezeGrasp
    std::shared_ptr<bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SqueezeGrasp
    std::shared_ptr<bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SqueezeGrasp_ & other) const
  {
    if (this->squeeze_grasp_disallowed != other.squeeze_grasp_disallowed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SqueezeGrasp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SqueezeGrasp_

// alias to use template instance with default allocator
using SqueezeGrasp =
  bosdyn_msgs::msg::SqueezeGrasp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SQUEEZE_GRASP__STRUCT_HPP_
