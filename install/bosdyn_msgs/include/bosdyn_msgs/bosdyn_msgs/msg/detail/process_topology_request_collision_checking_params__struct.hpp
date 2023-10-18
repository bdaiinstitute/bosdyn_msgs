// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestCollisionCheckingParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessTopologyRequestCollisionCheckingParams_
{
  using Type = ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator>;

  explicit ProcessTopologyRequestCollisionCheckingParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->check_edges_for_collision = false;
      this->check_edges_for_collision_is_set = false;
      this->collision_check_robot_radius = 0.0;
      this->collision_check_robot_radius_is_set = false;
      this->collision_check_height_variation = 0.0;
      this->collision_check_height_variation_is_set = false;
    }
  }

  explicit ProcessTopologyRequestCollisionCheckingParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->check_edges_for_collision = false;
      this->check_edges_for_collision_is_set = false;
      this->collision_check_robot_radius = 0.0;
      this->collision_check_robot_radius_is_set = false;
      this->collision_check_height_variation = 0.0;
      this->collision_check_height_variation_is_set = false;
    }
  }

  // field types and members
  using _check_edges_for_collision_type =
    bool;
  _check_edges_for_collision_type check_edges_for_collision;
  using _check_edges_for_collision_is_set_type =
    bool;
  _check_edges_for_collision_is_set_type check_edges_for_collision_is_set;
  using _collision_check_robot_radius_type =
    double;
  _collision_check_robot_radius_type collision_check_robot_radius;
  using _collision_check_robot_radius_is_set_type =
    bool;
  _collision_check_robot_radius_is_set_type collision_check_robot_radius_is_set;
  using _collision_check_height_variation_type =
    double;
  _collision_check_height_variation_type collision_check_height_variation;
  using _collision_check_height_variation_is_set_type =
    bool;
  _collision_check_height_variation_is_set_type collision_check_height_variation_is_set;

  // setters for named parameter idiom
  Type & set__check_edges_for_collision(
    const bool & _arg)
  {
    this->check_edges_for_collision = _arg;
    return *this;
  }
  Type & set__check_edges_for_collision_is_set(
    const bool & _arg)
  {
    this->check_edges_for_collision_is_set = _arg;
    return *this;
  }
  Type & set__collision_check_robot_radius(
    const double & _arg)
  {
    this->collision_check_robot_radius = _arg;
    return *this;
  }
  Type & set__collision_check_robot_radius_is_set(
    const bool & _arg)
  {
    this->collision_check_robot_radius_is_set = _arg;
    return *this;
  }
  Type & set__collision_check_height_variation(
    const double & _arg)
  {
    this->collision_check_height_variation = _arg;
    return *this;
  }
  Type & set__collision_check_height_variation_is_set(
    const bool & _arg)
  {
    this->collision_check_height_variation_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessTopologyRequestCollisionCheckingParams_ & other) const
  {
    if (this->check_edges_for_collision != other.check_edges_for_collision) {
      return false;
    }
    if (this->check_edges_for_collision_is_set != other.check_edges_for_collision_is_set) {
      return false;
    }
    if (this->collision_check_robot_radius != other.collision_check_robot_radius) {
      return false;
    }
    if (this->collision_check_robot_radius_is_set != other.collision_check_robot_radius_is_set) {
      return false;
    }
    if (this->collision_check_height_variation != other.collision_check_height_variation) {
      return false;
    }
    if (this->collision_check_height_variation_is_set != other.collision_check_height_variation_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessTopologyRequestCollisionCheckingParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessTopologyRequestCollisionCheckingParams_

// alias to use template instance with default allocator
using ProcessTopologyRequestCollisionCheckingParams =
  bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__STRUCT_HPP_
