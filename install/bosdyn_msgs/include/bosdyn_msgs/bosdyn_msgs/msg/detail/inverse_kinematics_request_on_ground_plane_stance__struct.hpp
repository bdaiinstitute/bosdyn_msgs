// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOnGroundPlaneStance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ON_GROUND_PLANE_STANCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ON_GROUND_PLANE_STANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'scene_tform_ground'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOnGroundPlaneStance __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOnGroundPlaneStance __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsRequestOnGroundPlaneStance_
{
  using Type = InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator>;

  explicit InverseKinematicsRequestOnGroundPlaneStance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scene_tform_ground(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scene_tform_ground_is_set = false;
    }
  }

  explicit InverseKinematicsRequestOnGroundPlaneStance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scene_tform_ground(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scene_tform_ground_is_set = false;
    }
  }

  // field types and members
  using _scene_tform_ground_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _scene_tform_ground_type scene_tform_ground;
  using _scene_tform_ground_is_set_type =
    bool;
  _scene_tform_ground_is_set_type scene_tform_ground_is_set;

  // setters for named parameter idiom
  Type & set__scene_tform_ground(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->scene_tform_ground = _arg;
    return *this;
  }
  Type & set__scene_tform_ground_is_set(
    const bool & _arg)
  {
    this->scene_tform_ground_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOnGroundPlaneStance
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOnGroundPlaneStance
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsRequestOnGroundPlaneStance_ & other) const
  {
    if (this->scene_tform_ground != other.scene_tform_ground) {
      return false;
    }
    if (this->scene_tform_ground_is_set != other.scene_tform_ground_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsRequestOnGroundPlaneStance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsRequestOnGroundPlaneStance_

// alias to use template instance with default allocator
using InverseKinematicsRequestOnGroundPlaneStance =
  bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ON_GROUND_PLANE_STANCE__STRUCT_HPP_
