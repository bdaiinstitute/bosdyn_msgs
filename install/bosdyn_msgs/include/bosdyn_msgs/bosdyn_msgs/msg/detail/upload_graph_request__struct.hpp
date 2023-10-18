// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UploadGraphRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_REQUEST__STRUCT_HPP_

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
// Member 'graph'
#include "bosdyn_msgs/msg/detail/graph__struct.hpp"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UploadGraphRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UploadGraphRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UploadGraphRequest_
{
  using Type = UploadGraphRequest_<ContainerAllocator>;

  explicit UploadGraphRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    graph(_init),
    lease(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->graph_is_set = false;
      this->lease_is_set = false;
      this->generate_new_anchoring = false;
      this->treat_validation_warnings_as_errors = false;
    }
  }

  explicit UploadGraphRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    graph(_alloc, _init),
    lease(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->graph_is_set = false;
      this->lease_is_set = false;
      this->generate_new_anchoring = false;
      this->treat_validation_warnings_as_errors = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _graph_type =
    bosdyn_msgs::msg::Graph_<ContainerAllocator>;
  _graph_type graph;
  using _graph_is_set_type =
    bool;
  _graph_is_set_type graph_is_set;
  using _lease_type =
    bosdyn_msgs::msg::Lease_<ContainerAllocator>;
  _lease_type lease;
  using _lease_is_set_type =
    bool;
  _lease_is_set_type lease_is_set;
  using _generate_new_anchoring_type =
    bool;
  _generate_new_anchoring_type generate_new_anchoring;
  using _treat_validation_warnings_as_errors_type =
    bool;
  _treat_validation_warnings_as_errors_type treat_validation_warnings_as_errors;

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
  Type & set__graph(
    const bosdyn_msgs::msg::Graph_<ContainerAllocator> & _arg)
  {
    this->graph = _arg;
    return *this;
  }
  Type & set__graph_is_set(
    const bool & _arg)
  {
    this->graph_is_set = _arg;
    return *this;
  }
  Type & set__lease(
    const bosdyn_msgs::msg::Lease_<ContainerAllocator> & _arg)
  {
    this->lease = _arg;
    return *this;
  }
  Type & set__lease_is_set(
    const bool & _arg)
  {
    this->lease_is_set = _arg;
    return *this;
  }
  Type & set__generate_new_anchoring(
    const bool & _arg)
  {
    this->generate_new_anchoring = _arg;
    return *this;
  }
  Type & set__treat_validation_warnings_as_errors(
    const bool & _arg)
  {
    this->treat_validation_warnings_as_errors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UploadGraphRequest
    std::shared_ptr<bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UploadGraphRequest
    std::shared_ptr<bosdyn_msgs::msg::UploadGraphRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UploadGraphRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->graph != other.graph) {
      return false;
    }
    if (this->graph_is_set != other.graph_is_set) {
      return false;
    }
    if (this->lease != other.lease) {
      return false;
    }
    if (this->lease_is_set != other.lease_is_set) {
      return false;
    }
    if (this->generate_new_anchoring != other.generate_new_anchoring) {
      return false;
    }
    if (this->treat_validation_warnings_as_errors != other.treat_validation_warnings_as_errors) {
      return false;
    }
    return true;
  }
  bool operator!=(const UploadGraphRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UploadGraphRequest_

// alias to use template instance with default allocator
using UploadGraphRequest =
  bosdyn_msgs::msg::UploadGraphRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_REQUEST__STRUCT_HPP_
