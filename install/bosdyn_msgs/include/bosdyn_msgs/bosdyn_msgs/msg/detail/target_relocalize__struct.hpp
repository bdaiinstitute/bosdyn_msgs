// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TargetRelocalize.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET_RELOCALIZE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET_RELOCALIZE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'set_localization_request'
#include "bosdyn_msgs/msg/detail/set_localization_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TargetRelocalize __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TargetRelocalize __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetRelocalize_
{
  using Type = TargetRelocalize_<ContainerAllocator>;

  explicit TargetRelocalize_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : set_localization_request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_localization_request_is_set = false;
    }
  }

  explicit TargetRelocalize_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : set_localization_request(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_localization_request_is_set = false;
    }
  }

  // field types and members
  using _set_localization_request_type =
    bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator>;
  _set_localization_request_type set_localization_request;
  using _set_localization_request_is_set_type =
    bool;
  _set_localization_request_is_set_type set_localization_request_is_set;

  // setters for named parameter idiom
  Type & set__set_localization_request(
    const bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator> & _arg)
  {
    this->set_localization_request = _arg;
    return *this;
  }
  Type & set__set_localization_request_is_set(
    const bool & _arg)
  {
    this->set_localization_request_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TargetRelocalize
    std::shared_ptr<bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TargetRelocalize
    std::shared_ptr<bosdyn_msgs::msg::TargetRelocalize_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetRelocalize_ & other) const
  {
    if (this->set_localization_request != other.set_localization_request) {
      return false;
    }
    if (this->set_localization_request_is_set != other.set_localization_request_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetRelocalize_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetRelocalize_

// alias to use template instance with default allocator
using TargetRelocalize =
  bosdyn_msgs::msg::TargetRelocalize_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET_RELOCALIZE__STRUCT_HPP_
