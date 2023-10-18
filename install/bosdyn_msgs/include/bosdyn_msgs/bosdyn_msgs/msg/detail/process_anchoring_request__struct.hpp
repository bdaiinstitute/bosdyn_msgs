// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__STRUCT_HPP_

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
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params__struct.hpp"
// Member 'initial_hint'
#include "bosdyn_msgs/msg/detail/anchoring_hint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessAnchoringRequest_
{
  using Type = ProcessAnchoringRequest_<ContainerAllocator>;

  explicit ProcessAnchoringRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    params(_init),
    initial_hint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->params_is_set = false;
      this->initial_hint_is_set = false;
      this->modify_anchoring_on_server = false;
      this->stream_intermediate_results = false;
    }
  }

  explicit ProcessAnchoringRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    params(_alloc, _init),
    initial_hint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->params_is_set = false;
      this->initial_hint_is_set = false;
      this->modify_anchoring_on_server = false;
      this->stream_intermediate_results = false;
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
    bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator>;
  _params_type params;
  using _params_is_set_type =
    bool;
  _params_is_set_type params_is_set;
  using _initial_hint_type =
    bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator>;
  _initial_hint_type initial_hint;
  using _initial_hint_is_set_type =
    bool;
  _initial_hint_is_set_type initial_hint_is_set;
  using _modify_anchoring_on_server_type =
    bool;
  _modify_anchoring_on_server_type modify_anchoring_on_server;
  using _stream_intermediate_results_type =
    bool;
  _stream_intermediate_results_type stream_intermediate_results;

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
    const bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator> & _arg)
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
  Type & set__initial_hint(
    const bosdyn_msgs::msg::AnchoringHint_<ContainerAllocator> & _arg)
  {
    this->initial_hint = _arg;
    return *this;
  }
  Type & set__initial_hint_is_set(
    const bool & _arg)
  {
    this->initial_hint_is_set = _arg;
    return *this;
  }
  Type & set__modify_anchoring_on_server(
    const bool & _arg)
  {
    this->modify_anchoring_on_server = _arg;
    return *this;
  }
  Type & set__stream_intermediate_results(
    const bool & _arg)
  {
    this->stream_intermediate_results = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequest
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequest
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessAnchoringRequest_ & other) const
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
    if (this->initial_hint != other.initial_hint) {
      return false;
    }
    if (this->initial_hint_is_set != other.initial_hint_is_set) {
      return false;
    }
    if (this->modify_anchoring_on_server != other.modify_anchoring_on_server) {
      return false;
    }
    if (this->stream_intermediate_results != other.stream_intermediate_results) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessAnchoringRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessAnchoringRequest_

// alias to use template instance with default allocator
using ProcessAnchoringRequest =
  bosdyn_msgs::msg::ProcessAnchoringRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__STRUCT_HPP_
