// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionIdQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_ID_QUERY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_ID_QUERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'action_ids'
#include "bosdyn_msgs/msg/detail/capture_action_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionIdQuery __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionIdQuery __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionIdQuery_
{
  using Type = ActionIdQuery_<ContainerAllocator>;

  explicit ActionIdQuery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ActionIdQuery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _action_ids_type =
    std::vector<bosdyn_msgs::msg::CaptureActionId_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::CaptureActionId_<ContainerAllocator>>>;
  _action_ids_type action_ids;

  // setters for named parameter idiom
  Type & set__action_ids(
    const std::vector<bosdyn_msgs::msg::CaptureActionId_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::CaptureActionId_<ContainerAllocator>>> & _arg)
  {
    this->action_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionIdQuery
    std::shared_ptr<bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionIdQuery
    std::shared_ptr<bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionIdQuery_ & other) const
  {
    if (this->action_ids != other.action_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionIdQuery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionIdQuery_

// alias to use template instance with default allocator
using ActionIdQuery =
  bosdyn_msgs::msg::ActionIdQuery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_ID_QUERY__STRUCT_HPP_
