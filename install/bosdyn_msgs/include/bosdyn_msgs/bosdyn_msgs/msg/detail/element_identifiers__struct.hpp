// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ElementIdentifiers.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'root_id'
// Member 'action_id'
#include "bosdyn_msgs/msg/detail/node_identifier__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ElementIdentifiers __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ElementIdentifiers __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ElementIdentifiers_
{
  using Type = ElementIdentifiers_<ContainerAllocator>;

  explicit ElementIdentifiers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : root_id(_init),
    action_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->root_id_is_set = false;
      this->action_id_is_set = false;
    }
  }

  explicit ElementIdentifiers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : root_id(_alloc, _init),
    action_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->root_id_is_set = false;
      this->action_id_is_set = false;
    }
  }

  // field types and members
  using _root_id_type =
    bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator>;
  _root_id_type root_id;
  using _root_id_is_set_type =
    bool;
  _root_id_is_set_type root_id_is_set;
  using _action_id_type =
    bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator>;
  _action_id_type action_id;
  using _action_id_is_set_type =
    bool;
  _action_id_is_set_type action_id_is_set;

  // setters for named parameter idiom
  Type & set__root_id(
    const bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator> & _arg)
  {
    this->root_id = _arg;
    return *this;
  }
  Type & set__root_id_is_set(
    const bool & _arg)
  {
    this->root_id_is_set = _arg;
    return *this;
  }
  Type & set__action_id(
    const bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator> & _arg)
  {
    this->action_id = _arg;
    return *this;
  }
  Type & set__action_id_is_set(
    const bool & _arg)
  {
    this->action_id_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ElementIdentifiers
    std::shared_ptr<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ElementIdentifiers
    std::shared_ptr<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ElementIdentifiers_ & other) const
  {
    if (this->root_id != other.root_id) {
      return false;
    }
    if (this->root_id_is_set != other.root_id_is_set) {
      return false;
    }
    if (this->action_id != other.action_id) {
      return false;
    }
    if (this->action_id_is_set != other.action_id_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ElementIdentifiers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ElementIdentifiers_

// alias to use template instance with default allocator
using ElementIdentifiers =
  bosdyn_msgs::msg::ElementIdentifiers_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__STRUCT_HPP_
