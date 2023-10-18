// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WalkToObjectInImage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_IN_IMAGE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_IN_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pixel_xy'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"
// Member 'transforms_snapshot_for_camera'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__struct.hpp"
// Member 'camera_model'
#include "bosdyn_msgs/msg/detail/image_source_pinhole_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WalkToObjectInImage __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WalkToObjectInImage __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WalkToObjectInImage_
{
  using Type = WalkToObjectInImage_<ContainerAllocator>;

  explicit WalkToObjectInImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pixel_xy(_init),
    transforms_snapshot_for_camera(_init),
    camera_model(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pixel_xy_is_set = false;
      this->transforms_snapshot_for_camera_is_set = false;
      this->frame_name_image_sensor = "";
      this->camera_model_is_set = false;
      this->offset_distance = 0.0f;
      this->offset_distance_is_set = false;
    }
  }

  explicit WalkToObjectInImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pixel_xy(_alloc, _init),
    transforms_snapshot_for_camera(_alloc, _init),
    frame_name_image_sensor(_alloc),
    camera_model(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pixel_xy_is_set = false;
      this->transforms_snapshot_for_camera_is_set = false;
      this->frame_name_image_sensor = "";
      this->camera_model_is_set = false;
      this->offset_distance = 0.0f;
      this->offset_distance_is_set = false;
    }
  }

  // field types and members
  using _pixel_xy_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _pixel_xy_type pixel_xy;
  using _pixel_xy_is_set_type =
    bool;
  _pixel_xy_is_set_type pixel_xy_is_set;
  using _transforms_snapshot_for_camera_type =
    bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator>;
  _transforms_snapshot_for_camera_type transforms_snapshot_for_camera;
  using _transforms_snapshot_for_camera_is_set_type =
    bool;
  _transforms_snapshot_for_camera_is_set_type transforms_snapshot_for_camera_is_set;
  using _frame_name_image_sensor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_image_sensor_type frame_name_image_sensor;
  using _camera_model_type =
    bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator>;
  _camera_model_type camera_model;
  using _camera_model_is_set_type =
    bool;
  _camera_model_is_set_type camera_model_is_set;
  using _offset_distance_type =
    float;
  _offset_distance_type offset_distance;
  using _offset_distance_is_set_type =
    bool;
  _offset_distance_is_set_type offset_distance_is_set;

  // setters for named parameter idiom
  Type & set__pixel_xy(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->pixel_xy = _arg;
    return *this;
  }
  Type & set__pixel_xy_is_set(
    const bool & _arg)
  {
    this->pixel_xy_is_set = _arg;
    return *this;
  }
  Type & set__transforms_snapshot_for_camera(
    const bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator> & _arg)
  {
    this->transforms_snapshot_for_camera = _arg;
    return *this;
  }
  Type & set__transforms_snapshot_for_camera_is_set(
    const bool & _arg)
  {
    this->transforms_snapshot_for_camera_is_set = _arg;
    return *this;
  }
  Type & set__frame_name_image_sensor(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name_image_sensor = _arg;
    return *this;
  }
  Type & set__camera_model(
    const bosdyn_msgs::msg::ImageSourcePinholeModel_<ContainerAllocator> & _arg)
  {
    this->camera_model = _arg;
    return *this;
  }
  Type & set__camera_model_is_set(
    const bool & _arg)
  {
    this->camera_model_is_set = _arg;
    return *this;
  }
  Type & set__offset_distance(
    const float & _arg)
  {
    this->offset_distance = _arg;
    return *this;
  }
  Type & set__offset_distance_is_set(
    const bool & _arg)
  {
    this->offset_distance_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WalkToObjectInImage
    std::shared_ptr<bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WalkToObjectInImage
    std::shared_ptr<bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WalkToObjectInImage_ & other) const
  {
    if (this->pixel_xy != other.pixel_xy) {
      return false;
    }
    if (this->pixel_xy_is_set != other.pixel_xy_is_set) {
      return false;
    }
    if (this->transforms_snapshot_for_camera != other.transforms_snapshot_for_camera) {
      return false;
    }
    if (this->transforms_snapshot_for_camera_is_set != other.transforms_snapshot_for_camera_is_set) {
      return false;
    }
    if (this->frame_name_image_sensor != other.frame_name_image_sensor) {
      return false;
    }
    if (this->camera_model != other.camera_model) {
      return false;
    }
    if (this->camera_model_is_set != other.camera_model_is_set) {
      return false;
    }
    if (this->offset_distance != other.offset_distance) {
      return false;
    }
    if (this->offset_distance_is_set != other.offset_distance_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const WalkToObjectInImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WalkToObjectInImage_

// alias to use template instance with default allocator
using WalkToObjectInImage =
  bosdyn_msgs::msg::WalkToObjectInImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_IN_IMAGE__STRUCT_HPP_
