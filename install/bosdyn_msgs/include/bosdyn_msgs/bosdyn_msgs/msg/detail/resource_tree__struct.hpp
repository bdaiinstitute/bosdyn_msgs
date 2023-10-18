// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ResourceTree.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sub_resources'
#include "bosdyn_msgs/msg/detail/serialized_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ResourceTree __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ResourceTree __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResourceTree_
{
  using Type = ResourceTree_<ContainerAllocator>;

  explicit ResourceTree_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resource = "";
    }
  }

  explicit ResourceTree_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : resource(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resource = "";
    }
  }

  // field types and members
  using _resource_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _resource_type resource;
  using _sub_resources_type =
    std::vector<bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>>>;
  _sub_resources_type sub_resources;

  // setters for named parameter idiom
  Type & set__resource(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->resource = _arg;
    return *this;
  }
  Type & set__sub_resources(
    const std::vector<bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>>> & _arg)
  {
    this->sub_resources = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ResourceTree_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ResourceTree_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ResourceTree_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ResourceTree_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ResourceTree_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ResourceTree_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ResourceTree_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ResourceTree_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ResourceTree_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ResourceTree_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ResourceTree
    std::shared_ptr<bosdyn_msgs::msg::ResourceTree_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ResourceTree
    std::shared_ptr<bosdyn_msgs::msg::ResourceTree_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResourceTree_ & other) const
  {
    if (this->resource != other.resource) {
      return false;
    }
    if (this->sub_resources != other.sub_resources) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResourceTree_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResourceTree_

// alias to use template instance with default allocator
using ResourceTree =
  bosdyn_msgs::msg::ResourceTree_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__STRUCT_HPP_
