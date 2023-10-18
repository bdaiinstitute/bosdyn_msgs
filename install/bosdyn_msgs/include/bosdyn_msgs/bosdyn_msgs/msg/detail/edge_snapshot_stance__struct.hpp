// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EdgeSnapshotStance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT_STANCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT_STANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'foot_states'
#include "bosdyn_msgs/msg/detail/foot_state__struct.hpp"
// Member 'ko_tform_body'
// Member 'vision_tform_body'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EdgeSnapshotStance __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EdgeSnapshotStance __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EdgeSnapshotStance_
{
  using Type = EdgeSnapshotStance_<ContainerAllocator>;

  explicit EdgeSnapshotStance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    ko_tform_body(_init),
    vision_tform_body(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_is_set = false;
      this->ko_tform_body_is_set = false;
      this->vision_tform_body_is_set = false;
      this->planar_ground = false;
      this->planar_ground_is_set = false;
    }
  }

  explicit EdgeSnapshotStance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    ko_tform_body(_alloc, _init),
    vision_tform_body(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_is_set = false;
      this->ko_tform_body_is_set = false;
      this->vision_tform_body_is_set = false;
      this->planar_ground = false;
      this->planar_ground_is_set = false;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _timestamp_is_set_type =
    bool;
  _timestamp_is_set_type timestamp_is_set;
  using _foot_states_type =
    std::vector<bosdyn_msgs::msg::FootState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::FootState_<ContainerAllocator>>>;
  _foot_states_type foot_states;
  using _ko_tform_body_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _ko_tform_body_type ko_tform_body;
  using _ko_tform_body_is_set_type =
    bool;
  _ko_tform_body_is_set_type ko_tform_body_is_set;
  using _vision_tform_body_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _vision_tform_body_type vision_tform_body;
  using _vision_tform_body_is_set_type =
    bool;
  _vision_tform_body_is_set_type vision_tform_body_is_set;
  using _planar_ground_type =
    bool;
  _planar_ground_type planar_ground;
  using _planar_ground_is_set_type =
    bool;
  _planar_ground_is_set_type planar_ground_is_set;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_is_set(
    const bool & _arg)
  {
    this->timestamp_is_set = _arg;
    return *this;
  }
  Type & set__foot_states(
    const std::vector<bosdyn_msgs::msg::FootState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::FootState_<ContainerAllocator>>> & _arg)
  {
    this->foot_states = _arg;
    return *this;
  }
  Type & set__ko_tform_body(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->ko_tform_body = _arg;
    return *this;
  }
  Type & set__ko_tform_body_is_set(
    const bool & _arg)
  {
    this->ko_tform_body_is_set = _arg;
    return *this;
  }
  Type & set__vision_tform_body(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->vision_tform_body = _arg;
    return *this;
  }
  Type & set__vision_tform_body_is_set(
    const bool & _arg)
  {
    this->vision_tform_body_is_set = _arg;
    return *this;
  }
  Type & set__planar_ground(
    const bool & _arg)
  {
    this->planar_ground = _arg;
    return *this;
  }
  Type & set__planar_ground_is_set(
    const bool & _arg)
  {
    this->planar_ground_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EdgeSnapshotStance
    std::shared_ptr<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EdgeSnapshotStance
    std::shared_ptr<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EdgeSnapshotStance_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_is_set != other.timestamp_is_set) {
      return false;
    }
    if (this->foot_states != other.foot_states) {
      return false;
    }
    if (this->ko_tform_body != other.ko_tform_body) {
      return false;
    }
    if (this->ko_tform_body_is_set != other.ko_tform_body_is_set) {
      return false;
    }
    if (this->vision_tform_body != other.vision_tform_body) {
      return false;
    }
    if (this->vision_tform_body_is_set != other.vision_tform_body_is_set) {
      return false;
    }
    if (this->planar_ground != other.planar_ground) {
      return false;
    }
    if (this->planar_ground_is_set != other.planar_ground_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const EdgeSnapshotStance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EdgeSnapshotStance_

// alias to use template instance with default allocator
using EdgeSnapshotStance =
  bosdyn_msgs::msg::EdgeSnapshotStance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT_STANCE__STRUCT_HPP_
