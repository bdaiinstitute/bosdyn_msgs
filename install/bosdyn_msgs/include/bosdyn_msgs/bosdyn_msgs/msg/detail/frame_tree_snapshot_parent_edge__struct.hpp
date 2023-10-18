// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FrameTreeSnapshotParentEdge.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT_PARENT_EDGE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT_PARENT_EDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'parent_tform_child'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FrameTreeSnapshotParentEdge __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FrameTreeSnapshotParentEdge __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FrameTreeSnapshotParentEdge_
{
  using Type = FrameTreeSnapshotParentEdge_<ContainerAllocator>;

  explicit FrameTreeSnapshotParentEdge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parent_tform_child(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent_frame_name = "";
      this->parent_tform_child_is_set = false;
    }
  }

  explicit FrameTreeSnapshotParentEdge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parent_frame_name(_alloc),
    parent_tform_child(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent_frame_name = "";
      this->parent_tform_child_is_set = false;
    }
  }

  // field types and members
  using _parent_frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_frame_name_type parent_frame_name;
  using _parent_tform_child_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _parent_tform_child_type parent_tform_child;
  using _parent_tform_child_is_set_type =
    bool;
  _parent_tform_child_is_set_type parent_tform_child_is_set;

  // setters for named parameter idiom
  Type & set__parent_frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent_frame_name = _arg;
    return *this;
  }
  Type & set__parent_tform_child(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->parent_tform_child = _arg;
    return *this;
  }
  Type & set__parent_tform_child_is_set(
    const bool & _arg)
  {
    this->parent_tform_child_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FrameTreeSnapshotParentEdge
    std::shared_ptr<bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FrameTreeSnapshotParentEdge
    std::shared_ptr<bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrameTreeSnapshotParentEdge_ & other) const
  {
    if (this->parent_frame_name != other.parent_frame_name) {
      return false;
    }
    if (this->parent_tform_child != other.parent_tform_child) {
      return false;
    }
    if (this->parent_tform_child_is_set != other.parent_tform_child_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const FrameTreeSnapshotParentEdge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrameTreeSnapshotParentEdge_

// alias to use template instance with default allocator
using FrameTreeSnapshotParentEdge =
  bosdyn_msgs::msg::FrameTreeSnapshotParentEdge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT_PARENT_EDGE__STRUCT_HPP_
