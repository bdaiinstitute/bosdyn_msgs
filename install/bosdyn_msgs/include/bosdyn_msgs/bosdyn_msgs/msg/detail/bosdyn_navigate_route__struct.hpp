// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BosdynNavigateRoute.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_ROUTE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_ROUTE__STRUCT_HPP_

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
// Member 'route_follow_params'
#include "bosdyn_msgs/msg/detail/route_following_params__struct.hpp"
// Member 'travel_params'
#include "bosdyn_msgs/msg/detail/travel_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BosdynNavigateRoute __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BosdynNavigateRoute __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BosdynNavigateRoute_
{
  using Type = BosdynNavigateRoute_<ContainerAllocator>;

  explicit BosdynNavigateRoute_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route(_init),
    route_follow_params(_init),
    travel_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->route_is_set = false;
      this->route_follow_params_is_set = false;
      this->travel_params_is_set = false;
      this->navigation_feedback_response_blackboard_key = "";
      this->navigate_route_response_blackboard_key = "";
    }
  }

  explicit BosdynNavigateRoute_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    host(_alloc),
    route(_alloc, _init),
    route_follow_params(_alloc, _init),
    travel_params(_alloc, _init),
    navigation_feedback_response_blackboard_key(_alloc),
    navigate_route_response_blackboard_key(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->route_is_set = false;
      this->route_follow_params_is_set = false;
      this->travel_params_is_set = false;
      this->navigation_feedback_response_blackboard_key = "";
      this->navigate_route_response_blackboard_key = "";
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _route_type =
    bosdyn_msgs::msg::Route_<ContainerAllocator>;
  _route_type route;
  using _route_is_set_type =
    bool;
  _route_is_set_type route_is_set;
  using _route_follow_params_type =
    bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator>;
  _route_follow_params_type route_follow_params;
  using _route_follow_params_is_set_type =
    bool;
  _route_follow_params_is_set_type route_follow_params_is_set;
  using _travel_params_type =
    bosdyn_msgs::msg::TravelParams_<ContainerAllocator>;
  _travel_params_type travel_params;
  using _travel_params_is_set_type =
    bool;
  _travel_params_is_set_type travel_params_is_set;
  using _navigation_feedback_response_blackboard_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _navigation_feedback_response_blackboard_key_type navigation_feedback_response_blackboard_key;
  using _navigate_route_response_blackboard_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _navigate_route_response_blackboard_key_type navigate_route_response_blackboard_key;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->host = _arg;
    return *this;
  }
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
  Type & set__route_follow_params(
    const bosdyn_msgs::msg::RouteFollowingParams_<ContainerAllocator> & _arg)
  {
    this->route_follow_params = _arg;
    return *this;
  }
  Type & set__route_follow_params_is_set(
    const bool & _arg)
  {
    this->route_follow_params_is_set = _arg;
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
  Type & set__navigation_feedback_response_blackboard_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->navigation_feedback_response_blackboard_key = _arg;
    return *this;
  }
  Type & set__navigate_route_response_blackboard_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->navigate_route_response_blackboard_key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BosdynNavigateRoute
    std::shared_ptr<bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BosdynNavigateRoute
    std::shared_ptr<bosdyn_msgs::msg::BosdynNavigateRoute_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BosdynNavigateRoute_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->route != other.route) {
      return false;
    }
    if (this->route_is_set != other.route_is_set) {
      return false;
    }
    if (this->route_follow_params != other.route_follow_params) {
      return false;
    }
    if (this->route_follow_params_is_set != other.route_follow_params_is_set) {
      return false;
    }
    if (this->travel_params != other.travel_params) {
      return false;
    }
    if (this->travel_params_is_set != other.travel_params_is_set) {
      return false;
    }
    if (this->navigation_feedback_response_blackboard_key != other.navigation_feedback_response_blackboard_key) {
      return false;
    }
    if (this->navigate_route_response_blackboard_key != other.navigate_route_response_blackboard_key) {
      return false;
    }
    return true;
  }
  bool operator!=(const BosdynNavigateRoute_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BosdynNavigateRoute_

// alias to use template instance with default allocator
using BosdynNavigateRoute =
  bosdyn_msgs::msg::BosdynNavigateRoute_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_ROUTE__STRUCT_HPP_
