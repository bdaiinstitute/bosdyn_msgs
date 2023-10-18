// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RegionOfInterestParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM_SPEC__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM_SPEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'service_and_source'
#include "bosdyn_msgs/msg/detail/region_of_interest_param_service_and_source__struct.hpp"
// Member 'default_area'
#include "bosdyn_msgs/msg/detail/area_i__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RegionOfInterestParamSpec __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RegionOfInterestParamSpec __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegionOfInterestParamSpec_
{
  using Type = RegionOfInterestParamSpec_<ContainerAllocator>;

  explicit RegionOfInterestParamSpec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_and_source(_init),
    default_area(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_and_source_is_set = false;
      this->default_area_is_set = false;
      this->allows_rectangle = false;
    }
  }

  explicit RegionOfInterestParamSpec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_and_source(_alloc, _init),
    default_area(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_and_source_is_set = false;
      this->default_area_is_set = false;
      this->allows_rectangle = false;
    }
  }

  // field types and members
  using _service_and_source_type =
    bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource_<ContainerAllocator>;
  _service_and_source_type service_and_source;
  using _service_and_source_is_set_type =
    bool;
  _service_and_source_is_set_type service_and_source_is_set;
  using _default_area_type =
    bosdyn_msgs::msg::AreaI_<ContainerAllocator>;
  _default_area_type default_area;
  using _default_area_is_set_type =
    bool;
  _default_area_is_set_type default_area_is_set;
  using _allows_rectangle_type =
    bool;
  _allows_rectangle_type allows_rectangle;

  // setters for named parameter idiom
  Type & set__service_and_source(
    const bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource_<ContainerAllocator> & _arg)
  {
    this->service_and_source = _arg;
    return *this;
  }
  Type & set__service_and_source_is_set(
    const bool & _arg)
  {
    this->service_and_source_is_set = _arg;
    return *this;
  }
  Type & set__default_area(
    const bosdyn_msgs::msg::AreaI_<ContainerAllocator> & _arg)
  {
    this->default_area = _arg;
    return *this;
  }
  Type & set__default_area_is_set(
    const bool & _arg)
  {
    this->default_area_is_set = _arg;
    return *this;
  }
  Type & set__allows_rectangle(
    const bool & _arg)
  {
    this->allows_rectangle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RegionOfInterestParamSpec
    std::shared_ptr<bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RegionOfInterestParamSpec
    std::shared_ptr<bosdyn_msgs::msg::RegionOfInterestParamSpec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegionOfInterestParamSpec_ & other) const
  {
    if (this->service_and_source != other.service_and_source) {
      return false;
    }
    if (this->service_and_source_is_set != other.service_and_source_is_set) {
      return false;
    }
    if (this->default_area != other.default_area) {
      return false;
    }
    if (this->default_area_is_set != other.default_area_is_set) {
      return false;
    }
    if (this->allows_rectangle != other.allows_rectangle) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegionOfInterestParamSpec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegionOfInterestParamSpec_

// alias to use template instance with default allocator
using RegionOfInterestParamSpec =
  bosdyn_msgs::msg::RegionOfInterestParamSpec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM_SPEC__STRUCT_HPP_
