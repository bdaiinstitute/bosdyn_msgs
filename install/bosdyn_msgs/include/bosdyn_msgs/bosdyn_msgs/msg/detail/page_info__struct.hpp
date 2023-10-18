// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PageInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__STRUCT_HPP_

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
// Member 'format'
#include "bosdyn_msgs/msg/detail/page_info_page_format__struct.hpp"
// Member 'compression'
#include "bosdyn_msgs/msg/detail/page_info_compression__struct.hpp"
// Member 'deleted_timestamp'
// Member 'download_started_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PageInfo __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PageInfo __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PageInfo_
{
  using Type = PageInfo_<ContainerAllocator>;

  explicit PageInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_init),
    format(_init),
    compression(_init),
    deleted_timestamp(_init),
    download_started_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->path = "";
      this->source = "";
      this->time_range_is_set = false;
      this->num_ticks = 0ll;
      this->total_bytes = 0ll;
      this->is_open = false;
      this->is_downloaded = false;
      this->deleted_timestamp_is_set = false;
      this->download_started_timestamp_is_set = false;
      this->request_preserve = false;
    }
  }

  explicit PageInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    path(_alloc),
    source(_alloc),
    time_range(_alloc, _init),
    format(_alloc, _init),
    compression(_alloc, _init),
    deleted_timestamp(_alloc, _init),
    download_started_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->path = "";
      this->source = "";
      this->time_range_is_set = false;
      this->num_ticks = 0ll;
      this->total_bytes = 0ll;
      this->is_open = false;
      this->is_downloaded = false;
      this->deleted_timestamp_is_set = false;
      this->download_started_timestamp_is_set = false;
      this->request_preserve = false;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _path_type path;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _time_range_type =
    bosdyn_msgs::msg::TimeRange_<ContainerAllocator>;
  _time_range_type time_range;
  using _time_range_is_set_type =
    bool;
  _time_range_is_set_type time_range_is_set;
  using _num_ticks_type =
    int64_t;
  _num_ticks_type num_ticks;
  using _total_bytes_type =
    int64_t;
  _total_bytes_type total_bytes;
  using _format_type =
    bosdyn_msgs::msg::PageInfoPageFormat_<ContainerAllocator>;
  _format_type format;
  using _compression_type =
    bosdyn_msgs::msg::PageInfoCompression_<ContainerAllocator>;
  _compression_type compression;
  using _is_open_type =
    bool;
  _is_open_type is_open;
  using _is_downloaded_type =
    bool;
  _is_downloaded_type is_downloaded;
  using _deleted_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _deleted_timestamp_type deleted_timestamp;
  using _deleted_timestamp_is_set_type =
    bool;
  _deleted_timestamp_is_set_type deleted_timestamp_is_set;
  using _download_started_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _download_started_timestamp_type download_started_timestamp;
  using _download_started_timestamp_is_set_type =
    bool;
  _download_started_timestamp_is_set_type download_started_timestamp_is_set;
  using _request_preserve_type =
    bool;
  _request_preserve_type request_preserve;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
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
  Type & set__num_ticks(
    const int64_t & _arg)
  {
    this->num_ticks = _arg;
    return *this;
  }
  Type & set__total_bytes(
    const int64_t & _arg)
  {
    this->total_bytes = _arg;
    return *this;
  }
  Type & set__format(
    const bosdyn_msgs::msg::PageInfoPageFormat_<ContainerAllocator> & _arg)
  {
    this->format = _arg;
    return *this;
  }
  Type & set__compression(
    const bosdyn_msgs::msg::PageInfoCompression_<ContainerAllocator> & _arg)
  {
    this->compression = _arg;
    return *this;
  }
  Type & set__is_open(
    const bool & _arg)
  {
    this->is_open = _arg;
    return *this;
  }
  Type & set__is_downloaded(
    const bool & _arg)
  {
    this->is_downloaded = _arg;
    return *this;
  }
  Type & set__deleted_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->deleted_timestamp = _arg;
    return *this;
  }
  Type & set__deleted_timestamp_is_set(
    const bool & _arg)
  {
    this->deleted_timestamp_is_set = _arg;
    return *this;
  }
  Type & set__download_started_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->download_started_timestamp = _arg;
    return *this;
  }
  Type & set__download_started_timestamp_is_set(
    const bool & _arg)
  {
    this->download_started_timestamp_is_set = _arg;
    return *this;
  }
  Type & set__request_preserve(
    const bool & _arg)
  {
    this->request_preserve = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PageInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PageInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PageInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PageInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PageInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PageInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PageInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PageInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PageInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PageInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PageInfo
    std::shared_ptr<bosdyn_msgs::msg::PageInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PageInfo
    std::shared_ptr<bosdyn_msgs::msg::PageInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PageInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->time_range != other.time_range) {
      return false;
    }
    if (this->time_range_is_set != other.time_range_is_set) {
      return false;
    }
    if (this->num_ticks != other.num_ticks) {
      return false;
    }
    if (this->total_bytes != other.total_bytes) {
      return false;
    }
    if (this->format != other.format) {
      return false;
    }
    if (this->compression != other.compression) {
      return false;
    }
    if (this->is_open != other.is_open) {
      return false;
    }
    if (this->is_downloaded != other.is_downloaded) {
      return false;
    }
    if (this->deleted_timestamp != other.deleted_timestamp) {
      return false;
    }
    if (this->deleted_timestamp_is_set != other.deleted_timestamp_is_set) {
      return false;
    }
    if (this->download_started_timestamp != other.download_started_timestamp) {
      return false;
    }
    if (this->download_started_timestamp_is_set != other.download_started_timestamp_is_set) {
      return false;
    }
    if (this->request_preserve != other.request_preserve) {
      return false;
    }
    return true;
  }
  bool operator!=(const PageInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PageInfo_

// alias to use template instance with default allocator
using PageInfo =
  bosdyn_msgs::msg::PageInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__STRUCT_HPP_
