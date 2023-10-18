// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RayIntersection.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAY_INTERSECTION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAY_INTERSECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/ray_intersection_type__struct.hpp"
// Member 'hit_position_in_hit_frame'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RayIntersection __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RayIntersection __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RayIntersection_
{
  using Type = RayIntersection_<ContainerAllocator>;

  explicit RayIntersection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init),
    hit_position_in_hit_frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hit_position_in_hit_frame_is_set = false;
      this->distance_meters = 0.0;
    }
  }

  explicit RayIntersection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init),
    hit_position_in_hit_frame(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hit_position_in_hit_frame_is_set = false;
      this->distance_meters = 0.0;
    }
  }

  // field types and members
  using _type_type =
    bosdyn_msgs::msg::RayIntersectionType_<ContainerAllocator>;
  _type_type type;
  using _hit_position_in_hit_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _hit_position_in_hit_frame_type hit_position_in_hit_frame;
  using _hit_position_in_hit_frame_is_set_type =
    bool;
  _hit_position_in_hit_frame_is_set_type hit_position_in_hit_frame_is_set;
  using _distance_meters_type =
    double;
  _distance_meters_type distance_meters;

  // setters for named parameter idiom
  Type & set__type(
    const bosdyn_msgs::msg::RayIntersectionType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__hit_position_in_hit_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->hit_position_in_hit_frame = _arg;
    return *this;
  }
  Type & set__hit_position_in_hit_frame_is_set(
    const bool & _arg)
  {
    this->hit_position_in_hit_frame_is_set = _arg;
    return *this;
  }
  Type & set__distance_meters(
    const double & _arg)
  {
    this->distance_meters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RayIntersection_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RayIntersection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RayIntersection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RayIntersection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RayIntersection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RayIntersection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RayIntersection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RayIntersection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RayIntersection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RayIntersection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RayIntersection
    std::shared_ptr<bosdyn_msgs::msg::RayIntersection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RayIntersection
    std::shared_ptr<bosdyn_msgs::msg::RayIntersection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RayIntersection_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->hit_position_in_hit_frame != other.hit_position_in_hit_frame) {
      return false;
    }
    if (this->hit_position_in_hit_frame_is_set != other.hit_position_in_hit_frame_is_set) {
      return false;
    }
    if (this->distance_meters != other.distance_meters) {
      return false;
    }
    return true;
  }
  bool operator!=(const RayIntersection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RayIntersection_

// alias to use template instance with default allocator
using RayIntersection =
  bosdyn_msgs::msg::RayIntersection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAY_INTERSECTION__STRUCT_HPP_
