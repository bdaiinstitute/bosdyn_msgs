// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UploadWaypointSnapshotResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_RESPONSE__STRUCT_HPP_

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
// Member 'lease_use_result'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/upload_waypoint_snapshot_response_status__struct.hpp"
// Member 'sensor_status'
#include "bosdyn_msgs/msg/detail/sensor_compatibility_status__struct.hpp"
// Member 'map_stats'
#include "bosdyn_msgs/msg/detail/map_stats__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UploadWaypointSnapshotResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UploadWaypointSnapshotResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UploadWaypointSnapshotResponse_
{
  using Type = UploadWaypointSnapshotResponse_<ContainerAllocator>;

  explicit UploadWaypointSnapshotResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    lease_use_result(_init),
    status(_init),
    sensor_status(_init),
    map_stats(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->lease_use_result_is_set = false;
      this->sensor_status_is_set = false;
      this->map_stats_is_set = false;
    }
  }

  explicit UploadWaypointSnapshotResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    lease_use_result(_alloc, _init),
    status(_alloc, _init),
    sensor_status(_alloc, _init),
    map_stats(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->lease_use_result_is_set = false;
      this->sensor_status_is_set = false;
      this->map_stats_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _lease_use_result_type =
    bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>;
  _lease_use_result_type lease_use_result;
  using _lease_use_result_is_set_type =
    bool;
  _lease_use_result_is_set_type lease_use_result_is_set;
  using _status_type =
    bosdyn_msgs::msg::UploadWaypointSnapshotResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _sensor_status_type =
    bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator>;
  _sensor_status_type sensor_status;
  using _sensor_status_is_set_type =
    bool;
  _sensor_status_is_set_type sensor_status_is_set;
  using _map_stats_type =
    bosdyn_msgs::msg::MapStats_<ContainerAllocator>;
  _map_stats_type map_stats;
  using _map_stats_is_set_type =
    bool;
  _map_stats_is_set_type map_stats_is_set;

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
  Type & set__lease_use_result(
    const bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator> & _arg)
  {
    this->lease_use_result = _arg;
    return *this;
  }
  Type & set__lease_use_result_is_set(
    const bool & _arg)
  {
    this->lease_use_result_is_set = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::UploadWaypointSnapshotResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__sensor_status(
    const bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator> & _arg)
  {
    this->sensor_status = _arg;
    return *this;
  }
  Type & set__sensor_status_is_set(
    const bool & _arg)
  {
    this->sensor_status_is_set = _arg;
    return *this;
  }
  Type & set__map_stats(
    const bosdyn_msgs::msg::MapStats_<ContainerAllocator> & _arg)
  {
    this->map_stats = _arg;
    return *this;
  }
  Type & set__map_stats_is_set(
    const bool & _arg)
  {
    this->map_stats_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UploadWaypointSnapshotResponse
    std::shared_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UploadWaypointSnapshotResponse
    std::shared_ptr<bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UploadWaypointSnapshotResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->lease_use_result != other.lease_use_result) {
      return false;
    }
    if (this->lease_use_result_is_set != other.lease_use_result_is_set) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->sensor_status != other.sensor_status) {
      return false;
    }
    if (this->sensor_status_is_set != other.sensor_status_is_set) {
      return false;
    }
    if (this->map_stats != other.map_stats) {
      return false;
    }
    if (this->map_stats_is_set != other.map_stats_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const UploadWaypointSnapshotResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UploadWaypointSnapshotResponse_

// alias to use template instance with default allocator
using UploadWaypointSnapshotResponse =
  bosdyn_msgs::msg::UploadWaypointSnapshotResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_WAYPOINT_SNAPSHOT_RESPONSE__STRUCT_HPP_
