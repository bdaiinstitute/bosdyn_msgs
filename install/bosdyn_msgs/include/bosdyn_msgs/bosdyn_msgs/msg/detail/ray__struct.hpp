// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Ray.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'origin'
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Ray __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Ray __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ray_
{
  using Type = Ray_<ContainerAllocator>;

  explicit Ray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin(_init),
    direction(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->origin_is_set = false;
      this->direction_is_set = false;
    }
  }

  explicit Ray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin(_alloc, _init),
    direction(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->origin_is_set = false;
      this->direction_is_set = false;
    }
  }

  // field types and members
  using _origin_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _origin_type origin;
  using _origin_is_set_type =
    bool;
  _origin_is_set_type origin_is_set;
  using _direction_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _direction_type direction;
  using _direction_is_set_type =
    bool;
  _direction_is_set_type direction_is_set;

  // setters for named parameter idiom
  Type & set__origin(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__origin_is_set(
    const bool & _arg)
  {
    this->origin_is_set = _arg;
    return *this;
  }
  Type & set__direction(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__direction_is_set(
    const bool & _arg)
  {
    this->direction_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Ray_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Ray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Ray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Ray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Ray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Ray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Ray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Ray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Ray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Ray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Ray
    std::shared_ptr<bosdyn_msgs::msg::Ray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Ray
    std::shared_ptr<bosdyn_msgs::msg::Ray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ray_ & other) const
  {
    if (this->origin != other.origin) {
      return false;
    }
    if (this->origin_is_set != other.origin_is_set) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->direction_is_set != other.direction_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ray_

// alias to use template instance with default allocator
using Ray =
  bosdyn_msgs::msg::Ray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAY__STRUCT_HPP_
