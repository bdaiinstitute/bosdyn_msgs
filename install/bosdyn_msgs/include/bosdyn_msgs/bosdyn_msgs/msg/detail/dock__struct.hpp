// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Dock.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_prep_pose'
#include "bosdyn_msgs/msg/detail/target__struct.hpp"
// Member 'prompt_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Dock __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Dock __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Dock_
{
  using Type = Dock_<ContainerAllocator>;

  explicit Dock_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_prep_pose(_init),
    prompt_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_id = 0ul;
      this->docked_waypoint_id = "";
      this->target_prep_pose_is_set = false;
      this->prompt_duration_is_set = false;
    }
  }

  explicit Dock_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : docked_waypoint_id(_alloc),
    target_prep_pose(_alloc, _init),
    prompt_duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_id = 0ul;
      this->docked_waypoint_id = "";
      this->target_prep_pose_is_set = false;
      this->prompt_duration_is_set = false;
    }
  }

  // field types and members
  using _dock_id_type =
    uint32_t;
  _dock_id_type dock_id;
  using _docked_waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _docked_waypoint_id_type docked_waypoint_id;
  using _target_prep_pose_type =
    bosdyn_msgs::msg::Target_<ContainerAllocator>;
  _target_prep_pose_type target_prep_pose;
  using _target_prep_pose_is_set_type =
    bool;
  _target_prep_pose_is_set_type target_prep_pose_is_set;
  using _prompt_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _prompt_duration_type prompt_duration;
  using _prompt_duration_is_set_type =
    bool;
  _prompt_duration_is_set_type prompt_duration_is_set;

  // setters for named parameter idiom
  Type & set__dock_id(
    const uint32_t & _arg)
  {
    this->dock_id = _arg;
    return *this;
  }
  Type & set__docked_waypoint_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->docked_waypoint_id = _arg;
    return *this;
  }
  Type & set__target_prep_pose(
    const bosdyn_msgs::msg::Target_<ContainerAllocator> & _arg)
  {
    this->target_prep_pose = _arg;
    return *this;
  }
  Type & set__target_prep_pose_is_set(
    const bool & _arg)
  {
    this->target_prep_pose_is_set = _arg;
    return *this;
  }
  Type & set__prompt_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->prompt_duration = _arg;
    return *this;
  }
  Type & set__prompt_duration_is_set(
    const bool & _arg)
  {
    this->prompt_duration_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Dock_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Dock_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Dock_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Dock_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Dock_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Dock_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Dock_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Dock_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Dock_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Dock_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Dock
    std::shared_ptr<bosdyn_msgs::msg::Dock_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Dock
    std::shared_ptr<bosdyn_msgs::msg::Dock_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_ & other) const
  {
    if (this->dock_id != other.dock_id) {
      return false;
    }
    if (this->docked_waypoint_id != other.docked_waypoint_id) {
      return false;
    }
    if (this->target_prep_pose != other.target_prep_pose) {
      return false;
    }
    if (this->target_prep_pose_is_set != other.target_prep_pose_is_set) {
      return false;
    }
    if (this->prompt_duration != other.prompt_duration) {
      return false;
    }
    if (this->prompt_duration_is_set != other.prompt_duration_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_

// alias to use template instance with default allocator
using Dock =
  bosdyn_msgs::msg::Dock_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK__STRUCT_HPP_
