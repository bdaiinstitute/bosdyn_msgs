// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/VolumeOneOfGeometry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VOLUME_ONE_OF_GEOMETRY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VOLUME_ONE_OF_GEOMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'box'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__VolumeOneOfGeometry __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__VolumeOneOfGeometry __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VolumeOneOfGeometry_
{
  using Type = VolumeOneOfGeometry_<ContainerAllocator>;

  explicit VolumeOneOfGeometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : box(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->geometry_choice = 0;
    }
  }

  explicit VolumeOneOfGeometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : box(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->geometry_choice = 0;
    }
  }

  // field types and members
  using _box_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _box_type box;
  using _geometry_choice_type =
    int8_t;
  _geometry_choice_type geometry_choice;

  // setters for named parameter idiom
  Type & set__box(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->box = _arg;
    return *this;
  }
  Type & set__geometry_choice(
    const int8_t & _arg)
  {
    this->geometry_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t GEOMETRY_NOT_SET =
    0;
  static constexpr int8_t GEOMETRY_BOX_SET =
    1;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__VolumeOneOfGeometry
    std::shared_ptr<bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__VolumeOneOfGeometry
    std::shared_ptr<bosdyn_msgs::msg::VolumeOneOfGeometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VolumeOneOfGeometry_ & other) const
  {
    if (this->box != other.box) {
      return false;
    }
    if (this->geometry_choice != other.geometry_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const VolumeOneOfGeometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VolumeOneOfGeometry_

// alias to use template instance with default allocator
using VolumeOneOfGeometry =
  bosdyn_msgs::msg::VolumeOneOfGeometry_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t VolumeOneOfGeometry_<ContainerAllocator>::GEOMETRY_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t VolumeOneOfGeometry_<ContainerAllocator>::GEOMETRY_BOX_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VOLUME_ONE_OF_GEOMETRY__STRUCT_HPP_
