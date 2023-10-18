// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'params'
#include "bosdyn_msgs/msg/detail/process_topology_request_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessTopologyRequest_
{
  using Type = ProcessTopologyRequest_<ContainerAllocator>;

  explicit ProcessTopologyRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->params_is_set = false;
      this->modify_map_on_server = false;
    }
  }

  explicit ProcessTopologyRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->params_is_set = false;
      this->modify_map_on_server = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _params_type =
    bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator>;
  _params_type params;
  using _params_is_set_type =
    bool;
  _params_is_set_type params_is_set;
  using _modify_map_on_server_type =
    bool;
  _modify_map_on_server_type modify_map_on_server;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
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
  Type & set__params(
    const bosdyn_msgs::msg::ProcessTopologyRequestParams_<ContainerAllocator> & _arg)
  {
    this->params = _arg;
    return *this;
  }
  Type & set__params_is_set(
    const bool & _arg)
  {
    this->params_is_set = _arg;
    return *this;
  }
  Type & set__modify_map_on_server(
    const bool & _arg)
  {
    this->modify_map_on_server = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequest
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessTopologyRequest
    std::shared_ptr<bosdyn_msgs::msg::ProcessTopologyRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessTopologyRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    if (this->params_is_set != other.params_is_set) {
      return false;
    }
    if (this->modify_map_on_server != other.modify_map_on_server) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessTopologyRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessTopologyRequest_

// alias to use template instance with default allocator
using ProcessTopologyRequest =
  bosdyn_msgs::msg::ProcessTopologyRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST__STRUCT_HPP_
