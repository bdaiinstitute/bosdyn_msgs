// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PodTypeDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POD_TYPE_DESCRIPTOR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POD_TYPE_DESCRIPTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pod_type'
#include "bosdyn_msgs/msg/detail/pod_type_enum__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PodTypeDescriptor __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PodTypeDescriptor __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PodTypeDescriptor_
{
  using Type = PodTypeDescriptor_<ContainerAllocator>;

  explicit PodTypeDescriptor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pod_type(_init)
  {
    (void)_init;
  }

  explicit PodTypeDescriptor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pod_type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pod_type_type =
    bosdyn_msgs::msg::PodTypeEnum_<ContainerAllocator>;
  _pod_type_type pod_type;
  using _dimension_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _dimension_type dimension;

  // setters for named parameter idiom
  Type & set__pod_type(
    const bosdyn_msgs::msg::PodTypeEnum_<ContainerAllocator> & _arg)
  {
    this->pod_type = _arg;
    return *this;
  }
  Type & set__dimension(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->dimension = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PodTypeDescriptor
    std::shared_ptr<bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PodTypeDescriptor
    std::shared_ptr<bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PodTypeDescriptor_ & other) const
  {
    if (this->pod_type != other.pod_type) {
      return false;
    }
    if (this->dimension != other.dimension) {
      return false;
    }
    return true;
  }
  bool operator!=(const PodTypeDescriptor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PodTypeDescriptor_

// alias to use template instance with default allocator
using PodTypeDescriptor =
  bosdyn_msgs::msg::PodTypeDescriptor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POD_TYPE_DESCRIPTOR__STRUCT_HPP_
