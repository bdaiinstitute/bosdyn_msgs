// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LogAnnotations.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATIONS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'text_messages'
#include "bosdyn_msgs/msg/detail/log_annotation_text_message__struct.hpp"
// Member 'operator_messages'
#include "bosdyn_msgs/msg/detail/log_annotation_operator_message__struct.hpp"
// Member 'blob_data'
#include "bosdyn_msgs/msg/detail/log_annotation_log_blob__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LogAnnotations __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LogAnnotations __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LogAnnotations_
{
  using Type = LogAnnotations_<ContainerAllocator>;

  explicit LogAnnotations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LogAnnotations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _text_messages_type =
    std::vector<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator>>>;
  _text_messages_type text_messages;
  using _operator_messages_type =
    std::vector<bosdyn_msgs::msg::LogAnnotationOperatorMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LogAnnotationOperatorMessage_<ContainerAllocator>>>;
  _operator_messages_type operator_messages;
  using _blob_data_type =
    std::vector<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator>>>;
  _blob_data_type blob_data;

  // setters for named parameter idiom
  Type & set__text_messages(
    const std::vector<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LogAnnotationTextMessage_<ContainerAllocator>>> & _arg)
  {
    this->text_messages = _arg;
    return *this;
  }
  Type & set__operator_messages(
    const std::vector<bosdyn_msgs::msg::LogAnnotationOperatorMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LogAnnotationOperatorMessage_<ContainerAllocator>>> & _arg)
  {
    this->operator_messages = _arg;
    return *this;
  }
  Type & set__blob_data(
    const std::vector<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LogAnnotationLogBlob_<ContainerAllocator>>> & _arg)
  {
    this->blob_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LogAnnotations
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LogAnnotations
    std::shared_ptr<bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogAnnotations_ & other) const
  {
    if (this->text_messages != other.text_messages) {
      return false;
    }
    if (this->operator_messages != other.operator_messages) {
      return false;
    }
    if (this->blob_data != other.blob_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogAnnotations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogAnnotations_

// alias to use template instance with default allocator
using LogAnnotations =
  bosdyn_msgs::msg::LogAnnotations_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATIONS__STRUCT_HPP_
