// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ServiceFault.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fault_id'
#include "bosdyn_msgs/msg/detail/service_fault_id__struct.hpp"
// Member 'severity'
#include "bosdyn_msgs/msg/detail/service_fault_severity__struct.hpp"
// Member 'onset_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ServiceFault __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ServiceFault __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceFault_
{
  using Type = ServiceFault_<ContainerAllocator>;

  explicit ServiceFault_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fault_id(_init),
    severity(_init),
    onset_timestamp(_init),
    duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fault_id_is_set = false;
      this->error_message = "";
      this->onset_timestamp_is_set = false;
      this->duration_is_set = false;
    }
  }

  explicit ServiceFault_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fault_id(_alloc, _init),
    error_message(_alloc),
    severity(_alloc, _init),
    onset_timestamp(_alloc, _init),
    duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fault_id_is_set = false;
      this->error_message = "";
      this->onset_timestamp_is_set = false;
      this->duration_is_set = false;
    }
  }

  // field types and members
  using _fault_id_type =
    bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator>;
  _fault_id_type fault_id;
  using _fault_id_is_set_type =
    bool;
  _fault_id_is_set_type fault_id_is_set;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _attributes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _attributes_type attributes;
  using _severity_type =
    bosdyn_msgs::msg::ServiceFaultSeverity_<ContainerAllocator>;
  _severity_type severity;
  using _onset_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _onset_timestamp_type onset_timestamp;
  using _onset_timestamp_is_set_type =
    bool;
  _onset_timestamp_is_set_type onset_timestamp_is_set;
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;
  using _duration_is_set_type =
    bool;
  _duration_is_set_type duration_is_set;

  // setters for named parameter idiom
  Type & set__fault_id(
    const bosdyn_msgs::msg::ServiceFaultId_<ContainerAllocator> & _arg)
  {
    this->fault_id = _arg;
    return *this;
  }
  Type & set__fault_id_is_set(
    const bool & _arg)
  {
    this->fault_id_is_set = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__attributes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->attributes = _arg;
    return *this;
  }
  Type & set__severity(
    const bosdyn_msgs::msg::ServiceFaultSeverity_<ContainerAllocator> & _arg)
  {
    this->severity = _arg;
    return *this;
  }
  Type & set__onset_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->onset_timestamp = _arg;
    return *this;
  }
  Type & set__onset_timestamp_is_set(
    const bool & _arg)
  {
    this->onset_timestamp_is_set = _arg;
    return *this;
  }
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__duration_is_set(
    const bool & _arg)
  {
    this->duration_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ServiceFault_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ServiceFault_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ServiceFault
    std::shared_ptr<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ServiceFault
    std::shared_ptr<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceFault_ & other) const
  {
    if (this->fault_id != other.fault_id) {
      return false;
    }
    if (this->fault_id_is_set != other.fault_id_is_set) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->attributes != other.attributes) {
      return false;
    }
    if (this->severity != other.severity) {
      return false;
    }
    if (this->onset_timestamp != other.onset_timestamp) {
      return false;
    }
    if (this->onset_timestamp_is_set != other.onset_timestamp_is_set) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->duration_is_set != other.duration_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceFault_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceFault_

// alias to use template instance with default allocator
using ServiceFault =
  bosdyn_msgs::msg::ServiceFault_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT__STRUCT_HPP_
