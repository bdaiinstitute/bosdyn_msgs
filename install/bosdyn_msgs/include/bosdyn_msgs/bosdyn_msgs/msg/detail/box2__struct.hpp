// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Box2.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOX2__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOX2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'size'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Box2 __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Box2 __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Box2_
{
  using Type = Box2_<ContainerAllocator>;

  explicit Box2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size_is_set = false;
    }
  }

  explicit Box2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size_is_set = false;
    }
  }

  // field types and members
  using _size_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _size_type size;
  using _size_is_set_type =
    bool;
  _size_is_set_type size_is_set;

  // setters for named parameter idiom
  Type & set__size(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__size_is_set(
    const bool & _arg)
  {
    this->size_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Box2_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Box2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Box2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Box2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Box2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Box2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Box2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Box2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Box2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Box2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Box2
    std::shared_ptr<bosdyn_msgs::msg::Box2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Box2
    std::shared_ptr<bosdyn_msgs::msg::Box2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Box2_ & other) const
  {
    if (this->size != other.size) {
      return false;
    }
    if (this->size_is_set != other.size_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Box2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Box2_

// alias to use template instance with default allocator
using Box2 =
  bosdyn_msgs::msg::Box2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOX2__STRUCT_HPP_
