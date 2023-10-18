// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RouteFollowingParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'new_cmd_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_start_route_behavior__struct.hpp"
// Member 'existing_cmd_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_resume_behavior__struct.hpp"
// Member 'route_blocked_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_route_blocked_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RouteFollowingParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RouteFollowingParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RouteFollowingParams_
{
  using Type = RouteFollowingParams_<ContainerAllocator>;

  explicit RouteFollowingParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : new_cmd_behavior(_init),
    existing_cmd_behavior(_init),
    route_blocked_behavior(_init)
  {
    (void)_init;
  }

  explicit RouteFollowingParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : new_cmd_behavior(_alloc, _init),
    existing_cmd_behavior(_alloc, _init),
    route_blocked_behavior(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _new_cmd_behavior_type =
    bosdyn_msgs::msg::RouteFollowingParamsStartRouteBehavior_<ContainerAllocator>;
  _new_cmd_behavior_type new_cmd_behavior;
  using _existing_cmd_behavior_type =
    bosdyn_msgs::msg::RouteFollowingParamsResumeBehavior_<ContainerAllocator>;
  _existing_cmd_behavior_type existing_cmd_behavior;
  using _route_blocked_behavior_type =
    bosdyn_msgs::msg::RouteFollowingParamsRouteBlockedBehavior_<ContainerAllocator>;
  _route_blocked_behavior_type route_blocked_behavior;

  // setters for named parameter idiom
  Type & set__new_cmd_behavior(
    const bosdyn_msgs::msg::RouteFollowingParamsStartRouteBehavior_<ContainerAllocator> & _arg)
  {
    this->new_cmd_behavior = _arg;
    return *this;
  }
  Type & set__existing_cmd_behavior(
    const bosdyn_msgs::msg::RouteFollowingParamsResumeBehavior_<ContainerAllocator> & _arg)
  {
    this->existing_cmd_behavior = _arg;
    return *this;
  }
  Type & set__route_blocked_behavior(
    const bosdyn_msgs::msg::RouteFollowingParamsRouteBlockedBehavior_<ContainerAllocator> & _arg)
  {
    this->route_blocked_behavior = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RouteFollowingParams
    std::shared_ptr<bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RouteFollowingParams
    std::shared_ptr<bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RouteFollowingParams_ & other) const
  {
    if (this->new_cmd_behavior != other.new_cmd_behavior) {
      return false;
    }
    if (this->existing_cmd_behavior != other.existing_cmd_behavior) {
      return false;
    }
    if (this->route_blocked_behavior != other.route_blocked_behavior) {
      return false;
    }
    return true;
  }
  bool operator!=(const RouteFollowingParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RouteFollowingParams_

// alias to use template instance with default allocator
using RouteFollowingParams =
  bosdyn_msgs::msg::RouteFollowingParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS__STRUCT_HPP_
