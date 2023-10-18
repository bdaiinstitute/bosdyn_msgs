// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StairTransform.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIR_TRANSFORM__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIR_TRANSFORM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'frame_tform_stairs'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StairTransform __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StairTransform __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StairTransform_
{
  using Type = StairTransform_<ContainerAllocator>;

  explicit StairTransform_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_tform_stairs(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_tform_stairs_is_set = false;
      this->frame_name = "";
    }
  }

  explicit StairTransform_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_tform_stairs(_alloc, _init),
    frame_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_tform_stairs_is_set = false;
      this->frame_name = "";
    }
  }

  // field types and members
  using _frame_tform_stairs_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _frame_tform_stairs_type frame_tform_stairs;
  using _frame_tform_stairs_is_set_type =
    bool;
  _frame_tform_stairs_is_set_type frame_tform_stairs_is_set;
  using _frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_type frame_name;

  // setters for named parameter idiom
  Type & set__frame_tform_stairs(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->frame_tform_stairs = _arg;
    return *this;
  }
  Type & set__frame_tform_stairs_is_set(
    const bool & _arg)
  {
    this->frame_tform_stairs_is_set = _arg;
    return *this;
  }
  Type & set__frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StairTransform_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StairTransform_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StairTransform_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StairTransform_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StairTransform_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StairTransform_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StairTransform_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StairTransform_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StairTransform_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StairTransform_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StairTransform
    std::shared_ptr<bosdyn_msgs::msg::StairTransform_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StairTransform
    std::shared_ptr<bosdyn_msgs::msg::StairTransform_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StairTransform_ & other) const
  {
    if (this->frame_tform_stairs != other.frame_tform_stairs) {
      return false;
    }
    if (this->frame_tform_stairs_is_set != other.frame_tform_stairs_is_set) {
      return false;
    }
    if (this->frame_name != other.frame_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const StairTransform_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StairTransform_

// alias to use template instance with default allocator
using StairTransform =
  bosdyn_msgs::msg::StairTransform_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIR_TRANSFORM__STRUCT_HPP_
