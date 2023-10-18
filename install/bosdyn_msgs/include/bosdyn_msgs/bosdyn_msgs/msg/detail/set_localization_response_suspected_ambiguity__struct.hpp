// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationResponseSuspectedAmbiguity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE_SUSPECTED_AMBIGUITY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE_SUSPECTED_AMBIGUITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'alternate_robot_tform_waypoint'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SetLocalizationResponseSuspectedAmbiguity __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SetLocalizationResponseSuspectedAmbiguity __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetLocalizationResponseSuspectedAmbiguity_
{
  using Type = SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator>;

  explicit SetLocalizationResponseSuspectedAmbiguity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : alternate_robot_tform_waypoint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alternate_robot_tform_waypoint_is_set = false;
    }
  }

  explicit SetLocalizationResponseSuspectedAmbiguity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : alternate_robot_tform_waypoint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alternate_robot_tform_waypoint_is_set = false;
    }
  }

  // field types and members
  using _alternate_robot_tform_waypoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _alternate_robot_tform_waypoint_type alternate_robot_tform_waypoint;
  using _alternate_robot_tform_waypoint_is_set_type =
    bool;
  _alternate_robot_tform_waypoint_is_set_type alternate_robot_tform_waypoint_is_set;

  // setters for named parameter idiom
  Type & set__alternate_robot_tform_waypoint(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->alternate_robot_tform_waypoint = _arg;
    return *this;
  }
  Type & set__alternate_robot_tform_waypoint_is_set(
    const bool & _arg)
  {
    this->alternate_robot_tform_waypoint_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SetLocalizationResponseSuspectedAmbiguity
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SetLocalizationResponseSuspectedAmbiguity
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLocalizationResponseSuspectedAmbiguity_ & other) const
  {
    if (this->alternate_robot_tform_waypoint != other.alternate_robot_tform_waypoint) {
      return false;
    }
    if (this->alternate_robot_tform_waypoint_is_set != other.alternate_robot_tform_waypoint_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLocalizationResponseSuspectedAmbiguity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLocalizationResponseSuspectedAmbiguity_

// alias to use template instance with default allocator
using SetLocalizationResponseSuspectedAmbiguity =
  bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE_SUSPECTED_AMBIGUITY__STRUCT_HPP_
