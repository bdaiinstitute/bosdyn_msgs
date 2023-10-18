// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ObstacleParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OBSTACLE_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OBSTACLE_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ObstacleParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ObstacleParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleParams_
{
  using Type = ObstacleParams_<ContainerAllocator>;

  explicit ObstacleParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disable_vision_foot_obstacle_avoidance = false;
      this->disable_vision_foot_constraint_avoidance = false;
      this->disable_vision_body_obstacle_avoidance = false;
      this->obstacle_avoidance_padding = 0.0;
      this->disable_vision_foot_obstacle_body_assist = false;
      this->disable_vision_negative_obstacles = false;
    }
  }

  explicit ObstacleParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disable_vision_foot_obstacle_avoidance = false;
      this->disable_vision_foot_constraint_avoidance = false;
      this->disable_vision_body_obstacle_avoidance = false;
      this->obstacle_avoidance_padding = 0.0;
      this->disable_vision_foot_obstacle_body_assist = false;
      this->disable_vision_negative_obstacles = false;
    }
  }

  // field types and members
  using _disable_vision_foot_obstacle_avoidance_type =
    bool;
  _disable_vision_foot_obstacle_avoidance_type disable_vision_foot_obstacle_avoidance;
  using _disable_vision_foot_constraint_avoidance_type =
    bool;
  _disable_vision_foot_constraint_avoidance_type disable_vision_foot_constraint_avoidance;
  using _disable_vision_body_obstacle_avoidance_type =
    bool;
  _disable_vision_body_obstacle_avoidance_type disable_vision_body_obstacle_avoidance;
  using _obstacle_avoidance_padding_type =
    double;
  _obstacle_avoidance_padding_type obstacle_avoidance_padding;
  using _disable_vision_foot_obstacle_body_assist_type =
    bool;
  _disable_vision_foot_obstacle_body_assist_type disable_vision_foot_obstacle_body_assist;
  using _disable_vision_negative_obstacles_type =
    bool;
  _disable_vision_negative_obstacles_type disable_vision_negative_obstacles;

  // setters for named parameter idiom
  Type & set__disable_vision_foot_obstacle_avoidance(
    const bool & _arg)
  {
    this->disable_vision_foot_obstacle_avoidance = _arg;
    return *this;
  }
  Type & set__disable_vision_foot_constraint_avoidance(
    const bool & _arg)
  {
    this->disable_vision_foot_constraint_avoidance = _arg;
    return *this;
  }
  Type & set__disable_vision_body_obstacle_avoidance(
    const bool & _arg)
  {
    this->disable_vision_body_obstacle_avoidance = _arg;
    return *this;
  }
  Type & set__obstacle_avoidance_padding(
    const double & _arg)
  {
    this->obstacle_avoidance_padding = _arg;
    return *this;
  }
  Type & set__disable_vision_foot_obstacle_body_assist(
    const bool & _arg)
  {
    this->disable_vision_foot_obstacle_body_assist = _arg;
    return *this;
  }
  Type & set__disable_vision_negative_obstacles(
    const bool & _arg)
  {
    this->disable_vision_negative_obstacles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ObstacleParams
    std::shared_ptr<bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ObstacleParams
    std::shared_ptr<bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleParams_ & other) const
  {
    if (this->disable_vision_foot_obstacle_avoidance != other.disable_vision_foot_obstacle_avoidance) {
      return false;
    }
    if (this->disable_vision_foot_constraint_avoidance != other.disable_vision_foot_constraint_avoidance) {
      return false;
    }
    if (this->disable_vision_body_obstacle_avoidance != other.disable_vision_body_obstacle_avoidance) {
      return false;
    }
    if (this->obstacle_avoidance_padding != other.obstacle_avoidance_padding) {
      return false;
    }
    if (this->disable_vision_foot_obstacle_body_assist != other.disable_vision_foot_obstacle_body_assist) {
      return false;
    }
    if (this->disable_vision_negative_obstacles != other.disable_vision_negative_obstacles) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleParams_

// alias to use template instance with default allocator
using ObstacleParams =
  bosdyn_msgs::msg::ObstacleParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__OBSTACLE_PARAMS__STRUCT_HPP_
