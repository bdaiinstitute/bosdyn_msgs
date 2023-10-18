// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FootHeightCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOOT_HEIGHT_CHECK_RESULT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOOT_HEIGHT_CHECK_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/foot_height_check_result_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FootHeightCheckResult __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FootHeightCheckResult __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FootHeightCheckResult_
{
  using Type = FootHeightCheckResult_<ContainerAllocator>;

  explicit FootHeightCheckResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->foot_height_error_from_mean = 0.0f;
    }
  }

  explicit FootHeightCheckResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->foot_height_error_from_mean = 0.0f;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::FootHeightCheckResultStatus_<ContainerAllocator>;
  _status_type status;
  using _foot_height_error_from_mean_type =
    float;
  _foot_height_error_from_mean_type foot_height_error_from_mean;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::FootHeightCheckResultStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__foot_height_error_from_mean(
    const float & _arg)
  {
    this->foot_height_error_from_mean = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FootHeightCheckResult
    std::shared_ptr<bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FootHeightCheckResult
    std::shared_ptr<bosdyn_msgs::msg::FootHeightCheckResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FootHeightCheckResult_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->foot_height_error_from_mean != other.foot_height_error_from_mean) {
      return false;
    }
    return true;
  }
  bool operator!=(const FootHeightCheckResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FootHeightCheckResult_

// alias to use template instance with default allocator
using FootHeightCheckResult =
  bosdyn_msgs::msg::FootHeightCheckResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOOT_HEIGHT_CHECK_RESULT__STRUCT_HPP_
