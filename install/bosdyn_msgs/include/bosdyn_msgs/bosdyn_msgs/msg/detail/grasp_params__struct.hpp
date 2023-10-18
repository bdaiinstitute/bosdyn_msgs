// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GraspParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRASP_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRASP_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'allowable_orientation'
#include "bosdyn_msgs/msg/detail/allowable_orientation__struct.hpp"
// Member 'position_constraint'
#include "bosdyn_msgs/msg/detail/grasp_position_constraint__struct.hpp"
// Member 'manipulation_camera_source'
#include "bosdyn_msgs/msg/detail/manipulation_camera_source__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GraspParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GraspParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraspParams_
{
  using Type = GraspParams_<ContainerAllocator>;

  explicit GraspParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_constraint(_init),
    manipulation_camera_source(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grasp_palm_to_fingertip = 0.0f;
      this->grasp_params_frame_name = "";
    }
  }

  explicit GraspParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grasp_params_frame_name(_alloc),
    position_constraint(_alloc, _init),
    manipulation_camera_source(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grasp_palm_to_fingertip = 0.0f;
      this->grasp_params_frame_name = "";
    }
  }

  // field types and members
  using _grasp_palm_to_fingertip_type =
    float;
  _grasp_palm_to_fingertip_type grasp_palm_to_fingertip;
  using _grasp_params_frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _grasp_params_frame_name_type grasp_params_frame_name;
  using _allowable_orientation_type =
    std::vector<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator>>>;
  _allowable_orientation_type allowable_orientation;
  using _position_constraint_type =
    bosdyn_msgs::msg::GraspPositionConstraint_<ContainerAllocator>;
  _position_constraint_type position_constraint;
  using _manipulation_camera_source_type =
    bosdyn_msgs::msg::ManipulationCameraSource_<ContainerAllocator>;
  _manipulation_camera_source_type manipulation_camera_source;

  // setters for named parameter idiom
  Type & set__grasp_palm_to_fingertip(
    const float & _arg)
  {
    this->grasp_palm_to_fingertip = _arg;
    return *this;
  }
  Type & set__grasp_params_frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->grasp_params_frame_name = _arg;
    return *this;
  }
  Type & set__allowable_orientation(
    const std::vector<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::AllowableOrientation_<ContainerAllocator>>> & _arg)
  {
    this->allowable_orientation = _arg;
    return *this;
  }
  Type & set__position_constraint(
    const bosdyn_msgs::msg::GraspPositionConstraint_<ContainerAllocator> & _arg)
  {
    this->position_constraint = _arg;
    return *this;
  }
  Type & set__manipulation_camera_source(
    const bosdyn_msgs::msg::ManipulationCameraSource_<ContainerAllocator> & _arg)
  {
    this->manipulation_camera_source = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GraspParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GraspParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GraspParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GraspParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GraspParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GraspParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GraspParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GraspParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GraspParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GraspParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GraspParams
    std::shared_ptr<bosdyn_msgs::msg::GraspParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GraspParams
    std::shared_ptr<bosdyn_msgs::msg::GraspParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspParams_ & other) const
  {
    if (this->grasp_palm_to_fingertip != other.grasp_palm_to_fingertip) {
      return false;
    }
    if (this->grasp_params_frame_name != other.grasp_params_frame_name) {
      return false;
    }
    if (this->allowable_orientation != other.allowable_orientation) {
      return false;
    }
    if (this->position_constraint != other.position_constraint) {
      return false;
    }
    if (this->manipulation_camera_source != other.manipulation_camera_source) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspParams_

// alias to use template instance with default allocator
using GraspParams =
  bosdyn_msgs::msg::GraspParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRASP_PARAMS__STRUCT_HPP_
