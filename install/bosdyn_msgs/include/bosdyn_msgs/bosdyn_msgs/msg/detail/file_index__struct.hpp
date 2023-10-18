// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FileIndex.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FILE_INDEX__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FILE_INDEX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'series_identifiers'
#include "bosdyn_msgs/msg/detail/series_identifier__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FileIndex __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FileIndex __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FileIndex_
{
  using Type = FileIndex_<ContainerAllocator>;

  explicit FileIndex_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FileIndex_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _series_identifiers_type =
    std::vector<bosdyn_msgs::msg::SeriesIdentifier_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SeriesIdentifier_<ContainerAllocator>>>;
  _series_identifiers_type series_identifiers;
  using _series_block_index_offsets_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _series_block_index_offsets_type series_block_index_offsets;
  using _series_identifier_hashes_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _series_identifier_hashes_type series_identifier_hashes;

  // setters for named parameter idiom
  Type & set__series_identifiers(
    const std::vector<bosdyn_msgs::msg::SeriesIdentifier_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SeriesIdentifier_<ContainerAllocator>>> & _arg)
  {
    this->series_identifiers = _arg;
    return *this;
  }
  Type & set__series_block_index_offsets(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->series_block_index_offsets = _arg;
    return *this;
  }
  Type & set__series_identifier_hashes(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->series_identifier_hashes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FileIndex_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FileIndex_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FileIndex_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FileIndex_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FileIndex_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FileIndex_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FileIndex_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FileIndex_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FileIndex_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FileIndex_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FileIndex
    std::shared_ptr<bosdyn_msgs::msg::FileIndex_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FileIndex
    std::shared_ptr<bosdyn_msgs::msg::FileIndex_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileIndex_ & other) const
  {
    if (this->series_identifiers != other.series_identifiers) {
      return false;
    }
    if (this->series_block_index_offsets != other.series_block_index_offsets) {
      return false;
    }
    if (this->series_identifier_hashes != other.series_identifier_hashes) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileIndex_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileIndex_

// alias to use template instance with default allocator
using FileIndex =
  bosdyn_msgs::msg::FileIndex_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FILE_INDEX__STRUCT_HPP_
