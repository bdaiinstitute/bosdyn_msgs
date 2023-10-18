// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AnchorHintUncertaintyOneOfUncertainty.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY_ONE_OF_UNCERTAINTY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY_ONE_OF_UNCERTAINTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'se3_covariance'
#include "bosdyn_msgs/msg/detail/se3_covariance__struct.hpp"
// Member 'confidence_bounds'
#include "bosdyn_msgs/msg/detail/pose_bounds__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AnchorHintUncertaintyOneOfUncertainty __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AnchorHintUncertaintyOneOfUncertainty __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AnchorHintUncertaintyOneOfUncertainty_
{
  using Type = AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>;

  explicit AnchorHintUncertaintyOneOfUncertainty_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : se3_covariance(_init),
    confidence_bounds(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uncertainty_choice = 0;
    }
  }

  explicit AnchorHintUncertaintyOneOfUncertainty_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : se3_covariance(_alloc, _init),
    confidence_bounds(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uncertainty_choice = 0;
    }
  }

  // field types and members
  using _se3_covariance_type =
    bosdyn_msgs::msg::SE3Covariance_<ContainerAllocator>;
  _se3_covariance_type se3_covariance;
  using _confidence_bounds_type =
    bosdyn_msgs::msg::PoseBounds_<ContainerAllocator>;
  _confidence_bounds_type confidence_bounds;
  using _uncertainty_choice_type =
    int8_t;
  _uncertainty_choice_type uncertainty_choice;

  // setters for named parameter idiom
  Type & set__se3_covariance(
    const bosdyn_msgs::msg::SE3Covariance_<ContainerAllocator> & _arg)
  {
    this->se3_covariance = _arg;
    return *this;
  }
  Type & set__confidence_bounds(
    const bosdyn_msgs::msg::PoseBounds_<ContainerAllocator> & _arg)
  {
    this->confidence_bounds = _arg;
    return *this;
  }
  Type & set__uncertainty_choice(
    const int8_t & _arg)
  {
    this->uncertainty_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t UNCERTAINTY_NOT_SET =
    0;
  static constexpr int8_t UNCERTAINTY_SE3_COVARIANCE_SET =
    1;
  static constexpr int8_t UNCERTAINTY_CONFIDENCE_BOUNDS_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AnchorHintUncertaintyOneOfUncertainty
    std::shared_ptr<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AnchorHintUncertaintyOneOfUncertainty
    std::shared_ptr<bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnchorHintUncertaintyOneOfUncertainty_ & other) const
  {
    if (this->se3_covariance != other.se3_covariance) {
      return false;
    }
    if (this->confidence_bounds != other.confidence_bounds) {
      return false;
    }
    if (this->uncertainty_choice != other.uncertainty_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnchorHintUncertaintyOneOfUncertainty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnchorHintUncertaintyOneOfUncertainty_

// alias to use template instance with default allocator
using AnchorHintUncertaintyOneOfUncertainty =
  bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>::UNCERTAINTY_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>::UNCERTAINTY_SE3_COVARIANCE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>::UNCERTAINTY_CONFIDENCE_BOUNDS_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY_ONE_OF_UNCERTAINTY__STRUCT_HPP_
