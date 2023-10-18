// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLoopClosureSettings.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOOP_CLOSURE_SETTINGS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOOP_CLOSURE_SETTINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLoopClosureSettings __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLoopClosureSettings __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointAnnotationsLoopClosureSettings_
{
  using Type = WaypointAnnotationsLoopClosureSettings_<ContainerAllocator>;

  explicit WaypointAnnotationsLoopClosureSettings_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disable_loop_closure = false;
      this->disable_collision_check = false;
      this->max_edge_length = 0.0;
      this->max_odometry_path_length = 0.0;
    }
  }

  explicit WaypointAnnotationsLoopClosureSettings_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disable_loop_closure = false;
      this->disable_collision_check = false;
      this->max_edge_length = 0.0;
      this->max_odometry_path_length = 0.0;
    }
  }

  // field types and members
  using _disable_loop_closure_type =
    bool;
  _disable_loop_closure_type disable_loop_closure;
  using _disable_collision_check_type =
    bool;
  _disable_collision_check_type disable_collision_check;
  using _max_edge_length_type =
    double;
  _max_edge_length_type max_edge_length;
  using _max_odometry_path_length_type =
    double;
  _max_odometry_path_length_type max_odometry_path_length;

  // setters for named parameter idiom
  Type & set__disable_loop_closure(
    const bool & _arg)
  {
    this->disable_loop_closure = _arg;
    return *this;
  }
  Type & set__disable_collision_check(
    const bool & _arg)
  {
    this->disable_collision_check = _arg;
    return *this;
  }
  Type & set__max_edge_length(
    const double & _arg)
  {
    this->max_edge_length = _arg;
    return *this;
  }
  Type & set__max_odometry_path_length(
    const double & _arg)
  {
    this->max_odometry_path_length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLoopClosureSettings
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLoopClosureSettings
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAnnotationsLoopClosureSettings_ & other) const
  {
    if (this->disable_loop_closure != other.disable_loop_closure) {
      return false;
    }
    if (this->disable_collision_check != other.disable_collision_check) {
      return false;
    }
    if (this->max_edge_length != other.max_edge_length) {
      return false;
    }
    if (this->max_odometry_path_length != other.max_odometry_path_length) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAnnotationsLoopClosureSettings_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAnnotationsLoopClosureSettings_

// alias to use template instance with default allocator
using WaypointAnnotationsLoopClosureSettings =
  bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOOP_CLOSURE_SETTINGS__STRUCT_HPP_
