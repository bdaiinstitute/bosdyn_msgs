// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UpdatePayloadVersionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_VERSION_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_VERSION_REQUEST__STRUCT_HPP_

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
// Member 'payload_credentials'
#include "bosdyn_msgs/msg/detail/payload_credentials__struct.hpp"
// Member 'updated_version'
#include "bosdyn_msgs/msg/detail/software_version__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UpdatePayloadVersionRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UpdatePayloadVersionRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpdatePayloadVersionRequest_
{
  using Type = UpdatePayloadVersionRequest_<ContainerAllocator>;

  explicit UpdatePayloadVersionRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    payload_credentials(_init),
    updated_version(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->payload_credentials_is_set = false;
      this->updated_version_is_set = false;
    }
  }

  explicit UpdatePayloadVersionRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    payload_credentials(_alloc, _init),
    updated_version(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->payload_credentials_is_set = false;
      this->updated_version_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _payload_credentials_type =
    bosdyn_msgs::msg::PayloadCredentials_<ContainerAllocator>;
  _payload_credentials_type payload_credentials;
  using _payload_credentials_is_set_type =
    bool;
  _payload_credentials_is_set_type payload_credentials_is_set;
  using _updated_version_type =
    bosdyn_msgs::msg::SoftwareVersion_<ContainerAllocator>;
  _updated_version_type updated_version;
  using _updated_version_is_set_type =
    bool;
  _updated_version_is_set_type updated_version_is_set;

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
  Type & set__payload_credentials(
    const bosdyn_msgs::msg::PayloadCredentials_<ContainerAllocator> & _arg)
  {
    this->payload_credentials = _arg;
    return *this;
  }
  Type & set__payload_credentials_is_set(
    const bool & _arg)
  {
    this->payload_credentials_is_set = _arg;
    return *this;
  }
  Type & set__updated_version(
    const bosdyn_msgs::msg::SoftwareVersion_<ContainerAllocator> & _arg)
  {
    this->updated_version = _arg;
    return *this;
  }
  Type & set__updated_version_is_set(
    const bool & _arg)
  {
    this->updated_version_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UpdatePayloadVersionRequest
    std::shared_ptr<bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UpdatePayloadVersionRequest
    std::shared_ptr<bosdyn_msgs::msg::UpdatePayloadVersionRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdatePayloadVersionRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->payload_credentials != other.payload_credentials) {
      return false;
    }
    if (this->payload_credentials_is_set != other.payload_credentials_is_set) {
      return false;
    }
    if (this->updated_version != other.updated_version) {
      return false;
    }
    if (this->updated_version_is_set != other.updated_version_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdatePayloadVersionRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdatePayloadVersionRequest_

// alias to use template instance with default allocator
using UpdatePayloadVersionRequest =
  bosdyn_msgs::msg::UpdatePayloadVersionRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_VERSION_REQUEST__STRUCT_HPP_
