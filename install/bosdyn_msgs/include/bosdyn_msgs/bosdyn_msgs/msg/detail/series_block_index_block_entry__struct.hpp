// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SeriesBlockIndexBlockEntry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX_BLOCK_ENTRY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX_BLOCK_ENTRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SeriesBlockIndexBlockEntry __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SeriesBlockIndexBlockEntry __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SeriesBlockIndexBlockEntry_
{
  using Type = SeriesBlockIndexBlockEntry_<ContainerAllocator>;

  explicit SeriesBlockIndexBlockEntry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_is_set = false;
      this->file_offset = 0ull;
    }
  }

  explicit SeriesBlockIndexBlockEntry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_is_set = false;
      this->file_offset = 0ull;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _timestamp_is_set_type =
    bool;
  _timestamp_is_set_type timestamp_is_set;
  using _file_offset_type =
    uint64_t;
  _file_offset_type file_offset;
  using _additional_indexes_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _additional_indexes_type additional_indexes;

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
  Type & set__file_offset(
    const uint64_t & _arg)
  {
    this->file_offset = _arg;
    return *this;
  }
  Type & set__additional_indexes(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->additional_indexes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SeriesBlockIndexBlockEntry
    std::shared_ptr<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SeriesBlockIndexBlockEntry
    std::shared_ptr<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SeriesBlockIndexBlockEntry_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_is_set != other.timestamp_is_set) {
      return false;
    }
    if (this->file_offset != other.file_offset) {
      return false;
    }
    if (this->additional_indexes != other.additional_indexes) {
      return false;
    }
    return true;
  }
  bool operator!=(const SeriesBlockIndexBlockEntry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SeriesBlockIndexBlockEntry_

// alias to use template instance with default allocator
using SeriesBlockIndexBlockEntry =
  bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX_BLOCK_ENTRY__STRUCT_HPP_
