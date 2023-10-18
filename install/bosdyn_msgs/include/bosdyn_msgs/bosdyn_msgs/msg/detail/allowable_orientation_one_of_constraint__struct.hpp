// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AllowableOrientationOneOfConstraint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION_ONE_OF_CONSTRAINT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION_ONE_OF_CONSTRAINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'rotation_with_tolerance'
#include "bosdyn_msgs/msg/detail/rotation_with_tolerance__struct.hpp"
// Member 'vector_alignment_with_tolerance'
#include "bosdyn_msgs/msg/detail/vector_alignment_with_tolerance__struct.hpp"
// Member 'squeeze_grasp'
#include "bosdyn_msgs/msg/detail/squeeze_grasp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AllowableOrientationOneOfConstraint __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AllowableOrientationOneOfConstraint __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllowableOrientationOneOfConstraint_
{
  using Type = AllowableOrientationOneOfConstraint_<ContainerAllocator>;

  explicit AllowableOrientationOneOfConstraint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rotation_with_tolerance(_init),
    vector_alignment_with_tolerance(_init),
    squeeze_grasp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->constraint_choice = 0;
    }
  }

  explicit AllowableOrientationOneOfConstraint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rotation_with_tolerance(_alloc, _init),
    vector_alignment_with_tolerance(_alloc, _init),
    squeeze_grasp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->constraint_choice = 0;
    }
  }

  // field types and members
  using _rotation_with_tolerance_type =
    bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator>;
  _rotation_with_tolerance_type rotation_with_tolerance;
  using _vector_alignment_with_tolerance_type =
    bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator>;
  _vector_alignment_with_tolerance_type vector_alignment_with_tolerance;
  using _squeeze_grasp_type =
    bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator>;
  _squeeze_grasp_type squeeze_grasp;
  using _constraint_choice_type =
    int8_t;
  _constraint_choice_type constraint_choice;

  // setters for named parameter idiom
  Type & set__rotation_with_tolerance(
    const bosdyn_msgs::msg::RotationWithTolerance_<ContainerAllocator> & _arg)
  {
    this->rotation_with_tolerance = _arg;
    return *this;
  }
  Type & set__vector_alignment_with_tolerance(
    const bosdyn_msgs::msg::VectorAlignmentWithTolerance_<ContainerAllocator> & _arg)
  {
    this->vector_alignment_with_tolerance = _arg;
    return *this;
  }
  Type & set__squeeze_grasp(
    const bosdyn_msgs::msg::SqueezeGrasp_<ContainerAllocator> & _arg)
  {
    this->squeeze_grasp = _arg;
    return *this;
  }
  Type & set__constraint_choice(
    const int8_t & _arg)
  {
    this->constraint_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t CONSTRAINT_NOT_SET =
    0;
  static constexpr int8_t CONSTRAINT_ROTATION_WITH_TOLERANCE_SET =
    1;
  static constexpr int8_t CONSTRAINT_VECTOR_ALIGNMENT_WITH_TOLERANCE_SET =
    2;
  static constexpr int8_t CONSTRAINT_SQUEEZE_GRASP_SET =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AllowableOrientationOneOfConstraint
    std::shared_ptr<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AllowableOrientationOneOfConstraint
    std::shared_ptr<bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllowableOrientationOneOfConstraint_ & other) const
  {
    if (this->rotation_with_tolerance != other.rotation_with_tolerance) {
      return false;
    }
    if (this->vector_alignment_with_tolerance != other.vector_alignment_with_tolerance) {
      return false;
    }
    if (this->squeeze_grasp != other.squeeze_grasp) {
      return false;
    }
    if (this->constraint_choice != other.constraint_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllowableOrientationOneOfConstraint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllowableOrientationOneOfConstraint_

// alias to use template instance with default allocator
using AllowableOrientationOneOfConstraint =
  bosdyn_msgs::msg::AllowableOrientationOneOfConstraint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AllowableOrientationOneOfConstraint_<ContainerAllocator>::CONSTRAINT_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AllowableOrientationOneOfConstraint_<ContainerAllocator>::CONSTRAINT_ROTATION_WITH_TOLERANCE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AllowableOrientationOneOfConstraint_<ContainerAllocator>::CONSTRAINT_VECTOR_ALIGNMENT_WITH_TOLERANCE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AllowableOrientationOneOfConstraint_<ContainerAllocator>::CONSTRAINT_SQUEEZE_GRASP_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION_ONE_OF_CONSTRAINT__STRUCT_HPP_
