// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PtzVelocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_VELOCITY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ptz'
#include "bosdyn_msgs/msg/detail/ptz_description__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PtzVelocity __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PtzVelocity __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PtzVelocity_
{
  using Type = PtzVelocity_<ContainerAllocator>;

  explicit PtzVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ptz(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ptz_is_set = false;
      this->pan = 0.0f;
      this->pan_is_set = false;
      this->tilt = 0.0f;
      this->tilt_is_set = false;
      this->zoom = 0.0f;
      this->zoom_is_set = false;
    }
  }

  explicit PtzVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ptz(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ptz_is_set = false;
      this->pan = 0.0f;
      this->pan_is_set = false;
      this->tilt = 0.0f;
      this->tilt_is_set = false;
      this->zoom = 0.0f;
      this->zoom_is_set = false;
    }
  }

  // field types and members
  using _ptz_type =
    bosdyn_msgs::msg::PtzDescription_<ContainerAllocator>;
  _ptz_type ptz;
  using _ptz_is_set_type =
    bool;
  _ptz_is_set_type ptz_is_set;
  using _pan_type =
    float;
  _pan_type pan;
  using _pan_is_set_type =
    bool;
  _pan_is_set_type pan_is_set;
  using _tilt_type =
    float;
  _tilt_type tilt;
  using _tilt_is_set_type =
    bool;
  _tilt_is_set_type tilt_is_set;
  using _zoom_type =
    float;
  _zoom_type zoom;
  using _zoom_is_set_type =
    bool;
  _zoom_is_set_type zoom_is_set;

  // setters for named parameter idiom
  Type & set__ptz(
    const bosdyn_msgs::msg::PtzDescription_<ContainerAllocator> & _arg)
  {
    this->ptz = _arg;
    return *this;
  }
  Type & set__ptz_is_set(
    const bool & _arg)
  {
    this->ptz_is_set = _arg;
    return *this;
  }
  Type & set__pan(
    const float & _arg)
  {
    this->pan = _arg;
    return *this;
  }
  Type & set__pan_is_set(
    const bool & _arg)
  {
    this->pan_is_set = _arg;
    return *this;
  }
  Type & set__tilt(
    const float & _arg)
  {
    this->tilt = _arg;
    return *this;
  }
  Type & set__tilt_is_set(
    const bool & _arg)
  {
    this->tilt_is_set = _arg;
    return *this;
  }
  Type & set__zoom(
    const float & _arg)
  {
    this->zoom = _arg;
    return *this;
  }
  Type & set__zoom_is_set(
    const bool & _arg)
  {
    this->zoom_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PtzVelocity
    std::shared_ptr<bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PtzVelocity
    std::shared_ptr<bosdyn_msgs::msg::PtzVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PtzVelocity_ & other) const
  {
    if (this->ptz != other.ptz) {
      return false;
    }
    if (this->ptz_is_set != other.ptz_is_set) {
      return false;
    }
    if (this->pan != other.pan) {
      return false;
    }
    if (this->pan_is_set != other.pan_is_set) {
      return false;
    }
    if (this->tilt != other.tilt) {
      return false;
    }
    if (this->tilt_is_set != other.tilt_is_set) {
      return false;
    }
    if (this->zoom != other.zoom) {
      return false;
    }
    if (this->zoom_is_set != other.zoom_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PtzVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PtzVelocity_

// alias to use template instance with default allocator
using PtzVelocity =
  bosdyn_msgs::msg::PtzVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_VELOCITY__STRUCT_HPP_
