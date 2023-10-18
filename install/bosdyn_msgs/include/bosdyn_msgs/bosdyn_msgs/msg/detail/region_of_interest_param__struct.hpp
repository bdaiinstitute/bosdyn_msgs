// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RegionOfInterestParam.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'area'
#include "bosdyn_msgs/msg/detail/area_i__struct.hpp"
// Member 'service_and_source'
#include "bosdyn_msgs/msg/detail/region_of_interest_param_service_and_source__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RegionOfInterestParam __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RegionOfInterestParam __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegionOfInterestParam_
{
  using Type = RegionOfInterestParam_<ContainerAllocator>;

  explicit RegionOfInterestParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : area(_init),
    service_and_source(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area_is_set = false;
      this->service_and_source_is_set = false;
      this->image_cols = 0l;
      this->image_rows = 0l;
    }
  }

  explicit RegionOfInterestParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : area(_alloc, _init),
    service_and_source(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area_is_set = false;
      this->service_and_source_is_set = false;
      this->image_cols = 0l;
      this->image_rows = 0l;
    }
  }

  // field types and members
  using _area_type =
    bosdyn_msgs::msg::AreaI_<ContainerAllocator>;
  _area_type area;
  using _area_is_set_type =
    bool;
  _area_is_set_type area_is_set;
  using _service_and_source_type =
    bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource_<ContainerAllocator>;
  _service_and_source_type service_and_source;
  using _service_and_source_is_set_type =
    bool;
  _service_and_source_is_set_type service_and_source_is_set;
  using _image_cols_type =
    int32_t;
  _image_cols_type image_cols;
  using _image_rows_type =
    int32_t;
  _image_rows_type image_rows;

  // setters for named parameter idiom
  Type & set__area(
    const bosdyn_msgs::msg::AreaI_<ContainerAllocator> & _arg)
  {
    this->area = _arg;
    return *this;
  }
  Type & set__area_is_set(
    const bool & _arg)
  {
    this->area_is_set = _arg;
    return *this;
  }
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
  Type & set__image_cols(
    const int32_t & _arg)
  {
    this->image_cols = _arg;
    return *this;
  }
  Type & set__image_rows(
    const int32_t & _arg)
  {
    this->image_rows = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RegionOfInterestParam
    std::shared_ptr<bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RegionOfInterestParam
    std::shared_ptr<bosdyn_msgs::msg::RegionOfInterestParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegionOfInterestParam_ & other) const
  {
    if (this->area != other.area) {
      return false;
    }
    if (this->area_is_set != other.area_is_set) {
      return false;
    }
    if (this->service_and_source != other.service_and_source) {
      return false;
    }
    if (this->service_and_source_is_set != other.service_and_source_is_set) {
      return false;
    }
    if (this->image_cols != other.image_cols) {
      return false;
    }
    if (this->image_rows != other.image_rows) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegionOfInterestParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegionOfInterestParam_

// alias to use template instance with default allocator
using RegionOfInterestParam =
  bosdyn_msgs::msg::RegionOfInterestParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM__STRUCT_HPP_
