// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'odometry_loop_closure_params'
#include "bosdyn_msgs/msg/detail/process_topology_request_odometry_loop_closure_params__struct.hpp"
// Member 'icp_params'
#include "bosdyn_msgs/msg/detail/process_topology_request_icp_params__struct.hpp"
// Member 'fiducial_loop_closure_params'
#include "bosdyn_msgs/msg/detail/process_topology_request_fiducial_loop_closure_params__struct.hpp"
// Member 'collision_check_params'
#include "bosdyn_msgs/msg/detail/process_topology_request_collision_checking_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessTopologyRequestParams_
{
  using Type = ProcessTopologyRequestParams_<ContainerAllocator>;

  explicit ProcessTopologyRequestParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : odometry_loop_closure_params(_init),
    icp_params(_init),
    fiducial_loop_closure_params(_init),
    collision_check_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->do_odometry_loop_closure = false;
      this->do_odometry_loop_closure_is_set = false;
      this->odometry_loop_closure_params_is_set = false;
      this->icp_params_is_set = false;
      this->do_fiducial_loop_closure = false;
      this->do_fiducial_loop_closure_is_set = false;
      this->fiducial_loop_closure_params_is_set = false;
      this->collision_check_params_is_set = false;
      this->timeout_seconds = 0.0;
    }
  }

  explicit ProcessTopologyRequestParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : odometry_loop_closure_params(_alloc, _init),
    icp_params(_alloc, _init),
    fiducial_loop_closure_params(_alloc, _init),
    collision_check_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->do_odometry_loop_closure = false;
      this->do_odometry_loop_closure_is_set = false;
      this->odometry_loop_closure_params_is_set = false;
      this->icp_params_is_set = false;
      this->do_fiducial_loop_closure = false;
      this->do_fiducial_loop_closure_is_set = false;
      this->fiducial_loop_closure_params_is_set = false;
      this->collision_check_params_is_set = false;
      this->timeout_seconds = 0.0;
    }
  }

  // field types and members
  using _do_odometry_loop_closure_type =
    bool;
  _do_odometry_loop_closure_type do_odometry_loop_closure;
  using _do_odometry_loop_closure_is_set_type =
    bool;
  _do_odometry_loop_closure_is_set_type do_odometry_loop_closure_is_set;
  using _odometry_loop_closure_params_type =
    bosdyn_msgs::msg::ProcessTopologyRequestOdometryLoopClosureParams_<ContainerAllocator>;
  _odometry_loop_closure_params_type odometry_loop_closure_params;
  using _odometry_loop_closure_params_is_set_type =
    bool;
  _odometry_loop_closure_params_is_set_type odometry_loop_closure_params_is_set;
  using _icp_params_type =
    bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator>;
  _icp_params_type icp_params;
  using _icp_params_is_set_type =
    bool;
  _icp_params_is_set_type icp_params_is_set;
  using _do_fiducial_loop_closure_type =
    bool;
  _do_fiducial_loop_closure_type do_fiducial_loop_closure;
  using _do_fiducial_loop_closure_is_set_type =
    bool;
  _do_fiducial_loop_closure_is_set_type do_fiducial_loop_closure_is_set;
  using _fiducial_loop_closure_params_type =
    bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator>;
  _fiducial_loop_closure_params_type fiducial_loop_closure_params;
  using _fiducial_loop_closure_params_is_set_type =
    bool;
  _fiducial_loop_closure_params_is_set_type fiducial_loop_closure_params_is_set;
  using _collision_check_params_type =
    bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator>;
  _collision_check_params_type collision_check_params;
  using _collision_check_params_is_set_type =
    bool;
  _collision_check_params_is_set_type collision_check_params_is_set;
  using _timeout_seconds_type =
    double;
  _timeout_seconds_type timeout_seconds;

  // setters for named parameter idiom
  Type & set__do_odometry_loop_closure(
    const bool & _arg)
  {
    this->do_odometry_loop_closure = _arg;
    return *this;
  }
  Type & set__do_odometry_loop_closure_is_set(
    const bool & _arg)
  {
    this->do_odometry_loop_closure_is_set = _arg;
    return *this;
  }
  Type & set__odometry_loop_closure_params(
    const bosdyn_msgs::msg::ProcessTopologyRequestOdometryLoopClosureParams_<ContainerAllocator> & _arg)
  {
    this->odometry_loop_closure_params = _arg;
    return *this;
  }
  Type & set__odometry_loop_closure_params_is_set(
    const bool & _arg)
  {
    this->odometry_loop_closure_params_is_set = _arg;
    return *this;
  }
  Type & set__icp_params(
    const bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator> & _arg)
  {
    this->icp_params = _arg;
    return *this;
  }
  Type & set__icp_params_is_set(
    const bool & _arg)
  {
    this->icp_params_is_set = _arg;
    return *this;
  }
  Type & set__do_fiducial_loop_closure(
    const bool & _arg)
  {
    this->do_fiducial_loop_closure = _arg;
    return *this;
  }
  Type & set__do_fiducial_loop_closure_is_set(
    const bool & _arg)
  {
    this->do_fiducial_loop_closure_is_set = _arg;
    return *this;
  }
  Type & set__fiducial_loop_closure_params(
    const bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams_<ContainerAllocator> & _arg)
  {
    this->fiducial_loop_closure_params = _arg;
    return *this;
  }
  Type & set__fiducial_loop_closure_params_is_set(
    const bool & _arg)
  {
    this->fiducial_loop_closure_params_is_set = _arg;
    return *this;
  }
  Type & set__collision_check_params(
    const bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator> & _arg)
  {
    this->collision_check_params = _arg;
    return *this;
  }
  Type & set__collision_check_params_is_set(
    const bool & _arg)
  {
    this->collision_check_params_is_set = _arg;
    return *this;
  }
  Type & set__timeout_seconds(
    const double & _arg)
  {
    this->timeout_seconds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessTopologyRequestParams_ & other) const
  {
    if (this->do_odometry_loop_closure != other.do_odometry_loop_closure) {
      return false;
    }
    if (this->do_odometry_loop_closure_is_set != other.do_odometry_loop_closure_is_set) {
      return false;
    }
    if (this->odometry_loop_closure_params != other.odometry_loop_closure_params) {
      return false;
    }
    if (this->odometry_loop_closure_params_is_set != other.odometry_loop_closure_params_is_set) {
      return false;
    }
    if (this->icp_params != other.icp_params) {
      return false;
    }
    if (this->icp_params_is_set != other.icp_params_is_set) {
      return false;
    }
    if (this->do_fiducial_loop_closure != other.do_fiducial_loop_closure) {
      return false;
    }
    if (this->do_fiducial_loop_closure_is_set != other.do_fiducial_loop_closure_is_set) {
      return false;
    }
    if (this->fiducial_loop_closure_params != other.fiducial_loop_closure_params) {
      return false;
    }
    if (this->fiducial_loop_closure_params_is_set != other.fiducial_loop_closure_params_is_set) {
      return false;
    }
    if (this->collision_check_params != other.collision_check_params) {
      return false;
    }
    if (this->collision_check_params_is_set != other.collision_check_params_is_set) {
      return false;
    }
    if (this->timeout_seconds != other.timeout_seconds) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessTopologyRequestParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessTopologyRequestParams_

// alias to use template instance with default allocator
using ProcessTopologyRequestParams =
  bosdyn_msgs::msg::ProcessTopologyRequestParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_PARAMS__STRUCT_HPP_
