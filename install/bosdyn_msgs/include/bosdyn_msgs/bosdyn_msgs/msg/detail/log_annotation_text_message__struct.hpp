// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LogAnnotationTextMessage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_TEXT_MESSAGE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_TEXT_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
// Member 'timestamp_client'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'level'
#include "bosdyn_msgs/msg/detail/log_annotation_text_message_level__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LogAnnotationTextMessage __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LogAnnotationTextMessage __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LogAnnotationTextMessage_
{
  using Type = LogAnnotationTextMessage_<ContainerAllocator>;

  explicit LogAnnotationTextMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    level(_init),
    timestamp_client(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->timestamp_is_set = false;
      this->service = "";
      this->tag = "";
      this->filename = "";
      this->line_number = 0l;
      this->timestamp_client_is_set = false;
    }
  }

  explicit LogAnnotationTextMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    timestamp(_alloc, _init),
    service(_alloc),
    level(_alloc, _init),
    tag(_alloc),
    filename(_alloc),
    timestamp_client(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->timestamp_is_set = false;
      this->service = "";
      this->tag = "";
      this->filename = "";
      this->line_number = 0l;
      this->timestamp_client_is_set = false;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _timestamp_is_set_type =
    bool;
  _timestamp_is_set_type timestamp_is_set;
  using _service_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_type service;
  using _level_type =
    bosdyn_msgs::msg::LogAnnotationTextMessageLevel_<ContainerAllocator>;
  _level_type level;
  using _tag_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tag_type tag;
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filename_type filename;
  using _line_number_type =
    int32_t;
  _line_number_type line_number;
  using _timestamp_client_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_client_type timestamp_client;
  using _timestamp_client_is_set_type =
    bool;
  _timestamp_client_is_set_type timestamp_client_is_set;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_is_set(
    const bool & _arg)
  {
    this->timestamp_is_set = _arg;
    return *this;
  }
  Type & set__service(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service = _arg;
    return *this;
  }
  Type & set__level(
    const bosdyn_msgs::msg::LogAnnotationTextMessageLevel_<ContainerAllocator> & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__tag(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tag = _arg;
    return *this;
  }
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filename = _arg;
    return *this;
  }
  Type & set__line_number(
    const int32_t & _arg)
  {
    this->line_number = _arg;
    return *this;
  }
  Type & set__timestamp_client(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp_client = _arg;
    return *this;
  }
  Type & set__timestamp_client_is_set(
    const bool & _arg)
  {
    this->timestamp_client_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LogAnnotationTextMessage
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LogAnnotationTextMessage
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogAnnotationTextMessage_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_is_set != other.timestamp_is_set) {
      return false;
    }
    if (this->service != other.service) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->tag != other.tag) {
      return false;
    }
    if (this->filename != other.filename) {
      return false;
    }
    if (this->line_number != other.line_number) {
      return false;
    }
    if (this->timestamp_client != other.timestamp_client) {
      return false;
    }
    if (this->timestamp_client_is_set != other.timestamp_client_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogAnnotationTextMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogAnnotationTextMessage_

// alias to use template instance with default allocator
using LogAnnotationTextMessage =
  bosdyn_msgs::msg::LogAnnotationTextMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_TEXT_MESSAGE__STRUCT_HPP_
