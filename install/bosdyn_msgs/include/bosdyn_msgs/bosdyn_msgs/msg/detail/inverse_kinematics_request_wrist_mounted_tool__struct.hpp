// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestWristMountedTool.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_WRIST_MOUNTED_TOOL__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_WRIST_MOUNTED_TOOL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'wrist_tform_tool'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestWristMountedTool __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestWristMountedTool __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsRequestWristMountedTool_
{
  using Type = InverseKinematicsRequestWristMountedTool_<ContainerAllocator>;

  explicit InverseKinematicsRequestWristMountedTool_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wrist_tform_tool(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wrist_tform_tool_is_set = false;
    }
  }

  explicit InverseKinematicsRequestWristMountedTool_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wrist_tform_tool(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wrist_tform_tool_is_set = false;
    }
  }

  // field types and members
  using _wrist_tform_tool_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _wrist_tform_tool_type wrist_tform_tool;
  using _wrist_tform_tool_is_set_type =
    bool;
  _wrist_tform_tool_is_set_type wrist_tform_tool_is_set;

  // setters for named parameter idiom
  Type & set__wrist_tform_tool(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->wrist_tform_tool = _arg;
    return *this;
  }
  Type & set__wrist_tform_tool_is_set(
    const bool & _arg)
  {
    this->wrist_tform_tool_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestWristMountedTool
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestWristMountedTool
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsRequestWristMountedTool_ & other) const
  {
    if (this->wrist_tform_tool != other.wrist_tform_tool) {
      return false;
    }
    if (this->wrist_tform_tool_is_set != other.wrist_tform_tool_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsRequestWristMountedTool_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsRequestWristMountedTool_

// alias to use template instance with default allocator
using InverseKinematicsRequestWristMountedTool =
  bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_WRIST_MOUNTED_TOOL__STRUCT_HPP_
