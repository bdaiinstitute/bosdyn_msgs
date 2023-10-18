// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LoadAutowalkRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_REQUEST__STRUCT_HPP_

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
// Member 'walk'
#include "bosdyn_msgs/msg/detail/walk__struct.hpp"
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LoadAutowalkRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LoadAutowalkRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoadAutowalkRequest_
{
  using Type = LoadAutowalkRequest_<ContainerAllocator>;

  explicit LoadAutowalkRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    walk(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->walk_is_set = false;
      this->treat_warnings_as_errors = false;
    }
  }

  explicit LoadAutowalkRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    walk(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->walk_is_set = false;
      this->treat_warnings_as_errors = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _walk_type =
    bosdyn_msgs::msg::Walk_<ContainerAllocator>;
  _walk_type walk;
  using _walk_is_set_type =
    bool;
  _walk_is_set_type walk_is_set;
  using _leases_type =
    std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>>;
  _leases_type leases;
  using _treat_warnings_as_errors_type =
    bool;
  _treat_warnings_as_errors_type treat_warnings_as_errors;

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
  Type & set__walk(
    const bosdyn_msgs::msg::Walk_<ContainerAllocator> & _arg)
  {
    this->walk = _arg;
    return *this;
  }
  Type & set__walk_is_set(
    const bool & _arg)
  {
    this->walk_is_set = _arg;
    return *this;
  }
  Type & set__leases(
    const std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>> & _arg)
  {
    this->leases = _arg;
    return *this;
  }
  Type & set__treat_warnings_as_errors(
    const bool & _arg)
  {
    this->treat_warnings_as_errors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LoadAutowalkRequest
    std::shared_ptr<bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LoadAutowalkRequest
    std::shared_ptr<bosdyn_msgs::msg::LoadAutowalkRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadAutowalkRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->walk != other.walk) {
      return false;
    }
    if (this->walk_is_set != other.walk_is_set) {
      return false;
    }
    if (this->leases != other.leases) {
      return false;
    }
    if (this->treat_warnings_as_errors != other.treat_warnings_as_errors) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadAutowalkRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadAutowalkRequest_

// alias to use template instance with default allocator
using LoadAutowalkRequest =
  bosdyn_msgs::msg::LoadAutowalkRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_REQUEST__STRUCT_HPP_
