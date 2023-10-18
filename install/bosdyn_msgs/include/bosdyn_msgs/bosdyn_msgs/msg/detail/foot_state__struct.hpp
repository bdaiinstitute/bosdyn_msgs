// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FootState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'foot_position_rt_body'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'contact'
#include "bosdyn_msgs/msg/detail/foot_state_contact__struct.hpp"
// Member 'terrain'
#include "bosdyn_msgs/msg/detail/foot_state_terrain_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FootState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FootState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FootState_
{
  using Type = FootState_<ContainerAllocator>;

  explicit FootState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : foot_position_rt_body(_init),
    contact(_init),
    terrain(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->foot_position_rt_body_is_set = false;
      this->terrain_is_set = false;
    }
  }

  explicit FootState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : foot_position_rt_body(_alloc, _init),
    contact(_alloc, _init),
    terrain(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->foot_position_rt_body_is_set = false;
      this->terrain_is_set = false;
    }
  }

  // field types and members
  using _foot_position_rt_body_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot_position_rt_body_type foot_position_rt_body;
  using _foot_position_rt_body_is_set_type =
    bool;
  _foot_position_rt_body_is_set_type foot_position_rt_body_is_set;
  using _contact_type =
    bosdyn_msgs::msg::FootStateContact_<ContainerAllocator>;
  _contact_type contact;
  using _terrain_type =
    bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator>;
  _terrain_type terrain;
  using _terrain_is_set_type =
    bool;
  _terrain_is_set_type terrain_is_set;

  // setters for named parameter idiom
  Type & set__foot_position_rt_body(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot_position_rt_body = _arg;
    return *this;
  }
  Type & set__foot_position_rt_body_is_set(
    const bool & _arg)
  {
    this->foot_position_rt_body_is_set = _arg;
    return *this;
  }
  Type & set__contact(
    const bosdyn_msgs::msg::FootStateContact_<ContainerAllocator> & _arg)
  {
    this->contact = _arg;
    return *this;
  }
  Type & set__terrain(
    const bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator> & _arg)
  {
    this->terrain = _arg;
    return *this;
  }
  Type & set__terrain_is_set(
    const bool & _arg)
  {
    this->terrain_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FootState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FootState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FootState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FootState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FootState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FootState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FootState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FootState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FootState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FootState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FootState
    std::shared_ptr<bosdyn_msgs::msg::FootState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FootState
    std::shared_ptr<bosdyn_msgs::msg::FootState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FootState_ & other) const
  {
    if (this->foot_position_rt_body != other.foot_position_rt_body) {
      return false;
    }
    if (this->foot_position_rt_body_is_set != other.foot_position_rt_body_is_set) {
      return false;
    }
    if (this->contact != other.contact) {
      return false;
    }
    if (this->terrain != other.terrain) {
      return false;
    }
    if (this->terrain_is_set != other.terrain_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const FootState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FootState_

// alias to use template instance with default allocator
using FootState =
  bosdyn_msgs::msg::FootState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE__STRUCT_HPP_
