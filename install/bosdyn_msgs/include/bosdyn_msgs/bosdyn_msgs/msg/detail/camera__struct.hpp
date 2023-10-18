// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'resolution'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"
// Member 'base_tform_sensor'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'intrinsics'
#include "bosdyn_msgs/msg/detail/camera_one_of_intrinsics__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Camera __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Camera __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Camera_
{
  using Type = Camera_<ContainerAllocator>;

  explicit Camera_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : resolution(_init),
    base_tform_sensor(_init),
    intrinsics(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->resolution_is_set = false;
      this->base_frame_name = "";
      this->base_tform_sensor_is_set = false;
    }
  }

  explicit Camera_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    resolution(_alloc, _init),
    base_frame_name(_alloc),
    base_tform_sensor(_alloc, _init),
    intrinsics(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->resolution_is_set = false;
      this->base_frame_name = "";
      this->base_tform_sensor_is_set = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _resolution_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _resolution_type resolution;
  using _resolution_is_set_type =
    bool;
  _resolution_is_set_type resolution_is_set;
  using _base_frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _base_frame_name_type base_frame_name;
  using _base_tform_sensor_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _base_tform_sensor_type base_tform_sensor;
  using _base_tform_sensor_is_set_type =
    bool;
  _base_tform_sensor_is_set_type base_tform_sensor_is_set;
  using _intrinsics_type =
    bosdyn_msgs::msg::CameraOneOfIntrinsics_<ContainerAllocator>;
  _intrinsics_type intrinsics;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__resolution(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__resolution_is_set(
    const bool & _arg)
  {
    this->resolution_is_set = _arg;
    return *this;
  }
  Type & set__base_frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->base_frame_name = _arg;
    return *this;
  }
  Type & set__base_tform_sensor(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->base_tform_sensor = _arg;
    return *this;
  }
  Type & set__base_tform_sensor_is_set(
    const bool & _arg)
  {
    this->base_tform_sensor_is_set = _arg;
    return *this;
  }
  Type & set__intrinsics(
    const bosdyn_msgs::msg::CameraOneOfIntrinsics_<ContainerAllocator> & _arg)
  {
    this->intrinsics = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Camera_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Camera_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Camera_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Camera_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Camera_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Camera_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Camera_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Camera_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Camera_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Camera_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Camera
    std::shared_ptr<bosdyn_msgs::msg::Camera_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Camera
    std::shared_ptr<bosdyn_msgs::msg::Camera_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->resolution_is_set != other.resolution_is_set) {
      return false;
    }
    if (this->base_frame_name != other.base_frame_name) {
      return false;
    }
    if (this->base_tform_sensor != other.base_tform_sensor) {
      return false;
    }
    if (this->base_tform_sensor_is_set != other.base_tform_sensor_is_set) {
      return false;
    }
    if (this->intrinsics != other.intrinsics) {
      return false;
    }
    return true;
  }
  bool operator!=(const Camera_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Camera_

// alias to use template instance with default allocator
using Camera =
  bosdyn_msgs::msg::Camera_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA__STRUCT_HPP_
