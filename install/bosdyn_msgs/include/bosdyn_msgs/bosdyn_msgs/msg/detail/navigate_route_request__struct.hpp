// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NavigateRouteRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_ROUTE_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_ROUTE_REQUEST__STRUCT_HPP_

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
// Member 'route'
#include "bosdyn_msgs/msg/detail/route__struct.hpp"
// Member 'route_follow_params'
#include "bosdyn_msgs/msg/detail/route_following_params__struct.hpp"
// Member 'travel_params'
#include "bosdyn_msgs/msg/detail/travel_params__struct.hpp"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'destination_waypoint_tform_body_goal'
#include "bosdyn_msgs/msg/detail/se2_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NavigateRouteRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NavigateRouteRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigateRouteRequest_
{
  using Type = NavigateRouteRequest_<ContainerAllocator>;

  explicit NavigateRouteRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    route(_init),
    route_follow_params(_init),
    travel_params(_init),
    end_time(_init),
    destination_waypoint_tform_body_goal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->route_is_set = false;
      this->route_follow_params_is_set = false;
      this->travel_params_is_set = false;
      this->end_time_is_set = false;
      this->clock_identifier = "";
      this->destination_waypoint_tform_body_goal_is_set = false;
      this->command_id = 0ul;
    }
  }

  explicit NavigateRouteRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    route(_alloc, _init),
    route_follow_params(_alloc, _init),
    travel_params(_alloc, _init),
    end_time(_alloc, _init),
    clock_identifier(_alloc),
    destination_waypoint_tform_body_goal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->route_is_set = false;
      this->route_follow_params_is_set = false;
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

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NavigateRouteRequest
    std::shared_ptr<bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NavigateRouteRequest
    std::shared_ptr<bosdyn_msgs::msg::NavigateRouteRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateRouteRequest_ & other) const
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
    return true;
  }
  bool operator!=(const NavigateRouteRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateRouteRequest_

// alias to use template instance with default allocator
using NavigateRouteRequest =
  bosdyn_msgs::msg::NavigateRouteRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_ROUTE_REQUEST__STRUCT_HPP_
