// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Box3WithFrame.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOX3_WITH_FRAME__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOX3_WITH_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'box'
#include "bosdyn_msgs/msg/detail/box3__struct.hpp"
// Member 'frame_name_tform_box'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Box3WithFrame __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Box3WithFrame __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Box3WithFrame_
{
  using Type = Box3WithFrame_<ContainerAllocator>;

  explicit Box3WithFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : box(_init),
    frame_name_tform_box(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->box_is_set = false;
      this->frame_name = "";
      this->frame_name_tform_box_is_set = false;
    }
  }

  explicit Box3WithFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : box(_alloc, _init),
    frame_name(_alloc),
    frame_name_tform_box(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->box_is_set = false;
      this->frame_name = "";
      this->frame_name_tform_box_is_set = false;
    }
  }

  // field types and members
  using _box_type =
    bosdyn_msgs::msg::Box3_<ContainerAllocator>;
  _box_type box;
  using _box_is_set_type =
    bool;
  _box_is_set_type box_is_set;
  using _frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_type frame_name;
  using _frame_name_tform_box_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _frame_name_tform_box_type frame_name_tform_box;
  using _frame_name_tform_box_is_set_type =
    bool;
  _frame_name_tform_box_is_set_type frame_name_tform_box_is_set;

  // setters for named parameter idiom
  Type & set__box(
    const bosdyn_msgs::msg::Box3_<ContainerAllocator> & _arg)
  {
    this->box = _arg;
    return *this;
  }
  Type & set__box_is_set(
    const bool & _arg)
  {
    this->box_is_set = _arg;
    return *this;
  }
  Type & set__frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name = _arg;
    return *this;
  }
  Type & set__frame_name_tform_box(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->frame_name_tform_box = _arg;
    return *this;
  }
  Type & set__frame_name_tform_box_is_set(
    const bool & _arg)
  {
    this->frame_name_tform_box_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Box3WithFrame
    std::shared_ptr<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Box3WithFrame
    std::shared_ptr<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Box3WithFrame_ & other) const
  {
    if (this->box != other.box) {
      return false;
    }
    if (this->box_is_set != other.box_is_set) {
      return false;
    }
    if (this->frame_name != other.frame_name) {
      return false;
    }
    if (this->frame_name_tform_box != other.frame_name_tform_box) {
      return false;
    }
    if (this->frame_name_tform_box_is_set != other.frame_name_tform_box_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Box3WithFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Box3WithFrame_

// alias to use template instance with default allocator
using Box3WithFrame =
  bosdyn_msgs::msg::Box3WithFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOX3_WITH_FRAME__STRUCT_HPP_
