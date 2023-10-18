// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StaircaseLanding.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_LANDING__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_LANDING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stairs_tform_landing_center'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StaircaseLanding __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StaircaseLanding __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaircaseLanding_
{
  using Type = StaircaseLanding_<ContainerAllocator>;

  explicit StaircaseLanding_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stairs_tform_landing_center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stairs_tform_landing_center_is_set = false;
      this->landing_extent_x = 0.0;
      this->landing_extent_y = 0.0;
    }
  }

  explicit StaircaseLanding_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stairs_tform_landing_center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stairs_tform_landing_center_is_set = false;
      this->landing_extent_x = 0.0;
      this->landing_extent_y = 0.0;
    }
  }

  // field types and members
  using _stairs_tform_landing_center_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _stairs_tform_landing_center_type stairs_tform_landing_center;
  using _stairs_tform_landing_center_is_set_type =
    bool;
  _stairs_tform_landing_center_is_set_type stairs_tform_landing_center_is_set;
  using _landing_extent_x_type =
    double;
  _landing_extent_x_type landing_extent_x;
  using _landing_extent_y_type =
    double;
  _landing_extent_y_type landing_extent_y;

  // setters for named parameter idiom
  Type & set__stairs_tform_landing_center(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->stairs_tform_landing_center = _arg;
    return *this;
  }
  Type & set__stairs_tform_landing_center_is_set(
    const bool & _arg)
  {
    this->stairs_tform_landing_center_is_set = _arg;
    return *this;
  }
  Type & set__landing_extent_x(
    const double & _arg)
  {
    this->landing_extent_x = _arg;
    return *this;
  }
  Type & set__landing_extent_y(
    const double & _arg)
  {
    this->landing_extent_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StaircaseLanding
    std::shared_ptr<bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StaircaseLanding
    std::shared_ptr<bosdyn_msgs::msg::StaircaseLanding_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaircaseLanding_ & other) const
  {
    if (this->stairs_tform_landing_center != other.stairs_tform_landing_center) {
      return false;
    }
    if (this->stairs_tform_landing_center_is_set != other.stairs_tform_landing_center_is_set) {
      return false;
    }
    if (this->landing_extent_x != other.landing_extent_x) {
      return false;
    }
    if (this->landing_extent_y != other.landing_extent_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaircaseLanding_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaircaseLanding_

// alias to use template instance with default allocator
using StaircaseLanding =
  bosdyn_msgs::msg::StaircaseLanding_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_LANDING__STRUCT_HPP_
