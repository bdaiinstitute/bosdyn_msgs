// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WorldObjectAnchorHint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'object_anchor'
#include "bosdyn_msgs/msg/detail/anchored_world_object__struct.hpp"
// Member 'seed_tform_object_uncertainty'
#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty__struct.hpp"
// Member 'seed_tform_object_constraint'
#include "bosdyn_msgs/msg/detail/pose_bounds__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WorldObjectAnchorHint __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WorldObjectAnchorHint __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorldObjectAnchorHint_
{
  using Type = WorldObjectAnchorHint_<ContainerAllocator>;

  explicit WorldObjectAnchorHint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_anchor(_init),
    seed_tform_object_uncertainty(_init),
    seed_tform_object_constraint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_anchor_is_set = false;
      this->seed_tform_object_uncertainty_is_set = false;
      this->seed_tform_object_constraint_is_set = false;
    }
  }

  explicit WorldObjectAnchorHint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_anchor(_alloc, _init),
    seed_tform_object_uncertainty(_alloc, _init),
    seed_tform_object_constraint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_anchor_is_set = false;
      this->seed_tform_object_uncertainty_is_set = false;
      this->seed_tform_object_constraint_is_set = false;
    }
  }

  // field types and members
  using _object_anchor_type =
    bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>;
  _object_anchor_type object_anchor;
  using _object_anchor_is_set_type =
    bool;
  _object_anchor_is_set_type object_anchor_is_set;
  using _seed_tform_object_uncertainty_type =
    bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator>;
  _seed_tform_object_uncertainty_type seed_tform_object_uncertainty;
  using _seed_tform_object_uncertainty_is_set_type =
    bool;
  _seed_tform_object_uncertainty_is_set_type seed_tform_object_uncertainty_is_set;
  using _seed_tform_object_constraint_type =
    bosdyn_msgs::msg::PoseBounds_<ContainerAllocator>;
  _seed_tform_object_constraint_type seed_tform_object_constraint;
  using _seed_tform_object_constraint_is_set_type =
    bool;
  _seed_tform_object_constraint_is_set_type seed_tform_object_constraint_is_set;

  // setters for named parameter idiom
  Type & set__object_anchor(
    const bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator> & _arg)
  {
    this->object_anchor = _arg;
    return *this;
  }
  Type & set__object_anchor_is_set(
    const bool & _arg)
  {
    this->object_anchor_is_set = _arg;
    return *this;
  }
  Type & set__seed_tform_object_uncertainty(
    const bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator> & _arg)
  {
    this->seed_tform_object_uncertainty = _arg;
    return *this;
  }
  Type & set__seed_tform_object_uncertainty_is_set(
    const bool & _arg)
  {
    this->seed_tform_object_uncertainty_is_set = _arg;
    return *this;
  }
  Type & set__seed_tform_object_constraint(
    const bosdyn_msgs::msg::PoseBounds_<ContainerAllocator> & _arg)
  {
    this->seed_tform_object_constraint = _arg;
    return *this;
  }
  Type & set__seed_tform_object_constraint_is_set(
    const bool & _arg)
  {
    this->seed_tform_object_constraint_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WorldObjectAnchorHint
    std::shared_ptr<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WorldObjectAnchorHint
    std::shared_ptr<bosdyn_msgs::msg::WorldObjectAnchorHint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorldObjectAnchorHint_ & other) const
  {
    if (this->object_anchor != other.object_anchor) {
      return false;
    }
    if (this->object_anchor_is_set != other.object_anchor_is_set) {
      return false;
    }
    if (this->seed_tform_object_uncertainty != other.seed_tform_object_uncertainty) {
      return false;
    }
    if (this->seed_tform_object_uncertainty_is_set != other.seed_tform_object_uncertainty_is_set) {
      return false;
    }
    if (this->seed_tform_object_constraint != other.seed_tform_object_constraint) {
      return false;
    }
    if (this->seed_tform_object_constraint_is_set != other.seed_tform_object_constraint_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorldObjectAnchorHint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorldObjectAnchorHint_

// alias to use template instance with default allocator
using WorldObjectAnchorHint =
  bosdyn_msgs::msg::WorldObjectAnchorHint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__STRUCT_HPP_
