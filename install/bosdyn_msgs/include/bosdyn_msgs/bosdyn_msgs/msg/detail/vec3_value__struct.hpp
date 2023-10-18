// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Vec3Value.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC3_VALUE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC3_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Vec3Value __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Vec3Value __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vec3Value_
{
  using Type = Vec3Value_<ContainerAllocator>;

  explicit Vec3Value_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->x_is_set = false;
      this->y = 0.0;
      this->y_is_set = false;
      this->z = 0.0;
      this->z_is_set = false;
    }
  }

  explicit Vec3Value_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->x_is_set = false;
      this->y = 0.0;
      this->y_is_set = false;
      this->z = 0.0;
      this->z_is_set = false;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _x_is_set_type =
    bool;
  _x_is_set_type x_is_set;
  using _y_type =
    double;
  _y_type y;
  using _y_is_set_type =
    bool;
  _y_is_set_type y_is_set;
  using _z_type =
    double;
  _z_type z;
  using _z_is_set_type =
    bool;
  _z_is_set_type z_is_set;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__x_is_set(
    const bool & _arg)
  {
    this->x_is_set = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__y_is_set(
    const bool & _arg)
  {
    this->y_is_set = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__z_is_set(
    const bool & _arg)
  {
    this->z_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Vec3Value_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Vec3Value_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Vec3Value_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Vec3Value_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Vec3Value_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Vec3Value_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Vec3Value_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Vec3Value_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Vec3Value_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Vec3Value_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Vec3Value
    std::shared_ptr<bosdyn_msgs::msg::Vec3Value_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Vec3Value
    std::shared_ptr<bosdyn_msgs::msg::Vec3Value_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vec3Value_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->x_is_set != other.x_is_set) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->y_is_set != other.y_is_set) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->z_is_set != other.z_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vec3Value_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vec3Value_

// alias to use template instance with default allocator
using Vec3Value =
  bosdyn_msgs::msg::Vec3Value_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC3_VALUE__STRUCT_HPP_
