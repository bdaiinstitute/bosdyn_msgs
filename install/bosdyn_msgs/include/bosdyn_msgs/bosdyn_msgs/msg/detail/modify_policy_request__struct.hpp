// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ModifyPolicyRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'to_add'
#include "bosdyn_msgs/msg/detail/policy__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ModifyPolicyRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ModifyPolicyRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModifyPolicyRequest_
{
  using Type = ModifyPolicyRequest_<ContainerAllocator>;

  explicit ModifyPolicyRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    to_add(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->to_add_is_set = false;
    }
  }

  explicit ModifyPolicyRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    to_add(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->to_add_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _to_add_type =
    bosdyn_msgs::msg::Policy_<ContainerAllocator>;
  _to_add_type to_add;
  using _to_add_is_set_type =
    bool;
  _to_add_is_set_type to_add_is_set;
  using _policy_ids_to_remove_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _policy_ids_to_remove_type policy_ids_to_remove;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__to_add(
    const bosdyn_msgs::msg::Policy_<ContainerAllocator> & _arg)
  {
    this->to_add = _arg;
    return *this;
  }
  Type & set__to_add_is_set(
    const bool & _arg)
  {
    this->to_add_is_set = _arg;
    return *this;
  }
  Type & set__policy_ids_to_remove(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->policy_ids_to_remove = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ModifyPolicyRequest
    std::shared_ptr<bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ModifyPolicyRequest
    std::shared_ptr<bosdyn_msgs::msg::ModifyPolicyRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModifyPolicyRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->to_add != other.to_add) {
      return false;
    }
    if (this->to_add_is_set != other.to_add_is_set) {
      return false;
    }
    if (this->policy_ids_to_remove != other.policy_ids_to_remove) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModifyPolicyRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModifyPolicyRequest_

// alias to use template instance with default allocator
using ModifyPolicyRequest =
  bosdyn_msgs::msg::ModifyPolicyRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_REQUEST__STRUCT_HPP_
