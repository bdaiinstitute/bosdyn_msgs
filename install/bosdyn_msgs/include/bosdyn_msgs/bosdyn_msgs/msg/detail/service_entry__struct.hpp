// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ServiceEntry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'service_type'
#include "bosdyn_msgs/msg/detail/service_entry_one_of_service_type__struct.hpp"
// Member 'last_update'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ServiceEntry __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ServiceEntry __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceEntry_
{
  using Type = ServiceEntry_<ContainerAllocator>;

  explicit ServiceEntry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_type(_init),
    last_update(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->authority = "";
      this->last_update_is_set = false;
      this->user_token_required = false;
      this->permission_required = "";
      this->liveness_timeout_secs = 0.0;
      this->host_payload_guid = "";
    }
  }

  explicit ServiceEntry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    service_type(_alloc, _init),
    authority(_alloc),
    last_update(_alloc, _init),
    permission_required(_alloc),
    host_payload_guid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->authority = "";
      this->last_update_is_set = false;
      this->user_token_required = false;
      this->permission_required = "";
      this->liveness_timeout_secs = 0.0;
      this->host_payload_guid = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _service_type_type =
    bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator>;
  _service_type_type service_type;
  using _authority_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _authority_type authority;
  using _last_update_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_update_type last_update;
  using _last_update_is_set_type =
    bool;
  _last_update_is_set_type last_update_is_set;
  using _user_token_required_type =
    bool;
  _user_token_required_type user_token_required;
  using _permission_required_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _permission_required_type permission_required;
  using _liveness_timeout_secs_type =
    double;
  _liveness_timeout_secs_type liveness_timeout_secs;
  using _host_payload_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_payload_guid_type host_payload_guid;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__service_type(
    const bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator> & _arg)
  {
    this->service_type = _arg;
    return *this;
  }
  Type & set__authority(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->authority = _arg;
    return *this;
  }
  Type & set__last_update(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_update = _arg;
    return *this;
  }
  Type & set__last_update_is_set(
    const bool & _arg)
  {
    this->last_update_is_set = _arg;
    return *this;
  }
  Type & set__user_token_required(
    const bool & _arg)
  {
    this->user_token_required = _arg;
    return *this;
  }
  Type & set__permission_required(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->permission_required = _arg;
    return *this;
  }
  Type & set__liveness_timeout_secs(
    const double & _arg)
  {
    this->liveness_timeout_secs = _arg;
    return *this;
  }
  Type & set__host_payload_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->host_payload_guid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ServiceEntry
    std::shared_ptr<bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ServiceEntry
    std::shared_ptr<bosdyn_msgs::msg::ServiceEntry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceEntry_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->service_type != other.service_type) {
      return false;
    }
    if (this->authority != other.authority) {
      return false;
    }
    if (this->last_update != other.last_update) {
      return false;
    }
    if (this->last_update_is_set != other.last_update_is_set) {
      return false;
    }
    if (this->user_token_required != other.user_token_required) {
      return false;
    }
    if (this->permission_required != other.permission_required) {
      return false;
    }
    if (this->liveness_timeout_secs != other.liveness_timeout_secs) {
      return false;
    }
    if (this->host_payload_guid != other.host_payload_guid) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceEntry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceEntry_

// alias to use template instance with default allocator
using ServiceEntry =
  bosdyn_msgs::msg::ServiceEntry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY__STRUCT_HPP_
