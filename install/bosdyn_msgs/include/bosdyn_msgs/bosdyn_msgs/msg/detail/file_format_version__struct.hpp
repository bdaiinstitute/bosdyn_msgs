// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FileFormatVersion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_VERSION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_VERSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FileFormatVersion __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FileFormatVersion __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FileFormatVersion_
{
  using Type = FileFormatVersion_<ContainerAllocator>;

  explicit FileFormatVersion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->major_version = 0ul;
      this->minor_version = 0ul;
      this->patch_level = 0ul;
    }
  }

  explicit FileFormatVersion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->major_version = 0ul;
      this->minor_version = 0ul;
      this->patch_level = 0ul;
    }
  }

  // field types and members
  using _major_version_type =
    uint32_t;
  _major_version_type major_version;
  using _minor_version_type =
    uint32_t;
  _minor_version_type minor_version;
  using _patch_level_type =
    uint32_t;
  _patch_level_type patch_level;

  // setters for named parameter idiom
  Type & set__major_version(
    const uint32_t & _arg)
  {
    this->major_version = _arg;
    return *this;
  }
  Type & set__minor_version(
    const uint32_t & _arg)
  {
    this->minor_version = _arg;
    return *this;
  }
  Type & set__patch_level(
    const uint32_t & _arg)
  {
    this->patch_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FileFormatVersion
    std::shared_ptr<bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FileFormatVersion
    std::shared_ptr<bosdyn_msgs::msg::FileFormatVersion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileFormatVersion_ & other) const
  {
    if (this->major_version != other.major_version) {
      return false;
    }
    if (this->minor_version != other.minor_version) {
      return false;
    }
    if (this->patch_level != other.patch_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileFormatVersion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileFormatVersion_

// alias to use template instance with default allocator
using FileFormatVersion =
  bosdyn_msgs::msg::FileFormatVersion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FILE_FORMAT_VERSION__STRUCT_HPP_
