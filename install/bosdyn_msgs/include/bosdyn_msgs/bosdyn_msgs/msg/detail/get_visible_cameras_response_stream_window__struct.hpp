// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GetVisibleCamerasResponseStreamWindow.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM_WINDOW__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM_WINDOW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GetVisibleCamerasResponseStreamWindow __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GetVisibleCamerasResponseStreamWindow __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GetVisibleCamerasResponseStreamWindow_
{
  using Type = GetVisibleCamerasResponseStreamWindow_<ContainerAllocator>;

  explicit GetVisibleCamerasResponseStreamWindow_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xoffset = 0l;
      this->yoffset = 0l;
      this->width = 0l;
      this->height = 0l;
    }
  }

  explicit GetVisibleCamerasResponseStreamWindow_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xoffset = 0l;
      this->yoffset = 0l;
      this->width = 0l;
      this->height = 0l;
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

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GetVisibleCamerasResponseStreamWindow
    std::shared_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GetVisibleCamerasResponseStreamWindow
    std::shared_ptr<bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetVisibleCamerasResponseStreamWindow_ & other) const
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
    return true;
  }
  bool operator!=(const GetVisibleCamerasResponseStreamWindow_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetVisibleCamerasResponseStreamWindow_

// alias to use template instance with default allocator
using GetVisibleCamerasResponseStreamWindow =
  bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM_WINDOW__STRUCT_HPP_
