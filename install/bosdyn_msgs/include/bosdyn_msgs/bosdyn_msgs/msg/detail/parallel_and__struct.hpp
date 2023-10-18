// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ParallelAnd.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARALLEL_AND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PARALLEL_AND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'children'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ParallelAnd __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ParallelAnd __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParallelAnd_
{
  using Type = ParallelAnd_<ContainerAllocator>;

  explicit ParallelAnd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finish_every_node = false;
    }
  }

  explicit ParallelAnd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finish_every_node = false;
    }
  }

  // field types and members
  using _children_type =
    std::vector<bosdyn_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Node_<ContainerAllocator>>>;
  _children_type children;
  using _finish_every_node_type =
    bool;
  _finish_every_node_type finish_every_node;

  // setters for named parameter idiom
  Type & set__children(
    const std::vector<bosdyn_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Node_<ContainerAllocator>>> & _arg)
  {
    this->children = _arg;
    return *this;
  }
  Type & set__finish_every_node(
    const bool & _arg)
  {
    this->finish_every_node = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ParallelAnd
    std::shared_ptr<bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ParallelAnd
    std::shared_ptr<bosdyn_msgs::msg::ParallelAnd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParallelAnd_ & other) const
  {
    if (this->children != other.children) {
      return false;
    }
    if (this->finish_every_node != other.finish_every_node) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParallelAnd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParallelAnd_

// alias to use template instance with default allocator
using ParallelAnd =
  bosdyn_msgs::msg::ParallelAnd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARALLEL_AND__STRUCT_HPP_
