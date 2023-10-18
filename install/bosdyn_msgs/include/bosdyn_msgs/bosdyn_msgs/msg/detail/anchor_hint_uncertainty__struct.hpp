// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AnchorHintUncertainty.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'uncertainty'
#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty_one_of_uncertainty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AnchorHintUncertainty __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AnchorHintUncertainty __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AnchorHintUncertainty_
{
  using Type = AnchorHintUncertainty_<ContainerAllocator>;

  explicit AnchorHintUncertainty_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uncertainty(_init)
  {
    (void)_init;
  }

  explicit AnchorHintUncertainty_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uncertainty(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _uncertainty_type =
    bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator>;
  _uncertainty_type uncertainty;

  // setters for named parameter idiom
  Type & set__uncertainty(
    const bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty_<ContainerAllocator> & _arg)
  {
    this->uncertainty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AnchorHintUncertainty
    std::shared_ptr<bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AnchorHintUncertainty
    std::shared_ptr<bosdyn_msgs::msg::AnchorHintUncertainty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnchorHintUncertainty_ & other) const
  {
    if (this->uncertainty != other.uncertainty) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnchorHintUncertainty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnchorHintUncertainty_

// alias to use template instance with default allocator
using AnchorHintUncertainty =
  bosdyn_msgs::msg::AnchorHintUncertainty_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY__STRUCT_HPP_
