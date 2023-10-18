// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnchorHint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANCHOR_HINT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANCHOR_HINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoint_anchor'
#include "bosdyn_msgs/msg/detail/anchor__struct.hpp"
// Member 'seed_tform_waypoint_uncertainty'
#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty__struct.hpp"
// Member 'seed_tform_waypoint_constraint'
#include "bosdyn_msgs/msg/detail/pose_bounds__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnchorHint __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnchorHint __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointAnchorHint_
{
  using Type = WaypointAnchorHint_<ContainerAllocator>;

  explicit WaypointAnchorHint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_anchor(_init),
    seed_tform_waypoint_uncertainty(_init),
    seed_tform_waypoint_constraint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_anchor_is_set = false;
      this->seed_tform_waypoint_uncertainty_is_set = false;
      this->seed_tform_waypoint_constraint_is_set = false;
    }
  }

  explicit WaypointAnchorHint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_anchor(_alloc, _init),
    seed_tform_waypoint_uncertainty(_alloc, _init),
    seed_tform_waypoint_constraint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_anchor_is_set = false;
      this->seed_tform_waypoint_uncertainty_is_set = false;
      this->seed_tform_waypoint_constraint_is_set = false;
    }
  }

  // field types and members
  using _waypoint_anchor_type =
    bosdyn_msgs::msg::Anchor_<ContainerAllocator>;
  _waypoint_anchor_type waypoint_anchor;
  using _waypoint_anchor_is_set_type =
    bool;
  _waypoint_anchor_is_set_type waypoint_anchor_is_set;
  using _seed_tform_waypoint_uncertainty_type =
    bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator>;
  _seed_tform_waypoint_uncertainty_type seed_tform_waypoint_uncertainty;
  using _seed_tform_waypoint_uncertainty_is_set_type =
    bool;
  _seed_tform_waypoint_uncertainty_is_set_type seed_tform_waypoint_uncertainty_is_set;
  using _seed_tform_waypoint_constraint_type =
    bosdyn_msgs::msg::PoseBounds_<ContainerAllocator>;
  _seed_tform_waypoint_constraint_type seed_tform_waypoint_constraint;
  using _seed_tform_waypoint_constraint_is_set_type =
    bool;
  _seed_tform_waypoint_constraint_is_set_type seed_tform_waypoint_constraint_is_set;

  // setters for named parameter idiom
  Type & set__waypoint_anchor(
    const bosdyn_msgs::msg::Anchor_<ContainerAllocator> & _arg)
  {
    this->waypoint_anchor = _arg;
    return *this;
  }
  Type & set__waypoint_anchor_is_set(
    const bool & _arg)
  {
    this->waypoint_anchor_is_set = _arg;
    return *this;
  }
  Type & set__seed_tform_waypoint_uncertainty(
    const bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator> & _arg)
  {
    this->seed_tform_waypoint_uncertainty = _arg;
    return *this;
  }
  Type & set__seed_tform_waypoint_uncertainty_is_set(
    const bool & _arg)
  {
    this->seed_tform_waypoint_uncertainty_is_set = _arg;
    return *this;
  }
  Type & set__seed_tform_waypoint_constraint(
    const bosdyn_msgs::msg::PoseBounds_<ContainerAllocator> & _arg)
  {
    this->seed_tform_waypoint_constraint = _arg;
    return *this;
  }
  Type & set__seed_tform_waypoint_constraint_is_set(
    const bool & _arg)
  {
    this->seed_tform_waypoint_constraint_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnchorHint
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnchorHint
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAnchorHint_ & other) const
  {
    if (this->waypoint_anchor != other.waypoint_anchor) {
      return false;
    }
    if (this->waypoint_anchor_is_set != other.waypoint_anchor_is_set) {
      return false;
    }
    if (this->seed_tform_waypoint_uncertainty != other.seed_tform_waypoint_uncertainty) {
      return false;
    }
    if (this->seed_tform_waypoint_uncertainty_is_set != other.seed_tform_waypoint_uncertainty_is_set) {
      return false;
    }
    if (this->seed_tform_waypoint_constraint != other.seed_tform_waypoint_constraint) {
      return false;
    }
    if (this->seed_tform_waypoint_constraint_is_set != other.seed_tform_waypoint_constraint_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAnchorHint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAnchorHint_

// alias to use template instance with default allocator
using WaypointAnchorHint =
  bosdyn_msgs::msg::WaypointAnchorHint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANCHOR_HINT__STRUCT_HPP_
