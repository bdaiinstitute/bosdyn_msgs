// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DataBufferStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_BUFFER_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_BUFFER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'blob_specs'
#include "bosdyn_msgs/msg/detail/blob_spec__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DataBufferStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DataBufferStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataBufferStatus_
{
  using Type = DataBufferStatus_<ContainerAllocator>;

  explicit DataBufferStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_data_buffer_pages = 0ll;
      this->data_buffer_total_bytes = 0ll;
      this->num_comments = 0ll;
      this->num_events = 0ll;
    }
  }

  explicit DataBufferStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_data_buffer_pages = 0ll;
      this->data_buffer_total_bytes = 0ll;
      this->num_comments = 0ll;
      this->num_events = 0ll;
    }
  }

  // field types and members
  using _num_data_buffer_pages_type =
    int64_t;
  _num_data_buffer_pages_type num_data_buffer_pages;
  using _data_buffer_total_bytes_type =
    int64_t;
  _data_buffer_total_bytes_type data_buffer_total_bytes;
  using _num_comments_type =
    int64_t;
  _num_comments_type num_comments;
  using _num_events_type =
    int64_t;
  _num_events_type num_events;
  using _blob_specs_type =
    std::vector<bosdyn_msgs::msg::BlobSpec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::BlobSpec_<ContainerAllocator>>>;
  _blob_specs_type blob_specs;

  // setters for named parameter idiom
  Type & set__num_data_buffer_pages(
    const int64_t & _arg)
  {
    this->num_data_buffer_pages = _arg;
    return *this;
  }
  Type & set__data_buffer_total_bytes(
    const int64_t & _arg)
  {
    this->data_buffer_total_bytes = _arg;
    return *this;
  }
  Type & set__num_comments(
    const int64_t & _arg)
  {
    this->num_comments = _arg;
    return *this;
  }
  Type & set__num_events(
    const int64_t & _arg)
  {
    this->num_events = _arg;
    return *this;
  }
  Type & set__blob_specs(
    const std::vector<bosdyn_msgs::msg::BlobSpec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::BlobSpec_<ContainerAllocator>>> & _arg)
  {
    this->blob_specs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DataBufferStatus
    std::shared_ptr<bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DataBufferStatus
    std::shared_ptr<bosdyn_msgs::msg::DataBufferStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataBufferStatus_ & other) const
  {
    if (this->num_data_buffer_pages != other.num_data_buffer_pages) {
      return false;
    }
    if (this->data_buffer_total_bytes != other.data_buffer_total_bytes) {
      return false;
    }
    if (this->num_comments != other.num_comments) {
      return false;
    }
    if (this->num_events != other.num_events) {
      return false;
    }
    if (this->blob_specs != other.blob_specs) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataBufferStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataBufferStatus_

// alias to use template instance with default allocator
using DataBufferStatus =
  bosdyn_msgs::msg::DataBufferStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_BUFFER_STATUS__STRUCT_HPP_
