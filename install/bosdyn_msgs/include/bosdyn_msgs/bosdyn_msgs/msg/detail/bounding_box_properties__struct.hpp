// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BoundingBoxProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOUNDING_BOX_PROPERTIES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOUNDING_BOX_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'size_ewrt_frame'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BoundingBoxProperties __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BoundingBoxProperties __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingBoxProperties_
{
  using Type = BoundingBoxProperties_<ContainerAllocator>;

  explicit BoundingBoxProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : size_ewrt_frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size_ewrt_frame_is_set = false;
      this->frame = "";
    }
  }

  explicit BoundingBoxProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : size_ewrt_frame(_alloc, _init),
    frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size_ewrt_frame_is_set = false;
      this->frame = "";
    }
  }

  // field types and members
  using _size_ewrt_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _size_ewrt_frame_type size_ewrt_frame;
  using _size_ewrt_frame_is_set_type =
    bool;
  _size_ewrt_frame_is_set_type size_ewrt_frame_is_set;
  using _frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_type frame;

  // setters for named parameter idiom
  Type & set__size_ewrt_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->size_ewrt_frame = _arg;
    return *this;
  }
  Type & set__size_ewrt_frame_is_set(
    const bool & _arg)
  {
    this->size_ewrt_frame_is_set = _arg;
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
    bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BoundingBoxProperties
    std::shared_ptr<bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BoundingBoxProperties
    std::shared_ptr<bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBoxProperties_ & other) const
  {
    if (this->size_ewrt_frame != other.size_ewrt_frame) {
      return false;
    }
    if (this->size_ewrt_frame_is_set != other.size_ewrt_frame_is_set) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBoxProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBoxProperties_

// alias to use template instance with default allocator
using BoundingBoxProperties =
  bosdyn_msgs::msg::BoundingBoxProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOUNDING_BOX_PROPERTIES__STRUCT_HPP_
