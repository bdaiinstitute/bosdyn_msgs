// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LogAnnotationLogBlob.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_LOG_BLOB__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_LOG_BLOB__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LogAnnotationLogBlob __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LogAnnotationLogBlob __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LogAnnotationLogBlob_
{
  using Type = LogAnnotationLogBlob_<ContainerAllocator>;

  explicit LogAnnotationLogBlob_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    timestamp_client(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_is_set = false;
      this->channel = "";
      this->type_id = "";
      this->timestamp_client_is_set = false;
    }
  }

  explicit LogAnnotationLogBlob_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    channel(_alloc),
    type_id(_alloc),
    timestamp_client(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_is_set = false;
      this->channel = "";
      this->type_id = "";
      this->timestamp_client_is_set = false;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _timestamp_is_set_type =
    bool;
  _timestamp_is_set_type timestamp_is_set;
  using _channel_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _channel_type channel;
  using _type_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_id_type type_id;
  using _data_type =
    std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>>;
  _data_type data;
  using _timestamp_client_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_client_type timestamp_client;
  using _timestamp_client_is_set_type =
    bool;
  _timestamp_client_is_set_type timestamp_client_is_set;

  // setters for named parameter idiom
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
  Type & set__channel(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->channel = _arg;
    return *this;
  }
  Type & set__type_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type_id = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>> & _arg)
  {
    this->data = _arg;
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
    bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LogAnnotationLogBlob
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LogAnnotationLogBlob
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogAnnotationLogBlob_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_is_set != other.timestamp_is_set) {
      return false;
    }
    if (this->channel != other.channel) {
      return false;
    }
    if (this->type_id != other.type_id) {
      return false;
    }
    if (this->data != other.data) {
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
  bool operator!=(const LogAnnotationLogBlob_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogAnnotationLogBlob_

// alias to use template instance with default allocator
using LogAnnotationLogBlob =
  bosdyn_msgs::msg::LogAnnotationLogBlob_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_LOG_BLOB__STRUCT_HPP_
