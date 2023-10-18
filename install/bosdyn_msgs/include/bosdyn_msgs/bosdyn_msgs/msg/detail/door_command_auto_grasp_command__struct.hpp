// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandAutoGraspCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_GRASP_COMMAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_GRASP_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'search_ray_start_in_frame'
// Member 'search_ray_end_in_frame'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'hinge_side'
#include "bosdyn_msgs/msg/detail/door_command_hinge_side__struct.hpp"
// Member 'swing_direction'
#include "bosdyn_msgs/msg/detail/door_command_swing_direction__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DoorCommandAutoGraspCommand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DoorCommandAutoGraspCommand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoorCommandAutoGraspCommand_
{
  using Type = DoorCommandAutoGraspCommand_<ContainerAllocator>;

  explicit DoorCommandAutoGraspCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : search_ray_start_in_frame(_init),
    search_ray_end_in_frame(_init),
    hinge_side(_init),
    swing_direction(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->search_ray_start_in_frame_is_set = false;
      this->search_ray_end_in_frame_is_set = false;
    }
  }

  explicit DoorCommandAutoGraspCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_name(_alloc),
    search_ray_start_in_frame(_alloc, _init),
    search_ray_end_in_frame(_alloc, _init),
    hinge_side(_alloc, _init),
    swing_direction(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->search_ray_start_in_frame_is_set = false;
      this->search_ray_end_in_frame_is_set = false;
    }
  }

  // field types and members
  using _frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_type frame_name;
  using _search_ray_start_in_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _search_ray_start_in_frame_type search_ray_start_in_frame;
  using _search_ray_start_in_frame_is_set_type =
    bool;
  _search_ray_start_in_frame_is_set_type search_ray_start_in_frame_is_set;
  using _search_ray_end_in_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _search_ray_end_in_frame_type search_ray_end_in_frame;
  using _search_ray_end_in_frame_is_set_type =
    bool;
  _search_ray_end_in_frame_is_set_type search_ray_end_in_frame_is_set;
  using _hinge_side_type =
    bosdyn_msgs::msg::DoorCommandHingeSide_<ContainerAllocator>;
  _hinge_side_type hinge_side;
  using _swing_direction_type =
    bosdyn_msgs::msg::DoorCommandSwingDirection_<ContainerAllocator>;
  _swing_direction_type swing_direction;

  // setters for named parameter idiom
  Type & set__frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name = _arg;
    return *this;
  }
  Type & set__search_ray_start_in_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->search_ray_start_in_frame = _arg;
    return *this;
  }
  Type & set__search_ray_start_in_frame_is_set(
    const bool & _arg)
  {
    this->search_ray_start_in_frame_is_set = _arg;
    return *this;
  }
  Type & set__search_ray_end_in_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->search_ray_end_in_frame = _arg;
    return *this;
  }
  Type & set__search_ray_end_in_frame_is_set(
    const bool & _arg)
  {
    this->search_ray_end_in_frame_is_set = _arg;
    return *this;
  }
  Type & set__hinge_side(
    const bosdyn_msgs::msg::DoorCommandHingeSide_<ContainerAllocator> & _arg)
  {
    this->hinge_side = _arg;
    return *this;
  }
  Type & set__swing_direction(
    const bosdyn_msgs::msg::DoorCommandSwingDirection_<ContainerAllocator> & _arg)
  {
    this->swing_direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DoorCommandAutoGraspCommand
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DoorCommandAutoGraspCommand
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoorCommandAutoGraspCommand_ & other) const
  {
    if (this->frame_name != other.frame_name) {
      return false;
    }
    if (this->search_ray_start_in_frame != other.search_ray_start_in_frame) {
      return false;
    }
    if (this->search_ray_start_in_frame_is_set != other.search_ray_start_in_frame_is_set) {
      return false;
    }
    if (this->search_ray_end_in_frame != other.search_ray_end_in_frame) {
      return false;
    }
    if (this->search_ray_end_in_frame_is_set != other.search_ray_end_in_frame_is_set) {
      return false;
    }
    if (this->hinge_side != other.hinge_side) {
      return false;
    }
    if (this->swing_direction != other.swing_direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoorCommandAutoGraspCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoorCommandAutoGraspCommand_

// alias to use template instance with default allocator
using DoorCommandAutoGraspCommand =
  bosdyn_msgs::msg::DoorCommandAutoGraspCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_GRASP_COMMAND__STRUCT_HPP_
