// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NodeOneOfType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NODE_ONE_OF_TYPE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NODE_ONE_OF_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NodeOneOfType __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NodeOneOfType __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeOneOfType_
{
  using Type = NodeOneOfType_<ContainerAllocator>;

  explicit NodeOneOfType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_reference = "";
      this->type_choice = 0;
    }
  }

  explicit NodeOneOfType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_reference(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_reference = "";
      this->type_choice = 0;
    }
  }

  // field types and members
  using _node_reference_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_reference_type node_reference;
  using _type_choice_type =
    int8_t;
  _type_choice_type type_choice;

  // setters for named parameter idiom
  Type & set__node_reference(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_reference = _arg;
    return *this;
  }
  Type & set__type_choice(
    const int8_t & _arg)
  {
    this->type_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TYPE_NOT_SET =
    0;
  static constexpr int8_t TYPE_IMPL_SET =
    1;
  static constexpr int8_t TYPE_NODE_REFERENCE_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NodeOneOfType
    std::shared_ptr<bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NodeOneOfType
    std::shared_ptr<bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeOneOfType_ & other) const
  {
    if (this->node_reference != other.node_reference) {
      return false;
    }
    if (this->type_choice != other.type_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeOneOfType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeOneOfType_

// alias to use template instance with default allocator
using NodeOneOfType =
  bosdyn_msgs::msg::NodeOneOfType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NodeOneOfType_<ContainerAllocator>::TYPE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NodeOneOfType_<ContainerAllocator>::TYPE_IMPL_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NodeOneOfType_<ContainerAllocator>::TYPE_NODE_REFERENCE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NODE_ONE_OF_TYPE__STRUCT_HPP_
