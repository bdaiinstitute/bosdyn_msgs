// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LeaseResource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LEASE_RESOURCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LEASE_RESOURCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"
// Member 'lease_owner'
#include "bosdyn_msgs/msg/detail/lease_owner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LeaseResource __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LeaseResource __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LeaseResource_
{
  using Type = LeaseResource_<ContainerAllocator>;

  explicit LeaseResource_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lease(_init),
    lease_owner(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resource = "";
      this->lease_is_set = false;
      this->lease_owner_is_set = false;
      this->is_stale = false;
    }
  }

  explicit LeaseResource_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : resource(_alloc),
    lease(_alloc, _init),
    lease_owner(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resource = "";
      this->lease_is_set = false;
      this->lease_owner_is_set = false;
      this->is_stale = false;
    }
  }

  // field types and members
  using _resource_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _resource_type resource;
  using _lease_type =
    bosdyn_msgs::msg::Lease_<ContainerAllocator>;
  _lease_type lease;
  using _lease_is_set_type =
    bool;
  _lease_is_set_type lease_is_set;
  using _lease_owner_type =
    bosdyn_msgs::msg::LeaseOwner_<ContainerAllocator>;
  _lease_owner_type lease_owner;
  using _lease_owner_is_set_type =
    bool;
  _lease_owner_is_set_type lease_owner_is_set;
  using _is_stale_type =
    bool;
  _is_stale_type is_stale;

  // setters for named parameter idiom
  Type & set__resource(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->resource = _arg;
    return *this;
  }
  Type & set__lease(
    const bosdyn_msgs::msg::Lease_<ContainerAllocator> & _arg)
  {
    this->lease = _arg;
    return *this;
  }
  Type & set__lease_is_set(
    const bool & _arg)
  {
    this->lease_is_set = _arg;
    return *this;
  }
  Type & set__lease_owner(
    const bosdyn_msgs::msg::LeaseOwner_<ContainerAllocator> & _arg)
  {
    this->lease_owner = _arg;
    return *this;
  }
  Type & set__lease_owner_is_set(
    const bool & _arg)
  {
    this->lease_owner_is_set = _arg;
    return *this;
  }
  Type & set__is_stale(
    const bool & _arg)
  {
    this->is_stale = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LeaseResource_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LeaseResource_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LeaseResource_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LeaseResource_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LeaseResource
    std::shared_ptr<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LeaseResource
    std::shared_ptr<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LeaseResource_ & other) const
  {
    if (this->resource != other.resource) {
      return false;
    }
    if (this->lease != other.lease) {
      return false;
    }
    if (this->lease_is_set != other.lease_is_set) {
      return false;
    }
    if (this->lease_owner != other.lease_owner) {
      return false;
    }
    if (this->lease_owner_is_set != other.lease_owner_is_set) {
      return false;
    }
    if (this->is_stale != other.is_stale) {
      return false;
    }
    return true;
  }
  bool operator!=(const LeaseResource_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LeaseResource_

// alias to use template instance with default allocator
using LeaseResource =
  bosdyn_msgs::msg::LeaseResource_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LEASE_RESOURCE__STRUCT_HPP_
