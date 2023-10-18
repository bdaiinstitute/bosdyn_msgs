// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Anchoring.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHORING__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHORING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'anchors'
#include "bosdyn_msgs/msg/detail/anchor__struct.hpp"
// Member 'objects'
#include "bosdyn_msgs/msg/detail/anchored_world_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Anchoring __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Anchoring __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Anchoring_
{
  using Type = Anchoring_<ContainerAllocator>;

  explicit Anchoring_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Anchoring_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _anchors_type =
    std::vector<bosdyn_msgs::msg::Anchor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Anchor_<ContainerAllocator>>>;
  _anchors_type anchors;
  using _objects_type =
    std::vector<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__anchors(
    const std::vector<bosdyn_msgs::msg::Anchor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Anchor_<ContainerAllocator>>> & _arg)
  {
    this->anchors = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Anchoring_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Anchoring_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Anchoring_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Anchoring_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Anchoring_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Anchoring_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Anchoring_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Anchoring_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Anchoring_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Anchoring_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Anchoring
    std::shared_ptr<bosdyn_msgs::msg::Anchoring_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Anchoring
    std::shared_ptr<bosdyn_msgs::msg::Anchoring_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Anchoring_ & other) const
  {
    if (this->anchors != other.anchors) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const Anchoring_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Anchoring_

// alias to use template instance with default allocator
using Anchoring =
  bosdyn_msgs::msg::Anchoring_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHORING__STRUCT_HPP_
