// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NodeIdentifier.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NODE_IDENTIFIER__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NODE_IDENTIFIER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NodeIdentifier __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NodeIdentifier __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeIdentifier_
{
  using Type = NodeIdentifier_<ContainerAllocator>;

  explicit NodeIdentifier_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ll;
      this->user_data_id = "";
    }
  }

  explicit NodeIdentifier_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user_data_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ll;
      this->user_data_id = "";
    }
  }

  // field types and members
  using _node_id_type =
    int64_t;
  _node_id_type node_id;
  using _user_data_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_data_id_type user_data_id;

  // setters for named parameter idiom
  Type & set__node_id(
    const int64_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__user_data_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_data_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NodeIdentifier
    std::shared_ptr<bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NodeIdentifier
    std::shared_ptr<bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeIdentifier_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->user_data_id != other.user_data_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeIdentifier_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeIdentifier_

// alias to use template instance with default allocator
using NodeIdentifier =
  bosdyn_msgs::msg::NodeIdentifier_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NODE_IDENTIFIER__STRUCT_HPP_
