// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/HipRangeOfMotionResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__HIP_RANGE_OF_MOTION_RESULT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__HIP_RANGE_OF_MOTION_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'error'
#include "bosdyn_msgs/msg/detail/hip_range_of_motion_result_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__HipRangeOfMotionResult __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__HipRangeOfMotionResult __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HipRangeOfMotionResult_
{
  using Type = HipRangeOfMotionResult_<ContainerAllocator>;

  explicit HipRangeOfMotionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_init)
  {
    (void)_init;
  }

  explicit HipRangeOfMotionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _error_type =
    bosdyn_msgs::msg::HipRangeOfMotionResultError_<ContainerAllocator>;
  _error_type error;
  using _hx_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _hx_type hx;
  using _hy_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _hy_type hy;

  // setters for named parameter idiom
  Type & set__error(
    const bosdyn_msgs::msg::HipRangeOfMotionResultError_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__hx(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->hx = _arg;
    return *this;
  }
  Type & set__hy(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->hy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__HipRangeOfMotionResult
    std::shared_ptr<bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__HipRangeOfMotionResult
    std::shared_ptr<bosdyn_msgs::msg::HipRangeOfMotionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HipRangeOfMotionResult_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    if (this->hx != other.hx) {
      return false;
    }
    if (this->hy != other.hy) {
      return false;
    }
    return true;
  }
  bool operator!=(const HipRangeOfMotionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HipRangeOfMotionResult_

// alias to use template instance with default allocator
using HipRangeOfMotionResult =
  bosdyn_msgs::msg::HipRangeOfMotionResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__HIP_RANGE_OF_MOTION_RESULT__STRUCT_HPP_
