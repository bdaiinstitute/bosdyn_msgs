// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestICPParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_ICP_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_ICP_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestICPParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestICPParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessTopologyRequestICPParams_
{
  using Type = ProcessTopologyRequestICPParams_<ContainerAllocator>;

  explicit ProcessTopologyRequestICPParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->icp_iters = 0l;
      this->icp_iters_is_set = false;
      this->max_point_match_distance = 0.0;
      this->max_point_match_distance_is_set = false;
    }
  }

  explicit ProcessTopologyRequestICPParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->icp_iters = 0l;
      this->icp_iters_is_set = false;
      this->max_point_match_distance = 0.0;
      this->max_point_match_distance_is_set = false;
    }
  }

  // field types and members
  using _icp_iters_type =
    int32_t;
  _icp_iters_type icp_iters;
  using _icp_iters_is_set_type =
    bool;
  _icp_iters_is_set_type icp_iters_is_set;
  using _max_point_match_distance_type =
    double;
  _max_point_match_distance_type max_point_match_distance;
  using _max_point_match_distance_is_set_type =
    bool;
  _max_point_match_distance_is_set_type max_point_match_distance_is_set;

  // setters for named parameter idiom
  Type & set__icp_iters(
    const int32_t & _arg)
  {
    this->icp_iters = _arg;
    return *this;
  }
  Type & set__icp_iters_is_set(
    const bool & _arg)
  {
    this->icp_iters_is_set = _arg;
    return *this;
  }
  Type & set__max_point_match_distance(
    const double & _arg)
  {
    this->max_point_match_distance = _arg;
    return *this;
  }
  Type & set__max_point_match_distance_is_set(
    const bool & _arg)
  {
    this->max_point_match_distance_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestICPParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestICPParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessTopologyRequestICPParams_ & other) const
  {
    if (this->icp_iters != other.icp_iters) {
      return false;
    }
    if (this->icp_iters_is_set != other.icp_iters_is_set) {
      return false;
    }
    if (this->max_point_match_distance != other.max_point_match_distance) {
      return false;
    }
    if (this->max_point_match_distance_is_set != other.max_point_match_distance_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessTopologyRequestICPParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessTopologyRequestICPParams_

// alias to use template instance with default allocator
using ProcessTopologyRequestICPParams =
  bosdyn_msgs::msg::ProcessTopologyRequestICPParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_ICP_PARAMS__STRUCT_HPP_
