// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CameraSphericalLimits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_SPHERICAL_LIMITS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_SPHERICAL_LIMITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'min_angle'
// Member 'max_angle'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CameraSphericalLimits __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CameraSphericalLimits __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraSphericalLimits_
{
  using Type = CameraSphericalLimits_<ContainerAllocator>;

  explicit CameraSphericalLimits_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : min_angle(_init),
    max_angle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_angle_is_set = false;
      this->max_angle_is_set = false;
    }
  }

  explicit CameraSphericalLimits_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : min_angle(_alloc, _init),
    max_angle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_angle_is_set = false;
      this->max_angle_is_set = false;
    }
  }

  // field types and members
  using _min_angle_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _min_angle_type min_angle;
  using _min_angle_is_set_type =
    bool;
  _min_angle_is_set_type min_angle_is_set;
  using _max_angle_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _max_angle_type max_angle;
  using _max_angle_is_set_type =
    bool;
  _max_angle_is_set_type max_angle_is_set;

  // setters for named parameter idiom
  Type & set__min_angle(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->min_angle = _arg;
    return *this;
  }
  Type & set__min_angle_is_set(
    const bool & _arg)
  {
    this->min_angle_is_set = _arg;
    return *this;
  }
  Type & set__max_angle(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->max_angle = _arg;
    return *this;
  }
  Type & set__max_angle_is_set(
    const bool & _arg)
  {
    this->max_angle_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CameraSphericalLimits
    std::shared_ptr<bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CameraSphericalLimits
    std::shared_ptr<bosdyn_msgs::msg::CameraSphericalLimits_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSphericalLimits_ & other) const
  {
    if (this->min_angle != other.min_angle) {
      return false;
    }
    if (this->min_angle_is_set != other.min_angle_is_set) {
      return false;
    }
    if (this->max_angle != other.max_angle) {
      return false;
    }
    if (this->max_angle_is_set != other.max_angle_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSphericalLimits_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSphericalLimits_

// alias to use template instance with default allocator
using CameraSphericalLimits =
  bosdyn_msgs::msg::CameraSphericalLimits_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_SPHERICAL_LIMITS__STRUCT_HPP_
