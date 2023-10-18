// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DataQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY__STRUCT_HPP_

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
// Member 'blobs'
#include "bosdyn_msgs/msg/detail/blob_spec__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DataQuery __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DataQuery __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataQuery_
{
  using Type = DataQuery_<ContainerAllocator>;

  explicit DataQuery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_range_is_set = false;
      this->text_messages = false;
      this->events = false;
      this->comments = false;
    }
  }

  explicit DataQuery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_range_is_set = false;
      this->text_messages = false;
      this->events = false;
      this->comments = false;
    }
  }

  // field types and members
  using _time_range_type =
    bosdyn_msgs::msg::TimeRange_<ContainerAllocator>;
  _time_range_type time_range;
  using _time_range_is_set_type =
    bool;
  _time_range_is_set_type time_range_is_set;
  using _blobs_type =
    std::vector<bosdyn_msgs::msg::BlobSpec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::BlobSpec_<ContainerAllocator>>>;
  _blobs_type blobs;
  using _text_messages_type =
    bool;
  _text_messages_type text_messages;
  using _events_type =
    bool;
  _events_type events;
  using _comments_type =
    bool;
  _comments_type comments;

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
  Type & set__blobs(
    const std::vector<bosdyn_msgs::msg::BlobSpec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::BlobSpec_<ContainerAllocator>>> & _arg)
  {
    this->blobs = _arg;
    return *this;
  }
  Type & set__text_messages(
    const bool & _arg)
  {
    this->text_messages = _arg;
    return *this;
  }
  Type & set__events(
    const bool & _arg)
  {
    this->events = _arg;
    return *this;
  }
  Type & set__comments(
    const bool & _arg)
  {
    this->comments = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DataQuery_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DataQuery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataQuery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataQuery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataQuery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataQuery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataQuery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataQuery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataQuery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataQuery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DataQuery
    std::shared_ptr<bosdyn_msgs::msg::DataQuery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DataQuery
    std::shared_ptr<bosdyn_msgs::msg::DataQuery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataQuery_ & other) const
  {
    if (this->time_range != other.time_range) {
      return false;
    }
    if (this->time_range_is_set != other.time_range_is_set) {
      return false;
    }
    if (this->blobs != other.blobs) {
      return false;
    }
    if (this->text_messages != other.text_messages) {
      return false;
    }
    if (this->events != other.events) {
      return false;
    }
    if (this->comments != other.comments) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataQuery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataQuery_

// alias to use template instance with default allocator
using DataQuery =
  bosdyn_msgs::msg::DataQuery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY__STRUCT_HPP_
