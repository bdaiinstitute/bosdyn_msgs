// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DescriptorBlock.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'descriptor_type'
#include "bosdyn_msgs/msg/detail/descriptor_block_one_of_descriptor_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DescriptorBlock __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DescriptorBlock __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DescriptorBlock_
{
  using Type = DescriptorBlock_<ContainerAllocator>;

  explicit DescriptorBlock_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : descriptor_type(_init)
  {
    (void)_init;
  }

  explicit DescriptorBlock_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : descriptor_type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _descriptor_type_type =
    bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator>;
  _descriptor_type_type descriptor_type;

  // setters for named parameter idiom
  Type & set__descriptor_type(
    const bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator> & _arg)
  {
    this->descriptor_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DescriptorBlock
    std::shared_ptr<bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DescriptorBlock
    std::shared_ptr<bosdyn_msgs::msg::DescriptorBlock_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DescriptorBlock_ & other) const
  {
    if (this->descriptor_type != other.descriptor_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const DescriptorBlock_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DescriptorBlock_

// alias to use template instance with default allocator
using DescriptorBlock =
  bosdyn_msgs::msg::DescriptorBlock_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK__STRUCT_HPP_
