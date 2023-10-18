// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MutateWorldObjectRequestMutation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST_MUTATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST_MUTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'action'
#include "bosdyn_msgs/msg/detail/mutate_world_object_request_action__struct.hpp"
// Member 'object'
#include "bosdyn_msgs/msg/detail/world_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MutateWorldObjectRequestMutation __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MutateWorldObjectRequestMutation __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MutateWorldObjectRequestMutation_
{
  using Type = MutateWorldObjectRequestMutation_<ContainerAllocator>;

  explicit MutateWorldObjectRequestMutation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_init),
    object(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_is_set = false;
    }
  }

  explicit MutateWorldObjectRequestMutation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc, _init),
    object(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_is_set = false;
    }
  }

  // field types and members
  using _action_type =
    bosdyn_msgs::msg::MutateWorldObjectRequestAction_<ContainerAllocator>;
  _action_type action;
  using _object_type =
    bosdyn_msgs::msg::WorldObject_<ContainerAllocator>;
  _object_type object;
  using _object_is_set_type =
    bool;
  _object_is_set_type object_is_set;

  // setters for named parameter idiom
  Type & set__action(
    const bosdyn_msgs::msg::MutateWorldObjectRequestAction_<ContainerAllocator> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__object(
    const bosdyn_msgs::msg::WorldObject_<ContainerAllocator> & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__object_is_set(
    const bool & _arg)
  {
    this->object_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MutateWorldObjectRequestMutation
    std::shared_ptr<bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MutateWorldObjectRequestMutation
    std::shared_ptr<bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MutateWorldObjectRequestMutation_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->object != other.object) {
      return false;
    }
    if (this->object_is_set != other.object_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const MutateWorldObjectRequestMutation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MutateWorldObjectRequestMutation_

// alias to use template instance with default allocator
using MutateWorldObjectRequestMutation =
  bosdyn_msgs::msg::MutateWorldObjectRequestMutation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST_MUTATION__STRUCT_HPP_
