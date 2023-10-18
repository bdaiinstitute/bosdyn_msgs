// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncRoundTrip.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'client_tx'
// Member 'server_rx'
// Member 'server_tx'
// Member 'client_rx'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TimeSyncRoundTrip __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TimeSyncRoundTrip __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeSyncRoundTrip_
{
  using Type = TimeSyncRoundTrip_<ContainerAllocator>;

  explicit TimeSyncRoundTrip_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : client_tx(_init),
    server_rx(_init),
    server_tx(_init),
    client_rx(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->client_tx_is_set = false;
      this->server_rx_is_set = false;
      this->server_tx_is_set = false;
      this->client_rx_is_set = false;
    }
  }

  explicit TimeSyncRoundTrip_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : client_tx(_alloc, _init),
    server_rx(_alloc, _init),
    server_tx(_alloc, _init),
    client_rx(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->client_tx_is_set = false;
      this->server_rx_is_set = false;
      this->server_tx_is_set = false;
      this->client_rx_is_set = false;
    }
  }

  // field types and members
  using _client_tx_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _client_tx_type client_tx;
  using _client_tx_is_set_type =
    bool;
  _client_tx_is_set_type client_tx_is_set;
  using _server_rx_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _server_rx_type server_rx;
  using _server_rx_is_set_type =
    bool;
  _server_rx_is_set_type server_rx_is_set;
  using _server_tx_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _server_tx_type server_tx;
  using _server_tx_is_set_type =
    bool;
  _server_tx_is_set_type server_tx_is_set;
  using _client_rx_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _client_rx_type client_rx;
  using _client_rx_is_set_type =
    bool;
  _client_rx_is_set_type client_rx_is_set;

  // setters for named parameter idiom
  Type & set__client_tx(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->client_tx = _arg;
    return *this;
  }
  Type & set__client_tx_is_set(
    const bool & _arg)
  {
    this->client_tx_is_set = _arg;
    return *this;
  }
  Type & set__server_rx(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->server_rx = _arg;
    return *this;
  }
  Type & set__server_rx_is_set(
    const bool & _arg)
  {
    this->server_rx_is_set = _arg;
    return *this;
  }
  Type & set__server_tx(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->server_tx = _arg;
    return *this;
  }
  Type & set__server_tx_is_set(
    const bool & _arg)
  {
    this->server_tx_is_set = _arg;
    return *this;
  }
  Type & set__client_rx(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->client_rx = _arg;
    return *this;
  }
  Type & set__client_rx_is_set(
    const bool & _arg)
  {
    this->client_rx_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TimeSyncRoundTrip
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TimeSyncRoundTrip
    std::shared_ptr<bosdyn_msgs::msg::TimeSyncRoundTrip_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeSyncRoundTrip_ & other) const
  {
    if (this->client_tx != other.client_tx) {
      return false;
    }
    if (this->client_tx_is_set != other.client_tx_is_set) {
      return false;
    }
    if (this->server_rx != other.server_rx) {
      return false;
    }
    if (this->server_rx_is_set != other.server_rx_is_set) {
      return false;
    }
    if (this->server_tx != other.server_tx) {
      return false;
    }
    if (this->server_tx_is_set != other.server_tx_is_set) {
      return false;
    }
    if (this->client_rx != other.client_rx) {
      return false;
    }
    if (this->client_rx_is_set != other.client_rx_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeSyncRoundTrip_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeSyncRoundTrip_

// alias to use template instance with default allocator
using TimeSyncRoundTrip =
  bosdyn_msgs::msg::TimeSyncRoundTrip_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__STRUCT_HPP_
