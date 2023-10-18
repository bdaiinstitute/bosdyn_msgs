// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ListWorldObjectRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_REQUEST__STRUCT_HPP_

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
// Member 'object_type'
#include "bosdyn_msgs/msg/detail/world_object_type__struct.hpp"
// Member 'timestamp_filter'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ListWorldObjectRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ListWorldObjectRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ListWorldObjectRequest_
{
  using Type = ListWorldObjectRequest_<ContainerAllocator>;

  explicit ListWorldObjectRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    timestamp_filter(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->timestamp_filter_is_set = false;
    }
  }

  explicit ListWorldObjectRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    timestamp_filter(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->timestamp_filter_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _object_type_type =
    std::vector<bosdyn_msgs::msg::WorldObjectType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObjectType_<ContainerAllocator>>>;
  _object_type_type object_type;
  using _timestamp_filter_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_filter_type timestamp_filter;
  using _timestamp_filter_is_set_type =
    bool;
  _timestamp_filter_is_set_type timestamp_filter_is_set;

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
  Type & set__object_type(
    const std::vector<bosdyn_msgs::msg::WorldObjectType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObjectType_<ContainerAllocator>>> & _arg)
  {
    this->object_type = _arg;
    return *this;
  }
  Type & set__timestamp_filter(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp_filter = _arg;
    return *this;
  }
  Type & set__timestamp_filter_is_set(
    const bool & _arg)
  {
    this->timestamp_filter_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ListWorldObjectRequest
    std::shared_ptr<bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ListWorldObjectRequest
    std::shared_ptr<bosdyn_msgs::msg::ListWorldObjectRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListWorldObjectRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->object_type != other.object_type) {
      return false;
    }
    if (this->timestamp_filter != other.timestamp_filter) {
      return false;
    }
    if (this->timestamp_filter_is_set != other.timestamp_filter_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListWorldObjectRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListWorldObjectRequest_

// alias to use template instance with default allocator
using ListWorldObjectRequest =
  bosdyn_msgs::msg::ListWorldObjectRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_REQUEST__STRUCT_HPP_
