// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Localization.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCALIZATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCALIZATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoint_tform_body'
// Member 'seed_tform_body'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Localization __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Localization __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Localization_
{
  using Type = Localization_<ContainerAllocator>;

  explicit Localization_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_tform_body(_init),
    seed_tform_body(_init),
    timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_id = "";
      this->waypoint_tform_body_is_set = false;
      this->seed_tform_body_is_set = false;
      this->timestamp_is_set = false;
    }
  }

  explicit Localization_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_id(_alloc),
    waypoint_tform_body(_alloc, _init),
    seed_tform_body(_alloc, _init),
    timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_id = "";
      this->waypoint_tform_body_is_set = false;
      this->seed_tform_body_is_set = false;
      this->timestamp_is_set = false;
    }
  }

  // field types and members
  using _waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_id_type waypoint_id;
  using _waypoint_tform_body_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _waypoint_tform_body_type waypoint_tform_body;
  using _waypoint_tform_body_is_set_type =
    bool;
  _waypoint_tform_body_is_set_type waypoint_tform_body_is_set;
  using _seed_tform_body_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _seed_tform_body_type seed_tform_body;
  using _seed_tform_body_is_set_type =
    bool;
  _seed_tform_body_is_set_type seed_tform_body_is_set;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _timestamp_is_set_type =
    bool;
  _timestamp_is_set_type timestamp_is_set;

  // setters for named parameter idiom
  Type & set__waypoint_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_id = _arg;
    return *this;
  }
  Type & set__waypoint_tform_body(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->waypoint_tform_body = _arg;
    return *this;
  }
  Type & set__waypoint_tform_body_is_set(
    const bool & _arg)
  {
    this->waypoint_tform_body_is_set = _arg;
    return *this;
  }
  Type & set__seed_tform_body(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->seed_tform_body = _arg;
    return *this;
  }
  Type & set__seed_tform_body_is_set(
    const bool & _arg)
  {
    this->seed_tform_body_is_set = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Localization_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Localization_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Localization_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Localization_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Localization_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Localization_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Localization_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Localization_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Localization_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Localization_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Localization
    std::shared_ptr<bosdyn_msgs::msg::Localization_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Localization
    std::shared_ptr<bosdyn_msgs::msg::Localization_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Localization_ & other) const
  {
    if (this->waypoint_id != other.waypoint_id) {
      return false;
    }
    if (this->waypoint_tform_body != other.waypoint_tform_body) {
      return false;
    }
    if (this->waypoint_tform_body_is_set != other.waypoint_tform_body_is_set) {
      return false;
    }
    if (this->seed_tform_body != other.seed_tform_body) {
      return false;
    }
    if (this->seed_tform_body_is_set != other.seed_tform_body_is_set) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_is_set != other.timestamp_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Localization_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Localization_

// alias to use template instance with default allocator
using Localization =
  bosdyn_msgs::msg::Localization_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCALIZATION__STRUCT_HPP_
