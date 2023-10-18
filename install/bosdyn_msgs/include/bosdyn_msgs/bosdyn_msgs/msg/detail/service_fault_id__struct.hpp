// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ServiceFaultId.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_ID__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ServiceFaultId __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ServiceFaultId __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceFaultId_
{
  using Type = ServiceFaultId_<ContainerAllocator>;

  explicit ServiceFaultId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fault_name = "";
      this->service_name = "";
      this->payload_guid = "";
    }
  }

  explicit ServiceFaultId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fault_name(_alloc),
    service_name(_alloc),
    payload_guid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fault_name = "";
      this->service_name = "";
      this->payload_guid = "";
    }
  }

  // field types and members
  using _fault_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fault_name_type fault_name;
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _payload_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _payload_guid_type payload_guid;

  // setters for named parameter idiom
  Type & set__fault_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fault_name = _arg;
    return *this;
  }
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__payload_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->payload_guid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ServiceFaultId
    std::shared_ptr<bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ServiceFaultId
    std::shared_ptr<bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceFaultId_ & other) const
  {
    if (this->fault_name != other.fault_name) {
      return false;
    }
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->payload_guid != other.payload_guid) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceFaultId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceFaultId_

// alias to use template instance with default allocator
using ServiceFaultId =
  bosdyn_msgs::msg::ServiceFaultId_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_ID__STRUCT_HPP_
