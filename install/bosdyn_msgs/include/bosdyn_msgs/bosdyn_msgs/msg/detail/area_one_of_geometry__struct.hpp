// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AreaOneOfGeometry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_ONE_OF_GEOMETRY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_ONE_OF_GEOMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'polygon'
#include "bosdyn_msgs/msg/detail/polygon__struct.hpp"
// Member 'circle'
#include "bosdyn_msgs/msg/detail/circle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AreaOneOfGeometry __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AreaOneOfGeometry __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AreaOneOfGeometry_
{
  using Type = AreaOneOfGeometry_<ContainerAllocator>;

  explicit AreaOneOfGeometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon(_init),
    circle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->geometry_choice = 0;
    }
  }

  explicit AreaOneOfGeometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon(_alloc, _init),
    circle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->geometry_choice = 0;
    }
  }

  // field types and members
  using _polygon_type =
    bosdyn_msgs::msg::Polygon_<ContainerAllocator>;
  _polygon_type polygon;
  using _circle_type =
    bosdyn_msgs::msg::Circle_<ContainerAllocator>;
  _circle_type circle;
  using _geometry_choice_type =
    int8_t;
  _geometry_choice_type geometry_choice;

  // setters for named parameter idiom
  Type & set__polygon(
    const bosdyn_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }
  Type & set__circle(
    const bosdyn_msgs::msg::Circle_<ContainerAllocator> & _arg)
  {
    this->circle = _arg;
    return *this;
  }
  Type & set__geometry_choice(
    const int8_t & _arg)
  {
    this->geometry_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t GEOMETRY_NOT_SET =
    0;
  static constexpr int8_t GEOMETRY_POLYGON_SET =
    1;
  static constexpr int8_t GEOMETRY_CIRCLE_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AreaOneOfGeometry
    std::shared_ptr<bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AreaOneOfGeometry
    std::shared_ptr<bosdyn_msgs::msg::AreaOneOfGeometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AreaOneOfGeometry_ & other) const
  {
    if (this->polygon != other.polygon) {
      return false;
    }
    if (this->circle != other.circle) {
      return false;
    }
    if (this->geometry_choice != other.geometry_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const AreaOneOfGeometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AreaOneOfGeometry_

// alias to use template instance with default allocator
using AreaOneOfGeometry =
  bosdyn_msgs::msg::AreaOneOfGeometry_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AreaOneOfGeometry_<ContainerAllocator>::GEOMETRY_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AreaOneOfGeometry_<ContainerAllocator>::GEOMETRY_POLYGON_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AreaOneOfGeometry_<ContainerAllocator>::GEOMETRY_CIRCLE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_ONE_OF_GEOMETRY__STRUCT_HPP_
