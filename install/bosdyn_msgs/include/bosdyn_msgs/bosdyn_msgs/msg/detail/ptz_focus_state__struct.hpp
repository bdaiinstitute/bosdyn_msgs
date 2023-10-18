// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PtzFocusState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_FOCUS_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_FOCUS_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mode'
#include "bosdyn_msgs/msg/detail/ptz_focus_state_ptz_focus_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PtzFocusState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PtzFocusState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PtzFocusState_
{
  using Type = PtzFocusState_<ContainerAllocator>;

  explicit PtzFocusState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->focus_position = 0l;
      this->focus_position_is_set = false;
      this->approx_distance = 0.0f;
      this->approx_distance_is_set = false;
    }
  }

  explicit PtzFocusState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->focus_position = 0l;
      this->focus_position_is_set = false;
      this->approx_distance = 0.0f;
      this->approx_distance_is_set = false;
    }
  }

  // field types and members
  using _mode_type =
    bosdyn_msgs::msg::PtzFocusStatePtzFocusMode_<ContainerAllocator>;
  _mode_type mode;
  using _focus_position_type =
    int32_t;
  _focus_position_type focus_position;
  using _focus_position_is_set_type =
    bool;
  _focus_position_is_set_type focus_position_is_set;
  using _approx_distance_type =
    float;
  _approx_distance_type approx_distance;
  using _approx_distance_is_set_type =
    bool;
  _approx_distance_is_set_type approx_distance_is_set;

  // setters for named parameter idiom
  Type & set__mode(
    const bosdyn_msgs::msg::PtzFocusStatePtzFocusMode_<ContainerAllocator> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__focus_position(
    const int32_t & _arg)
  {
    this->focus_position = _arg;
    return *this;
  }
  Type & set__focus_position_is_set(
    const bool & _arg)
  {
    this->focus_position_is_set = _arg;
    return *this;
  }
  Type & set__approx_distance(
    const float & _arg)
  {
    this->approx_distance = _arg;
    return *this;
  }
  Type & set__approx_distance_is_set(
    const bool & _arg)
  {
    this->approx_distance_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PtzFocusState
    std::shared_ptr<bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PtzFocusState
    std::shared_ptr<bosdyn_msgs::msg::PtzFocusState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PtzFocusState_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->focus_position != other.focus_position) {
      return false;
    }
    if (this->focus_position_is_set != other.focus_position_is_set) {
      return false;
    }
    if (this->approx_distance != other.approx_distance) {
      return false;
    }
    if (this->approx_distance_is_set != other.approx_distance_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PtzFocusState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PtzFocusState_

// alias to use template instance with default allocator
using PtzFocusState =
  bosdyn_msgs::msg::PtzFocusState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_FOCUS_STATE__STRUCT_HPP_
