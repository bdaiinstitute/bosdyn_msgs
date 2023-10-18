// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegionOneOfRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'default_region'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_default__struct.hpp"
// Member 'empty'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_empty__struct.hpp"
// Member 'circle'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_circle2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointAnnotationsLocalizeRegionOneOfRegion_
{
  using Type = WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>;

  explicit WaypointAnnotationsLocalizeRegionOneOfRegion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : default_region(_init),
    empty(_init),
    circle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->region_choice = 0;
    }
  }

  explicit WaypointAnnotationsLocalizeRegionOneOfRegion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : default_region(_alloc, _init),
    empty(_alloc, _init),
    circle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->region_choice = 0;
    }
  }

  // field types and members
  using _default_region_type =
    bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionDefault_<ContainerAllocator>;
  _default_region_type default_region;
  using _empty_type =
    bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator>;
  _empty_type empty;
  using _circle_type =
    bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator>;
  _circle_type circle;
  using _region_choice_type =
    int8_t;
  _region_choice_type region_choice;

  // setters for named parameter idiom
  Type & set__default_region(
    const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionDefault_<ContainerAllocator> & _arg)
  {
    this->default_region = _arg;
    return *this;
  }
  Type & set__empty(
    const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator> & _arg)
  {
    this->empty = _arg;
    return *this;
  }
  Type & set__circle(
    const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator> & _arg)
  {
    this->circle = _arg;
    return *this;
  }
  Type & set__region_choice(
    const int8_t & _arg)
  {
    this->region_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t REGION_NOT_SET =
    0;
  static constexpr int8_t REGION_DEFAULT_REGION_SET =
    1;
  static constexpr int8_t REGION_EMPTY_SET =
    2;
  static constexpr int8_t REGION_CIRCLE_SET =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAnnotationsLocalizeRegionOneOfRegion_ & other) const
  {
    if (this->default_region != other.default_region) {
      return false;
    }
    if (this->empty != other.empty) {
      return false;
    }
    if (this->circle != other.circle) {
      return false;
    }
    if (this->region_choice != other.region_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAnnotationsLocalizeRegionOneOfRegion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAnnotationsLocalizeRegionOneOfRegion_

// alias to use template instance with default allocator
using WaypointAnnotationsLocalizeRegionOneOfRegion =
  bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>::REGION_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>::REGION_DEFAULT_REGION_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>::REGION_EMPTY_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>::REGION_CIRCLE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__STRUCT_HPP_
