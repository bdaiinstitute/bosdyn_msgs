// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MapStats.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MAP_STATS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MAP_STATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoints'
// Member 'waypoint_snapshots'
// Member 'alternate_waypoints'
// Member 'edges'
// Member 'edge_snapshots'
// Member 'alternate_edges'
// Member 'waypoint_anchors'
// Member 'object_anchors'
#include "bosdyn_msgs/msg/detail/map_stats_stat__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MapStats __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MapStats __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapStats_
{
  using Type = MapStats_<ContainerAllocator>;

  explicit MapStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_init),
    waypoint_snapshots(_init),
    alternate_waypoints(_init),
    edges(_init),
    edge_snapshots(_init),
    alternate_edges(_init),
    waypoint_anchors(_init),
    object_anchors(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoints_is_set = false;
      this->waypoint_snapshots_is_set = false;
      this->alternate_waypoints_is_set = false;
      this->edges_is_set = false;
      this->edge_snapshots_is_set = false;
      this->alternate_edges_is_set = false;
      this->waypoint_anchors_is_set = false;
      this->object_anchors_is_set = false;
      this->total_path_length = 0.0;
    }
  }

  explicit MapStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_alloc, _init),
    waypoint_snapshots(_alloc, _init),
    alternate_waypoints(_alloc, _init),
    edges(_alloc, _init),
    edge_snapshots(_alloc, _init),
    alternate_edges(_alloc, _init),
    waypoint_anchors(_alloc, _init),
    object_anchors(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoints_is_set = false;
      this->waypoint_snapshots_is_set = false;
      this->alternate_waypoints_is_set = false;
      this->edges_is_set = false;
      this->edge_snapshots_is_set = false;
      this->alternate_edges_is_set = false;
      this->waypoint_anchors_is_set = false;
      this->object_anchors_is_set = false;
      this->total_path_length = 0.0;
    }
  }

  // field types and members
  using _waypoints_type =
    bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>;
  _waypoints_type waypoints;
  using _waypoints_is_set_type =
    bool;
  _waypoints_is_set_type waypoints_is_set;
  using _waypoint_snapshots_type =
    bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>;
  _waypoint_snapshots_type waypoint_snapshots;
  using _waypoint_snapshots_is_set_type =
    bool;
  _waypoint_snapshots_is_set_type waypoint_snapshots_is_set;
  using _alternate_waypoints_type =
    bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>;
  _alternate_waypoints_type alternate_waypoints;
  using _alternate_waypoints_is_set_type =
    bool;
  _alternate_waypoints_is_set_type alternate_waypoints_is_set;
  using _edges_type =
    bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>;
  _edges_type edges;
  using _edges_is_set_type =
    bool;
  _edges_is_set_type edges_is_set;
  using _edge_snapshots_type =
    bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>;
  _edge_snapshots_type edge_snapshots;
  using _edge_snapshots_is_set_type =
    bool;
  _edge_snapshots_is_set_type edge_snapshots_is_set;
  using _alternate_edges_type =
    bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>;
  _alternate_edges_type alternate_edges;
  using _alternate_edges_is_set_type =
    bool;
  _alternate_edges_is_set_type alternate_edges_is_set;
  using _waypoint_anchors_type =
    bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>;
  _waypoint_anchors_type waypoint_anchors;
  using _waypoint_anchors_is_set_type =
    bool;
  _waypoint_anchors_is_set_type waypoint_anchors_is_set;
  using _object_anchors_type =
    bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>;
  _object_anchors_type object_anchors;
  using _object_anchors_is_set_type =
    bool;
  _object_anchors_is_set_type object_anchors_is_set;
  using _total_path_length_type =
    double;
  _total_path_length_type total_path_length;

  // setters for named parameter idiom
  Type & set__waypoints(
    const bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__waypoints_is_set(
    const bool & _arg)
  {
    this->waypoints_is_set = _arg;
    return *this;
  }
  Type & set__waypoint_snapshots(
    const bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> & _arg)
  {
    this->waypoint_snapshots = _arg;
    return *this;
  }
  Type & set__waypoint_snapshots_is_set(
    const bool & _arg)
  {
    this->waypoint_snapshots_is_set = _arg;
    return *this;
  }
  Type & set__alternate_waypoints(
    const bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> & _arg)
  {
    this->alternate_waypoints = _arg;
    return *this;
  }
  Type & set__alternate_waypoints_is_set(
    const bool & _arg)
  {
    this->alternate_waypoints_is_set = _arg;
    return *this;
  }
  Type & set__edges(
    const bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> & _arg)
  {
    this->edges = _arg;
    return *this;
  }
  Type & set__edges_is_set(
    const bool & _arg)
  {
    this->edges_is_set = _arg;
    return *this;
  }
  Type & set__edge_snapshots(
    const bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> & _arg)
  {
    this->edge_snapshots = _arg;
    return *this;
  }
  Type & set__edge_snapshots_is_set(
    const bool & _arg)
  {
    this->edge_snapshots_is_set = _arg;
    return *this;
  }
  Type & set__alternate_edges(
    const bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> & _arg)
  {
    this->alternate_edges = _arg;
    return *this;
  }
  Type & set__alternate_edges_is_set(
    const bool & _arg)
  {
    this->alternate_edges_is_set = _arg;
    return *this;
  }
  Type & set__waypoint_anchors(
    const bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> & _arg)
  {
    this->waypoint_anchors = _arg;
    return *this;
  }
  Type & set__waypoint_anchors_is_set(
    const bool & _arg)
  {
    this->waypoint_anchors_is_set = _arg;
    return *this;
  }
  Type & set__object_anchors(
    const bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> & _arg)
  {
    this->object_anchors = _arg;
    return *this;
  }
  Type & set__object_anchors_is_set(
    const bool & _arg)
  {
    this->object_anchors_is_set = _arg;
    return *this;
  }
  Type & set__total_path_length(
    const double & _arg)
  {
    this->total_path_length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MapStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MapStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MapStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MapStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MapStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MapStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MapStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MapStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MapStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MapStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MapStats
    std::shared_ptr<bosdyn_msgs::msg::MapStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MapStats
    std::shared_ptr<bosdyn_msgs::msg::MapStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapStats_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->waypoints_is_set != other.waypoints_is_set) {
      return false;
    }
    if (this->waypoint_snapshots != other.waypoint_snapshots) {
      return false;
    }
    if (this->waypoint_snapshots_is_set != other.waypoint_snapshots_is_set) {
      return false;
    }
    if (this->alternate_waypoints != other.alternate_waypoints) {
      return false;
    }
    if (this->alternate_waypoints_is_set != other.alternate_waypoints_is_set) {
      return false;
    }
    if (this->edges != other.edges) {
      return false;
    }
    if (this->edges_is_set != other.edges_is_set) {
      return false;
    }
    if (this->edge_snapshots != other.edge_snapshots) {
      return false;
    }
    if (this->edge_snapshots_is_set != other.edge_snapshots_is_set) {
      return false;
    }
    if (this->alternate_edges != other.alternate_edges) {
      return false;
    }
    if (this->alternate_edges_is_set != other.alternate_edges_is_set) {
      return false;
    }
    if (this->waypoint_anchors != other.waypoint_anchors) {
      return false;
    }
    if (this->waypoint_anchors_is_set != other.waypoint_anchors_is_set) {
      return false;
    }
    if (this->object_anchors != other.object_anchors) {
      return false;
    }
    if (this->object_anchors_is_set != other.object_anchors_is_set) {
      return false;
    }
    if (this->total_path_length != other.total_path_length) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapStats_

// alias to use template instance with default allocator
using MapStats =
  bosdyn_msgs::msg::MapStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MAP_STATS__STRUCT_HPP_
