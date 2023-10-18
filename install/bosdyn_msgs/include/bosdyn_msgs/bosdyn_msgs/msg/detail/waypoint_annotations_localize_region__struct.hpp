// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state'
#include "bosdyn_msgs/msg/detail/annotation_state__struct.hpp"
// Member 'region'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_one_of_region__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegion __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegion __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointAnnotationsLocalizeRegion_
{
  using Type = WaypointAnnotationsLocalizeRegion_<ContainerAllocator>;

  explicit WaypointAnnotationsLocalizeRegion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init),
    region(_init)
  {
    (void)_init;
  }

  explicit WaypointAnnotationsLocalizeRegion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init),
    region(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _state_type =
    bosdyn_msgs::msg::AnnotationState_<ContainerAllocator>;
  _state_type state;
  using _region_type =
    bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator>;
  _region_type region;

  // setters for named parameter idiom
  Type & set__state(
    const bosdyn_msgs::msg::AnnotationState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__region(
    const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionOneOfRegion_<ContainerAllocator> & _arg)
  {
    this->region = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegion
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegion
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAnnotationsLocalizeRegion_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->region != other.region) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAnnotationsLocalizeRegion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAnnotationsLocalizeRegion_

// alias to use template instance with default allocator
using WaypointAnnotationsLocalizeRegion =
  bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION__STRUCT_HPP_
