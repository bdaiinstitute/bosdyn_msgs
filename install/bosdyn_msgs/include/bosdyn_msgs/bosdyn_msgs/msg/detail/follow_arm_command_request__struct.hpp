// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FollowArmCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOLLOW_ARM_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOLLOW_ARM_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'body_offset_from_hand'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FollowArmCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FollowArmCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FollowArmCommandRequest_
{
  using Type = FollowArmCommandRequest_<ContainerAllocator>;

  explicit FollowArmCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : body_offset_from_hand(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->body_offset_from_hand_is_set = false;
    }
  }

  explicit FollowArmCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : body_offset_from_hand(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->body_offset_from_hand_is_set = false;
    }
  }

  // field types and members
  using _body_offset_from_hand_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _body_offset_from_hand_type body_offset_from_hand;
  using _body_offset_from_hand_is_set_type =
    bool;
  _body_offset_from_hand_is_set_type body_offset_from_hand_is_set;

  // setters for named parameter idiom
  Type & set__body_offset_from_hand(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->body_offset_from_hand = _arg;
    return *this;
  }
  Type & set__body_offset_from_hand_is_set(
    const bool & _arg)
  {
    this->body_offset_from_hand_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FollowArmCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FollowArmCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowArmCommandRequest_ & other) const
  {
    if (this->body_offset_from_hand != other.body_offset_from_hand) {
      return false;
    }
    if (this->body_offset_from_hand_is_set != other.body_offset_from_hand_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowArmCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowArmCommandRequest_

// alias to use template instance with default allocator
using FollowArmCommandRequest =
  bosdyn_msgs::msg::FollowArmCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOLLOW_ARM_COMMAND_REQUEST__STRUCT_HPP_
