// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_states'
#include "bosdyn_msgs/msg/detail/joint_state__struct.hpp"
// Member 'acquisition_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__struct.hpp"
// Member 'velocity_of_body_in_vision'
// Member 'velocity_of_body_in_odom'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__KinematicState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__KinematicState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KinematicState_
{
  using Type = KinematicState_<ContainerAllocator>;

  explicit KinematicState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acquisition_timestamp(_init),
    transforms_snapshot(_init),
    velocity_of_body_in_vision(_init),
    velocity_of_body_in_odom(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acquisition_timestamp_is_set = false;
      this->transforms_snapshot_is_set = false;
      this->velocity_of_body_in_vision_is_set = false;
      this->velocity_of_body_in_odom_is_set = false;
    }
  }

  explicit KinematicState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acquisition_timestamp(_alloc, _init),
    transforms_snapshot(_alloc, _init),
    velocity_of_body_in_vision(_alloc, _init),
    velocity_of_body_in_odom(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acquisition_timestamp_is_set = false;
      this->transforms_snapshot_is_set = false;
      this->velocity_of_body_in_vision_is_set = false;
      this->velocity_of_body_in_odom_is_set = false;
    }
  }

  // field types and members
  using _joint_states_type =
    std::vector<bosdyn_msgs::msg::JointState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::JointState_<ContainerAllocator>>>;
  _joint_states_type joint_states;
  using _acquisition_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _acquisition_timestamp_type acquisition_timestamp;
  using _acquisition_timestamp_is_set_type =
    bool;
  _acquisition_timestamp_is_set_type acquisition_timestamp_is_set;
  using _transforms_snapshot_type =
    bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator>;
  _transforms_snapshot_type transforms_snapshot;
  using _transforms_snapshot_is_set_type =
    bool;
  _transforms_snapshot_is_set_type transforms_snapshot_is_set;
  using _velocity_of_body_in_vision_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_of_body_in_vision_type velocity_of_body_in_vision;
  using _velocity_of_body_in_vision_is_set_type =
    bool;
  _velocity_of_body_in_vision_is_set_type velocity_of_body_in_vision_is_set;
  using _velocity_of_body_in_odom_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_of_body_in_odom_type velocity_of_body_in_odom;
  using _velocity_of_body_in_odom_is_set_type =
    bool;
  _velocity_of_body_in_odom_is_set_type velocity_of_body_in_odom_is_set;

  // setters for named parameter idiom
  Type & set__joint_states(
    const std::vector<bosdyn_msgs::msg::JointState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::JointState_<ContainerAllocator>>> & _arg)
  {
    this->joint_states = _arg;
    return *this;
  }
  Type & set__acquisition_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->acquisition_timestamp = _arg;
    return *this;
  }
  Type & set__acquisition_timestamp_is_set(
    const bool & _arg)
  {
    this->acquisition_timestamp_is_set = _arg;
    return *this;
  }
  Type & set__transforms_snapshot(
    const bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator> & _arg)
  {
    this->transforms_snapshot = _arg;
    return *this;
  }
  Type & set__transforms_snapshot_is_set(
    const bool & _arg)
  {
    this->transforms_snapshot_is_set = _arg;
    return *this;
  }
  Type & set__velocity_of_body_in_vision(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_of_body_in_vision = _arg;
    return *this;
  }
  Type & set__velocity_of_body_in_vision_is_set(
    const bool & _arg)
  {
    this->velocity_of_body_in_vision_is_set = _arg;
    return *this;
  }
  Type & set__velocity_of_body_in_odom(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_of_body_in_odom = _arg;
    return *this;
  }
  Type & set__velocity_of_body_in_odom_is_set(
    const bool & _arg)
  {
    this->velocity_of_body_in_odom_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::KinematicState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::KinematicState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::KinematicState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::KinematicState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::KinematicState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::KinematicState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::KinematicState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::KinematicState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::KinematicState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::KinematicState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__KinematicState
    std::shared_ptr<bosdyn_msgs::msg::KinematicState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__KinematicState
    std::shared_ptr<bosdyn_msgs::msg::KinematicState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KinematicState_ & other) const
  {
    if (this->joint_states != other.joint_states) {
      return false;
    }
    if (this->acquisition_timestamp != other.acquisition_timestamp) {
      return false;
    }
    if (this->acquisition_timestamp_is_set != other.acquisition_timestamp_is_set) {
      return false;
    }
    if (this->transforms_snapshot != other.transforms_snapshot) {
      return false;
    }
    if (this->transforms_snapshot_is_set != other.transforms_snapshot_is_set) {
      return false;
    }
    if (this->velocity_of_body_in_vision != other.velocity_of_body_in_vision) {
      return false;
    }
    if (this->velocity_of_body_in_vision_is_set != other.velocity_of_body_in_vision_is_set) {
      return false;
    }
    if (this->velocity_of_body_in_odom != other.velocity_of_body_in_odom) {
      return false;
    }
    if (this->velocity_of_body_in_odom_is_set != other.velocity_of_body_in_odom_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const KinematicState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KinematicState_

// alias to use template instance with default allocator
using KinematicState =
  bosdyn_msgs::msg::KinematicState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_HPP_
