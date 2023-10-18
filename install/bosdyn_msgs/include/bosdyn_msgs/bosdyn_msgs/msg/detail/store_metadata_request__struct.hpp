// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StoreMetadataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_REQUEST__STRUCT_HPP_

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
// Member 'metadata'
#include "bosdyn_msgs/msg/detail/associated_metadata__struct.hpp"
// Member 'data_id'
#include "bosdyn_msgs/msg/detail/data_identifier__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StoreMetadataRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StoreMetadataRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StoreMetadataRequest_
{
  using Type = StoreMetadataRequest_<ContainerAllocator>;

  explicit StoreMetadataRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    metadata(_init),
    data_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->metadata_is_set = false;
      this->data_id_is_set = false;
    }
  }

  explicit StoreMetadataRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    metadata(_alloc, _init),
    data_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->metadata_is_set = false;
      this->data_id_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _metadata_type =
    bosdyn_msgs::msg::AssociatedMetadata_<ContainerAllocator>;
  _metadata_type metadata;
  using _metadata_is_set_type =
    bool;
  _metadata_is_set_type metadata_is_set;
  using _data_id_type =
    bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>;
  _data_id_type data_id;
  using _data_id_is_set_type =
    bool;
  _data_id_is_set_type data_id_is_set;

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
  Type & set__metadata(
    const bosdyn_msgs::msg::AssociatedMetadata_<ContainerAllocator> & _arg)
  {
    this->metadata = _arg;
    return *this;
  }
  Type & set__metadata_is_set(
    const bool & _arg)
  {
    this->metadata_is_set = _arg;
    return *this;
  }
  Type & set__data_id(
    const bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator> & _arg)
  {
    this->data_id = _arg;
    return *this;
  }
  Type & set__data_id_is_set(
    const bool & _arg)
  {
    this->data_id_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StoreMetadataRequest
    std::shared_ptr<bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StoreMetadataRequest
    std::shared_ptr<bosdyn_msgs::msg::StoreMetadataRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StoreMetadataRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->metadata != other.metadata) {
      return false;
    }
    if (this->metadata_is_set != other.metadata_is_set) {
      return false;
    }
    if (this->data_id != other.data_id) {
      return false;
    }
    if (this->data_id_is_set != other.data_id_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const StoreMetadataRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StoreMetadataRequest_

// alias to use template instance with default allocator
using StoreMetadataRequest =
  bosdyn_msgs::msg::StoreMetadataRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_REQUEST__STRUCT_HPP_
