// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/KeypointMatches.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_MATCHES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_MATCHES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'reference_keypoints'
// Member 'live_keypoints'
#include "bosdyn_msgs/msg/detail/keypoint_set__struct.hpp"
// Member 'matches'
#include "bosdyn_msgs/msg/detail/match__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__KeypointMatches __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__KeypointMatches __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeypointMatches_
{
  using Type = KeypointMatches_<ContainerAllocator>;

  explicit KeypointMatches_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_keypoints(_init),
    live_keypoints(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_keypoints_is_set = false;
      this->live_keypoints_is_set = false;
    }
  }

  explicit KeypointMatches_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_keypoints(_alloc, _init),
    live_keypoints(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_keypoints_is_set = false;
      this->live_keypoints_is_set = false;
    }
  }

  // field types and members
  using _reference_keypoints_type =
    bosdyn_msgs::msg::KeypointSet_<ContainerAllocator>;
  _reference_keypoints_type reference_keypoints;
  using _reference_keypoints_is_set_type =
    bool;
  _reference_keypoints_is_set_type reference_keypoints_is_set;
  using _live_keypoints_type =
    bosdyn_msgs::msg::KeypointSet_<ContainerAllocator>;
  _live_keypoints_type live_keypoints;
  using _live_keypoints_is_set_type =
    bool;
  _live_keypoints_is_set_type live_keypoints_is_set;
  using _matches_type =
    std::vector<bosdyn_msgs::msg::Match_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Match_<ContainerAllocator>>>;
  _matches_type matches;

  // setters for named parameter idiom
  Type & set__reference_keypoints(
    const bosdyn_msgs::msg::KeypointSet_<ContainerAllocator> & _arg)
  {
    this->reference_keypoints = _arg;
    return *this;
  }
  Type & set__reference_keypoints_is_set(
    const bool & _arg)
  {
    this->reference_keypoints_is_set = _arg;
    return *this;
  }
  Type & set__live_keypoints(
    const bosdyn_msgs::msg::KeypointSet_<ContainerAllocator> & _arg)
  {
    this->live_keypoints = _arg;
    return *this;
  }
  Type & set__live_keypoints_is_set(
    const bool & _arg)
  {
    this->live_keypoints_is_set = _arg;
    return *this;
  }
  Type & set__matches(
    const std::vector<bosdyn_msgs::msg::Match_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Match_<ContainerAllocator>>> & _arg)
  {
    this->matches = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__KeypointMatches
    std::shared_ptr<bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__KeypointMatches
    std::shared_ptr<bosdyn_msgs::msg::KeypointMatches_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeypointMatches_ & other) const
  {
    if (this->reference_keypoints != other.reference_keypoints) {
      return false;
    }
    if (this->reference_keypoints_is_set != other.reference_keypoints_is_set) {
      return false;
    }
    if (this->live_keypoints != other.live_keypoints) {
      return false;
    }
    if (this->live_keypoints_is_set != other.live_keypoints_is_set) {
      return false;
    }
    if (this->matches != other.matches) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeypointMatches_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeypointMatches_

// alias to use template instance with default allocator
using KeypointMatches =
  bosdyn_msgs::msg::KeypointMatches_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_MATCHES__STRUCT_HPP_
