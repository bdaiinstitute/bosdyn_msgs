// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DebugRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DebugRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DebugRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugRequest_
{
  using Type = DebugRequest_<ContainerAllocator>;

  explicit DebugRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->enable_temperature = false;
      this->enable_humidity = false;
      this->enable_bit = false;
      this->enable_shock = false;
      this->enable_system_stat = false;
    }
  }

  explicit DebugRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->enable_temperature = false;
      this->enable_humidity = false;
      this->enable_bit = false;
      this->enable_shock = false;
      this->enable_system_stat = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _enable_temperature_type =
    bool;
  _enable_temperature_type enable_temperature;
  using _enable_humidity_type =
    bool;
  _enable_humidity_type enable_humidity;
  using _enable_bit_type =
    bool;
  _enable_bit_type enable_bit;
  using _enable_shock_type =
    bool;
  _enable_shock_type enable_shock;
  using _enable_system_stat_type =
    bool;
  _enable_system_stat_type enable_system_stat;

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
  Type & set__enable_temperature(
    const bool & _arg)
  {
    this->enable_temperature = _arg;
    return *this;
  }
  Type & set__enable_humidity(
    const bool & _arg)
  {
    this->enable_humidity = _arg;
    return *this;
  }
  Type & set__enable_bit(
    const bool & _arg)
  {
    this->enable_bit = _arg;
    return *this;
  }
  Type & set__enable_shock(
    const bool & _arg)
  {
    this->enable_shock = _arg;
    return *this;
  }
  Type & set__enable_system_stat(
    const bool & _arg)
  {
    this->enable_system_stat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DebugRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DebugRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DebugRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DebugRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DebugRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DebugRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DebugRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DebugRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DebugRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DebugRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DebugRequest
    std::shared_ptr<bosdyn_msgs::msg::DebugRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DebugRequest
    std::shared_ptr<bosdyn_msgs::msg::DebugRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->enable_temperature != other.enable_temperature) {
      return false;
    }
    if (this->enable_humidity != other.enable_humidity) {
      return false;
    }
    if (this->enable_bit != other.enable_bit) {
      return false;
    }
    if (this->enable_shock != other.enable_shock) {
      return false;
    }
    if (this->enable_system_stat != other.enable_system_stat) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugRequest_

// alias to use template instance with default allocator
using DebugRequest =
  bosdyn_msgs::msg::DebugRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEBUG_REQUEST__STRUCT_HPP_
