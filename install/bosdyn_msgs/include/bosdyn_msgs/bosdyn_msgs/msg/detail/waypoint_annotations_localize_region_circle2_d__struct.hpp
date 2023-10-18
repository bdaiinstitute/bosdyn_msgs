// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegionCircle2D.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_CIRCLE2_D__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_CIRCLE2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionCircle2D __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionCircle2D __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointAnnotationsLocalizeRegionCircle2D_
{
  using Type = WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator>;

  explicit WaypointAnnotationsLocalizeRegionCircle2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist_2d = 0.0;
    }
  }

  explicit WaypointAnnotationsLocalizeRegionCircle2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist_2d = 0.0;
    }
  }

  // field types and members
  using _dist_2d_type =
    double;
  _dist_2d_type dist_2d;

  // setters for named parameter idiom
  Type & set__dist_2d(
    const double & _arg)
  {
    this->dist_2d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionCircle2D
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionCircle2D
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAnnotationsLocalizeRegionCircle2D_ & other) const
  {
    if (this->dist_2d != other.dist_2d) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAnnotationsLocalizeRegionCircle2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAnnotationsLocalizeRegionCircle2D_

// alias to use template instance with default allocator
using WaypointAnnotationsLocalizeRegionCircle2D =
  bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_CIRCLE2_D__STRUCT_HPP_
