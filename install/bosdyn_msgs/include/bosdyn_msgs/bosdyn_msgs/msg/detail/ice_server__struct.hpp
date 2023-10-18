// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ICEServer.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/ice_server_servertype__struct.hpp"
// Member 'transport'
#include "bosdyn_msgs/msg/detail/ice_server_icetransport__struct.hpp"
// Member 'auth'
#include "bosdyn_msgs/msg/detail/ice_server_auth_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ICEServer __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ICEServer __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ICEServer_
{
  using Type = ICEServer_<ContainerAllocator>;

  explicit ICEServer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init),
    transport(_init),
    auth(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = "";
      this->port = 0ul;
      this->auth_is_set = false;
    }
  }

  explicit ICEServer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init),
    address(_alloc),
    transport(_alloc, _init),
    auth(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = "";
      this->port = 0ul;
      this->auth_is_set = false;
    }
  }

  // field types and members
  using _type_type =
    bosdyn_msgs::msg::ICEServerServertype_<ContainerAllocator>;
  _type_type type;
  using _address_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _address_type address;
  using _port_type =
    uint32_t;
  _port_type port;
  using _transport_type =
    bosdyn_msgs::msg::ICEServerIcetransport_<ContainerAllocator>;
  _transport_type transport;
  using _auth_type =
    bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator>;
  _auth_type auth;
  using _auth_is_set_type =
    bool;
  _auth_is_set_type auth_is_set;

  // setters for named parameter idiom
  Type & set__type(
    const bosdyn_msgs::msg::ICEServerServertype_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__address(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->address = _arg;
    return *this;
  }
  Type & set__port(
    const uint32_t & _arg)
  {
    this->port = _arg;
    return *this;
  }
  Type & set__transport(
    const bosdyn_msgs::msg::ICEServerIcetransport_<ContainerAllocator> & _arg)
  {
    this->transport = _arg;
    return *this;
  }
  Type & set__auth(
    const bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator> & _arg)
  {
    this->auth = _arg;
    return *this;
  }
  Type & set__auth_is_set(
    const bool & _arg)
  {
    this->auth_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ICEServer_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ICEServer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ICEServer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ICEServer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ICEServer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ICEServer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ICEServer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ICEServer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ICEServer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ICEServer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ICEServer
    std::shared_ptr<bosdyn_msgs::msg::ICEServer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ICEServer
    std::shared_ptr<bosdyn_msgs::msg::ICEServer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ICEServer_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->address != other.address) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    if (this->transport != other.transport) {
      return false;
    }
    if (this->auth != other.auth) {
      return false;
    }
    if (this->auth_is_set != other.auth_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ICEServer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ICEServer_

// alias to use template instance with default allocator
using ICEServer =
  bosdyn_msgs::msg::ICEServer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER__STRUCT_HPP_
