// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CompileAutowalkResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/compile_autowalk_response_status__struct.hpp"
// Member 'root'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"
// Member 'element_identifiers'
#include "bosdyn_msgs/msg/detail/element_identifiers__struct.hpp"
// Member 'failed_elements'
#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_failed_element__struct.hpp"
// Member 'docking_node'
// Member 'loop_node'
#include "bosdyn_msgs/msg/detail/node_identifier__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CompileAutowalkResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CompileAutowalkResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CompileAutowalkResponse_
{
  using Type = CompileAutowalkResponse_<ContainerAllocator>;

  explicit CompileAutowalkResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    root(_init),
    docking_node(_init),
    loop_node(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->root_is_set = false;
      this->docking_node_is_set = false;
      this->loop_node_is_set = false;
    }
  }

  explicit CompileAutowalkResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    root(_alloc, _init),
    docking_node(_alloc, _init),
    loop_node(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->root_is_set = false;
      this->docking_node_is_set = false;
      this->loop_node_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _status_type =
    bosdyn_msgs::msg::CompileAutowalkResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _root_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _root_type root;
  using _root_is_set_type =
    bool;
  _root_is_set_type root_is_set;
  using _element_identifiers_type =
    std::vector<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>>>;
  _element_identifiers_type element_identifiers;
  using _failed_elements_type =
    std::vector<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement_<ContainerAllocator>>>;
  _failed_elements_type failed_elements;
  using _docking_node_type =
    bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator>;
  _docking_node_type docking_node;
  using _docking_node_is_set_type =
    bool;
  _docking_node_is_set_type docking_node_is_set;
  using _loop_node_type =
    bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator>;
  _loop_node_type loop_node;
  using _loop_node_is_set_type =
    bool;
  _loop_node_is_set_type loop_node_is_set;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::CompileAutowalkResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__root(
    const bosdyn_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->root = _arg;
    return *this;
  }
  Type & set__root_is_set(
    const bool & _arg)
  {
    this->root_is_set = _arg;
    return *this;
  }
  Type & set__element_identifiers(
    const std::vector<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>>> & _arg)
  {
    this->element_identifiers = _arg;
    return *this;
  }
  Type & set__failed_elements(
    const std::vector<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement_<ContainerAllocator>>> & _arg)
  {
    this->failed_elements = _arg;
    return *this;
  }
  Type & set__docking_node(
    const bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator> & _arg)
  {
    this->docking_node = _arg;
    return *this;
  }
  Type & set__docking_node_is_set(
    const bool & _arg)
  {
    this->docking_node_is_set = _arg;
    return *this;
  }
  Type & set__loop_node(
    const bosdyn_msgs::msg::NodeIdentifier_<ContainerAllocator> & _arg)
  {
    this->loop_node = _arg;
    return *this;
  }
  Type & set__loop_node_is_set(
    const bool & _arg)
  {
    this->loop_node_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CompileAutowalkResponse
    std::shared_ptr<bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CompileAutowalkResponse
    std::shared_ptr<bosdyn_msgs::msg::CompileAutowalkResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompileAutowalkResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->root != other.root) {
      return false;
    }
    if (this->root_is_set != other.root_is_set) {
      return false;
    }
    if (this->element_identifiers != other.element_identifiers) {
      return false;
    }
    if (this->failed_elements != other.failed_elements) {
      return false;
    }
    if (this->docking_node != other.docking_node) {
      return false;
    }
    if (this->docking_node_is_set != other.docking_node_is_set) {
      return false;
    }
    if (this->loop_node != other.loop_node) {
      return false;
    }
    if (this->loop_node_is_set != other.loop_node_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompileAutowalkResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompileAutowalkResponse_

// alias to use template instance with default allocator
using CompileAutowalkResponse =
  bosdyn_msgs::msg::CompileAutowalkResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_RESPONSE__STRUCT_HPP_
