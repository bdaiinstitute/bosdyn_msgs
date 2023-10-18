// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/process_anchoring_response_status__struct.hpp"
// Member 'waypoint_results'
#include "bosdyn_msgs/msg/detail/anchor__struct.hpp"
// Member 'world_object_results'
#include "bosdyn_msgs/msg/detail/anchored_world_object__struct.hpp"
// Member 'violated_waypoint_constraints'
#include "bosdyn_msgs/msg/detail/waypoint_anchor_hint__struct.hpp"
// Member 'violated_object_constraints'
#include "bosdyn_msgs/msg/detail/world_object_anchor_hint__struct.hpp"
// Member 'inconsistent_edges'
#include "bosdyn_msgs/msg/detail/edge_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessAnchoringResponse_
{
  using Type = ProcessAnchoringResponse_<ContainerAllocator>;

  explicit ProcessAnchoringResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->anchoring_on_server_was_modified = false;
      this->iteration = 0l;
      this->cost = 0.0;
      this->final_iteration = false;
    }
  }

  explicit ProcessAnchoringResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->anchoring_on_server_was_modified = false;
      this->iteration = 0l;
      this->cost = 0.0;
      this->final_iteration = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _status_type =
    bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _waypoint_results_type =
    std::vector<bosdyn_msgs::msg::Anchor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Anchor_<ContainerAllocator>>>;
  _waypoint_results_type waypoint_results;
  using _world_object_results_type =
    std::vector<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>>>;
  _world_object_results_type world_object_results;
  using _anchoring_on_server_was_modified_type =
    bool;
  _anchoring_on_server_was_modified_type anchoring_on_server_was_modified;
  using _iteration_type =
    int32_t;
  _iteration_type iteration;
  using _cost_type =
    double;
  _cost_type cost;
  using _final_iteration_type =
    bool;
  _final_iteration_type final_iteration;
  using _violated_waypoint_constraints_type =
    std::vector<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>>>;
  _violated_waypoint_constraints_type violated_waypoint_constraints;
  using _violated_object_constraints_type =
    std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>>>;
  _violated_object_constraints_type violated_object_constraints;
  using _missing_snapshot_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _missing_snapshot_ids_type missing_snapshot_ids;
  using _missing_waypoint_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _missing_waypoint_ids_type missing_waypoint_ids;
  using _invalid_hints_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _invalid_hints_type invalid_hints;
  using _inconsistent_edges_type =
    std::vector<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>>>;
  _inconsistent_edges_type inconsistent_edges;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> & _arg)
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
  Type & set__status(
    const bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__waypoint_results(
    const std::vector<bosdyn_msgs::msg::Anchor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Anchor_<ContainerAllocator>>> & _arg)
  {
    this->waypoint_results = _arg;
    return *this;
  }
  Type & set__world_object_results(
    const std::vector<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>>> & _arg)
  {
    this->world_object_results = _arg;
    return *this;
  }
  Type & set__anchoring_on_server_was_modified(
    const bool & _arg)
  {
    this->anchoring_on_server_was_modified = _arg;
    return *this;
  }
  Type & set__iteration(
    const int32_t & _arg)
  {
    this->iteration = _arg;
    return *this;
  }
  Type & set__cost(
    const double & _arg)
  {
    this->cost = _arg;
    return *this;
  }
  Type & set__final_iteration(
    const bool & _arg)
  {
    this->final_iteration = _arg;
    return *this;
  }
  Type & set__violated_waypoint_constraints(
    const std::vector<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WaypointAnchorHint_<ContainerAllocator>>> & _arg)
  {
    this->violated_waypoint_constraints = _arg;
    return *this;
  }
  Type & set__violated_object_constraints(
    const std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>>> & _arg)
  {
    this->violated_object_constraints = _arg;
    return *this;
  }
  Type & set__missing_snapshot_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->missing_snapshot_ids = _arg;
    return *this;
  }
  Type & set__missing_waypoint_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->missing_waypoint_ids = _arg;
    return *this;
  }
  Type & set__invalid_hints(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->invalid_hints = _arg;
    return *this;
  }
  Type & set__inconsistent_edges(
    const std::vector<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>>> & _arg)
  {
    this->inconsistent_edges = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringResponse
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringResponse
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessAnchoringResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->waypoint_results != other.waypoint_results) {
      return false;
    }
    if (this->world_object_results != other.world_object_results) {
      return false;
    }
    if (this->anchoring_on_server_was_modified != other.anchoring_on_server_was_modified) {
      return false;
    }
    if (this->iteration != other.iteration) {
      return false;
    }
    if (this->cost != other.cost) {
      return false;
    }
    if (this->final_iteration != other.final_iteration) {
      return false;
    }
    if (this->violated_waypoint_constraints != other.violated_waypoint_constraints) {
      return false;
    }
    if (this->violated_object_constraints != other.violated_object_constraints) {
      return false;
    }
    if (this->missing_snapshot_ids != other.missing_snapshot_ids) {
      return false;
    }
    if (this->missing_waypoint_ids != other.missing_waypoint_ids) {
      return false;
    }
    if (this->invalid_hints != other.invalid_hints) {
      return false;
    }
    if (this->inconsistent_edges != other.inconsistent_edges) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessAnchoringResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessAnchoringResponse_

// alias to use template instance with default allocator
using ProcessAnchoringResponse =
  bosdyn_msgs::msg::ProcessAnchoringResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE__STRUCT_HPP_
