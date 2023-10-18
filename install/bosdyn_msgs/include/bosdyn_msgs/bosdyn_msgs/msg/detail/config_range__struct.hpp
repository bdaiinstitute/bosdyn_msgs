// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ConfigRange.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONFIG_RANGE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONFIG_RANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/dock_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ConfigRange __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ConfigRange __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConfigRange_
{
  using Type = ConfigRange_<ContainerAllocator>;

  explicit ConfigRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id_start = 0ul;
      this->id_end = 0ul;
    }
  }

  explicit ConfigRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id_start = 0ul;
      this->id_end = 0ul;
    }
  }

  // field types and members
  using _id_start_type =
    uint32_t;
  _id_start_type id_start;
  using _id_end_type =
    uint32_t;
  _id_end_type id_end;
  using _type_type =
    bosdyn_msgs::msg::DockType_<ContainerAllocator>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__id_start(
    const uint32_t & _arg)
  {
    this->id_start = _arg;
    return *this;
  }
  Type & set__id_end(
    const uint32_t & _arg)
  {
    this->id_end = _arg;
    return *this;
  }
  Type & set__type(
    const bosdyn_msgs::msg::DockType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ConfigRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ConfigRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConfigRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConfigRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConfigRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConfigRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConfigRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConfigRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConfigRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConfigRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ConfigRange
    std::shared_ptr<bosdyn_msgs::msg::ConfigRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ConfigRange
    std::shared_ptr<bosdyn_msgs::msg::ConfigRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigRange_ & other) const
  {
    if (this->id_start != other.id_start) {
      return false;
    }
    if (this->id_end != other.id_end) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigRange_

// alias to use template instance with default allocator
using ConfigRange =
  bosdyn_msgs::msg::ConfigRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONFIG_RANGE__STRUCT_HPP_
