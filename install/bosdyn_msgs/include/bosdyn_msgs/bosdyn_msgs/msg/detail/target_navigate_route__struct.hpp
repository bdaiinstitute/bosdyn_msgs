// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TargetNavigateRoute.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET_NAVIGATE_ROUTE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET_NAVIGATE_ROUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'route'
#include "bosdyn_msgs/msg/detail/route__struct.hpp"
// Member 'travel_params'
#include "bosdyn_msgs/msg/detail/travel_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TargetNavigateRoute __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TargetNavigateRoute __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetNavigateRoute_
{
  using Type = TargetNavigateRoute_<ContainerAllocator>;

  explicit TargetNavigateRoute_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route(_init),
    travel_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_is_set = false;
      this->travel_params_is_set = false;
    }
  }

  explicit TargetNavigateRoute_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route(_alloc, _init),
    travel_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_is_set = false;
      this->travel_params_is_set = false;
    }
  }

  // field types and members
  using _route_type =
    bosdyn_msgs::msg::Route_<ContainerAllocator>;
  _route_type route;
  using _route_is_set_type =
    bool;
  _route_is_set_type route_is_set;
  using _travel_params_type =
    bosdyn_msgs::msg::TravelParams_<ContainerAllocator>;
  _travel_params_type travel_params;
  using _travel_params_is_set_type =
    bool;
  _travel_params_is_set_type travel_params_is_set;

  // setters for named parameter idiom
  Type & set__route(
    const bosdyn_msgs::msg::Route_<ContainerAllocator> & _arg)
  {
    this->route = _arg;
    return *this;
  }
  Type & set__route_is_set(
    const bool & _arg)
  {
    this->route_is_set = _arg;
    return *this;
  }
  Type & set__travel_params(
    const bosdyn_msgs::msg::TravelParams_<ContainerAllocator> & _arg)
  {
    this->travel_params = _arg;
    return *this;
  }
  Type & set__travel_params_is_set(
    const bool & _arg)
  {
    this->travel_params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TargetNavigateRoute
    std::shared_ptr<bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TargetNavigateRoute
    std::shared_ptr<bosdyn_msgs::msg::TargetNavigateRoute_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetNavigateRoute_ & other) const
  {
    if (this->route != other.route) {
      return false;
    }
    if (this->route_is_set != other.route_is_set) {
      return false;
    }
    if (this->travel_params != other.travel_params) {
      return false;
    }
    if (this->travel_params_is_set != other.travel_params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetNavigateRoute_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetNavigateRoute_

// alias to use template instance with default allocator
using TargetNavigateRoute =
  bosdyn_msgs::msg::TargetNavigateRoute_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET_NAVIGATE_ROUTE__STRUCT_HPP_
