// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WalkToObjectRayInWorld.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_RAY_IN_WORLD__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_RAY_IN_WORLD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ray_start_rt_frame'
// Member 'ray_end_rt_frame'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WalkToObjectRayInWorld __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WalkToObjectRayInWorld __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WalkToObjectRayInWorld_
{
  using Type = WalkToObjectRayInWorld_<ContainerAllocator>;

  explicit WalkToObjectRayInWorld_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ray_start_rt_frame(_init),
    ray_end_rt_frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ray_start_rt_frame_is_set = false;
      this->ray_end_rt_frame_is_set = false;
      this->frame_name = "";
      this->offset_distance = 0.0f;
      this->offset_distance_is_set = false;
    }
  }

  explicit WalkToObjectRayInWorld_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ray_start_rt_frame(_alloc, _init),
    ray_end_rt_frame(_alloc, _init),
    frame_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ray_start_rt_frame_is_set = false;
      this->ray_end_rt_frame_is_set = false;
      this->frame_name = "";
      this->offset_distance = 0.0f;
      this->offset_distance_is_set = false;
    }
  }

  // field types and members
  using _ray_start_rt_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ray_start_rt_frame_type ray_start_rt_frame;
  using _ray_start_rt_frame_is_set_type =
    bool;
  _ray_start_rt_frame_is_set_type ray_start_rt_frame_is_set;
  using _ray_end_rt_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ray_end_rt_frame_type ray_end_rt_frame;
  using _ray_end_rt_frame_is_set_type =
    bool;
  _ray_end_rt_frame_is_set_type ray_end_rt_frame_is_set;
  using _frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_type frame_name;
  using _offset_distance_type =
    float;
  _offset_distance_type offset_distance;
  using _offset_distance_is_set_type =
    bool;
  _offset_distance_is_set_type offset_distance_is_set;

  // setters for named parameter idiom
  Type & set__ray_start_rt_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ray_start_rt_frame = _arg;
    return *this;
  }
  Type & set__ray_start_rt_frame_is_set(
    const bool & _arg)
  {
    this->ray_start_rt_frame_is_set = _arg;
    return *this;
  }
  Type & set__ray_end_rt_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ray_end_rt_frame = _arg;
    return *this;
  }
  Type & set__ray_end_rt_frame_is_set(
    const bool & _arg)
  {
    this->ray_end_rt_frame_is_set = _arg;
    return *this;
  }
  Type & set__frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name = _arg;
    return *this;
  }
  Type & set__offset_distance(
    const float & _arg)
  {
    this->offset_distance = _arg;
    return *this;
  }
  Type & set__offset_distance_is_set(
    const bool & _arg)
  {
    this->offset_distance_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WalkToObjectRayInWorld
    std::shared_ptr<bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WalkToObjectRayInWorld
    std::shared_ptr<bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WalkToObjectRayInWorld_ & other) const
  {
    if (this->ray_start_rt_frame != other.ray_start_rt_frame) {
      return false;
    }
    if (this->ray_start_rt_frame_is_set != other.ray_start_rt_frame_is_set) {
      return false;
    }
    if (this->ray_end_rt_frame != other.ray_end_rt_frame) {
      return false;
    }
    if (this->ray_end_rt_frame_is_set != other.ray_end_rt_frame_is_set) {
      return false;
    }
    if (this->frame_name != other.frame_name) {
      return false;
    }
    if (this->offset_distance != other.offset_distance) {
      return false;
    }
    if (this->offset_distance_is_set != other.offset_distance_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const WalkToObjectRayInWorld_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WalkToObjectRayInWorld_

// alias to use template instance with default allocator
using WalkToObjectRayInWorld =
  bosdyn_msgs::msg::WalkToObjectRayInWorld_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_RAY_IN_WORLD__STRUCT_HPP_
