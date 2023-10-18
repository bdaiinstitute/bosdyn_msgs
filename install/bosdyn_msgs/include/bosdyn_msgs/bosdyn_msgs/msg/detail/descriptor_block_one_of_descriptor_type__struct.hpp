// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DescriptorBlockOneOfDescriptorType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK_ONE_OF_DESCRIPTOR_TYPE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK_ONE_OF_DESCRIPTOR_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'file_descriptor'
#include "bosdyn_msgs/msg/detail/file_format_descriptor__struct.hpp"
// Member 'series_descriptor'
#include "bosdyn_msgs/msg/detail/series_descriptor__struct.hpp"
// Member 'series_block_index'
#include "bosdyn_msgs/msg/detail/series_block_index__struct.hpp"
// Member 'file_index'
#include "bosdyn_msgs/msg/detail/file_index__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DescriptorBlockOneOfDescriptorType_
{
  using Type = DescriptorBlockOneOfDescriptorType_<ContainerAllocator>;

  explicit DescriptorBlockOneOfDescriptorType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_descriptor(_init),
    series_descriptor(_init),
    series_block_index(_init),
    file_index(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->descriptor_type_choice = 0;
    }
  }

  explicit DescriptorBlockOneOfDescriptorType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_descriptor(_alloc, _init),
    series_descriptor(_alloc, _init),
    series_block_index(_alloc, _init),
    file_index(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->descriptor_type_choice = 0;
    }
  }

  // field types and members
  using _file_descriptor_type =
    bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator>;
  _file_descriptor_type file_descriptor;
  using _series_descriptor_type =
    bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator>;
  _series_descriptor_type series_descriptor;
  using _series_block_index_type =
    bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator>;
  _series_block_index_type series_block_index;
  using _file_index_type =
    bosdyn_msgs::msg::FileIndex_<ContainerAllocator>;
  _file_index_type file_index;
  using _descriptor_type_choice_type =
    int8_t;
  _descriptor_type_choice_type descriptor_type_choice;

  // setters for named parameter idiom
  Type & set__file_descriptor(
    const bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator> & _arg)
  {
    this->file_descriptor = _arg;
    return *this;
  }
  Type & set__series_descriptor(
    const bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator> & _arg)
  {
    this->series_descriptor = _arg;
    return *this;
  }
  Type & set__series_block_index(
    const bosdyn_msgs::msg::SeriesBlockIndex_<ContainerAllocator> & _arg)
  {
    this->series_block_index = _arg;
    return *this;
  }
  Type & set__file_index(
    const bosdyn_msgs::msg::FileIndex_<ContainerAllocator> & _arg)
  {
    this->file_index = _arg;
    return *this;
  }
  Type & set__descriptor_type_choice(
    const int8_t & _arg)
  {
    this->descriptor_type_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t DESCRIPTORTYPE_NOT_SET =
    0;
  static constexpr int8_t DESCRIPTORTYPE_FILE_DESCRIPTOR_SET =
    1;
  static constexpr int8_t DESCRIPTORTYPE_SERIES_DESCRIPTOR_SET =
    2;
  static constexpr int8_t DESCRIPTORTYPE_SERIES_BLOCK_INDEX_SET =
    3;
  static constexpr int8_t DESCRIPTORTYPE_FILE_INDEX_SET =
    4;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType
    std::shared_ptr<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType
    std::shared_ptr<bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DescriptorBlockOneOfDescriptorType_ & other) const
  {
    if (this->file_descriptor != other.file_descriptor) {
      return false;
    }
    if (this->series_descriptor != other.series_descriptor) {
      return false;
    }
    if (this->series_block_index != other.series_block_index) {
      return false;
    }
    if (this->file_index != other.file_index) {
      return false;
    }
    if (this->descriptor_type_choice != other.descriptor_type_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const DescriptorBlockOneOfDescriptorType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DescriptorBlockOneOfDescriptorType_

// alias to use template instance with default allocator
using DescriptorBlockOneOfDescriptorType =
  bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DescriptorBlockOneOfDescriptorType_<ContainerAllocator>::DESCRIPTORTYPE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DescriptorBlockOneOfDescriptorType_<ContainerAllocator>::DESCRIPTORTYPE_FILE_DESCRIPTOR_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DescriptorBlockOneOfDescriptorType_<ContainerAllocator>::DESCRIPTORTYPE_SERIES_DESCRIPTOR_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DescriptorBlockOneOfDescriptorType_<ContainerAllocator>::DESCRIPTORTYPE_SERIES_BLOCK_INDEX_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DescriptorBlockOneOfDescriptorType_<ContainerAllocator>::DESCRIPTORTYPE_FILE_INDEX_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK_ONE_OF_DESCRIPTOR_TYPE__STRUCT_HPP_
