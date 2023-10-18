// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestFiducialLoopClosureParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessTopologyRequestFiducialLoopClosureParams_
{
  using Type = ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator>;

  explicit ProcessTopologyRequestFiducialLoopClosureParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_loop_closure_path_length = 0.0;
      this->min_loop_closure_path_length_is_set = false;
      this->max_loop_closure_edge_length = 0.0;
      this->max_loop_closure_edge_length_is_set = false;
      this->max_fiducial_distance = 0.0;
      this->max_fiducial_distance_is_set = false;
      this->max_loop_closure_height_change = 0.0;
      this->max_loop_closure_height_change_is_set = false;
      this->prune_edges = false;
      this->prune_edges_is_set = false;
    }
  }

  explicit ProcessTopologyRequestFiducialLoopClosureParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_loop_closure_path_length = 0.0;
      this->min_loop_closure_path_length_is_set = false;
      this->max_loop_closure_edge_length = 0.0;
      this->max_loop_closure_edge_length_is_set = false;
      this->max_fiducial_distance = 0.0;
      this->max_fiducial_distance_is_set = false;
      this->max_loop_closure_height_change = 0.0;
      this->max_loop_closure_height_change_is_set = false;
      this->prune_edges = false;
      this->prune_edges_is_set = false;
    }
  }

  // field types and members
  using _min_loop_closure_path_length_type =
    double;
  _min_loop_closure_path_length_type min_loop_closure_path_length;
  using _min_loop_closure_path_length_is_set_type =
    bool;
  _min_loop_closure_path_length_is_set_type min_loop_closure_path_length_is_set;
  using _max_loop_closure_edge_length_type =
    double;
  _max_loop_closure_edge_length_type max_loop_closure_edge_length;
  using _max_loop_closure_edge_length_is_set_type =
    bool;
  _max_loop_closure_edge_length_is_set_type max_loop_closure_edge_length_is_set;
  using _max_fiducial_distance_type =
    double;
  _max_fiducial_distance_type max_fiducial_distance;
  using _max_fiducial_distance_is_set_type =
    bool;
  _max_fiducial_distance_is_set_type max_fiducial_distance_is_set;
  using _max_loop_closure_height_change_type =
    double;
  _max_loop_closure_height_change_type max_loop_closure_height_change;
  using _max_loop_closure_height_change_is_set_type =
    bool;
  _max_loop_closure_height_change_is_set_type max_loop_closure_height_change_is_set;
  using _prune_edges_type =
    bool;
  _prune_edges_type prune_edges;
  using _prune_edges_is_set_type =
    bool;
  _prune_edges_is_set_type prune_edges_is_set;

  // setters for named parameter idiom
  Type & set__min_loop_closure_path_length(
    const double & _arg)
  {
    this->min_loop_closure_path_length = _arg;
    return *this;
  }
  Type & set__min_loop_closure_path_length_is_set(
    const bool & _arg)
  {
    this->min_loop_closure_path_length_is_set = _arg;
    return *this;
  }
  Type & set__max_loop_closure_edge_length(
    const double & _arg)
  {
    this->max_loop_closure_edge_length = _arg;
    return *this;
  }
  Type & set__max_loop_closure_edge_length_is_set(
    const bool & _arg)
  {
    this->max_loop_closure_edge_length_is_set = _arg;
    return *this;
  }
  Type & set__max_fiducial_distance(
    const double & _arg)
  {
    this->max_fiducial_distance = _arg;
    return *this;
  }
  Type & set__max_fiducial_distance_is_set(
    const bool & _arg)
  {
    this->max_fiducial_distance_is_set = _arg;
    return *this;
  }
  Type & set__max_loop_closure_height_change(
    const double & _arg)
  {
    this->max_loop_closure_height_change = _arg;
    return *this;
  }
  Type & set__max_loop_closure_height_change_is_set(
    const bool & _arg)
  {
    this->max_loop_closure_height_change_is_set = _arg;
    return *this;
  }
  Type & set__prune_edges(
    const bool & _arg)
  {
    this->prune_edges = _arg;
    return *this;
  }
  Type & set__prune_edges_is_set(
    const bool & _arg)
  {
    this->prune_edges_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessTopologyRequestFiducialLoopClosureParams_ & other) const
  {
    if (this->min_loop_closure_path_length != other.min_loop_closure_path_length) {
      return false;
    }
    if (this->min_loop_closure_path_length_is_set != other.min_loop_closure_path_length_is_set) {
      return false;
    }
    if (this->max_loop_closure_edge_length != other.max_loop_closure_edge_length) {
      return false;
    }
    if (this->max_loop_closure_edge_length_is_set != other.max_loop_closure_edge_length_is_set) {
      return false;
    }
    if (this->max_fiducial_distance != other.max_fiducial_distance) {
      return false;
    }
    if (this->max_fiducial_distance_is_set != other.max_fiducial_distance_is_set) {
      return false;
    }
    if (this->max_loop_closure_height_change != other.max_loop_closure_height_change) {
      return false;
    }
    if (this->max_loop_closure_height_change_is_set != other.max_loop_closure_height_change_is_set) {
      return false;
    }
    if (this->prune_edges != other.prune_edges) {
      return false;
    }
    if (this->prune_edges_is_set != other.prune_edges_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessTopologyRequestFiducialLoopClosureParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessTopologyRequestFiducialLoopClosureParams_

// alias to use template instance with default allocator
using ProcessTopologyRequestFiducialLoopClosureParams =
  bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__STRUCT_HPP_
