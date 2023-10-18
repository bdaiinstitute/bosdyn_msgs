// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MessageTypeDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MESSAGE_TYPE_DESCRIPTOR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MESSAGE_TYPE_DESCRIPTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MessageTypeDescriptor __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MessageTypeDescriptor __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MessageTypeDescriptor_
{
  using Type = MessageTypeDescriptor_<ContainerAllocator>;

  explicit MessageTypeDescriptor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content_type = "";
      this->type_name = "";
      this->is_metadata = false;
    }
  }

  explicit MessageTypeDescriptor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : content_type(_alloc),
    type_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content_type = "";
      this->type_name = "";
      this->is_metadata = false;
    }
  }

  // field types and members
  using _content_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _content_type_type content_type;
  using _type_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_name_type type_name;
  using _is_metadata_type =
    bool;
  _is_metadata_type is_metadata;

  // setters for named parameter idiom
  Type & set__content_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->content_type = _arg;
    return *this;
  }
  Type & set__type_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type_name = _arg;
    return *this;
  }
  Type & set__is_metadata(
    const bool & _arg)
  {
    this->is_metadata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MessageTypeDescriptor
    std::shared_ptr<bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MessageTypeDescriptor
    std::shared_ptr<bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MessageTypeDescriptor_ & other) const
  {
    if (this->content_type != other.content_type) {
      return false;
    }
    if (this->type_name != other.type_name) {
      return false;
    }
    if (this->is_metadata != other.is_metadata) {
      return false;
    }
    return true;
  }
  bool operator!=(const MessageTypeDescriptor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MessageTypeDescriptor_

// alias to use template instance with default allocator
using MessageTypeDescriptor =
  bosdyn_msgs::msg::MessageTypeDescriptor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MESSAGE_TYPE_DESCRIPTOR__STRUCT_HPP_
