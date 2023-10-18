// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageSourcePinholeModel.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'intrinsics'
#include "bosdyn_msgs/msg/detail/image_source_pinhole_model_camera_intrinsics__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageSourcePinholeModel __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageSourcePinholeModel __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageSourcePinholeModel_
{
  using Type = ImageSourcePinholeModel_<ContainerAllocator>;

  explicit ImageSourcePinholeModel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : intrinsics(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intrinsics_is_set = false;
    }
  }

  explicit ImageSourcePinholeModel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : intrinsics(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intrinsics_is_set = false;
    }
  }

  // field types and members
  using _intrinsics_type =
    bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator>;
  _intrinsics_type intrinsics;
  using _intrinsics_is_set_type =
    bool;
  _intrinsics_is_set_type intrinsics_is_set;

  // setters for named parameter idiom
  Type & set__intrinsics(
    const bosdyn_msgs::msg::ImageSourcePinholeModelCameraIntrinsics_<ContainerAllocator> & _arg)
  {
    this->intrinsics = _arg;
    return *this;
  }
  Type & set__intrinsics_is_set(
    const bool & _arg)
  {
    this->intrinsics_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourcePinholeModel
    std::shared_ptr<bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSourcePinholeModel
    std::shared_ptr<bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageSourcePinholeModel_ & other) const
  {
    if (this->intrinsics != other.intrinsics) {
      return false;
    }
    if (this->intrinsics_is_set != other.intrinsics_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageSourcePinholeModel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageSourcePinholeModel_

// alias to use template instance with default allocator
using ImageSourcePinholeModel =
  bosdyn_msgs::msg::ImageSourcePinholeModel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_PINHOLE_MODEL__STRUCT_HPP_
