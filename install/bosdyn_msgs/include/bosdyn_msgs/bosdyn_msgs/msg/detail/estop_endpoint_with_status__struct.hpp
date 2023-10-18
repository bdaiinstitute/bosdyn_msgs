// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EstopEndpointWithStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'endpoint'
#include "bosdyn_msgs/msg/detail/estop_endpoint__struct.hpp"
// Member 'stop_level'
#include "bosdyn_msgs/msg/detail/estop_stop_level__struct.hpp"
// Member 'time_since_valid_response'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EstopEndpointWithStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EstopEndpointWithStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstopEndpointWithStatus_
{
  using Type = EstopEndpointWithStatus_<ContainerAllocator>;

  explicit EstopEndpointWithStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : endpoint(_init),
    stop_level(_init),
    time_since_valid_response(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->endpoint_is_set = false;
      this->time_since_valid_response_is_set = false;
    }
  }

  explicit EstopEndpointWithStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : endpoint(_alloc, _init),
    stop_level(_alloc, _init),
    time_since_valid_response(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->endpoint_is_set = false;
      this->time_since_valid_response_is_set = false;
    }
  }

  // field types and members
  using _endpoint_type =
    bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>;
  _endpoint_type endpoint;
  using _endpoint_is_set_type =
    bool;
  _endpoint_is_set_type endpoint_is_set;
  using _stop_level_type =
    bosdyn_msgs::msg::EstopStopLevel_<ContainerAllocator>;
  _stop_level_type stop_level;
  using _time_since_valid_response_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_since_valid_response_type time_since_valid_response;
  using _time_since_valid_response_is_set_type =
    bool;
  _time_since_valid_response_is_set_type time_since_valid_response_is_set;

  // setters for named parameter idiom
  Type & set__endpoint(
    const bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator> & _arg)
  {
    this->endpoint = _arg;
    return *this;
  }
  Type & set__endpoint_is_set(
    const bool & _arg)
  {
    this->endpoint_is_set = _arg;
    return *this;
  }
  Type & set__stop_level(
    const bosdyn_msgs::msg::EstopStopLevel_<ContainerAllocator> & _arg)
  {
    this->stop_level = _arg;
    return *this;
  }
  Type & set__time_since_valid_response(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_since_valid_response = _arg;
    return *this;
  }
  Type & set__time_since_valid_response_is_set(
    const bool & _arg)
  {
    this->time_since_valid_response_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EstopEndpointWithStatus
    std::shared_ptr<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EstopEndpointWithStatus
    std::shared_ptr<bosdyn_msgs::msg::EstopEndpointWithStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstopEndpointWithStatus_ & other) const
  {
    if (this->endpoint != other.endpoint) {
      return false;
    }
    if (this->endpoint_is_set != other.endpoint_is_set) {
      return false;
    }
    if (this->stop_level != other.stop_level) {
      return false;
    }
    if (this->time_since_valid_response != other.time_since_valid_response) {
      return false;
    }
    if (this->time_since_valid_response_is_set != other.time_since_valid_response_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstopEndpointWithStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstopEndpointWithStatus_

// alias to use template instance with default allocator
using EstopEndpointWithStatus =
  bosdyn_msgs::msg::EstopEndpointWithStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__STRUCT_HPP_
