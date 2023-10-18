// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LogpointCalibration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOGPOINT_CALIBRATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOGPOINT_CALIBRATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'base_tform_sensor'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'intrinsics'
#include "bosdyn_msgs/msg/detail/camera_pinhole_intrinsics__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LogpointCalibration __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LogpointCalibration __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LogpointCalibration_
{
  using Type = LogpointCalibration_<ContainerAllocator>;

  explicit LogpointCalibration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_tform_sensor(_init),
    intrinsics(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xoffset = 0l;
      this->yoffset = 0l;
      this->width = 0l;
      this->height = 0l;
      this->base_frame_name = "";
      this->base_tform_sensor_is_set = false;
      this->intrinsics_is_set = false;
    }
  }

  explicit LogpointCalibration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_frame_name(_alloc),
    base_tform_sensor(_alloc, _init),
    intrinsics(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xoffset = 0l;
      this->yoffset = 0l;
      this->width = 0l;
      this->height = 0l;
      this->base_frame_name = "";
      this->base_tform_sensor_is_set = false;
      this->intrinsics_is_set = false;
    }
  }

  // field types and members
  using _xoffset_type =
    int32_t;
  _xoffset_type xoffset;
  using _yoffset_type =
    int32_t;
  _yoffset_type yoffset;
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;
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
    bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator>;
  _intrinsics_type intrinsics;
  using _intrinsics_is_set_type =
    bool;
  _intrinsics_is_set_type intrinsics_is_set;

  // setters for named parameter idiom
  Type & set__xoffset(
    const int32_t & _arg)
  {
    this->xoffset = _arg;
    return *this;
  }
  Type & set__yoffset(
    const int32_t & _arg)
  {
    this->yoffset = _arg;
    return *this;
  }
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
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
    const bosdyn_msgs::msg::CameraPinholeIntrinsics_<ContainerAllocator> & _arg)
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
    bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LogpointCalibration
    std::shared_ptr<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LogpointCalibration
    std::shared_ptr<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogpointCalibration_ & other) const
  {
    if (this->xoffset != other.xoffset) {
      return false;
    }
    if (this->yoffset != other.yoffset) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
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
    if (this->intrinsics_is_set != other.intrinsics_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogpointCalibration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogpointCalibration_

// alias to use template instance with default allocator
using LogpointCalibration =
  bosdyn_msgs::msg::LogpointCalibration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOGPOINT_CALIBRATION__STRUCT_HPP_
