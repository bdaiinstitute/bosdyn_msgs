// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RetrieveRawDataResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RETRIEVE_RAW_DATA_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RETRIEVE_RAW_DATA_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.hpp"
// Member 'logpoint'
#include "bosdyn_msgs/msg/detail/logpoint__struct.hpp"
// Member 'data'
#include "bosdyn_msgs/msg/detail/data_chunk__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RetrieveRawDataResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RetrieveRawDataResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RetrieveRawDataResponse_
{
  using Type = RetrieveRawDataResponse_<ContainerAllocator>;

  explicit RetrieveRawDataResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    logpoint(_init),
    data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->logpoint_is_set = false;
      this->data_is_set = false;
    }
  }

  explicit RetrieveRawDataResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    logpoint(_alloc, _init),
    data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->logpoint_is_set = false;
      this->data_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _logpoint_type =
    bosdyn_msgs::msg::Logpoint_<ContainerAllocator>;
  _logpoint_type logpoint;
  using _logpoint_is_set_type =
    bool;
  _logpoint_is_set_type logpoint_is_set;
  using _data_type =
    bosdyn_msgs::msg::DataChunk_<ContainerAllocator>;
  _data_type data;
  using _data_is_set_type =
    bool;
  _data_is_set_type data_is_set;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__logpoint(
    const bosdyn_msgs::msg::Logpoint_<ContainerAllocator> & _arg)
  {
    this->logpoint = _arg;
    return *this;
  }
  Type & set__logpoint_is_set(
    const bool & _arg)
  {
    this->logpoint_is_set = _arg;
    return *this;
  }
  Type & set__data(
    const bosdyn_msgs::msg::DataChunk_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__data_is_set(
    const bool & _arg)
  {
    this->data_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RetrieveRawDataResponse
    std::shared_ptr<bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RetrieveRawDataResponse
    std::shared_ptr<bosdyn_msgs::msg::RetrieveRawDataResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RetrieveRawDataResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->logpoint != other.logpoint) {
      return false;
    }
    if (this->logpoint_is_set != other.logpoint_is_set) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->data_is_set != other.data_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const RetrieveRawDataResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RetrieveRawDataResponse_

// alias to use template instance with default allocator
using RetrieveRawDataResponse =
  bosdyn_msgs::msg::RetrieveRawDataResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RETRIEVE_RAW_DATA_RESPONSE__STRUCT_HPP_
