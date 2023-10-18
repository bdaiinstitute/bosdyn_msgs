// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MutateWorldObjectRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST__STRUCT_HPP_

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
// Member 'mutation'
#include "bosdyn_msgs/msg/detail/mutate_world_object_request_mutation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MutateWorldObjectRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MutateWorldObjectRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MutateWorldObjectRequest_
{
  using Type = MutateWorldObjectRequest_<ContainerAllocator>;

  explicit MutateWorldObjectRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    mutation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->mutation_is_set = false;
    }
  }

  explicit MutateWorldObjectRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mutation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->mutation_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _mutation_type =
    bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator>;
  _mutation_type mutation;
  using _mutation_is_set_type =
    bool;
  _mutation_is_set_type mutation_is_set;

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
  Type & set__mutation(
    const bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator> & _arg)
  {
    this->mutation = _arg;
    return *this;
  }
  Type & set__mutation_is_set(
    const bool & _arg)
  {
    this->mutation_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MutateWorldObjectRequest
    std::shared_ptr<bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MutateWorldObjectRequest
    std::shared_ptr<bosdyn_msgs::msg::MutateWorldObjectRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MutateWorldObjectRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->mutation != other.mutation) {
      return false;
    }
    if (this->mutation_is_set != other.mutation_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const MutateWorldObjectRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MutateWorldObjectRequest_

// alias to use template instance with default allocator
using MutateWorldObjectRequest =
  bosdyn_msgs::msg::MutateWorldObjectRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST__STRUCT_HPP_
