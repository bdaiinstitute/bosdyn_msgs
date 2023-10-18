// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ClientMetadata.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLIENT_METADATA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLIENT_METADATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ClientMetadata __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ClientMetadata __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClientMetadata_
{
  using Type = ClientMetadata_<ContainerAllocator>;

  explicit ClientMetadata_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_name = "";
      this->client_username = "";
      this->client_software_version = "";
      this->client_id = "";
      this->client_type = "";
    }
  }

  explicit ClientMetadata_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : session_name(_alloc),
    client_username(_alloc),
    client_software_version(_alloc),
    client_id(_alloc),
    client_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_name = "";
      this->client_username = "";
      this->client_software_version = "";
      this->client_id = "";
      this->client_type = "";
    }
  }

  // field types and members
  using _session_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_name_type session_name;
  using _client_username_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _client_username_type client_username;
  using _client_software_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _client_software_version_type client_software_version;
  using _client_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _client_id_type client_id;
  using _client_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _client_type_type client_type;

  // setters for named parameter idiom
  Type & set__session_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->session_name = _arg;
    return *this;
  }
  Type & set__client_username(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->client_username = _arg;
    return *this;
  }
  Type & set__client_software_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->client_software_version = _arg;
    return *this;
  }
  Type & set__client_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->client_id = _arg;
    return *this;
  }
  Type & set__client_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->client_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ClientMetadata
    std::shared_ptr<bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ClientMetadata
    std::shared_ptr<bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClientMetadata_ & other) const
  {
    if (this->session_name != other.session_name) {
      return false;
    }
    if (this->client_username != other.client_username) {
      return false;
    }
    if (this->client_software_version != other.client_software_version) {
      return false;
    }
    if (this->client_id != other.client_id) {
      return false;
    }
    if (this->client_type != other.client_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClientMetadata_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClientMetadata_

// alias to use template instance with default allocator
using ClientMetadata =
  bosdyn_msgs::msg::ClientMetadata_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLIENT_METADATA__STRUCT_HPP_
