// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PayloadEstimationCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_ESTIMATION_COMMAND_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_ESTIMATION_COMMAND_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback_status__struct.hpp"
// Member 'error'
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback_error__struct.hpp"
// Member 'estimated_payload'
#include "bosdyn_msgs/msg/detail/payload__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PayloadEstimationCommandFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PayloadEstimationCommandFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PayloadEstimationCommandFeedback_
{
  using Type = PayloadEstimationCommandFeedback_<ContainerAllocator>;

  explicit PayloadEstimationCommandFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    error(_init),
    estimated_payload(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0f;
      this->estimated_payload_is_set = false;
    }
  }

  explicit PayloadEstimationCommandFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    error(_alloc, _init),
    estimated_payload(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0f;
      this->estimated_payload_is_set = false;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::PayloadEstimationCommandFeedbackStatus_<ContainerAllocator>;
  _status_type status;
  using _progress_type =
    float;
  _progress_type progress;
  using _error_type =
    bosdyn_msgs::msg::PayloadEstimationCommandFeedbackError_<ContainerAllocator>;
  _error_type error;
  using _estimated_payload_type =
    bosdyn_msgs::msg::Payload_<ContainerAllocator>;
  _estimated_payload_type estimated_payload;
  using _estimated_payload_is_set_type =
    bool;
  _estimated_payload_is_set_type estimated_payload_is_set;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::PayloadEstimationCommandFeedbackStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__progress(
    const float & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__error(
    const bosdyn_msgs::msg::PayloadEstimationCommandFeedbackError_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__estimated_payload(
    const bosdyn_msgs::msg::Payload_<ContainerAllocator> & _arg)
  {
    this->estimated_payload = _arg;
    return *this;
  }
  Type & set__estimated_payload_is_set(
    const bool & _arg)
  {
    this->estimated_payload_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PayloadEstimationCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PayloadEstimationCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PayloadEstimationCommandFeedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->estimated_payload != other.estimated_payload) {
      return false;
    }
    if (this->estimated_payload_is_set != other.estimated_payload_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PayloadEstimationCommandFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PayloadEstimationCommandFeedback_

// alias to use template instance with default allocator
using PayloadEstimationCommandFeedback =
  bosdyn_msgs::msg::PayloadEstimationCommandFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_ESTIMATION_COMMAND_FEEDBACK__STRUCT_HPP_
