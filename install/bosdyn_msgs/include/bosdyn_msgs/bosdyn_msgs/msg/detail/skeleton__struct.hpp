// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Skeleton.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SKELETON__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SKELETON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'links'
#include "bosdyn_msgs/msg/detail/skeleton_link__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Skeleton __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Skeleton __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Skeleton_
{
  using Type = Skeleton_<ContainerAllocator>;

  explicit Skeleton_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->urdf = "";
    }
  }

  explicit Skeleton_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : urdf(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->urdf = "";
    }
  }

  // field types and members
  using _links_type =
    std::vector<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator>>>;
  _links_type links;
  using _urdf_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _urdf_type urdf;

  // setters for named parameter idiom
  Type & set__links(
    const std::vector<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator>>> & _arg)
  {
    this->links = _arg;
    return *this;
  }
  Type & set__urdf(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->urdf = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Skeleton_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Skeleton_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Skeleton_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Skeleton_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Skeleton_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Skeleton_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Skeleton_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Skeleton_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Skeleton_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Skeleton_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Skeleton
    std::shared_ptr<bosdyn_msgs::msg::Skeleton_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Skeleton
    std::shared_ptr<bosdyn_msgs::msg::Skeleton_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Skeleton_ & other) const
  {
    if (this->links != other.links) {
      return false;
    }
    if (this->urdf != other.urdf) {
      return false;
    }
    return true;
  }
  bool operator!=(const Skeleton_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Skeleton_

// alias to use template instance with default allocator
using Skeleton =
  bosdyn_msgs::msg::Skeleton_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SKELETON__STRUCT_HPP_
