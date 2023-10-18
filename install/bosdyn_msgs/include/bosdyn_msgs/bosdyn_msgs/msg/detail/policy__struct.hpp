// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Policy.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POLICY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POLICY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'actions'
#include "bosdyn_msgs/msg/detail/action_after__struct.hpp"
// Member 'associated_leases'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Policy __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Policy __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Policy_
{
  using Type = Policy_<ContainerAllocator>;

  explicit Policy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->user_id = "";
    }
  }

  explicit Policy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    user_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->user_id = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _actions_type =
    std::vector<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator>>>;
  _actions_type actions;
  using _associated_leases_type =
    std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>>;
  _associated_leases_type associated_leases;
  using _user_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_id_type user_id;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__actions(
    const std::vector<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ActionAfter_<ContainerAllocator>>> & _arg)
  {
    this->actions = _arg;
    return *this;
  }
  Type & set__associated_leases(
    const std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>> & _arg)
  {
    this->associated_leases = _arg;
    return *this;
  }
  Type & set__user_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Policy_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Policy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Policy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Policy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Policy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Policy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Policy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Policy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Policy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Policy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Policy
    std::shared_ptr<bosdyn_msgs::msg::Policy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Policy
    std::shared_ptr<bosdyn_msgs::msg::Policy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Policy_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->actions != other.actions) {
      return false;
    }
    if (this->associated_leases != other.associated_leases) {
      return false;
    }
    if (this->user_id != other.user_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Policy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Policy_

// alias to use template instance with default allocator
using Policy =
  bosdyn_msgs::msg::Policy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POLICY__STRUCT_HPP_
