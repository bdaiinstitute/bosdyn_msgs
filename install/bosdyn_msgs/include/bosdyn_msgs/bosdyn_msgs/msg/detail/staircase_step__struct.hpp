// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StaircaseStep.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'north'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"
// Member 'width'
#include "bosdyn_msgs/msg/detail/staircase_width__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StaircaseStep __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StaircaseStep __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaircaseStep_
{
  using Type = StaircaseStep_<ContainerAllocator>;

  explicit StaircaseStep_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init),
    north(_init),
    width(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_is_set = false;
      this->north_is_set = false;
      this->width_is_set = false;
    }
  }

  explicit StaircaseStep_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init),
    north(_alloc, _init),
    width(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_is_set = false;
      this->north_is_set = false;
      this->width_is_set = false;
    }
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _point_type point;
  using _point_is_set_type =
    bool;
  _point_is_set_type point_is_set;
  using _north_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _north_type north;
  using _north_is_set_type =
    bool;
  _north_is_set_type north_is_set;
  using _width_type =
    bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator>;
  _width_type width;
  using _width_is_set_type =
    bool;
  _width_is_set_type width_is_set;

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
  Type & set__north(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->north = _arg;
    return *this;
  }
  Type & set__north_is_set(
    const bool & _arg)
  {
    this->north_is_set = _arg;
    return *this;
  }
  Type & set__width(
    const bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator> & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__width_is_set(
    const bool & _arg)
  {
    this->width_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StaircaseStep
    std::shared_ptr<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StaircaseStep
    std::shared_ptr<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaircaseStep_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->point_is_set != other.point_is_set) {
      return false;
    }
    if (this->north != other.north) {
      return false;
    }
    if (this->north_is_set != other.north_is_set) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->width_is_set != other.width_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaircaseStep_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaircaseStep_

// alias to use template instance with default allocator
using StaircaseStep =
  bosdyn_msgs::msg::StaircaseStep_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__STRUCT_HPP_
