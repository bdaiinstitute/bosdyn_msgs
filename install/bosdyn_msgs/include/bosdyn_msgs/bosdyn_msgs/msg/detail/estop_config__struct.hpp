// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EstopConfig.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_CONFIG__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'endpoints'
#include "bosdyn_msgs/msg/detail/estop_endpoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EstopConfig __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EstopConfig __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstopConfig_
{
  using Type = EstopConfig_<ContainerAllocator>;

  explicit EstopConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = "";
    }
  }

  explicit EstopConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unique_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = "";
    }
  }

  // field types and members
  using _endpoints_type =
    std::vector<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>>>;
  _endpoints_type endpoints;
  using _unique_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unique_id_type unique_id;

  // setters for named parameter idiom
  Type & set__endpoints(
    const std::vector<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>>> & _arg)
  {
    this->endpoints = _arg;
    return *this;
  }
  Type & set__unique_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unique_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EstopConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EstopConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EstopConfig
    std::shared_ptr<bosdyn_msgs::msg::EstopConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EstopConfig
    std::shared_ptr<bosdyn_msgs::msg::EstopConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstopConfig_ & other) const
  {
    if (this->endpoints != other.endpoints) {
      return false;
    }
    if (this->unique_id != other.unique_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstopConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstopConfig_

// alias to use template instance with default allocator
using EstopConfig =
  bosdyn_msgs::msg::EstopConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_CONFIG__STRUCT_HPP_
