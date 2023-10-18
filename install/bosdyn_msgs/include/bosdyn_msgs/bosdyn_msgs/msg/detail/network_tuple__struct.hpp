// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NetworkTuple.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_TUPLE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_TUPLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NetworkTuple __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NetworkTuple __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NetworkTuple_
{
  using Type = NetworkTuple_<ContainerAllocator>;

  explicit NetworkTuple_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0ul;
      this->address_is_set = false;
      this->netmask = 0ul;
      this->netmask_is_set = false;
      this->gateway = 0ul;
      this->gateway_is_set = false;
      this->mtu = 0ul;
      this->mtu_is_set = false;
    }
  }

  explicit NetworkTuple_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0ul;
      this->address_is_set = false;
      this->netmask = 0ul;
      this->netmask_is_set = false;
      this->gateway = 0ul;
      this->gateway_is_set = false;
      this->mtu = 0ul;
      this->mtu_is_set = false;
    }
  }

  // field types and members
  using _address_type =
    uint32_t;
  _address_type address;
  using _address_is_set_type =
    bool;
  _address_is_set_type address_is_set;
  using _netmask_type =
    uint32_t;
  _netmask_type netmask;
  using _netmask_is_set_type =
    bool;
  _netmask_is_set_type netmask_is_set;
  using _gateway_type =
    uint32_t;
  _gateway_type gateway;
  using _gateway_is_set_type =
    bool;
  _gateway_is_set_type gateway_is_set;
  using _mtu_type =
    uint32_t;
  _mtu_type mtu;
  using _mtu_is_set_type =
    bool;
  _mtu_is_set_type mtu_is_set;

  // setters for named parameter idiom
  Type & set__address(
    const uint32_t & _arg)
  {
    this->address = _arg;
    return *this;
  }
  Type & set__address_is_set(
    const bool & _arg)
  {
    this->address_is_set = _arg;
    return *this;
  }
  Type & set__netmask(
    const uint32_t & _arg)
  {
    this->netmask = _arg;
    return *this;
  }
  Type & set__netmask_is_set(
    const bool & _arg)
  {
    this->netmask_is_set = _arg;
    return *this;
  }
  Type & set__gateway(
    const uint32_t & _arg)
  {
    this->gateway = _arg;
    return *this;
  }
  Type & set__gateway_is_set(
    const bool & _arg)
  {
    this->gateway_is_set = _arg;
    return *this;
  }
  Type & set__mtu(
    const uint32_t & _arg)
  {
    this->mtu = _arg;
    return *this;
  }
  Type & set__mtu_is_set(
    const bool & _arg)
  {
    this->mtu_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkTuple
    std::shared_ptr<bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkTuple
    std::shared_ptr<bosdyn_msgs::msg::NetworkTuple_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetworkTuple_ & other) const
  {
    if (this->address != other.address) {
      return false;
    }
    if (this->address_is_set != other.address_is_set) {
      return false;
    }
    if (this->netmask != other.netmask) {
      return false;
    }
    if (this->netmask_is_set != other.netmask_is_set) {
      return false;
    }
    if (this->gateway != other.gateway) {
      return false;
    }
    if (this->gateway_is_set != other.gateway_is_set) {
      return false;
    }
    if (this->mtu != other.mtu) {
      return false;
    }
    if (this->mtu_is_set != other.mtu_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetworkTuple_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetworkTuple_

// alias to use template instance with default allocator
using NetworkTuple =
  bosdyn_msgs::msg::NetworkTuple_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_TUPLE__STRUCT_HPP_
