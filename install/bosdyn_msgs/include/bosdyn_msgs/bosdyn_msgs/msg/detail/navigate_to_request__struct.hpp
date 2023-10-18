// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NavigateToRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__STRUCT_HPP_

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
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"
// Member 'route_params'
#include "bosdyn_msgs/msg/detail/route_gen_params__struct.hpp"
// Member 'travel_params'
#include "bosdyn_msgs/msg/detail/travel_params__struct.hpp"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'destination_waypoint_tform_body_goal'
#include "bosdyn_msgs/msg/detail/se2_pose__struct.hpp"
// Member 'route_blocked_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_route_blocked_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NavigateToRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NavigateToRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigateToRequest_
{
  using Type = NavigateToRequest_<ContainerAllocator>;

  explicit NavigateToRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    route_params(_init),
    travel_params(_init),
    end_time(_init),
    destination_waypoint_tform_body_goal(_init),
    route_blocked_behavior(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->destination_waypoint_id = "";
      this->route_params_is_set = false;
      this->travel_params_is_set = false;
      this->end_time_is_set = false;
      this->clock_identifier = "";
      this->destination_waypoint_tform_body_goal_is_set = false;
      this->command_id = 0ul;
    }
  }

  explicit NavigateToRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    destination_waypoint_id(_alloc),
    route_params(_alloc, _init),
    travel_params(_alloc, _init),
    end_time(_alloc, _init),
    clock_identifier(_alloc),
    destination_waypoint_tform_body_goal(_alloc, _init),
    route_blocked_behavior(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->destination_waypoint_id = "";
      this->route_params_is_set = false;
      this->travel_params_is_set = false;
      this->end_time_is_set = false;
      this->clock_identifier = "";
      this->destination_waypoint_tform_body_goal_is_set = false;
      this->command_id = 0ul;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _leases_type =
    std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>>;
  _leases_type leases;
  using _destination_waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _destination_waypoint_id_type destination_waypoint_id;
  using _route_params_type =
    bosdyn_msgs::msg::RouteGenParams_<ContainerAllocator>;
  _route_params_type route_params;
  using _route_params_is_set_type =
    bool;
  _route_params_is_set_type route_params_is_set;
  using _travel_params_type =
    bosdyn_msgs::msg::TravelParams_<ContainerAllocator>;
  _travel_params_type travel_params;
  using _travel_params_is_set_type =
    bool;
  _travel_params_is_set_type travel_params_is_set;
  using _end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_time_type end_time;
  using _end_time_is_set_type =
    bool;
  _end_time_is_set_type end_time_is_set;
  using _clock_identifier_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _clock_identifier_type clock_identifier;
  using _destination_waypoint_tform_body_goal_type =
    bosdyn_msgs::msg::SE2Pose_<ContainerAllocator>;
  _destination_waypoint_tform_body_goal_type destination_waypoint_tform_body_goal;
  using _destination_waypoint_tform_body_goal_is_set_type =
    bool;
  _destination_waypoint_tform_body_goal_is_set_type destination_waypoint_tform_body_goal_is_set;
  using _command_id_type =
    uint32_t;
  _command_id_type command_id;
  using _route_blocked_behavior_type =
    bosdyn_msgs::msg::RouteFollowingParamsRouteBlockedBehavior_<ContainerAllocator>;
  _route_blocked_behavior_type route_blocked_behavior;

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
  Type & set__leases(
    const std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>> & _arg)
  {
    this->leases = _arg;
    return *this;
  }
  Type & set__destination_waypoint_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->destination_waypoint_id = _arg;
    return *this;
  }
  Type & set__route_params(
    const bosdyn_msgs::msg::RouteGenParams_<ContainerAllocator> & _arg)
  {
    this->route_params = _arg;
    return *this;
  }
  Type & set__route_params_is_set(
    const bool & _arg)
  {
    this->route_params_is_set = _arg;
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
  Type & set__end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__end_time_is_set(
    const bool & _arg)
  {
    this->end_time_is_set = _arg;
    return *this;
  }
  Type & set__clock_identifier(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->clock_identifier = _arg;
    return *this;
  }
  Type & set__destination_waypoint_tform_body_goal(
    const bosdyn_msgs::msg::SE2Pose_<ContainerAllocator> & _arg)
  {
    this->destination_waypoint_tform_body_goal = _arg;
    return *this;
  }
  Type & set__destination_waypoint_tform_body_goal_is_set(
    const bool & _arg)
  {
    this->destination_waypoint_tform_body_goal_is_set = _arg;
    return *this;
  }
  Type & set__command_id(
    const uint32_t & _arg)
  {
    this->command_id = _arg;
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
    bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NavigateToRequest
    std::shared_ptr<bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NavigateToRequest
    std::shared_ptr<bosdyn_msgs::msg::NavigateToRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->leases != other.leases) {
      return false;
    }
    if (this->destination_waypoint_id != other.destination_waypoint_id) {
      return false;
    }
    if (this->route_params != other.route_params) {
      return false;
    }
    if (this->route_params_is_set != other.route_params_is_set) {
      return false;
    }
    if (this->travel_params != other.travel_params) {
      return false;
    }
    if (this->travel_params_is_set != other.travel_params_is_set) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->end_time_is_set != other.end_time_is_set) {
      return false;
    }
    if (this->clock_identifier != other.clock_identifier) {
      return false;
    }
    if (this->destination_waypoint_tform_body_goal != other.destination_waypoint_tform_body_goal) {
      return false;
    }
    if (this->destination_waypoint_tform_body_goal_is_set != other.destination_waypoint_tform_body_goal_is_set) {
      return false;
    }
    if (this->command_id != other.command_id) {
      return false;
    }
    if (this->route_blocked_behavior != other.route_blocked_behavior) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToRequest_

// alias to use template instance with default allocator
using NavigateToRequest =
  bosdyn_msgs::msg::NavigateToRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__STRUCT_HPP_
