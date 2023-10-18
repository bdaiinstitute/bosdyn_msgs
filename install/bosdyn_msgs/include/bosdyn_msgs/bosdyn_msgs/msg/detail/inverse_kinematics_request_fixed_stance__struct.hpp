// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestFixedStance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fl_rt_scene'
// Member 'fr_rt_scene'
// Member 'hl_rt_scene'
// Member 'hr_rt_scene'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestFixedStance __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestFixedStance __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsRequestFixedStance_
{
  using Type = InverseKinematicsRequestFixedStance_<ContainerAllocator>;

  explicit InverseKinematicsRequestFixedStance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fl_rt_scene(_init),
    fr_rt_scene(_init),
    hl_rt_scene(_init),
    hr_rt_scene(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_rt_scene_is_set = false;
      this->fr_rt_scene_is_set = false;
      this->hl_rt_scene_is_set = false;
      this->hr_rt_scene_is_set = false;
    }
  }

  explicit InverseKinematicsRequestFixedStance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fl_rt_scene(_alloc, _init),
    fr_rt_scene(_alloc, _init),
    hl_rt_scene(_alloc, _init),
    hr_rt_scene(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_rt_scene_is_set = false;
      this->fr_rt_scene_is_set = false;
      this->hl_rt_scene_is_set = false;
      this->hr_rt_scene_is_set = false;
    }
  }

  // field types and members
  using _fl_rt_scene_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _fl_rt_scene_type fl_rt_scene;
  using _fl_rt_scene_is_set_type =
    bool;
  _fl_rt_scene_is_set_type fl_rt_scene_is_set;
  using _fr_rt_scene_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _fr_rt_scene_type fr_rt_scene;
  using _fr_rt_scene_is_set_type =
    bool;
  _fr_rt_scene_is_set_type fr_rt_scene_is_set;
  using _hl_rt_scene_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _hl_rt_scene_type hl_rt_scene;
  using _hl_rt_scene_is_set_type =
    bool;
  _hl_rt_scene_is_set_type hl_rt_scene_is_set;
  using _hr_rt_scene_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _hr_rt_scene_type hr_rt_scene;
  using _hr_rt_scene_is_set_type =
    bool;
  _hr_rt_scene_is_set_type hr_rt_scene_is_set;

  // setters for named parameter idiom
  Type & set__fl_rt_scene(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->fl_rt_scene = _arg;
    return *this;
  }
  Type & set__fl_rt_scene_is_set(
    const bool & _arg)
  {
    this->fl_rt_scene_is_set = _arg;
    return *this;
  }
  Type & set__fr_rt_scene(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->fr_rt_scene = _arg;
    return *this;
  }
  Type & set__fr_rt_scene_is_set(
    const bool & _arg)
  {
    this->fr_rt_scene_is_set = _arg;
    return *this;
  }
  Type & set__hl_rt_scene(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->hl_rt_scene = _arg;
    return *this;
  }
  Type & set__hl_rt_scene_is_set(
    const bool & _arg)
  {
    this->hl_rt_scene_is_set = _arg;
    return *this;
  }
  Type & set__hr_rt_scene(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->hr_rt_scene = _arg;
    return *this;
  }
  Type & set__hr_rt_scene_is_set(
    const bool & _arg)
  {
    this->hr_rt_scene_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestFixedStance
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestFixedStance
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsRequestFixedStance_ & other) const
  {
    if (this->fl_rt_scene != other.fl_rt_scene) {
      return false;
    }
    if (this->fl_rt_scene_is_set != other.fl_rt_scene_is_set) {
      return false;
    }
    if (this->fr_rt_scene != other.fr_rt_scene) {
      return false;
    }
    if (this->fr_rt_scene_is_set != other.fr_rt_scene_is_set) {
      return false;
    }
    if (this->hl_rt_scene != other.hl_rt_scene) {
      return false;
    }
    if (this->hl_rt_scene_is_set != other.hl_rt_scene_is_set) {
      return false;
    }
    if (this->hr_rt_scene != other.hr_rt_scene) {
      return false;
    }
    if (this->hr_rt_scene_is_set != other.hr_rt_scene_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsRequestFixedStance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsRequestFixedStance_

// alias to use template instance with default allocator
using InverseKinematicsRequestFixedStance =
  bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__STRUCT_HPP_
