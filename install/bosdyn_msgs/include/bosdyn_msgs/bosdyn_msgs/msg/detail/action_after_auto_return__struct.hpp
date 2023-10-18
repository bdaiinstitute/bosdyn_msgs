// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionAfterAutoReturn.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_AUTO_RETURN__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_AUTO_RETURN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"
// Member 'params'
#include "bosdyn_msgs/msg/detail/params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionAfterAutoReturn __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionAfterAutoReturn __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionAfterAutoReturn_
{
  using Type = ActionAfterAutoReturn_<ContainerAllocator>;

  explicit ActionAfterAutoReturn_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->params_is_set = false;
    }
  }

  explicit ActionAfterAutoReturn_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->params_is_set = false;
    }
  }

  // field types and members
  using _leases_type =
    std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>>;
  _leases_type leases;
  using _params_type =
    bosdyn_msgs::msg::Params_<ContainerAllocator>;
  _params_type params;
  using _params_is_set_type =
    bool;
  _params_is_set_type params_is_set;

  // setters for named parameter idiom
  Type & set__leases(
    const std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>> & _arg)
  {
    this->leases = _arg;
    return *this;
  }
  Type & set__params(
    const bosdyn_msgs::msg::Params_<ContainerAllocator> & _arg)
  {
    this->params = _arg;
    return *this;
  }
  Type & set__params_is_set(
    const bool & _arg)
  {
    this->params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionAfterAutoReturn
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionAfterAutoReturn
    std::shared_ptr<bosdyn_msgs::msg::ActionAfterAutoReturn_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionAfterAutoReturn_ & other) const
  {
    if (this->leases != other.leases) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    if (this->params_is_set != other.params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionAfterAutoReturn_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionAfterAutoReturn_

// alias to use template instance with default allocator
using ActionAfterAutoReturn =
  bosdyn_msgs::msg::ActionAfterAutoReturn_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_AUTO_RETURN__STRUCT_HPP_
