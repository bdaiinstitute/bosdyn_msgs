// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DownloadWaypointSnapshotRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_WAYPOINT_SNAPSHOT_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_WAYPOINT_SNAPSHOT_REQUEST__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DownloadWaypointSnapshotRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DownloadWaypointSnapshotRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DownloadWaypointSnapshotRequest_
{
  using Type = DownloadWaypointSnapshotRequest_<ContainerAllocator>;

  explicit DownloadWaypointSnapshotRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->waypoint_snapshot_id = "";
      this->download_images = false;
      this->compress_point_cloud = false;
      this->do_not_download_point_cloud = false;
    }
  }

  explicit DownloadWaypointSnapshotRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    waypoint_snapshot_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->waypoint_snapshot_id = "";
      this->download_images = false;
      this->compress_point_cloud = false;
      this->do_not_download_point_cloud = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _waypoint_snapshot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_snapshot_id_type waypoint_snapshot_id;
  using _download_images_type =
    bool;
  _download_images_type download_images;
  using _compress_point_cloud_type =
    bool;
  _compress_point_cloud_type compress_point_cloud;
  using _do_not_download_point_cloud_type =
    bool;
  _do_not_download_point_cloud_type do_not_download_point_cloud;

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
  Type & set__waypoint_snapshot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_snapshot_id = _arg;
    return *this;
  }
  Type & set__download_images(
    const bool & _arg)
  {
    this->download_images = _arg;
    return *this;
  }
  Type & set__compress_point_cloud(
    const bool & _arg)
  {
    this->compress_point_cloud = _arg;
    return *this;
  }
  Type & set__do_not_download_point_cloud(
    const bool & _arg)
  {
    this->do_not_download_point_cloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DownloadWaypointSnapshotRequest
    std::shared_ptr<bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DownloadWaypointSnapshotRequest
    std::shared_ptr<bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DownloadWaypointSnapshotRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->waypoint_snapshot_id != other.waypoint_snapshot_id) {
      return false;
    }
    if (this->download_images != other.download_images) {
      return false;
    }
    if (this->compress_point_cloud != other.compress_point_cloud) {
      return false;
    }
    if (this->do_not_download_point_cloud != other.do_not_download_point_cloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const DownloadWaypointSnapshotRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DownloadWaypointSnapshotRequest_

// alias to use template instance with default allocator
using DownloadWaypointSnapshotRequest =
  bosdyn_msgs::msg::DownloadWaypointSnapshotRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_WAYPOINT_SNAPSHOT_REQUEST__STRUCT_HPP_
