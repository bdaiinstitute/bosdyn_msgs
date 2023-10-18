// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BosdynNavigateTo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_TO__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_TO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'route_gen_params'
#include "bosdyn_msgs/msg/detail/route_gen_params__struct.hpp"
// Member 'travel_params'
#include "bosdyn_msgs/msg/detail/travel_params__struct.hpp"
// Member 'route_blocked_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_route_blocked_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BosdynNavigateTo __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BosdynNavigateTo __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BosdynNavigateTo_
{
  using Type = BosdynNavigateTo_<ContainerAllocator>;

  explicit BosdynNavigateTo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route_gen_params(_init),
    travel_params(_init),
    route_blocked_behavior(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->destination_waypoint_id = "";
      this->route_gen_params_is_set = false;
      this->travel_params_is_set = false;
      this->navigation_feedback_response_blackboard_key = "";
      this->navigate_to_response_blackboard_key = "";
    }
  }

  explicit BosdynNavigateTo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    host(_alloc),
    destination_waypoint_id(_alloc),
    route_gen_params(_alloc, _init),
    travel_params(_alloc, _init),
    navigation_feedback_response_blackboard_key(_alloc),
    navigate_to_response_blackboard_key(_alloc),
    route_blocked_behavior(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->destination_waypoint_id = "";
      this->route_gen_params_is_set = false;
      this->travel_params_is_set = false;
      this->navigation_feedback_response_blackboard_key = "";
      this->navigate_to_response_blackboard_key = "";
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _destination_waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _destination_waypoint_id_type destination_waypoint_id;
  using _route_gen_params_type =
    bosdyn_msgs::msg::RouteGenParams_<ContainerAllocator>;
  _route_gen_params_type route_gen_params;
  using _route_gen_params_is_set_type =
    bool;
  _route_gen_params_is_set_type route_gen_params_is_set;
  using _travel_params_type =
    bosdyn_msgs::msg::TravelParams_<ContainerAllocator>;
  _travel_params_type travel_params;
  using _travel_params_is_set_type =
    bool;
  _travel_params_is_set_type travel_params_is_set;
  using _navigation_feedback_response_blackboard_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _navigation_feedback_response_blackboard_key_type navigation_feedback_response_blackboard_key;
  using _navigate_to_response_blackboard_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _navigate_to_response_blackboard_key_type navigate_to_response_blackboard_key;
  using _route_blocked_behavior_type =
    bosdyn_msgs::msg::RouteFollowingParamsRouteBlockedBehavior_<ContainerAllocator>;
  _route_blocked_behavior_type route_blocked_behavior;

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
  Type & set__destination_waypoint_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->destination_waypoint_id = _arg;
    return *this;
  }
  Type & set__route_gen_params(
    const bosdyn_msgs::msg::RouteGenParams_<ContainerAllocator> & _arg)
  {
    this->route_gen_params = _arg;
    return *this;
  }
  Type & set__route_gen_params_is_set(
    const bool & _arg)
  {
    this->route_gen_params_is_set = _arg;
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
  Type & set__navigate_to_response_blackboard_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->navigate_to_response_blackboard_key = _arg;
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
    bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BosdynNavigateTo
    std::shared_ptr<bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BosdynNavigateTo
    std::shared_ptr<bosdyn_msgs::msg::BosdynNavigateTo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BosdynNavigateTo_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->destination_waypoint_id != other.destination_waypoint_id) {
      return false;
    }
    if (this->route_gen_params != other.route_gen_params) {
      return false;
    }
    if (this->route_gen_params_is_set != other.route_gen_params_is_set) {
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
    if (this->navigate_to_response_blackboard_key != other.navigate_to_response_blackboard_key) {
      return false;
    }
    if (this->route_blocked_behavior != other.route_blocked_behavior) {
      return false;
    }
    return true;
  }
  bool operator!=(const BosdynNavigateTo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BosdynNavigateTo_

// alias to use template instance with default allocator
using BosdynNavigateTo =
  bosdyn_msgs::msg::BosdynNavigateTo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_NAVIGATE_TO__STRUCT_HPP_
