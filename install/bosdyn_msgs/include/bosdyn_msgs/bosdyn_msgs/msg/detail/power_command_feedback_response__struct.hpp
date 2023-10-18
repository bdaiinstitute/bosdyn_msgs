// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PowerCommandFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_FEEDBACK_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_FEEDBACK_RESPONSE__STRUCT_HPP_

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
#include "bosdyn_msgs/msg/detail/power_command_status__struct.hpp"
// Member 'blocking_faults'
#include "bosdyn_msgs/msg/detail/system_fault__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PowerCommandFeedbackResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PowerCommandFeedbackResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerCommandFeedbackResponse_
{
  using Type = PowerCommandFeedbackResponse_<ContainerAllocator>;

  explicit PowerCommandFeedbackResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
    }
  }

  explicit PowerCommandFeedbackResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
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
    bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator>;
  _status_type status;
  using _blocking_faults_type =
    std::vector<bosdyn_msgs::msg::SystemFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SystemFault_<ContainerAllocator>>>;
  _blocking_faults_type blocking_faults;

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
    const bosdyn_msgs::msg::PowerCommandStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__blocking_faults(
    const std::vector<bosdyn_msgs::msg::SystemFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SystemFault_<ContainerAllocator>>> & _arg)
  {
    this->blocking_faults = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PowerCommandFeedbackResponse
    std::shared_ptr<bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PowerCommandFeedbackResponse
    std::shared_ptr<bosdyn_msgs::msg::PowerCommandFeedbackResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerCommandFeedbackResponse_ & other) const
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
    if (this->blocking_faults != other.blocking_faults) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerCommandFeedbackResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerCommandFeedbackResponse_

// alias to use template instance with default allocator
using PowerCommandFeedbackResponse =
  bosdyn_msgs::msg::PowerCommandFeedbackResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_FEEDBACK_RESPONSE__STRUCT_HPP_
