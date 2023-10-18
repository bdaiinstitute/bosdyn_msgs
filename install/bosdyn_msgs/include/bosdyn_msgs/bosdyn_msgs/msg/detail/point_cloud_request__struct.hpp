// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PointCloudRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PointCloudRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PointCloudRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloudRequest_
{
  using Type = PointCloudRequest_<ContainerAllocator>;

  explicit PointCloudRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_cloud_source_name = "";
    }
  }

  explicit PointCloudRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point_cloud_source_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_cloud_source_name = "";
    }
  }

  // field types and members
  using _point_cloud_source_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _point_cloud_source_name_type point_cloud_source_name;

  // setters for named parameter idiom
  Type & set__point_cloud_source_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->point_cloud_source_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PointCloudRequest
    std::shared_ptr<bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PointCloudRequest
    std::shared_ptr<bosdyn_msgs::msg::PointCloudRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloudRequest_ & other) const
  {
    if (this->point_cloud_source_name != other.point_cloud_source_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointCloudRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloudRequest_

// alias to use template instance with default allocator
using PointCloudRequest =
  bosdyn_msgs::msg::PointCloudRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_REQUEST__STRUCT_HPP_
