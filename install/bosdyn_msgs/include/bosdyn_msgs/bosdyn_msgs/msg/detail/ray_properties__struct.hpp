// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RayProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAY_PROPERTIES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAY_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ray'
#include "bosdyn_msgs/msg/detail/ray__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RayProperties __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RayProperties __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RayProperties_
{
  using Type = RayProperties_<ContainerAllocator>;

  explicit RayProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ray(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ray_is_set = false;
      this->frame = "";
    }
  }

  explicit RayProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ray(_alloc, _init),
    frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ray_is_set = false;
      this->frame = "";
    }
  }

  // field types and members
  using _ray_type =
    bosdyn_msgs::msg::Ray_<ContainerAllocator>;
  _ray_type ray;
  using _ray_is_set_type =
    bool;
  _ray_is_set_type ray_is_set;
  using _frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_type frame;

  // setters for named parameter idiom
  Type & set__ray(
    const bosdyn_msgs::msg::Ray_<ContainerAllocator> & _arg)
  {
    this->ray = _arg;
    return *this;
  }
  Type & set__ray_is_set(
    const bool & _arg)
  {
    this->ray_is_set = _arg;
    return *this;
  }
  Type & set__frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RayProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RayProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RayProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RayProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RayProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RayProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RayProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RayProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RayProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RayProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RayProperties
    std::shared_ptr<bosdyn_msgs::msg::RayProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RayProperties
    std::shared_ptr<bosdyn_msgs::msg::RayProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RayProperties_ & other) const
  {
    if (this->ray != other.ray) {
      return false;
    }
    if (this->ray_is_set != other.ray_is_set) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const RayProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RayProperties_

// alias to use template instance with default allocator
using RayProperties =
  bosdyn_msgs::msg::RayProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAY_PROPERTIES__STRUCT_HPP_
