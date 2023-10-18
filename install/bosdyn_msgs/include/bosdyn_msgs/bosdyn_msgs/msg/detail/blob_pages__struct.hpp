// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BlobPages.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_range'
#include "bosdyn_msgs/msg/detail/time_range__struct.hpp"
// Member 'pages'
#include "bosdyn_msgs/msg/detail/blob_page__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BlobPages __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BlobPages __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlobPages_
{
  using Type = BlobPages_<ContainerAllocator>;

  explicit BlobPages_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_range_is_set = false;
    }
  }

  explicit BlobPages_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_range_is_set = false;
    }
  }

  // field types and members
  using _time_range_type =
    bosdyn_msgs::msg::TimeRange_<ContainerAllocator>;
  _time_range_type time_range;
  using _time_range_is_set_type =
    bool;
  _time_range_is_set_type time_range_is_set;
  using _pages_type =
    std::vector<bosdyn_msgs::msg::BlobPage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::BlobPage_<ContainerAllocator>>>;
  _pages_type pages;

  // setters for named parameter idiom
  Type & set__time_range(
    const bosdyn_msgs::msg::TimeRange_<ContainerAllocator> & _arg)
  {
    this->time_range = _arg;
    return *this;
  }
  Type & set__time_range_is_set(
    const bool & _arg)
  {
    this->time_range_is_set = _arg;
    return *this;
  }
  Type & set__pages(
    const std::vector<bosdyn_msgs::msg::BlobPage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::BlobPage_<ContainerAllocator>>> & _arg)
  {
    this->pages = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BlobPages_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BlobPages_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BlobPages_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BlobPages_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BlobPages_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BlobPages_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BlobPages_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BlobPages_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BlobPages_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BlobPages_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BlobPages
    std::shared_ptr<bosdyn_msgs::msg::BlobPages_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BlobPages
    std::shared_ptr<bosdyn_msgs::msg::BlobPages_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlobPages_ & other) const
  {
    if (this->time_range != other.time_range) {
      return false;
    }
    if (this->time_range_is_set != other.time_range_is_set) {
      return false;
    }
    if (this->pages != other.pages) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlobPages_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlobPages_

// alias to use template instance with default allocator
using BlobPages =
  bosdyn_msgs::msg::BlobPages_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGES__STRUCT_HPP_
