// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionRemoteGrpc.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'rpc_timeout'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'parameters'
#include "bosdyn_msgs/msg/detail/custom_param_collection__struct.hpp"
// Member 'record_time_images'
#include "bosdyn_msgs/msg/detail/image_capture_and_source__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionRemoteGrpc __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionRemoteGrpc __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionRemoteGrpc_
{
  using Type = ActionRemoteGrpc_<ContainerAllocator>;

  explicit ActionRemoteGrpc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rpc_timeout(_init),
    parameters(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->rpc_timeout_is_set = false;
      this->parameters_is_set = false;
    }
  }

  explicit ActionRemoteGrpc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    rpc_timeout(_alloc, _init),
    parameters(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->rpc_timeout_is_set = false;
      this->parameters_is_set = false;
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _rpc_timeout_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _rpc_timeout_type rpc_timeout;
  using _rpc_timeout_is_set_type =
    bool;
  _rpc_timeout_is_set_type rpc_timeout_is_set;
  using _lease_resources_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _lease_resources_type lease_resources;
  using _parameters_type =
    bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator>;
  _parameters_type parameters;
  using _parameters_is_set_type =
    bool;
  _parameters_is_set_type parameters_is_set;
  using _record_time_images_type =
    std::vector<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>>;
  _record_time_images_type record_time_images;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__rpc_timeout(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->rpc_timeout = _arg;
    return *this;
  }
  Type & set__rpc_timeout_is_set(
    const bool & _arg)
  {
    this->rpc_timeout_is_set = _arg;
    return *this;
  }
  Type & set__lease_resources(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->lease_resources = _arg;
    return *this;
  }
  Type & set__parameters(
    const bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }
  Type & set__parameters_is_set(
    const bool & _arg)
  {
    this->parameters_is_set = _arg;
    return *this;
  }
  Type & set__record_time_images(
    const std::vector<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>> & _arg)
  {
    this->record_time_images = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionRemoteGrpc
    std::shared_ptr<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionRemoteGrpc
    std::shared_ptr<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionRemoteGrpc_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->rpc_timeout != other.rpc_timeout) {
      return false;
    }
    if (this->rpc_timeout_is_set != other.rpc_timeout_is_set) {
      return false;
    }
    if (this->lease_resources != other.lease_resources) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    if (this->parameters_is_set != other.parameters_is_set) {
      return false;
    }
    if (this->record_time_images != other.record_time_images) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionRemoteGrpc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionRemoteGrpc_

// alias to use template instance with default allocator
using ActionRemoteGrpc =
  bosdyn_msgs::msg::ActionRemoteGrpc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__STRUCT_HPP_
