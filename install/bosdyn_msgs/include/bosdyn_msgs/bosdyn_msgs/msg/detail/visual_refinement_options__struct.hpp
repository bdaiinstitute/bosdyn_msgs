// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/VisualRefinementOptions.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VISUAL_REFINEMENT_OPTIONS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VISUAL_REFINEMENT_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__VisualRefinementOptions __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__VisualRefinementOptions __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisualRefinementOptions_
{
  using Type = VisualRefinementOptions_<ContainerAllocator>;

  explicit VisualRefinementOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->verify_refinement_quality = false;
    }
  }

  explicit VisualRefinementOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->verify_refinement_quality = false;
    }
  }

  // field types and members
  using _verify_refinement_quality_type =
    bool;
  _verify_refinement_quality_type verify_refinement_quality;

  // setters for named parameter idiom
  Type & set__verify_refinement_quality(
    const bool & _arg)
  {
    this->verify_refinement_quality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__VisualRefinementOptions
    std::shared_ptr<bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__VisualRefinementOptions
    std::shared_ptr<bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisualRefinementOptions_ & other) const
  {
    if (this->verify_refinement_quality != other.verify_refinement_quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisualRefinementOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisualRefinementOptions_

// alias to use template instance with default allocator
using VisualRefinementOptions =
  bosdyn_msgs::msg::VisualRefinementOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VISUAL_REFINEMENT_OPTIONS__STRUCT_HPP_
