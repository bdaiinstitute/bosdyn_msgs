// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LoadAutowalkResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_RESPONSE__STRUCT_HPP_

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
#include "bosdyn_msgs/msg/detail/load_autowalk_response_status__struct.hpp"
// Member 'lease_use_results'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.hpp"
// Member 'failed_nodes'
#include "bosdyn_msgs/msg/detail/failed_node__struct.hpp"
// Member 'element_identifiers'
#include "bosdyn_msgs/msg/detail/element_identifiers__struct.hpp"
// Member 'failed_elements'
#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_failed_element__struct.hpp"
// Member 'docking_node'
// Member 'loop_node'
#include "bosdyn_msgs/msg/detail/node_identifier__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LoadAutowalkResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LoadAutowalkResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoadAutowalkResponse_
{
  using Type = LoadAutowalkResponse_<ContainerAllocator>;

  explicit LoadAutowalkResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    docking_node(_init),
    loop_node(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->mission_id = 0ll;
      this->docking_node_is_set = false;
      this->loop_node_is_set = false;
    }
  }

  explicit LoadAutowalkResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    docking_node(_alloc, _init),
    loop_node(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->mission_id = 0ll;
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
    bosdyn_msgs::msg::LoadAutowalkResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _lease_use_results_type =
    std::vector<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>>;
  _lease_use_results_type lease_use_results;
  using _failed_nodes_type =
    std::vector<bosdyn_msgs::msg::FailedNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::FailedNode_<ContainerAllocator>>>;
  _failed_nodes_type failed_nodes;
  using _element_identifiers_type =
    std::vector<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ElementIdentifiers_<ContainerAllocator>>>;
  _element_identifiers_type element_identifiers;
  using _failed_elements_type =
    std::vector<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement_<ContainerAllocator>>>;
  _failed_elements_type failed_elements;
  using _mission_id_type =
    int64_t;
  _mission_id_type mission_id;
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
    const bosdyn_msgs::msg::LoadAutowalkResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__lease_use_results(
    const std::vector<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>> & _arg)
  {
    this->lease_use_results = _arg;
    return *this;
  }
  Type & set__failed_nodes(
    const std::vector<bosdyn_msgs::msg::FailedNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::FailedNode_<ContainerAllocator>>> & _arg)
  {
    this->failed_nodes = _arg;
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
  Type & set__mission_id(
    const int64_t & _arg)
  {
    this->mission_id = _arg;
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
    bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LoadAutowalkResponse
    std::shared_ptr<bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LoadAutowalkResponse
    std::shared_ptr<bosdyn_msgs::msg::LoadAutowalkResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadAutowalkResponse_ & other) const
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
    if (this->lease_use_results != other.lease_use_results) {
      return false;
    }
    if (this->failed_nodes != other.failed_nodes) {
      return false;
    }
    if (this->element_identifiers != other.element_identifiers) {
      return false;
    }
    if (this->failed_elements != other.failed_elements) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
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
  bool operator!=(const LoadAutowalkResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadAutowalkResponse_

// alias to use template instance with default allocator
using LoadAutowalkResponse =
  bosdyn_msgs::msg::LoadAutowalkResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_RESPONSE__STRUCT_HPP_
