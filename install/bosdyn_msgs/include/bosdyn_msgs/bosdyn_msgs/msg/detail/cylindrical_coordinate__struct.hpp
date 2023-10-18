// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CylindricalCoordinate.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CYLINDRICAL_COORDINATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CYLINDRICAL_COORDINATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CylindricalCoordinate __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CylindricalCoordinate __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CylindricalCoordinate_
{
  using Type = CylindricalCoordinate_<ContainerAllocator>;

  explicit CylindricalCoordinate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0.0;
      this->theta = 0.0;
      this->z = 0.0;
    }
  }

  explicit CylindricalCoordinate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0.0;
      this->theta = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _r_type =
    double;
  _r_type r;
  using _theta_type =
    double;
  _theta_type theta;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__r(
    const double & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CylindricalCoordinate
    std::shared_ptr<bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CylindricalCoordinate
    std::shared_ptr<bosdyn_msgs::msg::CylindricalCoordinate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CylindricalCoordinate_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const CylindricalCoordinate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CylindricalCoordinate_

// alias to use template instance with default allocator
using CylindricalCoordinate =
  bosdyn_msgs::msg::CylindricalCoordinate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CYLINDRICAL_COORDINATE__STRUCT_HPP_
