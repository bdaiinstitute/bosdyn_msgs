// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EstopEndpoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timeout'
// Member 'cut_power_timeout'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EstopEndpoint __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EstopEndpoint __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstopEndpoint_
{
  using Type = EstopEndpoint_<ContainerAllocator>;

  explicit EstopEndpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timeout(_init),
    cut_power_timeout(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->role = "";
      this->name = "";
      this->unique_id = "";
      this->timeout_is_set = false;
      this->cut_power_timeout_is_set = false;
    }
  }

  explicit EstopEndpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : role(_alloc),
    name(_alloc),
    unique_id(_alloc),
    timeout(_alloc, _init),
    cut_power_timeout(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->role = "";
      this->name = "";
      this->unique_id = "";
      this->timeout_is_set = false;
      this->cut_power_timeout_is_set = false;
    }
  }

  // field types and members
  using _role_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _role_type role;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _unique_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unique_id_type unique_id;
  using _timeout_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _timeout_type timeout;
  using _timeout_is_set_type =
    bool;
  _timeout_is_set_type timeout_is_set;
  using _cut_power_timeout_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _cut_power_timeout_type cut_power_timeout;
  using _cut_power_timeout_is_set_type =
    bool;
  _cut_power_timeout_is_set_type cut_power_timeout_is_set;

  // setters for named parameter idiom
  Type & set__role(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->role = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__unique_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unique_id = _arg;
    return *this;
  }
  Type & set__timeout(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__timeout_is_set(
    const bool & _arg)
  {
    this->timeout_is_set = _arg;
    return *this;
  }
  Type & set__cut_power_timeout(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->cut_power_timeout = _arg;
    return *this;
  }
  Type & set__cut_power_timeout_is_set(
    const bool & _arg)
  {
    this->cut_power_timeout_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EstopEndpoint
    std::shared_ptr<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EstopEndpoint
    std::shared_ptr<bosdyn_msgs::msg::EstopEndpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstopEndpoint_ & other) const
  {
    if (this->role != other.role) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->unique_id != other.unique_id) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->timeout_is_set != other.timeout_is_set) {
      return false;
    }
    if (this->cut_power_timeout != other.cut_power_timeout) {
      return false;
    }
    if (this->cut_power_timeout_is_set != other.cut_power_timeout_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstopEndpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstopEndpoint_

// alias to use template instance with default allocator
using EstopEndpoint =
  bosdyn_msgs::msg::EstopEndpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT__STRUCT_HPP_
