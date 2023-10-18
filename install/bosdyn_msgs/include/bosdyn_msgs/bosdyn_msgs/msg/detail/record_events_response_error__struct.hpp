// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RecordEventsResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_EVENTS_RESPONSE_ERROR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_EVENTS_RESPONSE_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/record_events_response_error_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RecordEventsResponseError __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RecordEventsResponseError __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RecordEventsResponseError_
{
  using Type = RecordEventsResponseError_<ContainerAllocator>;

  explicit RecordEventsResponseError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->index = 0ul;
    }
  }

  explicit RecordEventsResponseError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->index = 0ul;
    }
  }

  // field types and members
  using _type_type =
    bosdyn_msgs::msg::RecordEventsResponseErrorType_<ContainerAllocator>;
  _type_type type;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _index_type =
    uint32_t;
  _index_type index;

  // setters for named parameter idiom
  Type & set__type(
    const bosdyn_msgs::msg::RecordEventsResponseErrorType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__index(
    const uint32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RecordEventsResponseError
    std::shared_ptr<bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RecordEventsResponseError
    std::shared_ptr<bosdyn_msgs::msg::RecordEventsResponseError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordEventsResponseError_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordEventsResponseError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordEventsResponseError_

// alias to use template instance with default allocator
using RecordEventsResponseError =
  bosdyn_msgs::msg::RecordEventsResponseError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_EVENTS_RESPONSE_ERROR__STRUCT_HPP_
