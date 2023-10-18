// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AcquirePluginDataResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_RESPONSE__STRUCT_HPP_

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
// Member 'status'
#include "bosdyn_msgs/msg/detail/acquire_plugin_data_response_status__struct.hpp"
// Member 'timeout_deadline'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'custom_param_error'
#include "bosdyn_msgs/msg/detail/custom_param_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AcquirePluginDataResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AcquirePluginDataResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcquirePluginDataResponse_
{
  using Type = AcquirePluginDataResponse_<ContainerAllocator>;

  explicit AcquirePluginDataResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    timeout_deadline(_init),
    custom_param_error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->request_id = 0ul;
      this->timeout_deadline_is_set = false;
      this->custom_param_error_is_set = false;
    }
  }

  explicit AcquirePluginDataResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    timeout_deadline(_alloc, _init),
    custom_param_error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->request_id = 0ul;
      this->timeout_deadline_is_set = false;
      this->custom_param_error_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _status_type =
    bosdyn_msgs::msg::AcquirePluginDataResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _request_id_type =
    uint32_t;
  _request_id_type request_id;
  using _timeout_deadline_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timeout_deadline_type timeout_deadline;
  using _timeout_deadline_is_set_type =
    bool;
  _timeout_deadline_is_set_type timeout_deadline_is_set;
  using _custom_param_error_type =
    bosdyn_msgs::msg::CustomParamError_<ContainerAllocator>;
  _custom_param_error_type custom_param_error;
  using _custom_param_error_is_set_type =
    bool;
  _custom_param_error_is_set_type custom_param_error_is_set;

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
  Type & set__status(
    const bosdyn_msgs::msg::AcquirePluginDataResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__request_id(
    const uint32_t & _arg)
  {
    this->request_id = _arg;
    return *this;
  }
  Type & set__timeout_deadline(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timeout_deadline = _arg;
    return *this;
  }
  Type & set__timeout_deadline_is_set(
    const bool & _arg)
  {
    this->timeout_deadline_is_set = _arg;
    return *this;
  }
  Type & set__custom_param_error(
    const bosdyn_msgs::msg::CustomParamError_<ContainerAllocator> & _arg)
  {
    this->custom_param_error = _arg;
    return *this;
  }
  Type & set__custom_param_error_is_set(
    const bool & _arg)
  {
    this->custom_param_error_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AcquirePluginDataResponse
    std::shared_ptr<bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AcquirePluginDataResponse
    std::shared_ptr<bosdyn_msgs::msg::AcquirePluginDataResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcquirePluginDataResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->timeout_deadline != other.timeout_deadline) {
      return false;
    }
    if (this->timeout_deadline_is_set != other.timeout_deadline_is_set) {
      return false;
    }
    if (this->custom_param_error != other.custom_param_error) {
      return false;
    }
    if (this->custom_param_error_is_set != other.custom_param_error_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcquirePluginDataResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcquirePluginDataResponse_

// alias to use template instance with default allocator
using AcquirePluginDataResponse =
  bosdyn_msgs::msg::AcquirePluginDataResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_RESPONSE__STRUCT_HPP_
