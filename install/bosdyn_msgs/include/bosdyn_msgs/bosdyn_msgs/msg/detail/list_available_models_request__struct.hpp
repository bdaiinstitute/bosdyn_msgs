// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ListAvailableModelsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_REQUEST__STRUCT_HPP_

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
// Member 'server_config'
#include "bosdyn_msgs/msg/detail/network_compute_server_configuration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ListAvailableModelsRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ListAvailableModelsRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ListAvailableModelsRequest_
{
  using Type = ListAvailableModelsRequest_<ContainerAllocator>;

  explicit ListAvailableModelsRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    server_config(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->server_config_is_set = false;
    }
  }

  explicit ListAvailableModelsRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    server_config(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->server_config_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _server_config_type =
    bosdyn_msgs::msg::NetworkComputeServerConfiguration_<ContainerAllocator>;
  _server_config_type server_config;
  using _server_config_is_set_type =
    bool;
  _server_config_is_set_type server_config_is_set;

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
  Type & set__server_config(
    const bosdyn_msgs::msg::NetworkComputeServerConfiguration_<ContainerAllocator> & _arg)
  {
    this->server_config = _arg;
    return *this;
  }
  Type & set__server_config_is_set(
    const bool & _arg)
  {
    this->server_config_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ListAvailableModelsRequest
    std::shared_ptr<bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ListAvailableModelsRequest
    std::shared_ptr<bosdyn_msgs::msg::ListAvailableModelsRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListAvailableModelsRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->server_config != other.server_config) {
      return false;
    }
    if (this->server_config_is_set != other.server_config_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListAvailableModelsRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListAvailableModelsRequest_

// alias to use template instance with default allocator
using ListAvailableModelsRequest =
  bosdyn_msgs::msg::ListAvailableModelsRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_REQUEST__STRUCT_HPP_
