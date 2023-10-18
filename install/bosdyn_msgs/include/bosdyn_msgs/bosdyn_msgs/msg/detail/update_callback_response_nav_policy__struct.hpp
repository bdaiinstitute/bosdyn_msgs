// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseNavPolicy.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'at_start'
// Member 'at_end'
#include "bosdyn_msgs/msg/detail/update_callback_response_nav_policy_option__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpdateCallbackResponseNavPolicy_
{
  using Type = UpdateCallbackResponseNavPolicy_<ContainerAllocator>;

  explicit UpdateCallbackResponseNavPolicy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : at_start(_init),
    at_end(_init)
  {
    (void)_init;
  }

  explicit UpdateCallbackResponseNavPolicy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : at_start(_alloc, _init),
    at_end(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _at_start_type =
    bosdyn_msgs::msg::UpdateCallbackResponseNavPolicyOption_<ContainerAllocator>;
  _at_start_type at_start;
  using _at_end_type =
    bosdyn_msgs::msg::UpdateCallbackResponseNavPolicyOption_<ContainerAllocator>;
  _at_end_type at_end;

  // setters for named parameter idiom
  Type & set__at_start(
    const bosdyn_msgs::msg::UpdateCallbackResponseNavPolicyOption_<ContainerAllocator> & _arg)
  {
    this->at_start = _arg;
    return *this;
  }
  Type & set__at_end(
    const bosdyn_msgs::msg::UpdateCallbackResponseNavPolicyOption_<ContainerAllocator> & _arg)
  {
    this->at_end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateCallbackResponseNavPolicy_ & other) const
  {
    if (this->at_start != other.at_start) {
      return false;
    }
    if (this->at_end != other.at_end) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateCallbackResponseNavPolicy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateCallbackResponseNavPolicy_

// alias to use template instance with default allocator
using UpdateCallbackResponseNavPolicy =
  bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__STRUCT_HPP_
