// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RemotePointCloudStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REMOTE_POINT_CLOUD_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REMOTE_POINT_CLOUD_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RemotePointCloudStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RemotePointCloudStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RemotePointCloudStatus_
{
  using Type = RemotePointCloudStatus_<ContainerAllocator>;

  explicit RemotePointCloudStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->exists_in_directory = false;
      this->has_data = false;
    }
  }

  explicit RemotePointCloudStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->exists_in_directory = false;
      this->has_data = false;
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _exists_in_directory_type =
    bool;
  _exists_in_directory_type exists_in_directory;
  using _has_data_type =
    bool;
  _has_data_type has_data;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__exists_in_directory(
    const bool & _arg)
  {
    this->exists_in_directory = _arg;
    return *this;
  }
  Type & set__has_data(
    const bool & _arg)
  {
    this->has_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RemotePointCloudStatus
    std::shared_ptr<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RemotePointCloudStatus
    std::shared_ptr<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemotePointCloudStatus_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->exists_in_directory != other.exists_in_directory) {
      return false;
    }
    if (this->has_data != other.has_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemotePointCloudStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemotePointCloudStatus_

// alias to use template instance with default allocator
using RemotePointCloudStatus =
  bosdyn_msgs::msg::RemotePointCloudStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REMOTE_POINT_CLOUD_STATUS__STRUCT_HPP_
