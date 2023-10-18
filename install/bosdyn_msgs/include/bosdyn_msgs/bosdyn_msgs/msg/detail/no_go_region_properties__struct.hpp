// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NoGoRegionProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'region'
#include "bosdyn_msgs/msg/detail/no_go_region_properties_one_of_region__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NoGoRegionProperties __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NoGoRegionProperties __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NoGoRegionProperties_
{
  using Type = NoGoRegionProperties_<ContainerAllocator>;

  explicit NoGoRegionProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disable_foot_obstacle_generation = false;
      this->disable_body_obstacle_generation = false;
      this->disable_foot_obstacle_inflation = false;
    }
  }

  explicit NoGoRegionProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disable_foot_obstacle_generation = false;
      this->disable_body_obstacle_generation = false;
      this->disable_foot_obstacle_inflation = false;
    }
  }

  // field types and members
  using _region_type =
    bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion_<ContainerAllocator>;
  _region_type region;
  using _disable_foot_obstacle_generation_type =
    bool;
  _disable_foot_obstacle_generation_type disable_foot_obstacle_generation;
  using _disable_body_obstacle_generation_type =
    bool;
  _disable_body_obstacle_generation_type disable_body_obstacle_generation;
  using _disable_foot_obstacle_inflation_type =
    bool;
  _disable_foot_obstacle_inflation_type disable_foot_obstacle_inflation;

  // setters for named parameter idiom
  Type & set__region(
    const bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion_<ContainerAllocator> & _arg)
  {
    this->region = _arg;
    return *this;
  }
  Type & set__disable_foot_obstacle_generation(
    const bool & _arg)
  {
    this->disable_foot_obstacle_generation = _arg;
    return *this;
  }
  Type & set__disable_body_obstacle_generation(
    const bool & _arg)
  {
    this->disable_body_obstacle_generation = _arg;
    return *this;
  }
  Type & set__disable_foot_obstacle_inflation(
    const bool & _arg)
  {
    this->disable_foot_obstacle_inflation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NoGoRegionProperties
    std::shared_ptr<bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NoGoRegionProperties
    std::shared_ptr<bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NoGoRegionProperties_ & other) const
  {
    if (this->region != other.region) {
      return false;
    }
    if (this->disable_foot_obstacle_generation != other.disable_foot_obstacle_generation) {
      return false;
    }
    if (this->disable_body_obstacle_generation != other.disable_body_obstacle_generation) {
      return false;
    }
    if (this->disable_foot_obstacle_inflation != other.disable_foot_obstacle_inflation) {
      return false;
    }
    return true;
  }
  bool operator!=(const NoGoRegionProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NoGoRegionProperties_

// alias to use template instance with default allocator
using NoGoRegionProperties =
  bosdyn_msgs::msg::NoGoRegionProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES__STRUCT_HPP_
