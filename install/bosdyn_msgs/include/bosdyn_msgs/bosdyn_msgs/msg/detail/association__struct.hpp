// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Association.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ASSOCIATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ASSOCIATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'connected_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Association __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Association __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Association_
{
  using Type = Association_<ContainerAllocator>;

  explicit Association_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : connected_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mac_address = "";
      this->connected_time_is_set = false;
      this->rx_signal_dbm = 0l;
      this->rx_signal_avg_dbm = 0l;
      this->rx_beacon_signal_avg_dbm = 0l;
      this->expected_bits_per_second = 0ll;
      this->rx_bytes = 0ll;
      this->rx_packets = 0ll;
      this->rx_bits_per_second = 0ll;
      this->tx_bytes = 0ll;
      this->tx_packets = 0ll;
      this->tx_bits_per_second = 0ll;
      this->tx_retries = 0ll;
      this->tx_failed = 0ll;
      this->beacons_received = 0ll;
      this->beacon_loss_count = 0ll;
    }
  }

  explicit Association_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mac_address(_alloc),
    connected_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mac_address = "";
      this->connected_time_is_set = false;
      this->rx_signal_dbm = 0l;
      this->rx_signal_avg_dbm = 0l;
      this->rx_beacon_signal_avg_dbm = 0l;
      this->expected_bits_per_second = 0ll;
      this->rx_bytes = 0ll;
      this->rx_packets = 0ll;
      this->rx_bits_per_second = 0ll;
      this->tx_bytes = 0ll;
      this->tx_packets = 0ll;
      this->tx_bits_per_second = 0ll;
      this->tx_retries = 0ll;
      this->tx_failed = 0ll;
      this->beacons_received = 0ll;
      this->beacon_loss_count = 0ll;
    }
  }

  // field types and members
  using _mac_address_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mac_address_type mac_address;
  using _connected_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _connected_time_type connected_time;
  using _connected_time_is_set_type =
    bool;
  _connected_time_is_set_type connected_time_is_set;
  using _rx_signal_dbm_type =
    int32_t;
  _rx_signal_dbm_type rx_signal_dbm;
  using _rx_signal_avg_dbm_type =
    int32_t;
  _rx_signal_avg_dbm_type rx_signal_avg_dbm;
  using _rx_beacon_signal_avg_dbm_type =
    int32_t;
  _rx_beacon_signal_avg_dbm_type rx_beacon_signal_avg_dbm;
  using _expected_bits_per_second_type =
    int64_t;
  _expected_bits_per_second_type expected_bits_per_second;
  using _rx_bytes_type =
    int64_t;
  _rx_bytes_type rx_bytes;
  using _rx_packets_type =
    int64_t;
  _rx_packets_type rx_packets;
  using _rx_bits_per_second_type =
    int64_t;
  _rx_bits_per_second_type rx_bits_per_second;
  using _tx_bytes_type =
    int64_t;
  _tx_bytes_type tx_bytes;
  using _tx_packets_type =
    int64_t;
  _tx_packets_type tx_packets;
  using _tx_bits_per_second_type =
    int64_t;
  _tx_bits_per_second_type tx_bits_per_second;
  using _tx_retries_type =
    int64_t;
  _tx_retries_type tx_retries;
  using _tx_failed_type =
    int64_t;
  _tx_failed_type tx_failed;
  using _beacons_received_type =
    int64_t;
  _beacons_received_type beacons_received;
  using _beacon_loss_count_type =
    int64_t;
  _beacon_loss_count_type beacon_loss_count;

  // setters for named parameter idiom
  Type & set__mac_address(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mac_address = _arg;
    return *this;
  }
  Type & set__connected_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->connected_time = _arg;
    return *this;
  }
  Type & set__connected_time_is_set(
    const bool & _arg)
  {
    this->connected_time_is_set = _arg;
    return *this;
  }
  Type & set__rx_signal_dbm(
    const int32_t & _arg)
  {
    this->rx_signal_dbm = _arg;
    return *this;
  }
  Type & set__rx_signal_avg_dbm(
    const int32_t & _arg)
  {
    this->rx_signal_avg_dbm = _arg;
    return *this;
  }
  Type & set__rx_beacon_signal_avg_dbm(
    const int32_t & _arg)
  {
    this->rx_beacon_signal_avg_dbm = _arg;
    return *this;
  }
  Type & set__expected_bits_per_second(
    const int64_t & _arg)
  {
    this->expected_bits_per_second = _arg;
    return *this;
  }
  Type & set__rx_bytes(
    const int64_t & _arg)
  {
    this->rx_bytes = _arg;
    return *this;
  }
  Type & set__rx_packets(
    const int64_t & _arg)
  {
    this->rx_packets = _arg;
    return *this;
  }
  Type & set__rx_bits_per_second(
    const int64_t & _arg)
  {
    this->rx_bits_per_second = _arg;
    return *this;
  }
  Type & set__tx_bytes(
    const int64_t & _arg)
  {
    this->tx_bytes = _arg;
    return *this;
  }
  Type & set__tx_packets(
    const int64_t & _arg)
  {
    this->tx_packets = _arg;
    return *this;
  }
  Type & set__tx_bits_per_second(
    const int64_t & _arg)
  {
    this->tx_bits_per_second = _arg;
    return *this;
  }
  Type & set__tx_retries(
    const int64_t & _arg)
  {
    this->tx_retries = _arg;
    return *this;
  }
  Type & set__tx_failed(
    const int64_t & _arg)
  {
    this->tx_failed = _arg;
    return *this;
  }
  Type & set__beacons_received(
    const int64_t & _arg)
  {
    this->beacons_received = _arg;
    return *this;
  }
  Type & set__beacon_loss_count(
    const int64_t & _arg)
  {
    this->beacon_loss_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Association_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Association_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Association_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Association_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Association_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Association_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Association_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Association_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Association_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Association_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Association
    std::shared_ptr<bosdyn_msgs::msg::Association_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Association
    std::shared_ptr<bosdyn_msgs::msg::Association_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Association_ & other) const
  {
    if (this->mac_address != other.mac_address) {
      return false;
    }
    if (this->connected_time != other.connected_time) {
      return false;
    }
    if (this->connected_time_is_set != other.connected_time_is_set) {
      return false;
    }
    if (this->rx_signal_dbm != other.rx_signal_dbm) {
      return false;
    }
    if (this->rx_signal_avg_dbm != other.rx_signal_avg_dbm) {
      return false;
    }
    if (this->rx_beacon_signal_avg_dbm != other.rx_beacon_signal_avg_dbm) {
      return false;
    }
    if (this->expected_bits_per_second != other.expected_bits_per_second) {
      return false;
    }
    if (this->rx_bytes != other.rx_bytes) {
      return false;
    }
    if (this->rx_packets != other.rx_packets) {
      return false;
    }
    if (this->rx_bits_per_second != other.rx_bits_per_second) {
      return false;
    }
    if (this->tx_bytes != other.tx_bytes) {
      return false;
    }
    if (this->tx_packets != other.tx_packets) {
      return false;
    }
    if (this->tx_bits_per_second != other.tx_bits_per_second) {
      return false;
    }
    if (this->tx_retries != other.tx_retries) {
      return false;
    }
    if (this->tx_failed != other.tx_failed) {
      return false;
    }
    if (this->beacons_received != other.beacons_received) {
      return false;
    }
    if (this->beacon_loss_count != other.beacon_loss_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const Association_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Association_

// alias to use template instance with default allocator
using Association =
  bosdyn_msgs::msg::Association_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ASSOCIATION__STRUCT_HPP_
