// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsOptimizerParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_OPTIMIZER_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_OPTIMIZER_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsOptimizerParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsOptimizerParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessAnchoringRequestParamsOptimizerParams_
{
  using Type = ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator>;

  explicit ProcessAnchoringRequestParamsOptimizerParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_iters = 0l;
      this->max_iters_is_set = false;
      this->max_time_seconds = 0.0;
      this->max_time_seconds_is_set = false;
    }
  }

  explicit ProcessAnchoringRequestParamsOptimizerParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_iters = 0l;
      this->max_iters_is_set = false;
      this->max_time_seconds = 0.0;
      this->max_time_seconds_is_set = false;
    }
  }

  // field types and members
  using _max_iters_type =
    int32_t;
  _max_iters_type max_iters;
  using _max_iters_is_set_type =
    bool;
  _max_iters_is_set_type max_iters_is_set;
  using _max_time_seconds_type =
    double;
  _max_time_seconds_type max_time_seconds;
  using _max_time_seconds_is_set_type =
    bool;
  _max_time_seconds_is_set_type max_time_seconds_is_set;

  // setters for named parameter idiom
  Type & set__max_iters(
    const int32_t & _arg)
  {
    this->max_iters = _arg;
    return *this;
  }
  Type & set__max_iters_is_set(
    const bool & _arg)
  {
    this->max_iters_is_set = _arg;
    return *this;
  }
  Type & set__max_time_seconds(
    const double & _arg)
  {
    this->max_time_seconds = _arg;
    return *this;
  }
  Type & set__max_time_seconds_is_set(
    const bool & _arg)
  {
    this->max_time_seconds_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsOptimizerParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsOptimizerParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessAnchoringRequestParamsOptimizerParams_ & other) const
  {
    if (this->max_iters != other.max_iters) {
      return false;
    }
    if (this->max_iters_is_set != other.max_iters_is_set) {
      return false;
    }
    if (this->max_time_seconds != other.max_time_seconds) {
      return false;
    }
    if (this->max_time_seconds_is_set != other.max_time_seconds_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessAnchoringRequestParamsOptimizerParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessAnchoringRequestParamsOptimizerParams_

// alias to use template instance with default allocator
using ProcessAnchoringRequestParamsOptimizerParams =
  bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_OPTIMIZER_PARAMS__STRUCT_HPP_
