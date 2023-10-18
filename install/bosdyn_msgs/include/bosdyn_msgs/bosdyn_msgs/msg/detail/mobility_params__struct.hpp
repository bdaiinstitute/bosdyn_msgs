// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MobilityParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vel_limit'
#include "bosdyn_msgs/msg/detail/se2_velocity_limit__struct.hpp"
// Member 'body_control'
#include "bosdyn_msgs/msg/detail/body_control_params__struct.hpp"
// Member 'locomotion_hint'
#include "bosdyn_msgs/msg/detail/locomotion_hint__struct.hpp"
// Member 'stairs_mode'
#include "bosdyn_msgs/msg/detail/mobility_params_stairs_mode__struct.hpp"
// Member 'obstacle_params'
#include "bosdyn_msgs/msg/detail/obstacle_params__struct.hpp"
// Member 'swing_height'
#include "bosdyn_msgs/msg/detail/swing_height__struct.hpp"
// Member 'terrain_params'
#include "bosdyn_msgs/msg/detail/terrain_params__struct.hpp"
// Member 'external_force_params'
#include "bosdyn_msgs/msg/detail/body_external_force_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MobilityParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MobilityParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityParams_
{
  using Type = MobilityParams_<ContainerAllocator>;

  explicit MobilityParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vel_limit(_init),
    body_control(_init),
    locomotion_hint(_init),
    stairs_mode(_init),
    obstacle_params(_init),
    swing_height(_init),
    terrain_params(_init),
    external_force_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_limit_is_set = false;
      this->body_control_is_set = false;
      this->allow_degraded_perception = false;
      this->obstacle_params_is_set = false;
      this->terrain_params_is_set = false;
      this->disallow_stair_tracker = false;
      this->disable_stair_error_auto_descent = false;
      this->external_force_params_is_set = false;
      this->disallow_non_stairs_pitch_limiting = false;
      this->disable_nearmap_cliff_avoidance = false;
    }
  }

  explicit MobilityParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vel_limit(_alloc, _init),
    body_control(_alloc, _init),
    locomotion_hint(_alloc, _init),
    stairs_mode(_alloc, _init),
    obstacle_params(_alloc, _init),
    swing_height(_alloc, _init),
    terrain_params(_alloc, _init),
    external_force_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_limit_is_set = false;
      this->body_control_is_set = false;
      this->allow_degraded_perception = false;
      this->obstacle_params_is_set = false;
      this->terrain_params_is_set = false;
      this->disallow_stair_tracker = false;
      this->disable_stair_error_auto_descent = false;
      this->external_force_params_is_set = false;
      this->disallow_non_stairs_pitch_limiting = false;
      this->disable_nearmap_cliff_avoidance = false;
    }
  }

  // field types and members
  using _vel_limit_type =
    bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator>;
  _vel_limit_type vel_limit;
  using _vel_limit_is_set_type =
    bool;
  _vel_limit_is_set_type vel_limit_is_set;
  using _body_control_type =
    bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator>;
  _body_control_type body_control;
  using _body_control_is_set_type =
    bool;
  _body_control_is_set_type body_control_is_set;
  using _locomotion_hint_type =
    bosdyn_msgs::msg::LocomotionHint_<ContainerAllocator>;
  _locomotion_hint_type locomotion_hint;
  using _stairs_mode_type =
    bosdyn_msgs::msg::MobilityParamsStairsMode_<ContainerAllocator>;
  _stairs_mode_type stairs_mode;
  using _allow_degraded_perception_type =
    bool;
  _allow_degraded_perception_type allow_degraded_perception;
  using _obstacle_params_type =
    bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator>;
  _obstacle_params_type obstacle_params;
  using _obstacle_params_is_set_type =
    bool;
  _obstacle_params_is_set_type obstacle_params_is_set;
  using _swing_height_type =
    bosdyn_msgs::msg::SwingHeight_<ContainerAllocator>;
  _swing_height_type swing_height;
  using _terrain_params_type =
    bosdyn_msgs::msg::TerrainParams_<ContainerAllocator>;
  _terrain_params_type terrain_params;
  using _terrain_params_is_set_type =
    bool;
  _terrain_params_is_set_type terrain_params_is_set;
  using _disallow_stair_tracker_type =
    bool;
  _disallow_stair_tracker_type disallow_stair_tracker;
  using _disable_stair_error_auto_descent_type =
    bool;
  _disable_stair_error_auto_descent_type disable_stair_error_auto_descent;
  using _external_force_params_type =
    bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator>;
  _external_force_params_type external_force_params;
  using _external_force_params_is_set_type =
    bool;
  _external_force_params_is_set_type external_force_params_is_set;
  using _disallow_non_stairs_pitch_limiting_type =
    bool;
  _disallow_non_stairs_pitch_limiting_type disallow_non_stairs_pitch_limiting;
  using _disable_nearmap_cliff_avoidance_type =
    bool;
  _disable_nearmap_cliff_avoidance_type disable_nearmap_cliff_avoidance;

  // setters for named parameter idiom
  Type & set__vel_limit(
    const bosdyn_msgs::msg::SE2VelocityLimit_<ContainerAllocator> & _arg)
  {
    this->vel_limit = _arg;
    return *this;
  }
  Type & set__vel_limit_is_set(
    const bool & _arg)
  {
    this->vel_limit_is_set = _arg;
    return *this;
  }
  Type & set__body_control(
    const bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator> & _arg)
  {
    this->body_control = _arg;
    return *this;
  }
  Type & set__body_control_is_set(
    const bool & _arg)
  {
    this->body_control_is_set = _arg;
    return *this;
  }
  Type & set__locomotion_hint(
    const bosdyn_msgs::msg::LocomotionHint_<ContainerAllocator> & _arg)
  {
    this->locomotion_hint = _arg;
    return *this;
  }
  Type & set__stairs_mode(
    const bosdyn_msgs::msg::MobilityParamsStairsMode_<ContainerAllocator> & _arg)
  {
    this->stairs_mode = _arg;
    return *this;
  }
  Type & set__allow_degraded_perception(
    const bool & _arg)
  {
    this->allow_degraded_perception = _arg;
    return *this;
  }
  Type & set__obstacle_params(
    const bosdyn_msgs::msg::ObstacleParams_<ContainerAllocator> & _arg)
  {
    this->obstacle_params = _arg;
    return *this;
  }
  Type & set__obstacle_params_is_set(
    const bool & _arg)
  {
    this->obstacle_params_is_set = _arg;
    return *this;
  }
  Type & set__swing_height(
    const bosdyn_msgs::msg::SwingHeight_<ContainerAllocator> & _arg)
  {
    this->swing_height = _arg;
    return *this;
  }
  Type & set__terrain_params(
    const bosdyn_msgs::msg::TerrainParams_<ContainerAllocator> & _arg)
  {
    this->terrain_params = _arg;
    return *this;
  }
  Type & set__terrain_params_is_set(
    const bool & _arg)
  {
    this->terrain_params_is_set = _arg;
    return *this;
  }
  Type & set__disallow_stair_tracker(
    const bool & _arg)
  {
    this->disallow_stair_tracker = _arg;
    return *this;
  }
  Type & set__disable_stair_error_auto_descent(
    const bool & _arg)
  {
    this->disable_stair_error_auto_descent = _arg;
    return *this;
  }
  Type & set__external_force_params(
    const bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator> & _arg)
  {
    this->external_force_params = _arg;
    return *this;
  }
  Type & set__external_force_params_is_set(
    const bool & _arg)
  {
    this->external_force_params_is_set = _arg;
    return *this;
  }
  Type & set__disallow_non_stairs_pitch_limiting(
    const bool & _arg)
  {
    this->disallow_non_stairs_pitch_limiting = _arg;
    return *this;
  }
  Type & set__disable_nearmap_cliff_avoidance(
    const bool & _arg)
  {
    this->disable_nearmap_cliff_avoidance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MobilityParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MobilityParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MobilityParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MobilityParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MobilityParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MobilityParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MobilityParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MobilityParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MobilityParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MobilityParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MobilityParams
    std::shared_ptr<bosdyn_msgs::msg::MobilityParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MobilityParams
    std::shared_ptr<bosdyn_msgs::msg::MobilityParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityParams_ & other) const
  {
    if (this->vel_limit != other.vel_limit) {
      return false;
    }
    if (this->vel_limit_is_set != other.vel_limit_is_set) {
      return false;
    }
    if (this->body_control != other.body_control) {
      return false;
    }
    if (this->body_control_is_set != other.body_control_is_set) {
      return false;
    }
    if (this->locomotion_hint != other.locomotion_hint) {
      return false;
    }
    if (this->stairs_mode != other.stairs_mode) {
      return false;
    }
    if (this->allow_degraded_perception != other.allow_degraded_perception) {
      return false;
    }
    if (this->obstacle_params != other.obstacle_params) {
      return false;
    }
    if (this->obstacle_params_is_set != other.obstacle_params_is_set) {
      return false;
    }
    if (this->swing_height != other.swing_height) {
      return false;
    }
    if (this->terrain_params != other.terrain_params) {
      return false;
    }
    if (this->terrain_params_is_set != other.terrain_params_is_set) {
      return false;
    }
    if (this->disallow_stair_tracker != other.disallow_stair_tracker) {
      return false;
    }
    if (this->disable_stair_error_auto_descent != other.disable_stair_error_auto_descent) {
      return false;
    }
    if (this->external_force_params != other.external_force_params) {
      return false;
    }
    if (this->external_force_params_is_set != other.external_force_params_is_set) {
      return false;
    }
    if (this->disallow_non_stairs_pitch_limiting != other.disallow_non_stairs_pitch_limiting) {
      return false;
    }
    if (this->disable_nearmap_cliff_avoidance != other.disable_nearmap_cliff_avoidance) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityParams_

// alias to use template instance with default allocator
using MobilityParams =
  bosdyn_msgs::msg::MobilityParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS__STRUCT_HPP_
