// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandAutoPushCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_PUSH_COMMAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_PUSH_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'push_point_in_frame'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'hinge_side'
#include "bosdyn_msgs/msg/detail/door_command_hinge_side__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DoorCommandAutoPushCommand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DoorCommandAutoPushCommand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoorCommandAutoPushCommand_
{
  using Type = DoorCommandAutoPushCommand_<ContainerAllocator>;

  explicit DoorCommandAutoPushCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : push_point_in_frame(_init),
    hinge_side(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->push_point_in_frame_is_set = false;
    }
  }

  explicit DoorCommandAutoPushCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_name(_alloc),
    push_point_in_frame(_alloc, _init),
    hinge_side(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->push_point_in_frame_is_set = false;
    }
  }

  // field types and members
  using _frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_type frame_name;
  using _push_point_in_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _push_point_in_frame_type push_point_in_frame;
  using _push_point_in_frame_is_set_type =
    bool;
  _push_point_in_frame_is_set_type push_point_in_frame_is_set;
  using _hinge_side_type =
    bosdyn_msgs::msg::DoorCommandHingeSide_<ContainerAllocator>;
  _hinge_side_type hinge_side;

  // setters for named parameter idiom
  Type & set__frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name = _arg;
    return *this;
  }
  Type & set__push_point_in_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->push_point_in_frame = _arg;
    return *this;
  }
  Type & set__push_point_in_frame_is_set(
    const bool & _arg)
  {
    this->push_point_in_frame_is_set = _arg;
    return *this;
  }
  Type & set__hinge_side(
    const bosdyn_msgs::msg::DoorCommandHingeSide_<ContainerAllocator> & _arg)
  {
    this->hinge_side = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DoorCommandAutoPushCommand
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DoorCommandAutoPushCommand
    std::shared_ptr<bosdyn_msgs::msg::DoorCommandAutoPushCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoorCommandAutoPushCommand_ & other) const
  {
    if (this->frame_name != other.frame_name) {
      return false;
    }
    if (this->push_point_in_frame != other.push_point_in_frame) {
      return false;
    }
    if (this->push_point_in_frame_is_set != other.push_point_in_frame_is_set) {
      return false;
    }
    if (this->hinge_side != other.hinge_side) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoorCommandAutoPushCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoorCommandAutoPushCommand_

// alias to use template instance with default allocator
using DoorCommandAutoPushCommand =
  bosdyn_msgs::msg::DoorCommandAutoPushCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_AUTO_PUSH_COMMAND__STRUCT_HPP_
