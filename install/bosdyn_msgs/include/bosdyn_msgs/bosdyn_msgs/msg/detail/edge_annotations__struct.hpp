// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EdgeAnnotations.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stairs'
#include "bosdyn_msgs/msg/detail/edge_annotations_stair_data__struct.hpp"
// Member 'direction_constraint'
#include "bosdyn_msgs/msg/detail/edge_annotations_direction_constraint__struct.hpp"
// Member 'mobility_params'
#include "bosdyn_msgs/msg/detail/mobility_params__struct.hpp"
// Member 'edge_source'
#include "bosdyn_msgs/msg/detail/edge_edge_source__struct.hpp"
// Member 'path_following_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__struct.hpp"
// Member 'area_callbacks'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_region__struct.hpp"
// Member 'ground_clutter_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_ground_clutter_avoidance_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EdgeAnnotations __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EdgeAnnotations __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EdgeAnnotations_
{
  using Type = EdgeAnnotations_<ContainerAllocator>;

  explicit EdgeAnnotations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stairs(_init),
    direction_constraint(_init),
    mobility_params(_init),
    edge_source(_init),
    path_following_mode(_init),
    ground_clutter_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stairs_is_set = false;
      this->require_alignment = false;
      this->require_alignment_is_set = false;
      this->mobility_params_is_set = false;
      this->cost = 0.0;
      this->cost_is_set = false;
      this->disable_alternate_route_finding = false;
      this->disable_directed_exploration = false;
    }
  }

  explicit EdgeAnnotations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stairs(_alloc, _init),
    direction_constraint(_alloc, _init),
    mobility_params(_alloc, _init),
    edge_source(_alloc, _init),
    path_following_mode(_alloc, _init),
    ground_clutter_mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stairs_is_set = false;
      this->require_alignment = false;
      this->require_alignment_is_set = false;
      this->mobility_params_is_set = false;
      this->cost = 0.0;
      this->cost_is_set = false;
      this->disable_alternate_route_finding = false;
      this->disable_directed_exploration = false;
    }
  }

  // field types and members
  using _stairs_type =
    bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator>;
  _stairs_type stairs;
  using _stairs_is_set_type =
    bool;
  _stairs_is_set_type stairs_is_set;
  using _direction_constraint_type =
    bosdyn_msgs::msg::EdgeAnnotationsDirectionConstraint_<ContainerAllocator>;
  _direction_constraint_type direction_constraint;
  using _require_alignment_type =
    bool;
  _require_alignment_type require_alignment;
  using _require_alignment_is_set_type =
    bool;
  _require_alignment_is_set_type require_alignment_is_set;
  using _mobility_params_type =
    bosdyn_msgs::msg::MobilityParams_<ContainerAllocator>;
  _mobility_params_type mobility_params;
  using _mobility_params_is_set_type =
    bool;
  _mobility_params_is_set_type mobility_params_is_set;
  using _cost_type =
    double;
  _cost_type cost;
  using _cost_is_set_type =
    bool;
  _cost_is_set_type cost_is_set;
  using _edge_source_type =
    bosdyn_msgs::msg::EdgeEdgeSource_<ContainerAllocator>;
  _edge_source_type edge_source;
  using _disable_alternate_route_finding_type =
    bool;
  _disable_alternate_route_finding_type disable_alternate_route_finding;
  using _path_following_mode_type =
    bosdyn_msgs::msg::EdgeAnnotationsPathFollowingMode_<ContainerAllocator>;
  _path_following_mode_type path_following_mode;
  using _disable_directed_exploration_type =
    bool;
  _disable_directed_exploration_type disable_directed_exploration;
  using _area_callbacks_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackRegion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackRegion_<ContainerAllocator>>>;
  _area_callbacks_type area_callbacks;
  using _ground_clutter_mode_type =
    bosdyn_msgs::msg::EdgeAnnotationsGroundClutterAvoidanceMode_<ContainerAllocator>;
  _ground_clutter_mode_type ground_clutter_mode;

  // setters for named parameter idiom
  Type & set__stairs(
    const bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator> & _arg)
  {
    this->stairs = _arg;
    return *this;
  }
  Type & set__stairs_is_set(
    const bool & _arg)
  {
    this->stairs_is_set = _arg;
    return *this;
  }
  Type & set__direction_constraint(
    const bosdyn_msgs::msg::EdgeAnnotationsDirectionConstraint_<ContainerAllocator> & _arg)
  {
    this->direction_constraint = _arg;
    return *this;
  }
  Type & set__require_alignment(
    const bool & _arg)
  {
    this->require_alignment = _arg;
    return *this;
  }
  Type & set__require_alignment_is_set(
    const bool & _arg)
  {
    this->require_alignment_is_set = _arg;
    return *this;
  }
  Type & set__mobility_params(
    const bosdyn_msgs::msg::MobilityParams_<ContainerAllocator> & _arg)
  {
    this->mobility_params = _arg;
    return *this;
  }
  Type & set__mobility_params_is_set(
    const bool & _arg)
  {
    this->mobility_params_is_set = _arg;
    return *this;
  }
  Type & set__cost(
    const double & _arg)
  {
    this->cost = _arg;
    return *this;
  }
  Type & set__cost_is_set(
    const bool & _arg)
  {
    this->cost_is_set = _arg;
    return *this;
  }
  Type & set__edge_source(
    const bosdyn_msgs::msg::EdgeEdgeSource_<ContainerAllocator> & _arg)
  {
    this->edge_source = _arg;
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
  Type & set__disable_directed_exploration(
    const bool & _arg)
  {
    this->disable_directed_exploration = _arg;
    return *this;
  }
  Type & set__area_callbacks(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackRegion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackRegion_<ContainerAllocator>>> & _arg)
  {
    this->area_callbacks = _arg;
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
    bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EdgeAnnotations
    std::shared_ptr<bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EdgeAnnotations
    std::shared_ptr<bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EdgeAnnotations_ & other) const
  {
    if (this->stairs != other.stairs) {
      return false;
    }
    if (this->stairs_is_set != other.stairs_is_set) {
      return false;
    }
    if (this->direction_constraint != other.direction_constraint) {
      return false;
    }
    if (this->require_alignment != other.require_alignment) {
      return false;
    }
    if (this->require_alignment_is_set != other.require_alignment_is_set) {
      return false;
    }
    if (this->mobility_params != other.mobility_params) {
      return false;
    }
    if (this->mobility_params_is_set != other.mobility_params_is_set) {
      return false;
    }
    if (this->cost != other.cost) {
      return false;
    }
    if (this->cost_is_set != other.cost_is_set) {
      return false;
    }
    if (this->edge_source != other.edge_source) {
      return false;
    }
    if (this->disable_alternate_route_finding != other.disable_alternate_route_finding) {
      return false;
    }
    if (this->path_following_mode != other.path_following_mode) {
      return false;
    }
    if (this->disable_directed_exploration != other.disable_directed_exploration) {
      return false;
    }
    if (this->area_callbacks != other.area_callbacks) {
      return false;
    }
    if (this->ground_clutter_mode != other.ground_clutter_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const EdgeAnnotations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EdgeAnnotations_

// alias to use template instance with default allocator
using EdgeAnnotations =
  bosdyn_msgs::msg::EdgeAnnotations_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS__STRUCT_HPP_
