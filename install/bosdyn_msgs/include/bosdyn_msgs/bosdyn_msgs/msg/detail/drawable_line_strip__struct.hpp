// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DrawableLineStrip.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_LINE_STRIP__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_LINE_STRIP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DrawableLineStrip __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DrawableLineStrip __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrawableLineStrip_
{
  using Type = DrawableLineStrip_<ContainerAllocator>;

  explicit DrawableLineStrip_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : points(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->points_is_set = false;
    }
  }

  explicit DrawableLineStrip_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : points(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->points_is_set = false;
    }
  }

  // field types and members
  using _points_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _points_type points;
  using _points_is_set_type =
    bool;
  _points_is_set_type points_is_set;

  // setters for named parameter idiom
  Type & set__points(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__points_is_set(
    const bool & _arg)
  {
    this->points_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DrawableLineStrip
    std::shared_ptr<bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DrawableLineStrip
    std::shared_ptr<bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawableLineStrip_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    if (this->points_is_set != other.points_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawableLineStrip_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawableLineStrip_

// alias to use template instance with default allocator
using DrawableLineStrip =
  bosdyn_msgs::msg::DrawableLineStrip_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_LINE_STRIP__STRUCT_HPP_
