// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLANE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Plane __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Plane __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Plane_
{
  using Type = Plane_<ContainerAllocator>;

  explicit Plane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init),
    normal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_is_set = false;
      this->normal_is_set = false;
    }
  }

  explicit Plane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init),
    normal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_is_set = false;
      this->normal_is_set = false;
    }
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _point_type point;
  using _point_is_set_type =
    bool;
  _point_is_set_type point_is_set;
  using _normal_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _normal_type normal;
  using _normal_is_set_type =
    bool;
  _normal_is_set_type normal_is_set;

  // setters for named parameter idiom
  Type & set__point(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__point_is_set(
    const bool & _arg)
  {
    this->point_is_set = _arg;
    return *this;
  }
  Type & set__normal(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->normal = _arg;
    return *this;
  }
  Type & set__normal_is_set(
    const bool & _arg)
  {
    this->normal_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Plane_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Plane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Plane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Plane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Plane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Plane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Plane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Plane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Plane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Plane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Plane
    std::shared_ptr<bosdyn_msgs::msg::Plane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Plane
    std::shared_ptr<bosdyn_msgs::msg::Plane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Plane_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->point_is_set != other.point_is_set) {
      return false;
    }
    if (this->normal != other.normal) {
      return false;
    }
    if (this->normal_is_set != other.normal_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Plane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Plane_

// alias to use template instance with default allocator
using Plane =
  bosdyn_msgs::msg::Plane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLANE__STRUCT_HPP_
