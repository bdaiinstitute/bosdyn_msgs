// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BosdynRecordEvent.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_RECORD_EVENT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_RECORD_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'event'
#include "bosdyn_msgs/msg/detail/event__struct.hpp"
// Member 'additional_parameters'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BosdynRecordEvent __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BosdynRecordEvent __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BosdynRecordEvent_
{
  using Type = BosdynRecordEvent_<ContainerAllocator>;

  explicit BosdynRecordEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->event_is_set = false;
      this->succeed_early = false;
    }
  }

  explicit BosdynRecordEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    host(_alloc),
    event(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->event_is_set = false;
      this->succeed_early = false;
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _event_type =
    bosdyn_msgs::msg::Event_<ContainerAllocator>;
  _event_type event;
  using _event_is_set_type =
    bool;
  _event_is_set_type event_is_set;
  using _succeed_early_type =
    bool;
  _succeed_early_type succeed_early;
  using _additional_parameters_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsValue_<ContainerAllocator>>>;
  _additional_parameters_type additional_parameters;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->host = _arg;
    return *this;
  }
  Type & set__event(
    const bosdyn_msgs::msg::Event_<ContainerAllocator> & _arg)
  {
    this->event = _arg;
    return *this;
  }
  Type & set__event_is_set(
    const bool & _arg)
  {
    this->event_is_set = _arg;
    return *this;
  }
  Type & set__succeed_early(
    const bool & _arg)
  {
    this->succeed_early = _arg;
    return *this;
  }
  Type & set__additional_parameters(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsValue_<ContainerAllocator>>> & _arg)
  {
    this->additional_parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BosdynRecordEvent
    std::shared_ptr<bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BosdynRecordEvent
    std::shared_ptr<bosdyn_msgs::msg::BosdynRecordEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BosdynRecordEvent_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    if (this->event_is_set != other.event_is_set) {
      return false;
    }
    if (this->succeed_early != other.succeed_early) {
      return false;
    }
    if (this->additional_parameters != other.additional_parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const BosdynRecordEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BosdynRecordEvent_

// alias to use template instance with default allocator
using BosdynRecordEvent =
  bosdyn_msgs::msg::BosdynRecordEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_RECORD_EVENT__STRUCT_HPP_
