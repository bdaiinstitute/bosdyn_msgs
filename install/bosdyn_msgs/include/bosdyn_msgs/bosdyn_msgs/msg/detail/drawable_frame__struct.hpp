// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DrawableFrame.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_FRAME__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DrawableFrame __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DrawableFrame __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrawableFrame_
{
  using Type = DrawableFrame_<ContainerAllocator>;

  explicit DrawableFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arrow_length = 0.0;
      this->arrow_radius = 0.0;
    }
  }

  explicit DrawableFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arrow_length = 0.0;
      this->arrow_radius = 0.0;
    }
  }

  // field types and members
  using _arrow_length_type =
    double;
  _arrow_length_type arrow_length;
  using _arrow_radius_type =
    double;
  _arrow_radius_type arrow_radius;

  // setters for named parameter idiom
  Type & set__arrow_length(
    const double & _arg)
  {
    this->arrow_length = _arg;
    return *this;
  }
  Type & set__arrow_radius(
    const double & _arg)
  {
    this->arrow_radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DrawableFrame
    std::shared_ptr<bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DrawableFrame
    std::shared_ptr<bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawableFrame_ & other) const
  {
    if (this->arrow_length != other.arrow_length) {
      return false;
    }
    if (this->arrow_radius != other.arrow_radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawableFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawableFrame_

// alias to use template instance with default allocator
using DrawableFrame =
  bosdyn_msgs::msg::DrawableFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_FRAME__STRUCT_HPP_
