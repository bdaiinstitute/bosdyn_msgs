// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MomentOfIntertia.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOMENT_OF_INTERTIA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOMENT_OF_INTERTIA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MomentOfIntertia __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MomentOfIntertia __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MomentOfIntertia_
{
  using Type = MomentOfIntertia_<ContainerAllocator>;

  explicit MomentOfIntertia_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xx = 0.0f;
      this->yy = 0.0f;
      this->zz = 0.0f;
      this->xy = 0.0f;
      this->xz = 0.0f;
      this->yz = 0.0f;
    }
  }

  explicit MomentOfIntertia_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xx = 0.0f;
      this->yy = 0.0f;
      this->zz = 0.0f;
      this->xy = 0.0f;
      this->xz = 0.0f;
      this->yz = 0.0f;
    }
  }

  // field types and members
  using _xx_type =
    float;
  _xx_type xx;
  using _yy_type =
    float;
  _yy_type yy;
  using _zz_type =
    float;
  _zz_type zz;
  using _xy_type =
    float;
  _xy_type xy;
  using _xz_type =
    float;
  _xz_type xz;
  using _yz_type =
    float;
  _yz_type yz;

  // setters for named parameter idiom
  Type & set__xx(
    const float & _arg)
  {
    this->xx = _arg;
    return *this;
  }
  Type & set__yy(
    const float & _arg)
  {
    this->yy = _arg;
    return *this;
  }
  Type & set__zz(
    const float & _arg)
  {
    this->zz = _arg;
    return *this;
  }
  Type & set__xy(
    const float & _arg)
  {
    this->xy = _arg;
    return *this;
  }
  Type & set__xz(
    const float & _arg)
  {
    this->xz = _arg;
    return *this;
  }
  Type & set__yz(
    const float & _arg)
  {
    this->yz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MomentOfIntertia
    std::shared_ptr<bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MomentOfIntertia
    std::shared_ptr<bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MomentOfIntertia_ & other) const
  {
    if (this->xx != other.xx) {
      return false;
    }
    if (this->yy != other.yy) {
      return false;
    }
    if (this->zz != other.zz) {
      return false;
    }
    if (this->xy != other.xy) {
      return false;
    }
    if (this->xz != other.xz) {
      return false;
    }
    if (this->yz != other.yz) {
      return false;
    }
    return true;
  }
  bool operator!=(const MomentOfIntertia_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MomentOfIntertia_

// alias to use template instance with default allocator
using MomentOfIntertia =
  bosdyn_msgs::msg::MomentOfIntertia_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOMENT_OF_INTERTIA__STRUCT_HPP_
