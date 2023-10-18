// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StructTypeDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRUCT_TYPE_DESCRIPTOR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRUCT_TYPE_DESCRIPTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'key_to_series_identifier_hash'
#include "bosdyn_msgs/msg/detail/key_string_value_uint64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StructTypeDescriptor __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StructTypeDescriptor __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StructTypeDescriptor_
{
  using Type = StructTypeDescriptor_<ContainerAllocator>;

  explicit StructTypeDescriptor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit StructTypeDescriptor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _key_to_series_identifier_hash_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueUint64_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueUint64_<ContainerAllocator>>>;
  _key_to_series_identifier_hash_type key_to_series_identifier_hash;

  // setters for named parameter idiom
  Type & set__key_to_series_identifier_hash(
    const std::vector<bosdyn_msgs::msg::KeyStringValueUint64_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueUint64_<ContainerAllocator>>> & _arg)
  {
    this->key_to_series_identifier_hash = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StructTypeDescriptor
    std::shared_ptr<bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StructTypeDescriptor
    std::shared_ptr<bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StructTypeDescriptor_ & other) const
  {
    if (this->key_to_series_identifier_hash != other.key_to_series_identifier_hash) {
      return false;
    }
    return true;
  }
  bool operator!=(const StructTypeDescriptor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StructTypeDescriptor_

// alias to use template instance with default allocator
using StructTypeDescriptor =
  bosdyn_msgs::msg::StructTypeDescriptor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRUCT_TYPE_DESCRIPTOR__STRUCT_HPP_
