// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AnchoringHint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHORING_HINT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHORING_HINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoint_anchors'
#include "bosdyn_msgs/msg/detail/waypoint_anchor_hint__struct.hpp"
// Member 'world_objects'
#include "bosdyn_msgs/msg/detail/world_object_anchor_hint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AnchoringHint __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AnchoringHint __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AnchoringHint_
{
  using Type = AnchoringHint_<ContainerAllocator>;

  explicit AnchoringHint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AnchoringHint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _waypoint_anchors_type =
    std::vector<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>>>;
  _waypoint_anchors_type waypoint_anchors;
  using _world_objects_type =
    std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>>>;
  _world_objects_type world_objects;

  // setters for named parameter idiom
  Type & set__waypoint_anchors(
    const std::vector<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>>> & _arg)
  {
    this->waypoint_anchors = _arg;
    return *this;
  }
  Type & set__world_objects(
    const std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>>> & _arg)
  {
    this->world_objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AnchoringHint
    std::shared_ptr<bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AnchoringHint
    std::shared_ptr<bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnchoringHint_ & other) const
  {
    if (this->waypoint_anchors != other.waypoint_anchors) {
      return false;
    }
    if (this->world_objects != other.world_objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnchoringHint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnchoringHint_

// alias to use template instance with default allocator
using AnchoringHint =
  bosdyn_msgs::msg::AnchoringHint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHORING_HINT__STRUCT_HPP_
