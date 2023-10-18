// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PointCloudResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/point_cloud_response_status__struct.hpp"
// Member 'point_cloud'
#include "bosdyn_msgs/msg/detail/point_cloud__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PointCloudResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PointCloudResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloudResponse_
{
  using Type = PointCloudResponse_<ContainerAllocator>;

  explicit PointCloudResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    point_cloud(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_cloud_is_set = false;
    }
  }

  explicit PointCloudResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    point_cloud(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_cloud_is_set = false;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::PointCloudResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _point_cloud_type =
    bosdyn_msgs::msg::PointCloud_<ContainerAllocator>;
  _point_cloud_type point_cloud;
  using _point_cloud_is_set_type =
    bool;
  _point_cloud_is_set_type point_cloud_is_set;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::PointCloudResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__point_cloud(
    const bosdyn_msgs::msg::PointCloud_<ContainerAllocator> & _arg)
  {
    this->point_cloud = _arg;
    return *this;
  }
  Type & set__point_cloud_is_set(
    const bool & _arg)
  {
    this->point_cloud_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PointCloudResponse
    std::shared_ptr<bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PointCloudResponse
    std::shared_ptr<bosdyn_msgs::msg::PointCloudResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloudResponse_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->point_cloud != other.point_cloud) {
      return false;
    }
    if (this->point_cloud_is_set != other.point_cloud_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointCloudResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloudResponse_

// alias to use template instance with default allocator
using PointCloudResponse =
  bosdyn_msgs::msg::PointCloudResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_RESPONSE__STRUCT_HPP_
