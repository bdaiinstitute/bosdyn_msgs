// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageSourcePinholeModelCameraIntrinsics.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL_CAMERA_INTRINSICS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL_CAMERA_INTRINSICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'focal_length'
// Member 'principal_point'
// Member 'skew'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageSourcePinholeModelCameraIntrinsics __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageSourcePinholeModelCameraIntrinsics __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageSourcePinholeModelCameraIntrinsics_
{
  using Type = ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator>;

  explicit ImageSourcePinholeModelCameraIntrinsics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : focal_length(_init),
    principal_point(_init),
    skew(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->focal_length_is_set = false;
      this->principal_point_is_set = false;
      this->skew_is_set = false;
    }
  }

  explicit ImageSourcePinholeModelCameraIntrinsics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : focal_length(_alloc, _init),
    principal_point(_alloc, _init),
    skew(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->focal_length_is_set = false;
      this->principal_point_is_set = false;
      this->skew_is_set = false;
    }
  }

  // field types and members
  using _focal_length_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _focal_length_type focal_length;
  using _focal_length_is_set_type =
    bool;
  _focal_length_is_set_type focal_length_is_set;
  using _principal_point_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _principal_point_type principal_point;
  using _principal_point_is_set_type =
    bool;
  _principal_point_is_set_type principal_point_is_set;
  using _skew_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _skew_type skew;
  using _skew_is_set_type =
    bool;
  _skew_is_set_type skew_is_set;

  // setters for named parameter idiom
  Type & set__focal_length(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->focal_length = _arg;
    return *this;
  }
  Type & set__focal_length_is_set(
    const bool & _arg)
  {
    this->focal_length_is_set = _arg;
    return *this;
  }
  Type & set__principal_point(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->principal_point = _arg;
    return *this;
  }
  Type & set__principal_point_is_set(
    const bool & _arg)
  {
    this->principal_point_is_set = _arg;
    return *this;
  }
  Type & set__skew(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->skew = _arg;
    return *this;
  }
  Type & set__skew_is_set(
    const bool & _arg)
  {
    this->skew_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourcePinholeModelCameraIntrinsics
    std::shared_ptr<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourcePinholeModelCameraIntrinsics
    std::shared_ptr<bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageSourcePinholeModelCameraIntrinsics_ & other) const
  {
    if (this->focal_length != other.focal_length) {
      return false;
    }
    if (this->focal_length_is_set != other.focal_length_is_set) {
      return false;
    }
    if (this->principal_point != other.principal_point) {
      return false;
    }
    if (this->principal_point_is_set != other.principal_point_is_set) {
      return false;
    }
    if (this->skew != other.skew) {
      return false;
    }
    if (this->skew_is_set != other.skew_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageSourcePinholeModelCameraIntrinsics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageSourcePinholeModelCameraIntrinsics_

// alias to use template instance with default allocator
using ImageSourcePinholeModelCameraIntrinsics =
  bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL_CAMERA_INTRINSICS__STRUCT_HPP_
