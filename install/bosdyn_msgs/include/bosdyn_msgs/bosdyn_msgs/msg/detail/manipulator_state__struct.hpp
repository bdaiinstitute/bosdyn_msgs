// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'estimated_end_effector_force_in_hand'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'stow_state'
#include "bosdyn_msgs/msg/detail/manipulator_state_stow_state__struct.hpp"
// Member 'velocity_of_hand_in_vision'
// Member 'velocity_of_hand_in_odom'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'carry_state'
#include "bosdyn_msgs/msg/detail/manipulator_state_carry_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ManipulatorState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ManipulatorState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManipulatorState_
{
  using Type = ManipulatorState_<ContainerAllocator>;

  explicit ManipulatorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : estimated_end_effector_force_in_hand(_init),
    stow_state(_init),
    velocity_of_hand_in_vision(_init),
    velocity_of_hand_in_odom(_init),
    carry_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_open_percentage = 0.0;
      this->is_gripper_holding_item = false;
      this->estimated_end_effector_force_in_hand_is_set = false;
      this->velocity_of_hand_in_vision_is_set = false;
      this->velocity_of_hand_in_odom_is_set = false;
    }
  }

  explicit ManipulatorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : estimated_end_effector_force_in_hand(_alloc, _init),
    stow_state(_alloc, _init),
    velocity_of_hand_in_vision(_alloc, _init),
    velocity_of_hand_in_odom(_alloc, _init),
    carry_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_open_percentage = 0.0;
      this->is_gripper_holding_item = false;
      this->estimated_end_effector_force_in_hand_is_set = false;
      this->velocity_of_hand_in_vision_is_set = false;
      this->velocity_of_hand_in_odom_is_set = false;
    }
  }

  // field types and members
  using _gripper_open_percentage_type =
    double;
  _gripper_open_percentage_type gripper_open_percentage;
  using _is_gripper_holding_item_type =
    bool;
  _is_gripper_holding_item_type is_gripper_holding_item;
  using _estimated_end_effector_force_in_hand_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _estimated_end_effector_force_in_hand_type estimated_end_effector_force_in_hand;
  using _estimated_end_effector_force_in_hand_is_set_type =
    bool;
  _estimated_end_effector_force_in_hand_is_set_type estimated_end_effector_force_in_hand_is_set;
  using _stow_state_type =
    bosdyn_msgs::msg::ManipulatorStateStowState_<ContainerAllocator>;
  _stow_state_type stow_state;
  using _velocity_of_hand_in_vision_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_of_hand_in_vision_type velocity_of_hand_in_vision;
  using _velocity_of_hand_in_vision_is_set_type =
    bool;
  _velocity_of_hand_in_vision_is_set_type velocity_of_hand_in_vision_is_set;
  using _velocity_of_hand_in_odom_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_of_hand_in_odom_type velocity_of_hand_in_odom;
  using _velocity_of_hand_in_odom_is_set_type =
    bool;
  _velocity_of_hand_in_odom_is_set_type velocity_of_hand_in_odom_is_set;
  using _carry_state_type =
    bosdyn_msgs::msg::ManipulatorStateCarryState_<ContainerAllocator>;
  _carry_state_type carry_state;

  // setters for named parameter idiom
  Type & set__gripper_open_percentage(
    const double & _arg)
  {
    this->gripper_open_percentage = _arg;
    return *this;
  }
  Type & set__is_gripper_holding_item(
    const bool & _arg)
  {
    this->is_gripper_holding_item = _arg;
    return *this;
  }
  Type & set__estimated_end_effector_force_in_hand(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->estimated_end_effector_force_in_hand = _arg;
    return *this;
  }
  Type & set__estimated_end_effector_force_in_hand_is_set(
    const bool & _arg)
  {
    this->estimated_end_effector_force_in_hand_is_set = _arg;
    return *this;
  }
  Type & set__stow_state(
    const bosdyn_msgs::msg::ManipulatorStateStowState_<ContainerAllocator> & _arg)
  {
    this->stow_state = _arg;
    return *this;
  }
  Type & set__velocity_of_hand_in_vision(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_of_hand_in_vision = _arg;
    return *this;
  }
  Type & set__velocity_of_hand_in_vision_is_set(
    const bool & _arg)
  {
    this->velocity_of_hand_in_vision_is_set = _arg;
    return *this;
  }
  Type & set__velocity_of_hand_in_odom(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_of_hand_in_odom = _arg;
    return *this;
  }
  Type & set__velocity_of_hand_in_odom_is_set(
    const bool & _arg)
  {
    this->velocity_of_hand_in_odom_is_set = _arg;
    return *this;
  }
  Type & set__carry_state(
    const bosdyn_msgs::msg::ManipulatorStateCarryState_<ContainerAllocator> & _arg)
  {
    this->carry_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ManipulatorState
    std::shared_ptr<bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ManipulatorState
    std::shared_ptr<bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManipulatorState_ & other) const
  {
    if (this->gripper_open_percentage != other.gripper_open_percentage) {
      return false;
    }
    if (this->is_gripper_holding_item != other.is_gripper_holding_item) {
      return false;
    }
    if (this->estimated_end_effector_force_in_hand != other.estimated_end_effector_force_in_hand) {
      return false;
    }
    if (this->estimated_end_effector_force_in_hand_is_set != other.estimated_end_effector_force_in_hand_is_set) {
      return false;
    }
    if (this->stow_state != other.stow_state) {
      return false;
    }
    if (this->velocity_of_hand_in_vision != other.velocity_of_hand_in_vision) {
      return false;
    }
    if (this->velocity_of_hand_in_vision_is_set != other.velocity_of_hand_in_vision_is_set) {
      return false;
    }
    if (this->velocity_of_hand_in_odom != other.velocity_of_hand_in_odom) {
      return false;
    }
    if (this->velocity_of_hand_in_odom_is_set != other.velocity_of_hand_in_odom_is_set) {
      return false;
    }
    if (this->carry_state != other.carry_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManipulatorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManipulatorState_

// alias to use template instance with default allocator
using ManipulatorState =
  bosdyn_msgs::msg::ManipulatorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_HPP_
