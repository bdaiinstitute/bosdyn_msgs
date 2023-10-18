// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ListLeasesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_RESPONSE__STRUCT_HPP_

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
// Member 'resources'
#include "bosdyn_msgs/msg/detail/lease_resource__struct.hpp"
// Member 'resource_tree'
#include "bosdyn_msgs/msg/detail/resource_tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ListLeasesResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ListLeasesResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ListLeasesResponse_
{
  using Type = ListLeasesResponse_<ContainerAllocator>;

  explicit ListLeasesResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    resource_tree(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->resource_tree_is_set = false;
    }
  }

  explicit ListLeasesResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    resource_tree(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->resource_tree_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _resources_type =
    std::vector<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator>>>;
  _resources_type resources;
  using _resource_tree_type =
    bosdyn_msgs::msg::ResourceTree_<ContainerAllocator>;
  _resource_tree_type resource_tree;
  using _resource_tree_is_set_type =
    bool;
  _resource_tree_is_set_type resource_tree_is_set;

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
  Type & set__resources(
    const std::vector<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LeaseResource_<ContainerAllocator>>> & _arg)
  {
    this->resources = _arg;
    return *this;
  }
  Type & set__resource_tree(
    const bosdyn_msgs::msg::ResourceTree_<ContainerAllocator> & _arg)
  {
    this->resource_tree = _arg;
    return *this;
  }
  Type & set__resource_tree_is_set(
    const bool & _arg)
  {
    this->resource_tree_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ListLeasesResponse
    std::shared_ptr<bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ListLeasesResponse
    std::shared_ptr<bosdyn_msgs::msg::ListLeasesResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListLeasesResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->resources != other.resources) {
      return false;
    }
    if (this->resource_tree != other.resource_tree) {
      return false;
    }
    if (this->resource_tree_is_set != other.resource_tree_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListLeasesResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListLeasesResponse_

// alias to use template instance with default allocator
using ListLeasesResponse =
  bosdyn_msgs::msg::ListLeasesResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_RESPONSE__STRUCT_HPP_
