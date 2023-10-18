// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FanPowerCommandFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_FEEDBACK_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_FEEDBACK_RESPONSE__STRUCT_HPP_

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
#include "bosdyn_msgs/msg/detail/fan_power_command_feedback_response_status__struct.hpp"
// Member 'desired_end_time'
// Member 'early_stop_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FanPowerCommandFeedbackResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FanPowerCommandFeedbackResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FanPowerCommandFeedbackResponse_
{
  using Type = FanPowerCommandFeedbackResponse_<ContainerAllocator>;

  explicit FanPowerCommandFeedbackResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    desired_end_time(_init),
    early_stop_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->desired_end_time_is_set = false;
      this->early_stop_time_is_set = false;
    }
  }

  explicit FanPowerCommandFeedbackResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    desired_end_time(_alloc, _init),
    early_stop_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->desired_end_time_is_set = false;
      this->early_stop_time_is_set = false;
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
    bosdyn_msgs::msg::FanPowerCommandFeedbackResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _desired_end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _desired_end_time_type desired_end_time;
  using _desired_end_time_is_set_type =
    bool;
  _desired_end_time_is_set_type desired_end_time_is_set;
  using _early_stop_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _early_stop_time_type early_stop_time;
  using _early_stop_time_is_set_type =
    bool;
  _early_stop_time_is_set_type early_stop_time_is_set;

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
    const bosdyn_msgs::msg::FanPowerCommandFeedbackResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__desired_end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->desired_end_time = _arg;
    return *this;
  }
  Type & set__desired_end_time_is_set(
    const bool & _arg)
  {
    this->desired_end_time_is_set = _arg;
    return *this;
  }
  Type & set__early_stop_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->early_stop_time = _arg;
    return *this;
  }
  Type & set__early_stop_time_is_set(
    const bool & _arg)
  {
    this->early_stop_time_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FanPowerCommandFeedbackResponse
    std::shared_ptr<bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FanPowerCommandFeedbackResponse
    std::shared_ptr<bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FanPowerCommandFeedbackResponse_ & other) const
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
    if (this->desired_end_time != other.desired_end_time) {
      return false;
    }
    if (this->desired_end_time_is_set != other.desired_end_time_is_set) {
      return false;
    }
    if (this->early_stop_time != other.early_stop_time) {
      return false;
    }
    if (this->early_stop_time_is_set != other.early_stop_time_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const FanPowerCommandFeedbackResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FanPowerCommandFeedbackResponse_

// alias to use template instance with default allocator
using FanPowerCommandFeedbackResponse =
  bosdyn_msgs::msg::FanPowerCommandFeedbackResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_FEEDBACK_RESPONSE__STRUCT_HPP_
