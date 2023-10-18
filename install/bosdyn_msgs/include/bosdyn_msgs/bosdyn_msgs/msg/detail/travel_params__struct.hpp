// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TravelParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TRAVEL_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TRAVEL_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'velocity_limit'
#include "bosdyn_msgs/msg/detail/se2_velocity_limit__struct.hpp"
// Member 'feature_quality_tolerance'
#include "bosdyn_msgs/msg/detail/travel_params_feature_quality_tolerance__struct.hpp"
// Member 'path_following_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__struct.hpp"
// Member 'blocked_path_wait_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'ground_clutter_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_ground_clutter_avoidance_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TravelParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TravelParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TravelParams_
{
  using Type = TravelParams_<ContainerAllocator>;

  explicit TravelParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity_limit(_init),
    feature_quality_tolerance(_init),
    path_following_mode(_init),
    blocked_path_wait_time(_init),
    ground_clutter_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_distance = 0.0;
      this->max_yaw = 0.0;
      this->velocity_limit_is_set = false;
      this->ignore_final_yaw = false;
      this->disable_directed_exploration = false;
      this->disable_alternate_route_finding = false;
      this->blocked_path_wait_time_is_set = false;
    }
  }

  explicit TravelParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity_limit(_alloc, _init),
    feature_quality_tolerance(_alloc, _init),
    path_following_mode(_alloc, _init),
    blocked_path_wait_time(_alloc, _init),
    ground_clutter_mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_distance = 0.0;
      this->max_yaw = 0.0;
      this->velocity_limit_is_set = false;
      this->ignore_final_yaw = false;
      this->disable_directed_exploration = false;
      this->disable_alternate_route_finding = false;
      this->blocked_path_wait_time_is_set = false;
    }
  }

  // field types and members
  using _max_distance_type =
    double;
  _max_distance_type max_distance;
  using _max_yaw_type =
    double;
  _max_yaw_type max_yaw;
  using _velocity_limit_type =
    bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator>;
  _velocity_limit_type velocity_limit;
  using _velocity_limit_is_set_type =
    bool;
  _velocity_limit_is_set_type velocity_limit_is_set;
  using _ignore_final_yaw_type =
    bool;
  _ignore_final_yaw_type ignore_final_yaw;
  using _feature_quality_tolerance_type =
    bosdyn_msgs::msg::TravelParamsFeatureQualityTolerance_<ContainerAllocator>;
  _feature_quality_tolerance_type feature_quality_tolerance;
  using _disable_directed_exploration_type =
    bool;
  _disable_directed_exploration_type disable_directed_exploration;
  using _disable_alternate_route_finding_type =
    bool;
  _disable_alternate_route_finding_type disable_alternate_route_finding;
  using _path_following_mode_type =
    bosdyn_msgs::msg::EdgeAnnotationsPathFollowingMode_<ContainerAllocator>;
  _path_following_mode_type path_following_mode;
  using _blocked_path_wait_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _blocked_path_wait_time_type blocked_path_wait_time;
  using _blocked_path_wait_time_is_set_type =
    bool;
  _blocked_path_wait_time_is_set_type blocked_path_wait_time_is_set;
  using _ground_clutter_mode_type =
    bosdyn_msgs::msg::EdgeAnnotationsGroundClutterAvoidanceMode_<ContainerAllocator>;
  _ground_clutter_mode_type ground_clutter_mode;

  // setters for named parameter idiom
  Type & set__max_distance(
    const double & _arg)
  {
    this->max_distance = _arg;
    return *this;
  }
  Type & set__max_yaw(
    const double & _arg)
  {
    this->max_yaw = _arg;
    return *this;
  }
  Type & set__velocity_limit(
    const bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator> & _arg)
  {
    this->velocity_limit = _arg;
    return *this;
  }
  Type & set__velocity_limit_is_set(
    const bool & _arg)
  {
    this->velocity_limit_is_set = _arg;
    return *this;
  }
  Type & set__ignore_final_yaw(
    const bool & _arg)
  {
    this->ignore_final_yaw = _arg;
    return *this;
  }
  Type & set__feature_quality_tolerance(
    const bosdyn_msgs::msg::TravelParamsFeatureQualityTolerance_<ContainerAllocator> & _arg)
  {
    this->feature_quality_tolerance = _arg;
    return *this;
  }
  Type & set__disable_directed_exploration(
    const bool & _arg)
  {
    this->disable_directed_exploration = _arg;
    return *this;
  }
  Type & set__disable_alternate_route_finding(
    const bool & _arg)
  {
    this->disable_alternate_route_finding = _arg;
    return *this;
  }
  Type & set__path_following_mode(
    const bosdyn_msgs::msg::EdgeAnnotationsPathFollowingMode_<ContainerAllocator> & _arg)
  {
    this->path_following_mode = _arg;
    return *this;
  }
  Type & set__blocked_path_wait_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->blocked_path_wait_time = _arg;
    return *this;
  }
  Type & set__blocked_path_wait_time_is_set(
    const bool & _arg)
  {
    this->blocked_path_wait_time_is_set = _arg;
    return *this;
  }
  Type & set__ground_clutter_mode(
    const bosdyn_msgs::msg::EdgeAnnotationsGroundClutterAvoidanceMode_<ContainerAllocator> & _arg)
  {
    this->ground_clutter_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TravelParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TravelParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TravelParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TravelParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TravelParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TravelParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TravelParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TravelParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TravelParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TravelParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TravelParams
    std::shared_ptr<bosdyn_msgs::msg::TravelParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TravelParams
    std::shared_ptr<bosdyn_msgs::msg::TravelParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TravelParams_ & other) const
  {
    if (this->max_distance != other.max_distance) {
      return false;
    }
    if (this->max_yaw != other.max_yaw) {
      return false;
    }
    if (this->velocity_limit != other.velocity_limit) {
      return false;
    }
    if (this->velocity_limit_is_set != other.velocity_limit_is_set) {
      return false;
    }
    if (this->ignore_final_yaw != other.ignore_final_yaw) {
      return false;
    }
    if (this->feature_quality_tolerance != other.feature_quality_tolerance) {
      return false;
    }
    if (this->disable_directed_exploration != other.disable_directed_exploration) {
      return false;
    }
    if (this->disable_alternate_route_finding != other.disable_alternate_route_finding) {
      return false;
    }
    if (this->path_following_mode != other.path_following_mode) {
      return false;
    }
    if (this->blocked_path_wait_time != other.blocked_path_wait_time) {
      return false;
    }
    if (this->blocked_path_wait_time_is_set != other.blocked_path_wait_time_is_set) {
      return false;
    }
    if (this->ground_clutter_mode != other.ground_clutter_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const TravelParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TravelParams_

// alias to use template instance with default allocator
using TravelParams =
  bosdyn_msgs::msg::TravelParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TRAVEL_PARAMS__STRUCT_HPP_
