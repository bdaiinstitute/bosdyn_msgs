// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SeriesBlockIndex.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'block_entries'
#include "bosdyn_msgs/msg/detail/series_block_index_block_entry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SeriesBlockIndex __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SeriesBlockIndex __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SeriesBlockIndex_
{
  using Type = SeriesBlockIndex_<ContainerAllocator>;

  explicit SeriesBlockIndex_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->series_index = 0ul;
      this->descriptor_file_offset = 0ull;
      this->total_bytes = 0ull;
    }
  }

  explicit SeriesBlockIndex_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->series_index = 0ul;
      this->descriptor_file_offset = 0ull;
      this->total_bytes = 0ull;
    }
  }

  // field types and members
  using _series_index_type =
    uint32_t;
  _series_index_type series_index;
  using _descriptor_file_offset_type =
    uint64_t;
  _descriptor_file_offset_type descriptor_file_offset;
  using _block_entries_type =
    std::vector<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator>>>;
  _block_entries_type block_entries;
  using _total_bytes_type =
    uint64_t;
  _total_bytes_type total_bytes;

  // setters for named parameter idiom
  Type & set__series_index(
    const uint32_t & _arg)
  {
    this->series_index = _arg;
    return *this;
  }
  Type & set__descriptor_file_offset(
    const uint64_t & _arg)
  {
    this->descriptor_file_offset = _arg;
    return *this;
  }
  Type & set__block_entries(
    const std::vector<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry_<ContainerAllocator>>> & _arg)
  {
    this->block_entries = _arg;
    return *this;
  }
  Type & set__total_bytes(
    const uint64_t & _arg)
  {
    this->total_bytes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SeriesBlockIndex
    std::shared_ptr<bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SeriesBlockIndex
    std::shared_ptr<bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SeriesBlockIndex_ & other) const
  {
    if (this->series_index != other.series_index) {
      return false;
    }
    if (this->descriptor_file_offset != other.descriptor_file_offset) {
      return false;
    }
    if (this->block_entries != other.block_entries) {
      return false;
    }
    if (this->total_bytes != other.total_bytes) {
      return false;
    }
    return true;
  }
  bool operator!=(const SeriesBlockIndex_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SeriesBlockIndex_

// alias to use template instance with default allocator
using SeriesBlockIndex =
  bosdyn_msgs::msg::SeriesBlockIndex_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_BLOCK_INDEX__STRUCT_HPP_
