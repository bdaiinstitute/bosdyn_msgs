// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/VectorAlignmentWithTolerance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VECTOR_ALIGNMENT_WITH_TOLERANCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VECTOR_ALIGNMENT_WITH_TOLERANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'axis_on_gripper_ewrt_gripper'
// Member 'axis_to_align_with_ewrt_frame'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__VectorAlignmentWithTolerance __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__VectorAlignmentWithTolerance __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VectorAlignmentWithTolerance_
{
  using Type = VectorAlignmentWithTolerance_<ContainerAllocator>;

  explicit VectorAlignmentWithTolerance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : axis_on_gripper_ewrt_gripper(_init),
    axis_to_align_with_ewrt_frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis_on_gripper_ewrt_gripper_is_set = false;
      this->axis_to_align_with_ewrt_frame_is_set = false;
      this->threshold_radians = 0.0f;
    }
  }

  explicit VectorAlignmentWithTolerance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : axis_on_gripper_ewrt_gripper(_alloc, _init),
    axis_to_align_with_ewrt_frame(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis_on_gripper_ewrt_gripper_is_set = false;
      this->axis_to_align_with_ewrt_frame_is_set = false;
      this->threshold_radians = 0.0f;
    }
  }

  // field types and members
  using _axis_on_gripper_ewrt_gripper_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _axis_on_gripper_ewrt_gripper_type axis_on_gripper_ewrt_gripper;
  using _axis_on_gripper_ewrt_gripper_is_set_type =
    bool;
  _axis_on_gripper_ewrt_gripper_is_set_type axis_on_gripper_ewrt_gripper_is_set;
  using _axis_to_align_with_ewrt_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _axis_to_align_with_ewrt_frame_type axis_to_align_with_ewrt_frame;
  using _axis_to_align_with_ewrt_frame_is_set_type =
    bool;
  _axis_to_align_with_ewrt_frame_is_set_type axis_to_align_with_ewrt_frame_is_set;
  using _threshold_radians_type =
    float;
  _threshold_radians_type threshold_radians;

  // setters for named parameter idiom
  Type & set__axis_on_gripper_ewrt_gripper(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->axis_on_gripper_ewrt_gripper = _arg;
    return *this;
  }
  Type & set__axis_on_gripper_ewrt_gripper_is_set(
    const bool & _arg)
  {
    this->axis_on_gripper_ewrt_gripper_is_set = _arg;
    return *this;
  }
  Type & set__axis_to_align_with_ewrt_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->axis_to_align_with_ewrt_frame = _arg;
    return *this;
  }
  Type & set__axis_to_align_with_ewrt_frame_is_set(
    const bool & _arg)
  {
    this->axis_to_align_with_ewrt_frame_is_set = _arg;
    return *this;
  }
  Type & set__threshold_radians(
    const float & _arg)
  {
    this->threshold_radians = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__VectorAlignmentWithTolerance
    std::shared_ptr<bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__VectorAlignmentWithTolerance
    std::shared_ptr<bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VectorAlignmentWithTolerance_ & other) const
  {
    if (this->axis_on_gripper_ewrt_gripper != other.axis_on_gripper_ewrt_gripper) {
      return false;
    }
    if (this->axis_on_gripper_ewrt_gripper_is_set != other.axis_on_gripper_ewrt_gripper_is_set) {
      return false;
    }
    if (this->axis_to_align_with_ewrt_frame != other.axis_to_align_with_ewrt_frame) {
      return false;
    }
    if (this->axis_to_align_with_ewrt_frame_is_set != other.axis_to_align_with_ewrt_frame_is_set) {
      return false;
    }
    if (this->threshold_radians != other.threshold_radians) {
      return false;
    }
    return true;
  }
  bool operator!=(const VectorAlignmentWithTolerance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VectorAlignmentWithTolerance_

// alias to use template instance with default allocator
using VectorAlignmentWithTolerance =
  bosdyn_msgs::msg::VectorAlignmentWithTolerance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VECTOR_ALIGNMENT_WITH_TOLERANCE__STRUCT_HPP_
