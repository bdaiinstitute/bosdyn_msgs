// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TickRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TICK_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TICK_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"
// Member 'inputs'
#include "bosdyn_msgs/msg/detail/key_value__struct.hpp"
// Member 'params'
#include "bosdyn_msgs/msg/detail/dict_param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TickRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TickRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TickRequest_
{
  using Type = TickRequest_<ContainerAllocator>;

  explicit TickRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->session_id = "";
      this->params_is_set = false;
      this->group_name = "";
    }
  }

  explicit TickRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    session_id(_alloc),
    params(_alloc, _init),
    group_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->session_id = "";
      this->params_is_set = false;
      this->group_name = "";
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_id_type session_id;
  using _leases_type =
    std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>>;
  _leases_type leases;
  using _inputs_type =
    std::vector<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _inputs_type inputs;
  using _params_type =
    bosdyn_msgs::msg::DictParam_<ContainerAllocator>;
  _params_type params;
  using _params_is_set_type =
    bool;
  _params_is_set_type params_is_set;
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__session_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->session_id = _arg;
    return *this;
  }
  Type & set__leases(
    const std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>> & _arg)
  {
    this->leases = _arg;
    return *this;
  }
  Type & set__inputs(
    const std::vector<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->inputs = _arg;
    return *this;
  }
  Type & set__params(
    const bosdyn_msgs::msg::DictParam_<ContainerAllocator> & _arg)
  {
    this->params = _arg;
    return *this;
  }
  Type & set__params_is_set(
    const bool & _arg)
  {
    this->params_is_set = _arg;
    return *this;
  }
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TickRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TickRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TickRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TickRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TickRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TickRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TickRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TickRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TickRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TickRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TickRequest
    std::shared_ptr<bosdyn_msgs::msg::TickRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TickRequest
    std::shared_ptr<bosdyn_msgs::msg::TickRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TickRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->session_id != other.session_id) {
      return false;
    }
    if (this->leases != other.leases) {
      return false;
    }
    if (this->inputs != other.inputs) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    if (this->params_is_set != other.params_is_set) {
      return false;
    }
    if (this->group_name != other.group_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const TickRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TickRequest_

// alias to use template instance with default allocator
using TickRequest =
  bosdyn_msgs::msg::TickRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TICK_REQUEST__STRUCT_HPP_
