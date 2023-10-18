// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FileFormatDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'version'
#include "bosdyn_msgs/msg/detail/file_format_version__struct.hpp"
// Member 'annotations'
#include "bosdyn_msgs/msg/detail/key_string_value_string__struct.hpp"
// Member 'checksum_type'
#include "bosdyn_msgs/msg/detail/file_format_descriptor_check_sum_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FileFormatDescriptor __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FileFormatDescriptor __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FileFormatDescriptor_
{
  using Type = FileFormatDescriptor_<ContainerAllocator>;

  explicit FileFormatDescriptor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : version(_init),
    checksum_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version_is_set = false;
      this->checksum_num_bytes = 0ul;
    }
  }

  explicit FileFormatDescriptor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : version(_alloc, _init),
    checksum_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version_is_set = false;
      this->checksum_num_bytes = 0ul;
    }
  }

  // field types and members
  using _version_type =
    bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator>;
  _version_type version;
  using _version_is_set_type =
    bool;
  _version_is_set_type version_is_set;
  using _annotations_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueString_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueString_<ContainerAllocator>>>;
  _annotations_type annotations;
  using _checksum_type_type =
    bosdyn_msgs::msg::FileFormatDescriptorCheckSumType_<ContainerAllocator>;
  _checksum_type_type checksum_type;
  using _checksum_num_bytes_type =
    uint32_t;
  _checksum_num_bytes_type checksum_num_bytes;

  // setters for named parameter idiom
  Type & set__version(
    const bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator> & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__version_is_set(
    const bool & _arg)
  {
    this->version_is_set = _arg;
    return *this;
  }
  Type & set__annotations(
    const std::vector<bosdyn_msgs::msg::KeyStringValueString_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueString_<ContainerAllocator>>> & _arg)
  {
    this->annotations = _arg;
    return *this;
  }
  Type & set__checksum_type(
    const bosdyn_msgs::msg::FileFormatDescriptorCheckSumType_<ContainerAllocator> & _arg)
  {
    this->checksum_type = _arg;
    return *this;
  }
  Type & set__checksum_num_bytes(
    const uint32_t & _arg)
  {
    this->checksum_num_bytes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FileFormatDescriptor
    std::shared_ptr<bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FileFormatDescriptor
    std::shared_ptr<bosdyn_msgs::msg::FileFormatDescriptor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileFormatDescriptor_ & other) const
  {
    if (this->version != other.version) {
      return false;
    }
    if (this->version_is_set != other.version_is_set) {
      return false;
    }
    if (this->annotations != other.annotations) {
      return false;
    }
    if (this->checksum_type != other.checksum_type) {
      return false;
    }
    if (this->checksum_num_bytes != other.checksum_num_bytes) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileFormatDescriptor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileFormatDescriptor_

// alias to use template instance with default allocator
using FileFormatDescriptor =
  bosdyn_msgs::msg::FileFormatDescriptor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_DESCRIPTOR__STRUCT_HPP_
