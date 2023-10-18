// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MapStatsStat.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MAP_STATS_STAT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MAP_STATS_STAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MapStatsStat __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MapStatsStat __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapStatsStat_
{
  using Type = MapStatsStat_<ContainerAllocator>;

  explicit MapStatsStat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
      this->num_bytes = 0ll;
    }
  }

  explicit MapStatsStat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
      this->num_bytes = 0ll;
    }
  }

  // field types and members
  using _count_type =
    int32_t;
  _count_type count;
  using _num_bytes_type =
    int64_t;
  _num_bytes_type num_bytes;

  // setters for named parameter idiom
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__num_bytes(
    const int64_t & _arg)
  {
    this->num_bytes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MapStatsStat
    std::shared_ptr<bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MapStatsStat
    std::shared_ptr<bosdyn_msgs::msg::MapStatsStat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapStatsStat_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    if (this->num_bytes != other.num_bytes) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapStatsStat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapStatsStat_

// alias to use template instance with default allocator
using MapStatsStat =
  bosdyn_msgs::msg::MapStatsStat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MAP_STATS_STAT__STRUCT_HPP_
