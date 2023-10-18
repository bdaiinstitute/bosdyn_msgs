// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PointCloudEncodingParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PointCloudEncodingParameters __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PointCloudEncodingParameters __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloudEncodingParameters_
{
  using Type = PointCloudEncodingParameters_<ContainerAllocator>;

  explicit PointCloudEncodingParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scale_factor = 0l;
      this->max_x = 0.0;
      this->max_y = 0.0;
      this->max_z = 0.0;
      this->remapping_constant = 0.0;
      this->bytes_per_point = 0l;
    }
  }

  explicit PointCloudEncodingParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scale_factor = 0l;
      this->max_x = 0.0;
      this->max_y = 0.0;
      this->max_z = 0.0;
      this->remapping_constant = 0.0;
      this->bytes_per_point = 0l;
    }
  }

  // field types and members
  using _scale_factor_type =
    int32_t;
  _scale_factor_type scale_factor;
  using _max_x_type =
    double;
  _max_x_type max_x;
  using _max_y_type =
    double;
  _max_y_type max_y;
  using _max_z_type =
    double;
  _max_z_type max_z;
  using _remapping_constant_type =
    double;
  _remapping_constant_type remapping_constant;
  using _bytes_per_point_type =
    int32_t;
  _bytes_per_point_type bytes_per_point;

  // setters for named parameter idiom
  Type & set__scale_factor(
    const int32_t & _arg)
  {
    this->scale_factor = _arg;
    return *this;
  }
  Type & set__max_x(
    const double & _arg)
  {
    this->max_x = _arg;
    return *this;
  }
  Type & set__max_y(
    const double & _arg)
  {
    this->max_y = _arg;
    return *this;
  }
  Type & set__max_z(
    const double & _arg)
  {
    this->max_z = _arg;
    return *this;
  }
  Type & set__remapping_constant(
    const double & _arg)
  {
    this->remapping_constant = _arg;
    return *this;
  }
  Type & set__bytes_per_point(
    const int32_t & _arg)
  {
    this->bytes_per_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PointCloudEncodingParameters
    std::shared_ptr<bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PointCloudEncodingParameters
    std::shared_ptr<bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloudEncodingParameters_ & other) const
  {
    if (this->scale_factor != other.scale_factor) {
      return false;
    }
    if (this->max_x != other.max_x) {
      return false;
    }
    if (this->max_y != other.max_y) {
      return false;
    }
    if (this->max_z != other.max_z) {
      return false;
    }
    if (this->remapping_constant != other.remapping_constant) {
      return false;
    }
    if (this->bytes_per_point != other.bytes_per_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointCloudEncodingParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloudEncodingParameters_

// alias to use template instance with default allocator
using PointCloudEncodingParameters =
  bosdyn_msgs::msg::PointCloudEncodingParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__STRUCT_HPP_
