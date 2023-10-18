// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EstopSystemStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_SYSTEM_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_SYSTEM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'endpoints'
#include "bosdyn_msgs/msg/detail/estop_endpoint_with_status__struct.hpp"
// Member 'stop_level'
#include "bosdyn_msgs/msg/detail/estop_stop_level__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EstopSystemStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EstopSystemStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstopSystemStatus_
{
  using Type = EstopSystemStatus_<ContainerAllocator>;

  explicit EstopSystemStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stop_level(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_level_details = "";
    }
  }

  explicit EstopSystemStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stop_level(_alloc, _init),
    stop_level_details(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_level_details = "";
    }
  }

  // field types and members
  using _endpoints_type =
    std::vector<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator>>>;
  _endpoints_type endpoints;
  using _stop_level_type =
    bosdyn_msgs::msg::EstopStopLevel_<ContainerAllocator>;
  _stop_level_type stop_level;
  using _stop_level_details_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stop_level_details_type stop_level_details;

  // setters for named parameter idiom
  Type & set__endpoints(
    const std::vector<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator>>> & _arg)
  {
    this->endpoints = _arg;
    return *this;
  }
  Type & set__stop_level(
    const bosdyn_msgs::msg::EstopStopLevel_<ContainerAllocator> & _arg)
  {
    this->stop_level = _arg;
    return *this;
  }
  Type & set__stop_level_details(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stop_level_details = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EstopSystemStatus
    std::shared_ptr<bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EstopSystemStatus
    std::shared_ptr<bosdyn_msgs::msg::EstopSystemStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstopSystemStatus_ & other) const
  {
    if (this->endpoints != other.endpoints) {
      return false;
    }
    if (this->stop_level != other.stop_level) {
      return false;
    }
    if (this->stop_level_details != other.stop_level_details) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstopSystemStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstopSystemStatus_

// alias to use template instance with default allocator
using EstopSystemStatus =
  bosdyn_msgs::msg::EstopSystemStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_SYSTEM_STATUS__STRUCT_HPP_
