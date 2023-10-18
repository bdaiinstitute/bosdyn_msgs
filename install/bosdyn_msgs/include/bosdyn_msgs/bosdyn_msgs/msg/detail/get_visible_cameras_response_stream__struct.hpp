// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GetVisibleCamerasResponseStream.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'window'
#include "bosdyn_msgs/msg/detail/get_visible_cameras_response_stream_window__struct.hpp"
// Member 'camera'
#include "bosdyn_msgs/msg/detail/camera__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GetVisibleCamerasResponseStream __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GetVisibleCamerasResponseStream __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GetVisibleCamerasResponseStream_
{
  using Type = GetVisibleCamerasResponseStream_<ContainerAllocator>;

  explicit GetVisibleCamerasResponseStream_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : window(_init),
    camera(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->window_is_set = false;
      this->camera_is_set = false;
    }
  }

  explicit GetVisibleCamerasResponseStream_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : window(_alloc, _init),
    camera(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->window_is_set = false;
      this->camera_is_set = false;
    }
  }

  // field types and members
  using _window_type =
    bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator>;
  _window_type window;
  using _window_is_set_type =
    bool;
  _window_is_set_type window_is_set;
  using _camera_type =
    bosdyn_msgs::msg::Camera_<ContainerAllocator>;
  _camera_type camera;
  using _camera_is_set_type =
    bool;
  _camera_is_set_type camera_is_set;

  // setters for named parameter idiom
  Type & set__window(
    const bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator> & _arg)
  {
    this->window = _arg;
    return *this;
  }
  Type & set__window_is_set(
    const bool & _arg)
  {
    this->window_is_set = _arg;
    return *this;
  }
  Type & set__camera(
    const bosdyn_msgs::msg::Camera_<ContainerAllocator> & _arg)
  {
    this->camera = _arg;
    return *this;
  }
  Type & set__camera_is_set(
    const bool & _arg)
  {
    this->camera_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GetVisibleCamerasResponseStream
    std::shared_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GetVisibleCamerasResponseStream
    std::shared_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetVisibleCamerasResponseStream_ & other) const
  {
    if (this->window != other.window) {
      return false;
    }
    if (this->window_is_set != other.window_is_set) {
      return false;
    }
    if (this->camera != other.camera) {
      return false;
    }
    if (this->camera_is_set != other.camera_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetVisibleCamerasResponseStream_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetVisibleCamerasResponseStream_

// alias to use template instance with default allocator
using GetVisibleCamerasResponseStream =
  bosdyn_msgs::msg::GetVisibleCamerasResponseStream_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__STRUCT_HPP_
