// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UploadWaypointSnapshotRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_REQUEST__STRUCT_HPP_

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
// Member 'chunk'
#include "bosdyn_msgs/msg/detail/data_chunk__struct.hpp"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UploadWaypointSnapshotRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UploadWaypointSnapshotRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UploadWaypointSnapshotRequest_
{
  using Type = UploadWaypointSnapshotRequest_<ContainerAllocator>;

  explicit UploadWaypointSnapshotRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    chunk(_init),
    lease(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->chunk_is_set = false;
      this->lease_is_set = false;
    }
  }

  explicit UploadWaypointSnapshotRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    chunk(_alloc, _init),
    lease(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->chunk_is_set = false;
      this->lease_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _chunk_type =
    bosdyn_msgs::msg::DataChunk_<ContainerAllocator>;
  _chunk_type chunk;
  using _chunk_is_set_type =
    bool;
  _chunk_is_set_type chunk_is_set;
  using _lease_type =
    bosdyn_msgs::msg::Lease_<ContainerAllocator>;
  _lease_type lease;
  using _lease_is_set_type =
    bool;
  _lease_is_set_type lease_is_set;

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
  Type & set__chunk(
    const bosdyn_msgs::msg::DataChunk_<ContainerAllocator> & _arg)
  {
    this->chunk = _arg;
    return *this;
  }
  Type & set__chunk_is_set(
    const bool & _arg)
  {
    this->chunk_is_set = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UploadWaypointSnapshotRequest
    std::shared_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UploadWaypointSnapshotRequest
    std::shared_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UploadWaypointSnapshotRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->chunk != other.chunk) {
      return false;
    }
    if (this->chunk_is_set != other.chunk_is_set) {
      return false;
    }
    if (this->lease != other.lease) {
      return false;
    }
    if (this->lease_is_set != other.lease_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const UploadWaypointSnapshotRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UploadWaypointSnapshotRequest_

// alias to use template instance with default allocator
using UploadWaypointSnapshotRequest =
  bosdyn_msgs::msg::UploadWaypointSnapshotRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_REQUEST__STRUCT_HPP_
